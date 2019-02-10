
module SoupSyntax;
using namespace Soup::Syntax;

ThisExpression::ThisExpression()
{
}

bool ThisExpression::operator ==(const ThisExpression& rhs) const
{
    return true;
}

bool ThisExpression::operator !=(const ThisExpression& rhs) const
{
    return !(*this == rhs);
}

std::string ThisExpression::ToString() const
{
    return std::string("ThisExpression");
}

bool ThisExpression::Equals(const SyntaxNode& rhs) const
{
    return *this == static_cast<const ThisExpression&>(rhs);
}
