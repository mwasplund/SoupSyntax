
module SoupSyntax;
using namespace Soup::Syntax;

const std::vector<Statement>& CompoundStatement::GetStatements() const
{
    return this->statements;
}

bool CompoundStatement::operator ==(const CompoundStatement& rhs) const
{
    return this->statements == rhs.statements;
}

bool CompoundStatement::operator !=(const CompoundStatement& rhs) const
{
    return !(*this == rhs);
}
