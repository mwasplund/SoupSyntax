module SoupSyntax;
using namespace Soup::Syntax;

TextSpan::TextSpan() :
  m_start(0),
  m_length(0)
{
}

TextSpan::TextSpan(uint32_t start, uint32_t length) :
  m_start(start),
  m_length(length)
{
}

uint32_t TextSpan::GetStart() const
{
  return m_start;
}

uint32_t TextSpan::GetLength() const
{
  return m_length;
}