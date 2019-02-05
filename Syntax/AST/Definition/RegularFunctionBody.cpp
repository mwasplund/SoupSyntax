
module SoupSyntax;
using namespace Soup::Syntax;

RegularFunctionBody::RegularFunctionBody(std::shared_ptr<CompoundStatement> statements) :
    m_statements(statements)
{
}

const CompoundStatement& RegularFunctionBody::GetStatements() const
{
    return *m_statements;
}

bool RegularFunctionBody::operator ==(const RegularFunctionBody& rhs) const
{
    return *m_statements == *rhs.m_statements;
}

bool RegularFunctionBody::operator !=(const RegularFunctionBody& rhs) const
{
    return !(*this == rhs);
}

std::string RegularFunctionBody::ToString() const
{
    return "RegularFunctionBody";
}

bool RegularFunctionBody::Equals(const Node& rhs) const
{
    return *this == static_cast<const RegularFunctionBody&>(rhs);
}
