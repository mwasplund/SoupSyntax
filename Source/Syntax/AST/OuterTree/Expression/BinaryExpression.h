#pragma once

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// Binary Expression consisting of a left and right expression combined using a 
	/// binary operator
	/// </summary>
	export class BinaryExpression : public Expression
	{
		friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

	private:
		/// <summary>
		/// Initialize
		/// </summary>
		BinaryExpression(
			std::shared_ptr<const InnerTree::BinaryExpression> innerNode,
			const SyntaxNode* parentNode) :
			Expression(innerNode, parentNode),
			m_operator(innerNode->GetOperator()),
			m_leftOperand(innerNode->GetLeftOperand().CreateOuter<Expression>(this)),
			m_operatorToken(innerNode->GetOperatorToken().CreateOuter(this)),
			m_rightOperand(innerNode->GetRightOperand().CreateOuter<Expression>(this))
		{
		}

	public:
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
		/// Get the collection of children nodes and tokens
		/// </summary>
		virtual std::vector<SyntaxNodeChild> GetChildren() const override final
		{
			return std::vector<SyntaxNodeChild>(
			{
				SyntaxNodeChild(m_leftOperand),
				SyntaxNodeChild(m_operatorToken),
				SyntaxNodeChild(m_rightOperand),
			});
		}

		/// <summary>
		/// Visitor Accept
		/// </summary>
		virtual void Accept(ISyntaxVisitor& visitor) const override final
		{
			visitor.Visit(*this);
		}

	private:
		BinaryOperator m_operator;
		std::shared_ptr<const Expression> m_leftOperand;
		std::shared_ptr<const SyntaxToken> m_operatorToken;
		std::shared_ptr<const Expression> m_rightOperand;
	};
}
