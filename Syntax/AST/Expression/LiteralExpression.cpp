
module SoupSyntax;
using namespace Soup::Syntax;

LiteralExpression::LiteralExpression(LiteralType type, std::string value) :
  m_type(type),
  m_value(std::move(value))
{
}

LiteralType LiteralExpression::GetType() const
{
    return m_type;
}

const std::string& LiteralExpression::GetValue() const
{
    return m_value;
}

bool LiteralExpression::operator ==(const LiteralExpression& rhs) const
{
    return m_type == rhs.m_type &&
      m_value == rhs.m_value;
}

bool LiteralExpression::operator !=(const LiteralExpression& rhs) const
{
    return !(*this == rhs);
}

std::string LiteralExpression::ToString() const
{
    return std::string("LiteralExpression<") + m_value + ">";
}

bool LiteralExpression::Equals(const SyntaxNode& rhs) const
{
    return *this == static_cast<const LiteralExpression&>(rhs);
}
