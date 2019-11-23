#pragma once

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// Namespace definition
	/// </summary>
	export class NamespaceDefinition final : public Declaration
	{
		friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

	// TODO: Friend broken in MSVC modules
	public: // private:
		/// <summary>
		/// Initialize
		/// </summary>
		NamespaceDefinition(
			std::shared_ptr<const InnerTree::NamespaceDefinition> innerNode,
			const SyntaxNode* parentNode) :
			Declaration(innerNode, parentNode),
			m_namespaceToken(innerNode->GetNamespaceToken().CreateOuter(this)),
			m_nameIdentifierList(innerNode->GetNameIdentifierList().CreateOuter<SyntaxToken>(this)),
			m_openBraceToken(innerNode->GetOpenBraceToken().CreateOuter(this)),
			m_body(innerNode->GetBody().CreateOuter<Declaration>(this)),
			m_closeBraceToken(innerNode->GetCloseBraceToken().CreateOuter(this))
		{
		}

	public:
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
		/// Gets the SyntaxToken for the left brace.
		/// </summary>
		const SyntaxToken& GetOpenBraceToken() const
		{
			return *m_openBraceToken;
		}

		/// <summary>
		/// Gets the list of declarations that make up the body of the namespace
		/// </summary>
		const SyntaxList<Declaration>& GetBody() const
		{
			return *m_body;
		}

		/// <summary>
		/// Gets the SyntaxToken for the right brace.
		/// </summary>
		const SyntaxToken& GetCloseBraceToken() const
		{
			return *m_closeBraceToken;
		}

		/// <summary>
		/// Get the collection of children nodes and tokens
		/// </summary>
		virtual std::vector<SyntaxNodeChild> GetChildren() const override final
		{
			std::vector<SyntaxNodeChild> children;

			children.push_back(SyntaxNodeChild(m_namespaceToken));

			auto nameIdentifierChildren = m_nameIdentifierList->GetChildren();
			children.insert(children.end(), nameIdentifierChildren.begin(), nameIdentifierChildren.end());

			children.push_back(SyntaxNodeChild(m_openBraceToken));
	
			auto bodyChildren = m_body->GetChildren();
			children.insert(children.end(), bodyChildren.begin(), bodyChildren.end());

			children.push_back(SyntaxNodeChild(m_closeBraceToken));

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
		std::shared_ptr<const SyntaxToken> m_namespaceToken;
		std::shared_ptr<const SyntaxSeparatorList<SyntaxToken>> m_nameIdentifierList;
		std::shared_ptr<const SyntaxToken> m_openBraceToken;
		std::shared_ptr<const SyntaxList<Declaration>> m_body;
		std::shared_ptr<const SyntaxToken> m_closeBraceToken;
	};
}
