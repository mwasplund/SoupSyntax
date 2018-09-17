
module SoupSyntax;
using namespace Soup::Syntax;

const DeclarationSequence& TranslationUnit::GetDeclarations() const
{
    return this->declarations;
}

bool TranslationUnit::operator ==(const TranslationUnit& rhs) const
{
    return this->declarations == rhs.declarations;
}

bool TranslationUnit::operator !=(const TranslationUnit& rhs) const
{
    return !(*this == rhs);
}
