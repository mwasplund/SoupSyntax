﻿#pragma once

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// An empty declaration that consists of a single semicolon
    /// </summary>
    export class EmptyDeclaration final : public Declaration
    {
        friend class ::Soup::Syntax::SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        EmptyDeclaration(
            std::shared_ptr<const SyntaxToken> semicolonToken) :
            Declaration(SyntaxNodeType::EmptyDeclaration),
            m_semicolonToken(std::move(semicolonToken))
        {
        }

    public:
        /// <summary>
        /// Gets the SyntaxToken for the semicolon.
        /// </summary>
        const SyntaxToken& GetSemicolonToken() const
        {
            return *m_semicolonToken;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const EmptyDeclaration& rhs) const
        {
            return *m_semicolonToken == *rhs.m_semicolonToken;
        }

        bool operator !=(const EmptyDeclaration& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const EmptyDeclaration&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxToken> m_semicolonToken;
    };
}
