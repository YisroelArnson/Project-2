// CMSC 330 Advanced Programming Languages
// Project 2 Skeleton
// UMGC CITE
// Spring 2023
//Yisroel arnson
// 12/10/2023
//This class returns the average of two numbers passed in. This is used in the subExpression class when the symbol '/' is seen.

class Average : public SubExpression {
public:
    Average(Expression* left, Expression* right) : SubExpression(left, right) {
    }
    double evaluate() {
        double leftValue = left->evaluate();
        double rightValue = right->evaluate();

        return (leftValue + rightValue) / 2.0;
    }
};