#pragma once
#include "Expression.h"
#include "BinaryOperator.h"

namespace Soup::Syntax
{
    /// <summary>
    /// Binary Expression consisting of a left and right expression combined using a 
    /// binary operator
    /// </summary>
    export class BinaryExpression : public Expression
    {
    public:
        /// <summary>
        /// Initialize
        /// </summary>
        BinaryExpression(
            BinaryOperator binaryOperator,
            std::shared_ptr<Expression> left,
            std::shared_ptr<Expression> right);

        /// <summary>
        /// The operator
        /// </summary>
        BinaryOperator GetOperator() const;

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
        bool operator ==(const BinaryExpression& rhs) const;
        bool operator !=(const BinaryExpression& rhs) const;

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
        BinaryOperator m_operator;
        std::shared_ptr<Expression> m_left;
        std::shared_ptr<Expression> m_right;
    };
}
