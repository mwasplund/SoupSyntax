
module SoupSyntax;
using namespace Soup::Syntax;

bool ReturnStatement::operator ==(const ReturnStatement& rhs) const
{
    return true;
}

bool ReturnStatement::operator !=(const ReturnStatement& rhs) const
{
    return !(*this == rhs);
}

bool ReturnStatement::Equals(const Node& rhs) const
{
    throw std::runtime_error("NotImplemented");
}
