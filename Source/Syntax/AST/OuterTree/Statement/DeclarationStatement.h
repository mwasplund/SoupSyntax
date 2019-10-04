#pragma once

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// Declaration statement node that allows for block declarations to 
	/// also be interpreted as statements
	/// TODO: Possibly introduce BlockDeclaration class to limit declarations allowed
	/// </summary>
	export class DeclarationStatement final : public Statement
	{
		friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

	private:
		/// <summary>
		/// Initialize
		/// </summary>
		DeclarationStatement(
			std::shared_ptr<const InnerTree::DeclarationStatement> innerNode,
			const SyntaxNode* parentNode) :
			Statement(innerNode, parentNode),
			m_declaration(innerNode->GetDeclaration().CreateOuter<Declaration>(this))
		{
		}

	public:
		/// <summary>
		/// Gets the declaration
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
			std::vector<SyntaxNodeChild> children(
			{
				SyntaxNodeChild(m_declaration),
			});

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
		std::shared_ptr<const Declaration> m_declaration;
	};
}
