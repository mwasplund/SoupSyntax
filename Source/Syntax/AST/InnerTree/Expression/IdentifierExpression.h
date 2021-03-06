﻿#pragma once

namespace Soup::Syntax::InnerTree
{
	/// <summary>
	/// The identifier expression
	/// TODO: Should qualifier be required and just be empty list?
	/// </summary>
	export class IdentifierExpression final : public Expression
	{
		friend class ::Soup::Syntax::SyntaxFactory;

	private:
		/// <summary>
		/// Initialize
		/// </summary>
		IdentifierExpression(
			std::shared_ptr<const NestedNameSpecifier> qualifier,
			std::shared_ptr<const UnqualifiedIdentifier> unqualifiedIdentifier) :
			Expression(SyntaxNodeType::IdentifierExpression),
			m_qualifier(std::move(qualifier)),
			m_unqualifiedIdentifier(std::move(unqualifiedIdentifier))
		{
		}

	public:
		/// <summary>
		/// Create an outer node with this node and the provided parent
		/// </summary>
		std::shared_ptr<const OuterTree::IdentifierExpression> CreateOuter(
			const OuterTree::SyntaxNode* parentNode) const
		{
			return OuterTree::SyntaxWrapper::CreateOuter(
				GetSelf<IdentifierExpression>(),
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

	public:
		/// <summary>
		/// Gets a value indicating whether the identifier has a qualifier
		/// </summary>
		bool HasQualifier() const
		{
			return m_qualifier != nullptr;
		}

		/// <summary>
		/// Gets the nested name specifier qualifier
		/// </summary>
		const NestedNameSpecifier& GetQualifier() const
		{
			if (!HasQualifier())
				throw std::runtime_error("Has no qualifier.");
			return *m_qualifier;
		}

		/// <summary>
		/// Gets the unqualified identifier
		/// </summary>
		const UnqualifiedIdentifier& GetUnqualifiedIdentifier() const
		{
			return *m_unqualifiedIdentifier;
		}

		/// <summary>
		/// Equality operator
		/// </summary>
		bool operator ==(const IdentifierExpression& rhs) const
		{
			return SyntaxUtils::AreOptionalValuesEqual(m_qualifier, rhs.m_qualifier) &&
				*m_unqualifiedIdentifier == *rhs.m_unqualifiedIdentifier;
		}

		bool operator !=(const IdentifierExpression& rhs) const
		{
			return !(*this == rhs);
		}

	protected:
		/// <summary>
		/// SyntaxNode Equals
		/// </summary>
		virtual bool Equals(const SyntaxNode& rhs) const final
		{
			return *this == static_cast<const IdentifierExpression&>(rhs);
		}

	private:
		std::shared_ptr<const NestedNameSpecifier> m_qualifier;
		std::shared_ptr<const UnqualifiedIdentifier> m_unqualifiedIdentifier;
	};
}
