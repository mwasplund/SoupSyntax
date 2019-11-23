#pragma once

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// Attribute argument list
	/// Ex. "(1, 2)"
	/// </summary>
	export class AttributeArgumentClause : public SyntaxNode
	{
		friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

	// TODO: Friend broken in MSVC modules
	public: // private:
		/// <summary>
		/// Initialize
		/// </summary>
		AttributeArgumentClause(
			std::shared_ptr<const InnerTree::AttributeArgumentClause> innerNode,
			const SyntaxNode* parentNode) :
			SyntaxNode(innerNode, parentNode),
			m_openParenthesisToken(innerNode->GetOpenParenthesisToken().CreateOuter(this)),
			m_tokens(innerNode->GetTokens().CreateOuter<SyntaxToken>(this)),
			m_closeParenthesisToken(innerNode->GetCloseParenthesisToken().CreateOuter(this))
		{
		}

	public:
		/// <summary>
		/// The open parenthesis token
		/// </summary>
		const SyntaxToken& GetOpenParenthesisToken() const
		{
			return *m_openParenthesisToken;
		}

		/// <summary>
		/// Gets the list of tokens
		/// </summary>
		const SyntaxList<SyntaxToken>& GetTokens() const
		{
			return *m_tokens;
		}

		/// <summary>
		/// The close parenthesis token
		/// </summary>
		const SyntaxToken& GetCloseParenthesisToken() const
		{
			return *m_closeParenthesisToken;
		}

		/// <summary>
		/// Get the collection of children nodes and tokens
		/// </summary>
		virtual std::vector<SyntaxNodeChild> GetChildren() const override final
		{
			std::vector<SyntaxNodeChild> children;

			children.push_back(SyntaxNodeChild(m_openParenthesisToken));

			auto tokenChildren = m_tokens->GetChildren();
			children.insert(children.end(), tokenChildren.begin(), tokenChildren.end());

			children.push_back(SyntaxNodeChild(m_closeParenthesisToken));

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
		std::shared_ptr<const SyntaxToken> m_openParenthesisToken;
		std::shared_ptr<const SyntaxList<SyntaxToken>> m_tokens;
		std::shared_ptr<const SyntaxToken> m_closeParenthesisToken;
	};
}
