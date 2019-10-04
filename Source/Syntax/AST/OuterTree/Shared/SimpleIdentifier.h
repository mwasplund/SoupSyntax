#pragma once

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// A simple identifier referencing a single Identifier
	/// </summary>
	export class SimpleIdentifier final : public UnqualifiedIdentifier
	{
		friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

	private:
		/// <summary>
		/// Initialize
		/// </summary>
		SimpleIdentifier(
			std::shared_ptr<const InnerTree::SimpleIdentifier> innerNode,
			const SyntaxNode* parentNode) :
			UnqualifiedIdentifier(innerNode, parentNode),
			m_identifierToken(innerNode->GetIdentifierToken().CreateOuter(this))
		{
		}

	public:
		/// <summary>
		/// Gets the identifier token
		/// </summary>
		const SyntaxToken& GetIdentifierToken() const
		{
			return *m_identifierToken;
		}

		/// <summary>
		/// Get the collection of children nodes and tokens
		/// </summary>
		virtual std::vector<SyntaxNodeChild> GetChildren() const override final
		{
			return std::vector<SyntaxNodeChild>(
				{
					SyntaxNodeChild(m_identifierToken),
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
		std::shared_ptr<const SyntaxToken> m_identifierToken;
	};
}
