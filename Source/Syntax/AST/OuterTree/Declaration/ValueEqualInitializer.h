#pragma once

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// The value equal initializer
	/// </summary>
	export class ValueEqualInitializer final : public SyntaxNode
	{
		friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

	// TODO: Friend broken in MSVC modules
	public: // private:
		ValueEqualInitializer(
			std::shared_ptr<const InnerTree::ValueEqualInitializer> innerNode,
			const SyntaxNode* parentNode) :
			SyntaxNode(innerNode, parentNode),
			m_equalToken(innerNode->GetEqualToken().CreateOuter(this)),
			m_expression(innerNode->GetExpression().CreateOuter<SyntaxNode>(this))
		{
		}

	public:
		/// <summary>
		/// Gets the equal token
		/// </summary>
		const SyntaxToken& GetEqualToken() const
		{
			return *m_equalToken;
		}

		/// <summary>
		/// Gets the expression
		/// </summary>
		const SyntaxNode& GetExpression() const
		{
			return *m_expression;
		}

		/// <summary>
		/// Get the collection of children nodes and tokens
		/// </summary>
		virtual std::vector<SyntaxNodeChild> GetChildren() const override final
		{
			std::vector<SyntaxNodeChild> children;

			children.push_back(SyntaxNodeChild(m_equalToken));
			children.push_back(SyntaxNodeChild(m_expression));

			return children;
		}

		/// <summary>
		/// Visitor Accept
		/// </summary>
		virtual void Accept(ISyntaxVisitor& visitor) const override final
		{
			visitor.Visit(*this);
		}

	private:
		std::shared_ptr<const SyntaxToken> m_equalToken;
		std::shared_ptr<const SyntaxNode> m_expression;
	};
}
