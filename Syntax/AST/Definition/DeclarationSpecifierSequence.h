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
        DeclarationSpecifierSequence();
        DeclarationSpecifierSequence(std::vector<std::shared_ptr<SyntaxNode>>&& specifiers);

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const DeclarationSpecifierSequence& rhs) const;
        bool operator !=(const DeclarationSpecifierSequence& rhs) const;

        /// <summary>
        /// Gets or sets the list of declaration specifiers
        /// </summary>
        const std::vector<std::shared_ptr<SyntaxNode>>& GetSpecifiers() const;
        std::vector<std::shared_ptr<SyntaxNode>>& GetSpecifiers();

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
