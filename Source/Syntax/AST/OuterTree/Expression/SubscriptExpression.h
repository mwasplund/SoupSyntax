#pragma once

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// Subscript Expression
	/// </summary>
	export class SubscriptExpression : public Expression
	{
		friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

	private:
		/// <summary>
		/// Initialize
		/// </summary>
		SubscriptExpression(
			std::shared_ptr<const InnerTree::SubscriptExpression> innerNode,
			const SyntaxNode* parentNode) :
			Expression(innerNode, parentNode),
			m_leftExpression(innerNode->GetLeftExpression().CreateOuter<Expression>(this)),
			m_openBracket(innerNode->GetOpenBracket().CreateOuter(this)),
			m_rightExpression(innerNode->GetRightExpression().CreateOuter<Expression>(this)),
			m_closeBracket(innerNode->GetCloseBracket().CreateOuter(this))
		{
		}

	public:
		/// <summary>
		/// The left expression
		/// </summary>
		const Expression& GetLeft() const
		{
			return *m_leftExpression;
		}

		/// <summary>
		/// The left bracket token
		/// </summary>
		const SyntaxToken& GetOpenBracket() const
		{
			return *m_openBracket;
		}

		/// <summary>
		/// The right expression
		/// </summary>
		const Expression& GetRight() const
		{
			return *m_rightExpression;
		}

		/// <summary>
		/// The right bracket token
		/// </summary>
		const SyntaxToken& GetCloseBracket() const
		{
			return *m_closeBracket;
		}

		/// <summary>
		/// Get the collection of children nodes and tokens
		/// </summary>
		virtual std::vector<SyntaxNodeChild> GetChildren() const override final
		{
			return std::vector<SyntaxNodeChild>(
			{
				SyntaxNodeChild(m_leftExpression),
				SyntaxNodeChild(m_openBracket),
				SyntaxNodeChild(m_rightExpression),
				SyntaxNodeChild(m_closeBracket),
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
		std::shared_ptr<const Expression> m_leftExpression;
		std::shared_ptr<const SyntaxToken> m_openBracket;
		std::shared_ptr<const Expression> m_rightExpression;
		std::shared_ptr<const SyntaxToken> m_closeBracket;
	};
}
