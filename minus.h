// CMSC 330 Advanced Programming Languages
// Project 2 Skeleton
// UMGC CITE
// Spring 2023
//Yisroel arnson
// 12/10/2023
//This class returns the subtraction of the two values passed in (left minus right).

class Minus: public SubExpression {
public:
    Minus(Expression* left, Expression* right): SubExpression(left, right) {
    }
    double evaluate() {
       return left->evaluate() - right->evaluate();
    }
};