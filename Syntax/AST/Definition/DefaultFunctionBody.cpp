
module SoupSyntax;
using namespace Soup::Syntax;

bool DefaultFunctionBody::operator ==(const DefaultFunctionBody& rhs) const
{
    return true;
}

bool DefaultFunctionBody::operator !=(const DefaultFunctionBody& rhs) const
{
    return !(*this == rhs);
}

bool DefaultFunctionBody::Equals(const Node& rhs) const
{
    throw std::runtime_error("NotImplemented");
}
