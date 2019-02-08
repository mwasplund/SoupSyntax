module SoupSyntax;
using namespace Soup::Syntax;

bool SyntaxNode::operator==(const SyntaxNode &rhs) const
{
  return typeid(*this) == typeid(rhs) &&
         Equals(rhs);
}

bool SyntaxNode::operator!=(const SyntaxNode &rhs) const
{
  return !(*this == rhs);
}