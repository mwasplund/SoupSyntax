#pragma once
#include "Expression.h"
#include "BinaryOperator.h"

namespace Soup::Syntax
{
    /// <summary>
    /// Subscript Expression
    /// </summary>
    export class SubscriptExpression : public Expression
    {
    public:
        /// <summary>
        /// Initialize
        /// </summary>
        SubscriptExpression(
            std::shared_ptr<Expression> left,
            std::shared_ptr<Expression> right) :
            m_left(std::move(left)),
            m_right(std::move(right))
        {
        }

        /// <summary>
        /// The left expression
        /// </summary>
        const Expression& GetLeft() const
        {
            return *m_left;
        }

        /// <summary>
        /// The right expression
        /// </summary>
        const Expression& GetRight() const
        {
            return *m_right;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const SubscriptExpression& rhs) const
        {
            return *m_left == *rhs.m_left &&
                *m_right == *rhs.m_right;
        }

        bool operator !=(const SubscriptExpression& rhs) const
        {
            return !(*this == rhs);
        }

        /// <summary>
        /// Convert to string representation
        /// </summary>
        virtual std::string ToString() const override final
        {
            return std::string("SubscriptExpression");
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const SubscriptExpression&>(rhs);
        }

    private:
        std::shared_ptr<Expression> m_left;
        std::shared_ptr<Expression> m_right;
    };
}
