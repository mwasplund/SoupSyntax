#pragma once
#include "SyntaxNode.h"

namespace Soup::Syntax
{
    /// <summary>
    /// The root translation unit node
    /// </summary>
    export class TranslationUnit : public SyntaxNode
    {
    private:
        std::shared_ptr<DeclarationSequence> m_declarations;

    public:
        TranslationUnit(std::shared_ptr<DeclarationSequence>&& declarations);

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const TranslationUnit& rhs) const;
        bool operator !=(const TranslationUnit& rhs) const;

        /// <summary>
        /// Gets or sets the option declaration sequence
        /// </summary>
        const DeclarationSequence& GetDeclarations() const;

        /// <summary>
        /// Convert to string representation
        /// </summary>
        virtual std::string ToString() const override final;

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final;
    };
}
