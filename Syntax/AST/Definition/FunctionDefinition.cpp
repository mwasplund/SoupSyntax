
module SoupSyntax;
using namespace Soup::Syntax;

FunctionDefinition::FunctionDefinition(
    std::shared_ptr<DeclarationSpecifierSequence>&& returnType,
    std::shared_ptr<NameExpression>&& identifier,
    std::shared_ptr<ParameterList>&& parameterList,
    std::shared_ptr<SyntaxNode>&& body) :
    m_returnType(std::move(returnType)),
    m_identifier(std::move(identifier)),
    m_parameterList(std::move(parameterList)),
    m_body(std::move(body))
{
}

const DeclarationSpecifierSequence& FunctionDefinition::GetReturnType() const
{
    return *m_returnType;
}

const NameExpression& FunctionDefinition::GetIdentifier() const
{
    return *m_identifier;
}

const ParameterList& FunctionDefinition::GetParameterList() const
{
    return *m_parameterList;
}

const SyntaxNode& FunctionDefinition::GetBody() const
{
    return *m_body;
}

bool FunctionDefinition::operator ==(const FunctionDefinition& rhs) const
{
    return 
        m_returnType == rhs.m_returnType &&
        m_identifier == rhs.m_identifier &&
        m_parameterList == rhs.m_parameterList &&
        m_body == rhs.m_body;
}

bool FunctionDefinition::operator !=(const FunctionDefinition& rhs) const
{
    return !(*this == rhs);
}

std::string FunctionDefinition::ToString() const
{
    return "FunctionDefinition";
}

bool FunctionDefinition::Equals(const SyntaxNode& rhs) const
{
    return *this == static_cast<const FunctionDefinition&>(rhs);
}
