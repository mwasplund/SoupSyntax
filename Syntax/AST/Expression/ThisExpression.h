﻿#pragma once
#include "Expression.h"
#include "LiteralType.h"

namespace Soup::Syntax
{
    /// <summary>
    /// This expression
    /// </summary>
    export class ThisExpression final : public Expression
    {
    public:
        /// <summary>
        /// Initialize
        /// </summary>
        ThisExpression(std::shared_ptr<SyntaxToken> token) :
            m_token(std::move(token))
        {
        }

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

        /// <summary>
        /// Convert to string representation
        /// </summary>
        virtual std::string ToString() const override final
        {
            return std::string("ThisExpression");
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
        std::shared_ptr<SyntaxToken> m_token;
    };
}
