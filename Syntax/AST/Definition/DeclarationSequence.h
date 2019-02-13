#pragma once
#include "SyntaxNode.h"

namespace Soup::Syntax
{
    /// <summary>
    /// Declaration sequence
    /// </summary>
    export class DeclarationSequence final : public SyntaxNode
    {
    private:
        std::vector<std::shared_ptr<Declaration>> m_declarations;

    public:
        /// <summary>
        /// Initialize
        /// </summary>
        DeclarationSequence() :
            m_declarations()
        {
        }

        DeclarationSequence(std::vector<std::shared_ptr<Declaration>>&& declarations) :
            m_declarations(std::move(declarations))
        {
        }

        DeclarationSequence(DeclarationSequence&& other) :
            m_declarations(std::move(other.m_declarations))
        {
        }

        /// <summary>
        /// Assign
        /// </summary>
        DeclarationSequence& operator =(DeclarationSequence&& rhs)
        {
            m_declarations = std::move(rhs.m_declarations);
            return *this;
        }

        /// <summary>
        /// Disable copy
        /// </summary>
        DeclarationSequence(const DeclarationSequence&) = delete;
        DeclarationSequence& operator =(const DeclarationSequence& rhs) = delete;

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const DeclarationSequence& rhs) const
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

        bool operator !=(const DeclarationSequence& rhs) const
        {
            return !(*this == rhs);
        }

        /// <summary>
        /// Gets or sets the list of declarations
        /// </summary>
        const std::vector<std::shared_ptr<Declaration>>& GetDeclarations() const
        {
            return m_declarations;
        }

        std::vector<std::shared_ptr<Declaration>>& GetDeclarations()
        {
            return m_declarations;
        }

        /// <summary>
        /// Convert to string representation
        /// </summary>
        virtual std::string ToString() const override final
        {
            std::string result = "DeclarationSequence";
            for (auto declaration : m_declarations)
            {
                result += "\n" + declaration->ToString();
            }

            return result;
        }

    private:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const DeclarationSequence&>(rhs);
        }
    };
}
