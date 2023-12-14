// CMSC 330 Advanced Programming Languages
// Project 2 Skeleton
// UMGC CITE
// Spring 2023
//Yisroel arnson
// 12/10/2023
// This file contains the body of the functions contained in The SubExpression class, which includes
// the constructor that initializes the left and right subexpressions and the static function parse
// parses the subexpression. Addition and subtraction are the two operators that are implemented.

#include <iostream>
#include <sstream>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "operand.h"
#include "plus.h"
#include "minus.h"
#include "divide.h"
#include "multiply.h"
#include "modulus.h"
#include "exponent.h"
#include "minimum.h"
#include "maximum.h"
#include "average.h"


SubExpression::SubExpression(Expression* left, Expression* right)
{
    this->left = left;
    this->right = right;
    this->condition = nullptr;  // Initialize condition to nullptr

}


SubExpression::SubExpression(Expression* left, Expression* right, Expression* condition)
{
    this->left = left;
    this->right = right;
    this->condition = condition;
    this->condition = nullptr;  // Initialize condition to nullptr
    
}

SubExpression::SubExpression(Expression* left)
{
    this->left = left;
    this->right = nullptr;  // Initialize right to nullptr
    this->condition = nullptr;  // Initialize condition to nullptr
}

Expression* SubExpression::parse(stringstream& in) {
    Expression* left;
    Expression* right;
    Expression* condition;

    char operation, paren;

    left = Operand::parse(in);
    in >> operation;

    right = Operand::parse(in);
    in >> paren;


    switch (operation) {
    case '+':
        return new Plus(left, right);
    case '-':
        return new Minus(left, right);
    case '/':
        return new Divide(left, right);
    case '*':
        return new Multiply(left, right);
    case '^':
        return new Exponent(left, right);
    case '%':
        return new Modulus(left, right);
    case '<':
        return new Minimum(left, right);
    case '>':
        return new Maximum(left, right);
    case '&':
        return new Average(left, right);
    }
    return nullptr;
}

        