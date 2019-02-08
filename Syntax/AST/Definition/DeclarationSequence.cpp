
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
    return std::equal(
        begin(m_declarations),
        end(m_declarations),
        begin(rhs.m_declarations),
        end(rhs.m_declarations),
        [](const std::shared_ptr<Declaration>& lhs, const std::shared_ptr<Declaration>& rhs)
        {
            return *lhs == *rhs;
        });
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

std::string DeclarationSequence::ToString() const
{
    std::string result = "DeclarationSequence";
    for (auto declaration : m_declarations)
    {
        result += "\n" + declaration->ToString();
    }

    return result;
}

bool DeclarationSequence::Equals(const SyntaxNode& rhs) const
{
    return *this == static_cast<const DeclarationSequence&>(rhs);
}
