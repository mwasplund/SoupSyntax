#pragma once

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// Using directive
	/// </summary>
	export class UsingDirective final : public Declaration
	{
		friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

	// TODO: Friend broken in MSVC modules
	public: // private:
		/// <summary>
		/// Initialize
		/// </summary>
		UsingDirective(
			std::shared_ptr<const InnerTree::UsingDirective> innerNode,
			const SyntaxNode* parentNode) :
			Declaration(innerNode, parentNode),
			m_usingToken(innerNode->GetUsingToken().CreateOuter(this)),
			m_namespaceToken(innerNode->GetNamespaceToken().CreateOuter(this)),
			m_nameIdentifierList(innerNode->GetNameIdentifierList().CreateOuter<SyntaxToken>(this)),
			m_semicolonToken(innerNode->GetSemicolonToken().CreateOuter(this))
		{
		}

	public:
		/// <summary>
		/// Gets the optional SyntaxToken for the using keyword.
		/// </summary>
		const SyntaxToken& GetUsingToken() const
		{
			return *m_usingToken;
		}

		/// <summary>
		/// Gets the optional SyntaxToken for the namespace keyword.
		/// </summary>
		const SyntaxToken& GetNamespaceToken() const
		{
			return *m_namespaceToken;
		}

		/// <summary>
		/// Gets the list of colon separated name identifiers.
		/// </summary>
		const SyntaxSeparatorList<SyntaxToken>& GetNameIdentifierList() const
		{
			return *m_nameIdentifierList;
		}

		/// <summary>
		/// Gets the SyntaxToken for the semicolon.
		/// </summary>
		const SyntaxToken& GetSemicolonToken() const
		{
			return *m_semicolonToken;
		}

		/// <summary>
		/// Get the collection of children nodes and tokens
		/// </summary>
		virtual std::vector<SyntaxNodeChild> GetChildren() const override final
		{
			std::vector<SyntaxNodeChild> children;

			children.push_back(SyntaxNodeChild(m_usingToken));
			children.push_back(SyntaxNodeChild(m_namespaceToken));

			auto nameIdentifierChildren = m_nameIdentifierList->GetChildren();
			children.insert(children.end(), nameIdentifierChildren.begin(), nameIdentifierChildren.end());

			children.push_back(SyntaxNodeChild(m_semicolonToken));

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
		std::shared_ptr<const SyntaxToken> m_usingToken;
		std::shared_ptr<const SyntaxToken> m_namespaceToken;
		std::shared_ptr<const SyntaxSeparatorList<SyntaxToken>> m_nameIdentifierList;
		std::shared_ptr<const SyntaxToken> m_semicolonToken;
	};
}
