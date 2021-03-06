﻿#pragma once

namespace Soup::Syntax::InnerTree
{
	/// <summary>
	/// A statement that introduces, creates, and optionally initializes 
	/// one or more identifiers.
	/// </summary>
	export class SimpleDeclaration final : public Declaration
	{
		friend class ::Soup::Syntax::SyntaxFactory;

	private:
		/// <summary>
		/// Initialize
		/// </summary>
		SimpleDeclaration(
			std::shared_ptr<const DeclarationSpecifierSequence> declarationSpecifierSequence,
			std::shared_ptr<const InitializerDeclaratorList> initializerDeclaratorList,
			std::shared_ptr<const SyntaxToken> semicolonToken) :
			Declaration(SyntaxNodeType::SimpleDeclaration),
			m_declarationSpecifierSequence(std::move(declarationSpecifierSequence)),
			m_initializerDeclaratorList(std::move(initializerDeclaratorList)),
			m_semicolonToken(std::move(semicolonToken))
		{
		}

	public:
		/// <summary>
		/// Create an outer node with this node and the provided parent
		/// </summary>
		std::shared_ptr<const OuterTree::SimpleDeclaration> CreateOuter(
			const OuterTree::SyntaxNode* parentNode) const
		{
			return OuterTree::SyntaxWrapper::CreateOuter(
				GetSelf<SimpleDeclaration>(),
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
		/// Equality operator
		/// </summary>
		bool operator ==(const SimpleDeclaration& rhs) const
		{
			return *m_declarationSpecifierSequence == *rhs.m_declarationSpecifierSequence &&
				*m_initializerDeclaratorList == *rhs.m_initializerDeclaratorList &&
				*m_semicolonToken == *rhs.m_semicolonToken;
		}

		bool operator !=(const SimpleDeclaration& rhs) const
		{
			return !(*this == rhs);
		}

	protected:
		/// <summary>
		/// SyntaxNode Equals
		/// </summary>
		virtual bool Equals(const SyntaxNode& rhs) const final
		{
			return *this == static_cast<const SimpleDeclaration&>(rhs);
		}

	private:
		std::shared_ptr<const DeclarationSpecifierSequence> m_declarationSpecifierSequence;
		std::shared_ptr<const InitializerDeclaratorList> m_initializerDeclaratorList;
		std::shared_ptr<const SyntaxToken> m_semicolonToken;
	};
}
