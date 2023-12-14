// CMSC 330 Advanced Programming Languages
// Project 2 Skeleton
// UMGC CITE
// Spring 2023
//Yisroel arnson
// 12/10/2023
//This class returns the variable left to the power of the variable right.

class Exponent : public SubExpression {
public:
    Exponent(Expression* left, Expression* right) : SubExpression(left, right) {
    }
    double evaluate() {
        return pow(left->evaluate(), right->evaluate());
    }
};