#pragma once

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// Binary Expression consisting of a left and right expression combined using a 
    /// binary operator
    /// </summary>
    export class BinaryExpression : public Expression
    {
        friend class ::Soup::Syntax::SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        BinaryExpression(
            BinaryOperator binaryOperator,
            std::shared_ptr<const Expression> leftOperand,
            std::shared_ptr<const SyntaxToken> operatorToken,
            std::shared_ptr<const Expression> rightOperand) :
            Expression(SyntaxNodeType::BinaryExpression),
            m_operator(binaryOperator),
            m_leftOperand(std::move(leftOperand)),
            m_operatorToken(std::move(operatorToken)),
            m_rightOperand(std::move(rightOperand))
        {
        }

    public:
        /// <summary>
        /// Create an outer node with this node and the provided parent
        /// </summary>
        std::shared_ptr<const OuterTree::BinaryExpression> CreateOuter(
            const OuterTree::SyntaxNode* parentNode) const
        {
            return OuterTree::SyntaxWrapper::CreateOuter(
                GetSelf<BinaryExpression>(),
                parentNode);
        }

        /// <summary>
        /// Create an outer node with this node and the provided parent
        /// </summary>
        virtual std::shared_ptr<const OuterTree::SyntaxNode> CreateOuterAny(
            const OuterTree::SyntaxNode* parentNode) const override final
        {
            return std::static_pointer_cast<const OuterTree::SyntaxNode>(
                CreateOuter(parentNode));
        }

        /// <summary>
        /// The operator
        /// </summary>
        BinaryOperator GetOperator() const
        {
            return m_operator;
        }

        /// <summary>
        /// The left operand expression
        /// </summary>
        const Expression& GetLeftOperand() const
        {
            return *m_leftOperand;
        }

        /// <summary>
        /// The operator
        /// </summary>
        const SyntaxToken& GetOperatorToken() const
        {
            return *m_operatorToken;
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
        std::shared_ptr<const Expression> m_leftOperand;
        std::shared_ptr<const SyntaxToken> m_operatorToken;
        std::shared_ptr<const Expression> m_rightOperand;
    };
}
