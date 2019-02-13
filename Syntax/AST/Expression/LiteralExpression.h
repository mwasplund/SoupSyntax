#pragma once
#include "Expression.h"
#include "LiteralType.h"
#include "SyntaxToken.h"

namespace Soup::Syntax
{
    /// <summary>
    /// A literal expression
    /// </summary>
    export class LiteralExpression final : public Expression
    {
    public:
        /// <summary>
        /// Initialize
        /// </summary>
        LiteralExpression(LiteralType type, std::shared_ptr<SyntaxToken> token) :
            m_type(type),
            m_token(std::move(token))
        {
        }

        /// <summary>
        /// Gets the type
        /// </summary>
        LiteralType GetType() const
        {
            return m_type;
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
        bool operator ==(const LiteralExpression& rhs) const
        {
            return m_type == rhs.m_type &&
                *m_token == *rhs.m_token;
        }

        bool operator !=(const LiteralExpression& rhs) const
        {
            return !(*this == rhs);
        }

        /// <summary>
        /// Convert to string representation
        /// </summary>
        virtual std::string ToString() const override final
        {
            return "LiteralExpression<" + m_token->ToString() + ">";
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const LiteralExpression&>(rhs);
        }

    private:
        LiteralType m_type;
        std::shared_ptr<SyntaxToken> m_token;
    };
}
