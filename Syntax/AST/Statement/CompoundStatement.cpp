
module SoupSyntax;
using namespace Soup::Syntax;

bool CompoundStatement::operator ==(const CompoundStatement& rhs) const
{
    return m_statements == rhs.m_statements;
}

bool CompoundStatement::operator !=(const CompoundStatement& rhs) const
{
    return !(*this == rhs);
}

const std::vector<std::shared_ptr<Statement>>& CompoundStatement::GetStatements() const
{
    return m_statements;
}

std::vector<std::shared_ptr<Statement>>& CompoundStatement::GetStatements()
{
    return m_statements;
}

bool CompoundStatement::Equals(const Node& rhs) const
{
    throw std::runtime_error("NotImplemented");
}
