#pragma once
#include "SyntaxNode.h"

namespace Soup::Syntax
{
    /// <summary>
    /// Declaration specifier sequence
    /// </summary>
    export class DeclarationSpecifierSequence final : public SyntaxNode
    {
    private:
        std::vector<std::shared_ptr<SyntaxNode>> m_specifiers;

    public:
        /// <summary>
        /// Initialize
        /// </summary>
        DeclarationSpecifierSequence() :
            m_specifiers()
        {
        }

        DeclarationSpecifierSequence(
            std::vector<std::shared_ptr<SyntaxNode>>&& specifiers) :
            m_specifiers(std::move(specifiers))
        {
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const DeclarationSpecifierSequence& rhs) const
        {
            return std::equal(
                begin(m_specifiers),
                end(m_specifiers),
                begin(rhs.m_specifiers),
                end(rhs.m_specifiers),
                [](const std::shared_ptr<SyntaxNode>& lhs, const std::shared_ptr<SyntaxNode>& rhs)
                {
                    return *lhs == *rhs;
                });
        }

        bool operator !=(const DeclarationSpecifierSequence& rhs) const
        {
            return !(*this == rhs);
        }

        /// <summary>
        /// Gets or sets the list of declaration specifiers
        /// </summary>
        const std::vector<std::shared_ptr<SyntaxNode>>& GetSpecifiers() const
        {
            return m_specifiers;
        }

        std::vector<std::shared_ptr<SyntaxNode>>& GetSpecifiers()
        {
            return m_specifiers;
        }

        /// <summary>
        /// Convert to string representation
        /// </summary>
        virtual std::string ToString() const override final
        {
            std::string result = "DeclarationSpecifierSequence";
            for (auto specifier : m_specifiers)
            {
                result += "\n" + specifier->ToString();
            }

            return result;
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const DeclarationSpecifierSequence&>(rhs);
        }
    };
}
