module SoupSyntax;
using namespace Soup::Syntax;


SyntaxTrivia::SyntaxTrivia() :
  m_span()
{
}

TextSpan SyntaxTrivia::GetSpan() const
{
  return m_span;
}

std::string SyntaxTrivia::ToString() const
{
  return "SyntaxTrivia";
}