
module SoupSyntax;
using namespace Soup::Syntax;

IntegerLiteralExpression::IntegerLiteralExpression(int value)
{
    m_value = value;
}

int IntegerLiteralExpression::GetValue() const
{
    return m_value;
}

bool IntegerLiteralExpression::operator ==(const IntegerLiteralExpression& rhs) const
{
    return m_value == rhs.m_value;
}

bool IntegerLiteralExpression::operator !=(const IntegerLiteralExpression& rhs) const
{
    return !(*this == rhs);
}

std::string IntegerLiteralExpression::ToString() const
{
    return std::string("IntegerLiteralExpression<") + std::to_string(m_value) + ">";
}

bool IntegerLiteralExpression::Equals(const SyntaxNode& rhs) const
{
    return *this == static_cast<const IntegerLiteralExpression&>(rhs);
}
