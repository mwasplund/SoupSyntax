
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

std::string DefaultFunctionBody::ToString() const
{
    return "DefaultFunctionBody";
}

bool DefaultFunctionBody::Equals(const Node& rhs) const
{
    return *this == static_cast<const DefaultFunctionBody&>(rhs);
}
