#pragma once
#include "SyntaxNode.h"

namespace Soup::Syntax
{
    /// <summary>
    /// Declaration sequence
    /// </summary>
    export class DeclarationSequence final : public SyntaxNode
    {
    public:
        /// <summary>
        /// Initialize
        /// </summary>
        DeclarationSequence() :
            m_declarations()
        {
        }

        DeclarationSequence(std::vector<std::shared_ptr<const Declaration>> declarations) :
            m_declarations(std::move(declarations))
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
                [](const std::shared_ptr<const Declaration>& lhs, const std::shared_ptr<const Declaration>& rhs)
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
        const std::vector<std::shared_ptr<const Declaration>>& GetDeclarations() const
        {
            return m_declarations;
        }

        /// <summary>
        /// Convert to string representation
        /// </summary>
        virtual std::wstring ToString() const override final
        {
            std::wstring result = L"DeclarationSequence";
            for (auto declaration : m_declarations)
            {
                result += L"\n" + declaration->ToString();
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
        
    private:
        std::vector<std::shared_ptr<const Declaration>> m_declarations;
    };
}
