
module SoupSyntax;
using namespace Soup::Syntax;

const CompoundStatement& TryFunctionBody::GetStatements() const
{
    return this->statments;
}

bool TryFunctionBody::operator ==(const TryFunctionBody& rhs)
{
    return this->statments == rhs.statments;
}

bool TryFunctionBody::operator !=(const TryFunctionBody& rhs)
{
    return !(lhs == rhs);
}
