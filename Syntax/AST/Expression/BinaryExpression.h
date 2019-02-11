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
            std::shared_ptr<SyntaxToken> operatorToken,
            std::shared_ptr<Expression> leftOperand,
            std::shared_ptr<Expression> rightOperand) :
            m_operator(binaryOperator),
            m_operatorToken(std::move(operatorToken)),
            m_leftOperand(std::move(leftOperand)),
            m_rightOperand(std::move(rightOperand))
        {
        }

        /// <summary>
        /// The operator
        /// </summary>
        BinaryOperator GetOperator() const
        {
            return m_operator;
        }

        /// <summary>
        /// The operator
        /// </summary>
        const SyntaxToken& GetOperatorToken() const
        {
            return *m_operatorToken;
        }

        /// <summary>
        /// The left operand expression
        /// </summary>
        const Expression& GetLeftOperand() const
        {
            return *m_leftOperand;
        }

        /// <summary>
        /// The right operand expression
        /// </summary>
        const Expression& GetRightOperand() const
        {
            return *m_rightOperand;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const BinaryExpression& rhs) const
        {
            return m_operator == rhs.m_operator &&
                *m_operatorToken == *rhs.m_operatorToken &&
                *m_leftOperand == *rhs.m_leftOperand &&
                *m_rightOperand == *rhs.m_rightOperand;
        }

        bool operator !=(const BinaryExpression& rhs) const
        {
            return !(*this == rhs);
        }

        /// <summary>
        /// Convert to string representation
        /// </summary>
        virtual std::string ToString() const override final
        {
            return std::string("BinaryExpression<") + std::to_string((int)m_operator) + ">";
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const BinaryExpression&>(rhs);
        }

    private:
        BinaryOperator m_operator;
        std::shared_ptr<SyntaxToken> m_operatorToken;
        std::shared_ptr<Expression> m_leftOperand;
        std::shared_ptr<Expression> m_rightOperand;
    };
}
