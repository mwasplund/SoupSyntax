#pragma once
#include "Expression.h"
#include "UnaryOperator.h"

namespace Soup::Syntax
{
    /// <summary>
    /// Unary Expression consisting of a single operand expression and
    /// unary operator
    /// </summary>
    export class UnaryExpression : public Expression
    {
    public:
        /// <summary>
        /// Initialize
        /// </summary>
        UnaryExpression(
            UnaryOperator unaryOperator,
            std::shared_ptr<SyntaxToken> operatorToken,
            std::shared_ptr<Expression> operand);

        /// <summary>
        /// The operator
        /// </summary>
        UnaryOperator GetOperator() const;

        /// <summary>
        /// The operator token
        /// </summary>
        const SyntaxToken& GetOperatorToken() const;

        /// <summary>
        /// The operand expression
        /// </summary>
        const Expression& GetOperand() const;

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const UnaryExpression& rhs) const;
        bool operator !=(const UnaryExpression& rhs) const;

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
        UnaryOperator m_operator;
        std::shared_ptr<SyntaxToken> m_operatorToken;
        std::shared_ptr<Expression> m_operand;
    };
}
