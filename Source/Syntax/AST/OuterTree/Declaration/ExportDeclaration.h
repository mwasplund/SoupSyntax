#pragma once

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// Export declaration
	/// </summary>
	export class ExportDeclaration final : public Declaration
	{
		friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

	// TODO: Friend broken in MSVC modules
	public: // private:
		/// <summary>
		/// Initialize
		/// </summary>
		ExportDeclaration(
			std::shared_ptr<const InnerTree::ExportDeclaration> innerNode,
			const SyntaxNode* parentNode) :
			Declaration(innerNode, parentNode),
			m_exportToken(innerNode->GetExportToken().CreateOuter(this)),
			m_declaration(innerNode->GetDeclaration().CreateOuter<Declaration>(this))
		{
		}

	public:
		/// <summary>
		/// Gets the export token.
		/// </summary>
		const SyntaxToken& GetExportToken() const
		{
			return *m_exportToken;
		}

		/// <summary>
		/// Gets the declaration.
		/// </summary>
		const Declaration& GetDeclaration() const
		{
			return *m_declaration;
		}

		/// <summary>
		/// Get the collection of children nodes and tokens
		/// </summary>
		virtual std::vector<SyntaxNodeChild> GetChildren() const override final
		{
			std::vector<SyntaxNodeChild> children;

			children.push_back(SyntaxNodeChild(m_exportToken));
			children.push_back(SyntaxNodeChild(m_declaration));

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
		std::shared_ptr<const Declaration> m_declaration;
	};
}
