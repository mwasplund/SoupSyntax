
module SoupSyntax;
using namespace Soup::Syntax;

const std::vector<Declaration>& DeclarationSequence::GetDeclarations() const
{
    return this->declarations;
}

DeclarationSequence::DeclarationSequence() :
    declarations()
{
}

DeclarationSequence::DeclarationSequence(std::vector<Declaration>&& declarations)
{
    this->declarations = std::move(declarations);
}

bool DeclarationSequence::operator ==(cont DeclarationSequence& rhs) const
{
    return this->declarations == rhs.declarations;
}

bool DeclarationSequence::operator !=(const DeclarationSequence& rhs) const
{
    return !(*this == rhs);
}
