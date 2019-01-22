
module SoupSyntax;
using namespace Soup::Syntax;

DeclarationSequence::DeclarationSequence() :
    m_declarations()
{
}

DeclarationSequence::DeclarationSequence(std::vector<std::shared_ptr<Declaration>>&& declarations) :
    m_declarations(std::move(declarations))
{
}

DeclarationSequence::DeclarationSequence(DeclarationSequence&& other) :
    m_declarations(std::move(other.m_declarations))
{
}

DeclarationSequence& DeclarationSequence::operator =(DeclarationSequence&& rhs)
{
    m_declarations = std::move(rhs.m_declarations);
    return *this;
}

bool DeclarationSequence::operator ==(const DeclarationSequence& rhs) const
{
    return m_declarations == rhs.m_declarations;
}

bool DeclarationSequence::operator !=(const DeclarationSequence& rhs) const
{
    return !(*this == rhs);
}

const std::vector<std::shared_ptr<Declaration>>& DeclarationSequence::GetDeclarations() const
{
    return m_declarations;
}

std::vector<std::shared_ptr<Declaration>>& DeclarationSequence::GetDeclarations()
{
    return m_declarations;
}

bool DeclarationSequence::Equals(const Node& rhs) const
{
    throw std::runtime_error("NotImplemented");
}
