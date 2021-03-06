﻿#pragma once

namespace Soup::Syntax::InnerTree
{
	/// <summary>
	/// The varaible declaration
	/// </summary>
	export class VariableDeclaration final : public Declaration
	{
		friend class ::Soup::Syntax::SyntaxFactory;

	private:
		/// <summary>
		/// Initialize
		/// </summary>
		VariableDeclaration(
			std::shared_ptr<const DeclarationSpecifierSequence>&& declarationSpecifierSequence,
			std::shared_ptr<const InitializerDeclaratorList>&& initializerDeclaratorList) :
			Declaration(SyntaxNodeType::SimpleDefinition),
			m_declarationSpecifierSequence(std::move(declarationSpecifierSequence)),
			m_initializerDeclaratorList(std::move(initializerDeclaratorList))
		{
		}

	public:
		/// <summary>
		/// Create an outer node with this node and the provided parent
		/// </summary>
		std::shared_ptr<const OuterTree::VariableDeclaration> CreateOuter(
			const OuterTree::SyntaxNode* parentNode) const
		{
			return OuterTree::SyntaxWrapper::CreateOuter(
				GetSelf<VariableDeclaration>(),
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
		/// Gets the specifiers
		/// </summary>
		const DeclarationSpecifierSequence& GetDeclarationSpecifierSequence() const
		{
			return *m_declarationSpecifierSequence;
		}

		/// <summary>
		/// Gets the optional initializer
		/// </summary>
		const InitializerDeclaratorList& GetInitializerDeclaratorList() const
		{
			return *m_initializerDeclaratorList;
		}

		/// <summary>
		/// Equality operator
		/// </summary>
		bool operator ==(const SimpleDefinition& rhs) const
		{
			return *m_declarationSpecifierSequence == *rhs.m_declarationSpecifierSequence &&
				*m_initializerDeclaratorList == *rhs.m_initializerDeclaratorList;
		}

		bool operator !=(const SimpleDefinition& rhs) const
		{
			return !(*this == rhs);
		}

	protected:
		/// <summary>
		/// SyntaxNode Equals
		/// </summary>
		virtual bool Equals(const SyntaxNode& rhs) const final
		{
			return *this == static_cast<const SimpleDefinition&>(rhs);
		}

	private:
		std::shared_ptr<const DeclarationSpecifierSequence> m_declarationSpecifierSequence;
		std::shared_ptr<const InitializerDeclaratorList> m_initializerDeclaratorList;
	};
}
