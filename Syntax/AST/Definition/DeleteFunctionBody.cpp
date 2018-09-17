
module SoupSyntax;
using namespace Soup::Syntax;

bool DeleteFunctionBody::operator ==(const DeleteFunctionBody? rhs)
{
    return true;
}

bool DeleteFunctionBody::operator !=(const DeleteFunctionBody& rhs)
{
    return !(lhs == rhs);
}
