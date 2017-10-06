#include "symbol_table.h"

int* JackVariableTable::VarCount(JackVariableKind var_kind) {
    switch (var_kind) {
        case JackVariableKind::FIELD:
            return &field_count;
        case JackVariableKind::STATIC:
            return &static_count;
        case JackVariableKind::ARGUMENT:
            return &argument_count;
        case JackVariableKind::LOCAL:
            return &local_count;
        default:
            std::cerr
                << "JackVariableTable::VarCount : bad kind of Variable \n";
            return NULL;
    }
}

void JackVariableTable::Clear() {
    var_map.clear();
    field_count = 0;
    static_count = 0;
    argument_count = 0;
    local_count = 0;
}

bool JackVariableTable::Insert(std::string var_key, std::string var_type,
                               JackVariableKind var_kind) {
    if (var_map.find(var_key) == var_map.end()) {
        std::cerr << "Variable " << var_key << " already exists !\n";
        return false;
    } else {
        SymbolEntry var_new_tuple(var_type, var_kind, *VarCount(var_kind));
        var_map.insert(std::make_pair(var_key, var_new_tuple));
        ++*VarCount(var_kind);
        return true;
    }
}

bool JackVariableTable::Insert(std::string var_name, SymbolEntry var_tuple) {
    return Insert(var_name, std::get<0>(var_tuple), std::get<1>(var_tuple));
}

std::string JackVariableTable::GetVmOutput(std::string var_key) const {
    if (var_map.find(var_key) == var_map.end()) {
        std::cerr << "Variable " << var_key << " not found !\n";
        return "";
    } else {
        std::ostringstream output;
        SymbolEntry var_tuple = var_map.at(var_key);
        output << getTextForKind(std::get<1>(var_tuple));
        output << " " << std::get<2>(var_tuple);
        return output.str();
    }
}
