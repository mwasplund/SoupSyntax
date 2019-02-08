
module SoupSyntax;
using namespace Soup::Syntax;

const Expression& ArithmeticExpression::GetLeft() const
{
    return *this->left;
}

const Expression& ArithmeticExpression::GetRight() const
{
    return *this->right;
}
