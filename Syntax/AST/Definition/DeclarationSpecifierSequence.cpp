
module SoupSyntax;
using namespace Soup::Syntax;

const std::vector<Node>& DeclarationSpecifierSequence::GetSpecifiers() const
{
    return this->specifiers;
}

DeclarationSpecifierSequence::DeclarationSpecifierSequence() :
    specifiers()
{
}

DeclarationSpecifierSequence::DeclarationSpecifierSequence(std::vector<Node>&& specifiers)
{
    this->specifiers = std::move(specifiers);
}

bool DeclarationSpecifierSequence::operator ==(const DeclarationSpecifierSequence& rhs) const
{
    return this->specifiers == rhs.specifiers;
}

bool DeclarationSpecifierSequence::operator !=(const DeclarationSpecifierSequence& rhs) const
{
    return !(*this == rhs);
}
