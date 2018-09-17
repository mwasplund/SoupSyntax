
module SoupSyntax;
using namespace Soup::Syntax;

bool DeleteFunctionBody::operator ==(const DeleteFunctionBody& rhs) const
{
    return true;
}

bool DeleteFunctionBody::operator !=(const DeleteFunctionBody& rhs) const
{
    return !(*this == rhs);
}
