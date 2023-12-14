// CMSC 330 Advanced Programming Languages
// Project 2 Skeleton
// UMGC CITE
// Spring 2023
//Yisroel arnson
// 12/10/2023
//This class returns the modulos of the two values passed in. Left mod Right.

class Modulus : public SubExpression {
public:
    Modulus(Expression* left, Expression* right) : SubExpression(left, right) {
    }
    double evaluate() {
        int leftValue = static_cast<int>(left->evaluate());
        int rightValue = static_cast<int>(right->evaluate());
        
        return leftValue % rightValue;
    }
};