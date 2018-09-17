
module SoupSyntax;
using namespace Soup::Syntax;

const DeclarationSequence& TranslationUnit::GetDeclarations() const
{
    return this->declarations;
}

bool TranslationUnit::operator ==(const TranslationUnit& rhs) const
{
    if (object.ReferenceEquals(lhs, null))
        return object.ReferenceEquals(rhs, null);
    else
        return lhs.Equals(rhs);
}

bool TranslationUnit::operator !=(const TranslationUnit& rhs) const
{
    return !(*this == rhs);
}
