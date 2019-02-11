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

std::string SyntaxToken::ToString() const
{
    return "SyntaxToken";
}
