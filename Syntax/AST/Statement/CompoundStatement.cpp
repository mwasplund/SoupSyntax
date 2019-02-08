
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

std::string CompoundStatement::ToString() const
{
    return "CompoundStatement";
}

bool CompoundStatement::Equals(const SyntaxNode& rhs) const
{
    return *this == static_cast<const CompoundStatement&>(rhs);
}