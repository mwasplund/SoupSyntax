#pragma once

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// A statement that introduces, creates, and optionally initializes 
	/// one or more identifiers.
	/// </summary>
	export class SimpleDeclaration final : public Declaration
	{
		friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

	private:
		/// <summary>
		/// Initialize
		/// </summary>
		SimpleDeclaration(
			std::shared_ptr<const InnerTree::SimpleDeclaration> innerNode,
			const SyntaxNode* parentNode) :
			Declaration(innerNode, parentNode),
			m_declarationSpecifierSequence(innerNode->GetDeclarationSpecifierSequence().CreateOuter(this)),
			m_initializerDeclaratorList(innerNode->GetInitializerDeclaratorList().CreateOuter(this)),
			m_semicolonToken(innerNode->GetSemicolonToken().CreateOuter(this))
		{
		}

	public:
		/// <summary>
		/// Gets the DeclarationSpecifierSequence.
		/// </summary>
		const DeclarationSpecifierSequence& GetDeclarationSpecifierSequence() const
		{
			return *m_declarationSpecifierSequence;
		}

		/// <summary>
		/// Gets the InitializerDeclaratorList.
		/// </summary>
		const InitializerDeclaratorList& GetInitializerDeclaratorList() const
		{
			return *m_initializerDeclaratorList;
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
			std::vector<SyntaxNodeChild> children(
			{
				SyntaxNodeChild(m_declarationSpecifierSequence),
				SyntaxNodeChild(m_initializerDeclaratorList),
				SyntaxNodeChild(m_semicolonToken),
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
		std::shared_ptr<const DeclarationSpecifierSequence> m_declarationSpecifierSequence;
		std::shared_ptr<const InitializerDeclaratorList> m_initializerDeclaratorList;
		std::shared_ptr<const SyntaxToken> m_semicolonToken;
	};
}
