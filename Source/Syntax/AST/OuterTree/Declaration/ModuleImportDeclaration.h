#pragma once

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// Module Import declaration
	/// </summary>
	export class ModuleImportDeclaration final : public Declaration
	{
		friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

	// TODO: Friend broken in MSVC modules
	public: // private:
		/// <summary>
		/// Initialize
		/// </summary>
		ModuleImportDeclaration(
			std::shared_ptr<const InnerTree::ModuleImportDeclaration> innerNode,
			const SyntaxNode* parentNode) :
			Declaration(innerNode, parentNode),
			m_importToken(innerNode->GetImportToken().CreateOuter(this)),
			m_nameIdentifierList(innerNode->GetNameIdentifierList().CreateOuter<SyntaxToken>(this)),
			m_semicolonToken(innerNode->GetSemicolonToken().CreateOuter(this))
		{
		}

	public:
		/// <summary>
		/// Gets the import token.
		/// </summary>
		const SyntaxToken& GetImportToken() const
		{
			return *m_importToken;
		}

		/// <summary>
		/// Gets the list of colon separated name identifiers.
		/// </summary>
		const SyntaxSeparatorList<SyntaxToken>& GetNameIdentifierList() const
		{
			return *m_nameIdentifierList;
		}
		/// <summary>
		/// Gets the semicolon token.
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

			children.push_back(SyntaxNodeChild(m_importToken));

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
		std::shared_ptr<const SyntaxToken> m_importToken;
		std::shared_ptr<const SyntaxSeparatorList<SyntaxToken>> m_nameIdentifierList;
		std::shared_ptr<const SyntaxToken> m_semicolonToken;
	};
}
