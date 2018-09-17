
module SoupSyntax;
using namespace Soup::Syntax;

bool DefaultFunctionBody::operator ==(const DefaultFunctionBody& rhs)
{
    return true;
}

bool DefaultFunctionBody::operator !=(const DefaultFunctionBody& rhs)
{
    return !(lhs == rhs);
}
