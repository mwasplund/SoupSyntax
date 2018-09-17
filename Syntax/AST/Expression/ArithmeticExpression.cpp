
module SoupSyntax;
using namespace Soup::Syntax;

const ExpressionNode& ArithmeticExpression::GetLeft() const
{
    return *this->left;
}

const ExpressionNode& ArithmeticExpression::GetRight() const
{
    return *this->right;
}
