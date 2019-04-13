﻿#pragma once

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// This expression
    /// </summary>
    export class ThisExpression final : public Expression
    {
        friend class ::Soup::Syntax::SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        ThisExpression(std::shared_ptr<const SyntaxToken> token) :
            Expression(SyntaxNodeType::ThisExpression),
            m_token(std::move(token))
        {
        }

    public:
        /// <summary>
        /// Gets the token
        /// </summary>
        const SyntaxToken& GetToken() const
        {
            return *m_token;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const ThisExpression& rhs) const
        {
            return *m_token == *rhs.m_token;
        }

        bool operator !=(const ThisExpression& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const ThisExpression&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxToken> m_token;
    };
}
