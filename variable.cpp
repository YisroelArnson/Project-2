// CMSC 330 Advanced Programming Languages
// Project 2 Skeleton
// UMGC CITE
// Spring 2023
//Yisroel arnson
// 12/10/2023
// This file contains the body of the function contained in The Variable class. The evaluate function 
// looks up te value of a variable in the symbol table and returns that value.

#include <string>
#include <vector>
using namespace std;

#include "expression.h"
#include "operand.h"
#include "variable.h"
#include "symboltable.h"

extern SymbolTable symbolTable;

double Variable::evaluate() {
    // Check if the variable name has an underscore after the first character
    for (size_t i = 1; i < name.length(); ++i) {
        if (!isalnum(name[i]) && name[i] != '_') {
            throw string("Invalid variable name: ") + name;
        }
    }

    return symbolTable.lookUp(name);
}