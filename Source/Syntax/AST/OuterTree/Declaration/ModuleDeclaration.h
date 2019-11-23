#pragma once

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// Module declaration
	/// </summary>
	export class ModuleDeclaration final : public Declaration
	{
		friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

	// TODO: Friend broken in MSVC modules
	public: // private:
		/// <summary>
		/// Initialize
		/// </summary>
		ModuleDeclaration(
			std::shared_ptr<const InnerTree::ModuleDeclaration> innerNode,
			const SyntaxNode* parentNode) :
			Declaration(innerNode, parentNode),
			m_exportToken(innerNode->HasExportToken() ? innerNode->GetExportToken().CreateOuter(this) : nullptr),
			m_moduleToken(innerNode->GetModuleToken().CreateOuter(this)),
			m_nameIdentifierList(innerNode->GetNameIdentifierList().CreateOuter<SyntaxToken>(this)),
			m_semicolonToken(innerNode->GetSemicolonToken().CreateOuter(this))
		{
		}

	public:
		/// <summary>
		/// Gets the optional export token.
		/// </summary>
		const SyntaxToken& GetExportToken() const
		{
			if (!HasExportToken())
				throw std::runtime_error("No ExportToken present.");
			return *m_exportToken;
		}

		/// <summary>
		/// Gets a value indicating whether there is an optional export token.
		/// </summary>
		bool HasExportToken() const
		{
			return m_exportToken != nullptr;
		}

		/// <summary>
		/// Gets the optional SyntaxToken for the module keyword.
		/// </summary>
		const SyntaxToken& GetModuleToken() const
		{
			return *m_moduleToken;
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

			if (HasExportToken())
			{
				children.push_back(SyntaxNodeChild(m_exportToken));
			}

			children.push_back(SyntaxNodeChild(m_moduleToken));

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
		std::shared_ptr<const SyntaxToken> m_exportToken;
		std::shared_ptr<const SyntaxToken> m_moduleToken;
		std::shared_ptr<const SyntaxSeparatorList<SyntaxToken>> m_nameIdentifierList;
		std::shared_ptr<const SyntaxToken> m_semicolonToken;
	};
}
