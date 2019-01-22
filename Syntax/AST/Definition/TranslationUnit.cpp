
module SoupSyntax;
using namespace Soup::Syntax;

TranslationUnit::TranslationUnit(std::shared_ptr<DeclarationSequence>&& declarations) :
    m_declarations(std::move(declarations))
{
}

bool TranslationUnit::operator ==(const TranslationUnit& rhs) const
{
    return m_declarations == rhs.m_declarations;
}

bool TranslationUnit::operator !=(const TranslationUnit& rhs) const
{
    return !(*this == rhs);
}

const DeclarationSequence& TranslationUnit::GetDeclarations() const
{
    return *m_declarations;
}

bool TranslationUnit::Equals(const Node& rhs) const
{
    throw std::runtime_error("NotImplemented");
}
