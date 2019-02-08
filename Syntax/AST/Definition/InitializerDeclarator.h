#pragma once
#include "SyntaxNode.h"

namespace Soup::Syntax
{
    /// <summary>
    /// The initializer declarator node
    /// </summary>
    export class InitializerDeclarator final : public SyntaxNode
    {
    private:
        std::shared_ptr<SyntaxNode> m_declarator;
        std::shared_ptr<SyntaxNode> m_initializer;

    public:
        InitializerDeclarator(
            std::shared_ptr<SyntaxNode>&& declarator,
            std::shared_ptr<SyntaxNode>&& initializer);

        /// <summary>
        /// Gets or sets the declarator
        /// </summary>
        const SyntaxNode& GetDeclarator() const;

        /// <summary>
        /// Gets or sets the optional initializer
        /// </summary>
        const SyntaxNode& GetInitializer() const;

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const InitializerDeclarator& rhs) const;
        bool operator !=(const InitializerDeclarator& rhs) const;

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
