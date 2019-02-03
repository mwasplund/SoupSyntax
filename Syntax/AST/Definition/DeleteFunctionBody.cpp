
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

std::string DeleteFunctionBody::ToString() const
{
    return "DeleteFunctionBody";
}

bool DeleteFunctionBody::Equals(const Node& rhs) const
{
    return *this == static_cast<const DeleteFunctionBody&>(rhs);
}
