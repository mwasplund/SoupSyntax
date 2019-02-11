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
            std::shared_ptr<Expression> right);

        /// <summary>
        /// The left expression
        /// </summary>
        const Expression& GetLeft() const;

        /// <summary>
        /// The right expression
        /// </summary>
        const Expression& GetRight() const;

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const SubscriptExpression& rhs) const;
        bool operator !=(const SubscriptExpression& rhs) const;

        /// <summary>
        /// Convert to string representation
        /// </summary>
        virtual std::string ToString() const override final;

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final;

    private:
        std::shared_ptr<Expression> m_left;
        std::shared_ptr<Expression> m_right;
    };
}
