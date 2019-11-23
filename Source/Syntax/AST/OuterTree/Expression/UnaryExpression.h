#pragma once

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// Unary Expression consisting of a single operand expression and
	/// unary operator
	/// </summary>
	export class UnaryExpression : public Expression
	{
		friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

	// TODO: Friend broken in MSVC modules
	public: // private:
		/// <summary>
		/// Initialize
		/// </summary>
		UnaryExpression(
			std::shared_ptr<const InnerTree::UnaryExpression> innerNode,
			const SyntaxNode* parentNode) :
			Expression(innerNode, parentNode),
			m_operator(innerNode->GetOperator()),
			m_operatorToken(innerNode->GetOperatorToken().CreateOuter(this)),
			m_operand(innerNode->GetOperand().CreateOuter<Expression>(this))
		{
		}

	public:
		/// <summary>
		/// Gets a value indicating whether the operator is prefix or postfix
		/// </summary>
		bool IsPostfixOperator() const
		{
			switch (m_operator)
			{
				case UnaryOperator::PostIncrement:
				case UnaryOperator::PostDecrement:
					return true;
				case UnaryOperator::Plus:
				case UnaryOperator::Minus:
				case UnaryOperator::BitwiseNot:
				case UnaryOperator::PreIncrement:
				case UnaryOperator::PreDecrement:
				case UnaryOperator::LogicalNot:
				case UnaryOperator::Indirection:
				case UnaryOperator::AddressOf:
					return false;
				default:
					throw std::logic_error("Unknown operator.");
			}
		}

		/// <summary>
		/// The operator
		/// </summary>
		UnaryOperator GetOperator() const
		{
			return m_operator;
		}

		/// <summary>
		/// The operator token
		/// </summary>
		const SyntaxToken& GetOperatorToken() const
		{
			return *m_operatorToken;
		}

		/// <summary>
		/// The operand expression
		/// </summary>
		const Expression& GetOperand() const
		{
			return *m_operand;
		}

		/// <summary>
		/// Get the collection of children nodes and tokens
		/// </summary>
		virtual std::vector<SyntaxNodeChild> GetChildren() const override final
		{
			if (IsPostfixOperator())
			{
				return std::vector<SyntaxNodeChild>(
				{
					SyntaxNodeChild(m_operand),
					SyntaxNodeChild(m_operatorToken),
				});
			}
			else
			{
				return std::vector<SyntaxNodeChild>(
				{
					SyntaxNodeChild(m_operatorToken),
					SyntaxNodeChild(m_operand),
				});
			}
		}

		/// <summary>
		/// Visitor Accept
		/// </summary>
		virtual void Accept(ISyntaxVisitor& visitor) const override final
		{
			visitor.Visit(*this);
		}

	private:
		UnaryOperator m_operator;
		std::shared_ptr<const SyntaxToken> m_operatorToken;
		std::shared_ptr<const Expression> m_operand;
	};
}
