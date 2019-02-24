#pragma once
#include "SyntaxNode.h"

namespace Soup::Syntax
{
    /// <summary>
    /// The root translation unit node
    /// </summary>
    export class TranslationUnit : public SyntaxNode
    {
    public:
        TranslationUnit(std::shared_ptr<const DeclarationSequence>&& declarations) :
            m_declarations(std::move(declarations))
        {
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const TranslationUnit& rhs) const
        {
            return *m_declarations == *rhs.m_declarations;
        }

        bool operator !=(const TranslationUnit& rhs) const
        {
            return !(*this == rhs);
        }

        /// <summary>
        /// Gets or sets the option declaration sequence
        /// </summary>
        const DeclarationSequence& GetDeclarations() const
        {
            return *m_declarations;
        }

        /// <summary>
        /// Convert to string representation
        /// </summary>
        virtual std::string ToString() const override final
        {
            std::string result = "TranslationUnit";
            if (m_declarations != nullptr)
            {
                result += "\n" + m_declarations->ToString();
            }

            return result;
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const TranslationUnit&>(rhs);
        }

    private:
        std::shared_ptr<const DeclarationSequence> m_declarations;
    };
}
