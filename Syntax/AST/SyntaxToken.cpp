module SoupSyntax;
using namespace Soup::Syntax;


SyntaxToken::SyntaxToken(
    SyntaxTokenType type,
    std::string value) :
    m_type(type),
    m_value(std::move(value)),
    m_leadingTrivia(),
    m_trailingTrivia()
{
}

SyntaxTokenType SyntaxToken::GetType() const
{
    return m_type;
}

const std::string& SyntaxToken::GetValue() const
{
    return m_value;
}

const std::vector<SyntaxTrivia>& SyntaxToken::GetLeadingTrivia() const
{
    return m_leadingTrivia;
}

const std::vector<SyntaxTrivia>& SyntaxToken::GetTrailingTrivia() const
{
    return m_trailingTrivia;
}

bool SyntaxToken::operator==(const SyntaxToken &rhs) const
{
    return m_type == rhs.m_type &&
        m_value == rhs.m_value;
}

bool SyntaxToken::operator!=(const SyntaxToken &rhs) const
{
    return !(*this == rhs);
}

std::string SyntaxToken::ToString() const
{
    return "SyntaxToken<" + m_value + ">";
}
