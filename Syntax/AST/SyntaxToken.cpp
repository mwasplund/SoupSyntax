module SoupSyntax;
using namespace Soup::Syntax;


SyntaxToken::SyntaxToken() :
  m_leadingTrivia(),
  m_trailingTrivia()
{
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