
module SoupSyntax;
using namespace Soup::Syntax;

SimpleNameExpression::SimpleNameExpression(std::string identifier) :
    m_identifier(std::move(identifier))
{
}

const std::string& SimpleNameExpression::GetIdentifier() const
{
    return m_identifier;
}

bool SimpleNameExpression::operator ==(const SimpleNameExpression& rhs) const
{
    return m_identifier == rhs.m_identifier;
}

bool SimpleNameExpression::operator !=(const SimpleNameExpression& rhs) const
{
    return !(*this == rhs);
}

std::string SimpleNameExpression::ToString() const
{
    return "SimpleNameExpression<" + m_identifier + ">";
}

bool SimpleNameExpression::Equals(const SyntaxNode& rhs) const
{
    return *this == static_cast<const SimpleNameExpression&>(rhs);
}
