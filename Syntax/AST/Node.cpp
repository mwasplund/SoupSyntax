module SoupSyntax;
using namespace Soup::Syntax;

bool Node::operator ==(const Node& rhs) const
{
  return typeid(*this) == typeid(rhs) &&
    this->Equals(rhs);
}

bool Node::operator !=(const Node& rhs) const
{
  return !(*this == rhs);
}