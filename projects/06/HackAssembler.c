#include "HackAssembler.h"

// For the time being, we aim to translate a file stripped of whitespaces, and
// free of symbols. Handling files to get to this point will be done in another
// module

int main(int argc, char** argv) {
    // 1) Open the file or throw error
    char filename[50];
    if (argc > 2) {
        printf("Too many arguments supplied.\n");
        return 1;
    } else if (argc <= 1) {
        printf("One argument expected.\n");
        return 1;
    } else {
        strcpy(filename, argv[1]);
    }
    FILE* filestream = NULL;
    char line[256];
    uint32_t instructionCount = 0;
    // 1) Translate the line into an Instruction and print it
    filestream = fopen(filename, "r");
    while (fgets(line, 255, filestream) != NULL) {
        // Do stuff to parse the file
        // Strip line from white space
        char* nextWord;
        char strippedInstruction[20];
        strippedInstruction[0] = '\0';
        // See if line[0] is @
        nextWord = strtok(line, " ");
        while (nextWord != NULL) {
            if (strncmp(nextWord, "//", 2) == 0 ||
                strncmp(nextWord, "{", 1) == 0 ||
                strncmp(nextWord, "}", 1) == 0) {
                break;
            }
            strcat(strippedInstruction, nextWord);
            nextWord = strtok(NULL, " ");
        }
        // a) if it is, then Ainstruction
        if (strncmp(strippedInstruction, "@", 1) == 0) {
            Instruction Ainstruction;
            set_AInstruction(&Ainstruction,
                             strtol(strippedInstruction + 1, NULL, 10));
            Ainstruction.lineNumber = instructionCount;
            fprintf(stderr, "%d ", instructionCount);
            ++instructionCount;
            printInstruction(&Ainstruction);
        } else {  // b) else, parse for C instruction
            // TODO : make the string uppercase
            char* dest = strtok(strippedInstruction, "=");
            char* comp = strtok(NULL, ";");
            char* jump = strtok(NULL, "\n");
            Instruction Cinstruction;
            set_CInstruction(&Cinstruction, dest, comp, jump);
            Cinstruction.lineNumber = instructionCount;
            fprintf(stderr, "%d ", instructionCount);
            ++instructionCount;
            printInstruction(&Cinstruction);
        }
    }
    return 0;
}

// Not sure how it works yet, especially the while condition so left aside.
void getBin(int16_t num, char* str) {
    // Ensure that the string won't be read after the 16th bit
    *(str + 16) = '\0';
    // Create a mask that is a single 1, shifted to the left to
    // compensate the first while instruction
    long mask = 0x10 << 1;

    while (mask >>= 1) *str++ = !!(mask & num) + '0';
}

// Simpler to understand implementation :
// The value to convert is bitwise AND-ed to 1 to get and write the LSB
// then value is right-shifted so the new LSB of value is actually the next LSB
// of previous value
void tobinstr(int16_t value, int bitscount, char* output) {
    int i;
    output[bitscount] = '\0';
    for (i = bitscount - 1; i >= 0; --i, value >>= 1) {
        output[i] = !!(value & 1) + '0';
    }
}
void tobin(int16_t value, int bitscount, bool* output) {
    int i;
    for (i = bitscount - 1; i >= 0; --i, value >>= 1) {
        output[i] = !!(value & 1);
    }
}

void set_AInstruction(Instruction* instr, int16_t address) {
    instr->instruct[0] = 0;
    tobin(address, 15, instr->instruct + 1);
}

void set_CInstruction(Instruction* instr, char* dest, char* comp, char* jump) {
    instr->instruct[0] = 1;
    instr->instruct[1] = 1;
    instr->instruct[2] = 1;

    // Dest handling
    if (strchr(dest, 'A') != NULL) {
        instr->instruct[10] = 1;
    } else {
        instr->instruct[10] = 0;
    }
    if (strchr(dest, 'D') != NULL) {
        instr->instruct[11] = 1;
    } else {
        instr->instruct[11] = 0;
    }
    if (strchr(dest, 'M') != NULL) {
        instr->instruct[12] = 1;
    } else {
        instr->instruct[12] = 0;
    }

    // Comp handling
    if (strchr(comp, 'M') != NULL) {
        instr->instruct[3] = 1;
    } else {
        instr->instruct[3] = 0;
    }
    if (strcmp(comp, "0") == 0) {
        tobin(42, 6, instr->instruct + 4);
    } else if (strcmp(comp, "1") == 0) {
        tobin(63, 6, instr->instruct + 4);
    } else if (strcmp(comp, "-1") == 0) {
        tobin(58, 6, instr->instruct + 4);
    } else if (strcmp(comp, "D") == 0) {
        tobin(12, 6, instr->instruct + 4);
    } else if (strcmp(comp, "A") == 0 || strcmp(comp, "M") == 0) {
        tobin(48, 6, instr->instruct + 4);
    } else if (strcmp(comp, "!D") == 0) {
        tobin(13, 6, instr->instruct + 4);
    } else if (strcmp(comp, "!A") == 0 || strcmp(comp, "!M") == 0) {
        tobin(49, 6, instr->instruct + 4);
    } else if (strcmp(comp, "-D") == 0) {
        tobin(15, 6, instr->instruct + 4);
    } else if (strcmp(comp, "-A") == 0 || strcmp(comp, "-M") == 0) {
        tobin(51, 6, instr->instruct + 4);
    } else if (strcmp(comp, "D+1") == 0) {
        tobin(31, 6, instr->instruct + 4);
    } else if (strcmp(comp, "A+1") == 0 || strcmp(comp, "M+1") == 0) {
        tobin(57, 6, instr->instruct + 4);
    } else if (strcmp(comp, "D-1") == 0) {
        tobin(14, 6, instr->instruct + 4);
    } else if (strcmp(comp, "A-1") == 0 || strcmp(comp, "M-1") == 0) {
        tobin(50, 6, instr->instruct + 4);
    } else if (strcmp(comp, "D+A") == 0 || strcmp(comp, "D+M") == 0) {
        tobin(2, 6, instr->instruct + 4);
    } else if (strcmp(comp, "D-A") == 0 || strcmp(comp, "D-M") == 0) {
        tobin(19, 6, instr->instruct + 4);
    } else if (strcmp(comp, "A-D") == 0 || strcmp(comp, "M-D") == 0) {
        tobin(7, 6, instr->instruct + 4);
    } else if (strcmp(comp, "D&A") == 0 || strcmp(comp, "D&M") == 0) {
        tobin(0, 6, instr->instruct + 4);
    } else if (strcmp(comp, "D|A") == 0 || strcmp(comp, "D|M") == 0) {
        tobin(21, 6, instr->instruct + 4);
    }

    // Jump handling
    if (strcmp(jump, "JGT") == 0) {
        tobin(1, 3, instr->instruct + 13);
    } else if (strcmp(jump, "JEQ") == 0) {
        tobin(2, 3, instr->instruct + 13);
    } else if (strcmp(jump, "JGE") == 0) {
        tobin(3, 3, instr->instruct + 13);
    } else if (strcmp(jump, "JLT") == 0) {
        tobin(4, 3, instr->instruct + 13);
    } else if (strcmp(jump, "JNE") == 0) {
        tobin(5, 3, instr->instruct + 13);
    } else if (strcmp(jump, "JLE") == 0) {
        tobin(6, 3, instr->instruct + 13);
    } else if (strcmp(jump, "JMP") == 0) {
        tobin(7, 3, instr->instruct + 13);
    } else {
        tobin(0, 3, instr->instruct + 13);
    }
}

void printInstruction(Instruction* instr) {
    for (int i = 0; i <= 15; ++i) {
        printf("%d", instr->instruct[i]);
    }
    printf("\n");
}
