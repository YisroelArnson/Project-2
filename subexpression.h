// CMSC 330 Advanced Programming Languages
// Project 2 Skeleton
// UMGC CITE
// Spring 2023
//Yisroel arnson
// 12/10/2023
//This is the definition for the subexpression class.
class SubExpression : public Expression
{
public:
    SubExpression(Expression* left, Expression* right);
    SubExpression(Expression* left, Expression* right, Expression* condition);
    SubExpression(Expression* left);
    static Expression* parse(stringstream& in);
protected:
    Expression* left;
    Expression* right;
    Expression* condition;
};