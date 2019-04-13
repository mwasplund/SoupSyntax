﻿#pragma once

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// An expression statement that consists of a single root expression 
    /// followed by a semicolon
    /// </summary>
    export class ExpressionStatement final : public Statement
    {
        friend class ::Soup::Syntax::SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        ExpressionStatement(
            std::shared_ptr<const Expression> expression,
            std::shared_ptr<const SyntaxToken> semicolonToken) :
            Statement(SyntaxNodeType::ExpressionStatement),
            m_expression(std::move(expression)),
            m_semicolonToken(std::move(semicolonToken))
        {
        }

    public:
        /// <summary>
        /// Gets the expression.
        /// </summary>
        const Expression& GetExpression() const
        {
            return *m_expression;
        }

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
        bool operator ==(const ExpressionStatement& rhs) const
        {
            return *m_expression == *rhs.m_expression &&
                *m_semicolonToken == *rhs.m_semicolonToken;
        }

        bool operator !=(const ExpressionStatement& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const ExpressionStatement&>(rhs);
        }

    private:
        std::shared_ptr<const Expression> m_expression;
        std::shared_ptr<const SyntaxToken> m_semicolonToken;
    };
}
