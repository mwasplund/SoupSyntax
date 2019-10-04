#pragma once

namespace Soup::Syntax::InnerTree
{
	/// <summary>
	/// Module declaration
	/// </summary>
	export class ModuleDeclaration final : public Declaration
	{
		friend class ::Soup::Syntax::SyntaxFactory;

	private:
		/// <summary>
		/// Initialize
		/// </summary>
		ModuleDeclaration(
			std::shared_ptr<const SyntaxToken> exportToken,
			std::shared_ptr<const SyntaxToken> moduleToken,
			std::shared_ptr<const SyntaxSeparatorList<SyntaxToken>> nameIdentifierList,
			std::shared_ptr<const SyntaxToken> semicolonToken) :
			Declaration(SyntaxNodeType::ModuleDeclaration),
			m_exportToken(std::move(exportToken)),
			m_moduleToken(std::move(moduleToken)),
			m_nameIdentifierList(std::move(nameIdentifierList)),
			m_semicolonToken(std::move(semicolonToken))
		{
		}

	public:
		/// <summary>
		/// Create an outer node with this node and the provided parent
		/// </summary>
		std::shared_ptr<const OuterTree::ModuleDeclaration> CreateOuter(
			const OuterTree::SyntaxNode* parentNode) const
		{
			return OuterTree::SyntaxWrapper::CreateOuter(
				GetSelf<ModuleDeclaration>(),
				parentNode);
		}

		/// <summary>
		/// Create an outer node with this node and the provided parent
		/// </summary>
		virtual std::shared_ptr<const OuterTree::SyntaxNode> CreateOuterAny(
			const OuterTree::SyntaxNode* parentNode) const override final
		{
			return std::static_pointer_cast<const OuterTree::SyntaxNode>(
				CreateOuter(parentNode));
		}

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
		/// Equality operator
		/// </summary>
		bool operator ==(const ModuleDeclaration& rhs) const
		{
			return SyntaxUtils::AreOptionalValuesEqual(m_exportToken, rhs.m_exportToken) &&
				*m_moduleToken == *rhs.m_moduleToken &&
				*m_nameIdentifierList == *rhs.m_nameIdentifierList &&
				*m_semicolonToken == *rhs.m_semicolonToken;
		}

		bool operator !=(const ModuleDeclaration& rhs) const
		{
			return !(*this == rhs);
		}

	protected:
		/// <summary>
		/// SyntaxNode Equals
		/// </summary>
		virtual bool Equals(const SyntaxNode& rhs) const final
		{
			return *this == static_cast<const ModuleDeclaration&>(rhs);
		}

	private:
		std::shared_ptr<const SyntaxToken> m_exportToken;
		std::shared_ptr<const SyntaxToken> m_moduleToken;
		std::shared_ptr<const SyntaxSeparatorList<SyntaxToken>> m_nameIdentifierList;
		std::shared_ptr<const SyntaxToken> m_semicolonToken;
	};
}
