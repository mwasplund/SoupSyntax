
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
