// CMSC 330 Advanced Programming Languages
// Project 2 Skeleton
// UMGC CITE
// Spring 2023
//Yisroel arnson
// 12/10/2023
//This file returns the division of the two numbers passed in (left and right). 
class Divide : public SubExpression {
public:
    Divide(Expression* left, Expression* right) : SubExpression(left, right) {
    }
    double evaluate() {
        return left->evaluate() / right->evaluate();
    }
};