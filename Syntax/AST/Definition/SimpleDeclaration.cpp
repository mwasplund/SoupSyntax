
module SoupSyntax;
using namespace Soup::Syntax;

const DeclarationSpecifierSequence& SimpleDefinition::GetDeclarationSpecifierSequence() const
{
    return this->declarationSpecifierSequence;
}

const InitializerDeclaratorList& SimpleDefinition::GetInitializerDeclaratorList() const
{
    return this->initializerDeclaratorList;
}

bool SimpleDefinition::operator ==(const SimpleDefinition& rhs) const
{
    return this->declarationSpecifierSequence == rhs.declarationSpecifierSequence &&
        this->initializerDeclaratorList == rhs.initializerDeclaratorList;
}

bool SimpleDefinition::operator !=(const SimpleDefinition& rhs) const
{
    return !(*this == rhs);
}
