// CMSC 330 Advanced Programming Languages
// Project 2 Skeleton
// UMGC CITE
// Spring 2023
//Yisroel arnson
// 12/10/2023
//This class returns the product of left * right

class Multiply : public SubExpression {
public:
    Multiply(Expression* left, Expression* right) : SubExpression(left, right) {
    }
    double evaluate() {
        return left->evaluate() * right->evaluate();
    }
};