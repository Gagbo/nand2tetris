// gt
// Label issue with the goto
@SP
M=M-1
A=M
D=M
@SP
M=M-1
A=M
M=D-M
@GT_TRUE
D;JGT
D=-1
@END_GT
0;JMP
(GT_TRUE)
D=0
(END_GT)
@SP
A=M
M=D
@SP
M=M+1