﻿#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// An empty statement that consists of a single semicolon
    /// </summary>
    export class EmptyStatement final : public Statement
    {
        friend class SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        EmptyStatement(
            std::shared_ptr<const SyntaxToken> semicolonToken) :
            Statement(SyntaxNodeType::EmptyStatement),
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
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            std::vector<SyntaxNodeChild> children(
            {
                SyntaxNodeChild(m_semicolonToken),
            });

            return children;
        }

        /// <summary>
        /// Visitor Accept
        /// </summary>
        virtual void Accept(ISyntaxVisitor& visitor) const override final
        {
            visitor.Visit(*this);
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const EmptyStatement& rhs) const
        {
            return *m_semicolonToken == *rhs.m_semicolonToken;
        }

        bool operator !=(const EmptyStatement& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const EmptyStatement&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxToken> m_semicolonToken;
    };
}
