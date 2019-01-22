
module SoupSyntax;
using namespace Soup::Syntax;

DeclarationSpecifierSequence::DeclarationSpecifierSequence() :
    m_specifiers()
{
}

DeclarationSpecifierSequence::DeclarationSpecifierSequence(
    std::vector<std::shared_ptr<Node>>&& specifiers) :
    m_specifiers(std::move(specifiers))
{
}

bool DeclarationSpecifierSequence::operator ==(const DeclarationSpecifierSequence& rhs) const
{
    return m_specifiers == rhs.m_specifiers;
}

bool DeclarationSpecifierSequence::operator !=(const DeclarationSpecifierSequence& rhs) const
{
    return !(*this == rhs);
}

const std::vector<std::shared_ptr<Node>>& DeclarationSpecifierSequence::GetSpecifiers() const
{
    return m_specifiers;
}

std::vector<std::shared_ptr<Node>>& DeclarationSpecifierSequence::GetSpecifiers()
{
    return m_specifiers;
}

bool DeclarationSpecifierSequence::Equals(const Node& rhs) const
{
    throw std::runtime_error("NotImplemented");
}
