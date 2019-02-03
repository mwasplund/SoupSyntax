
module SoupSyntax;
using namespace Soup::Syntax;

const CompoundStatement& TryFunctionBody::GetStatements() const
{
    return this->statements;
}

bool TryFunctionBody::operator ==(const TryFunctionBody& rhs) const
{
    return this->statements == rhs.statements;
}

bool TryFunctionBody::operator !=(const TryFunctionBody& rhs) const
{
    return !(*this == rhs);
}

std::string TryFunctionBody::ToString() const
{
    return "TryFunctionBody";
}
