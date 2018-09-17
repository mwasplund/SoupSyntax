
module SoupSyntax;
using namespace Soup::Syntax;

bool AdditionExpression::operator ==(const AdditionExpression& rhs) const
{
    return this->left == rhs.left &&
        this->right == rhs.right;
}

bool AdditionExpression::operator !=(const AdditionExpression& rhs) const
{
    return !(*this == rhs);
}
