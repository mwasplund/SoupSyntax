
module SoupSyntax;
using namespace Soup::Syntax;

SimpleDefinition::SimpleDefinition(
    std::shared_ptr<DeclarationSpecifierSequence>&& declarationSpecifierSequence,
    std::shared_ptr<InitializerDeclaratorList>&& initializerDeclaratorList) :
    m_declarationSpecifierSequence(std::move(declarationSpecifierSequence)),
    m_initializerDeclaratorList(std::move(initializerDeclaratorList))
{
}

const DeclarationSpecifierSequence& SimpleDefinition::GetDeclarationSpecifierSequence() const
{
    return *m_declarationSpecifierSequence;
}

const InitializerDeclaratorList& SimpleDefinition::GetInitializerDeclaratorList() const
{
    return *m_initializerDeclaratorList;
}

bool SimpleDefinition::operator ==(const SimpleDefinition& rhs) const
{
    return m_declarationSpecifierSequence == rhs.m_declarationSpecifierSequence &&
        m_initializerDeclaratorList == rhs.m_initializerDeclaratorList;
}

bool SimpleDefinition::operator !=(const SimpleDefinition& rhs) const
{
    return !(*this == rhs);
}

bool SimpleDefinition::Equals(const Node& rhs) const
{
    throw std::runtime_error("NotImplemented");
}
