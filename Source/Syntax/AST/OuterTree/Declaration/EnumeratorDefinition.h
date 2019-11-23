#pragma once

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// The Enumerator Definition
	/// </summary>
	export class EnumeratorDefinition final : public SyntaxNode
	{
		friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

	// TODO: Friend broken in MSVC modules
	public: // private:
		/// <summary>
		/// Initialize
		/// </summary>
		EnumeratorDefinition(
			std::shared_ptr<const InnerTree::EnumeratorDefinition> innerNode,
			const SyntaxNode* parentNode) :
			SyntaxNode(innerNode, parentNode),
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
