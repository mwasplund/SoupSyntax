
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
    return std::equal(
        begin(m_specifiers),
        end(m_specifiers),
        begin(rhs.m_specifiers),
        end(rhs.m_specifiers),
        [](const std::shared_ptr<Node>& lhs, const std::shared_ptr<Node>& rhs)
        {
            return *lhs == *rhs;
        });
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

std::string DeclarationSpecifierSequence::ToString() const
{
    std::string result = "DeclarationSpecifierSequence";
    for (auto specifier : m_specifiers)
    {
        result += "\n" + specifier->ToString();
    }

    return result;
}

bool DeclarationSpecifierSequence::Equals(const Node& rhs) const
{
    return *this == static_cast<const DeclarationSpecifierSequence&>(rhs);
}
