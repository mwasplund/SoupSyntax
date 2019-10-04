#pragma once
#include "SyntaxNode.h"

namespace Soup::Syntax::InnerTree
{
	/// <summary>
	/// The attribute
	/// </summary>
	export class Attribute final : public SyntaxNode
	{
		friend class ::Soup::Syntax::SyntaxFactory;

	private:
		/// <summary>
		/// Initialize
		/// </summary>
		Attribute(
			std::shared_ptr<const SyntaxToken> identifierToken,
			std::shared_ptr<const AttributeArgumentClause> argumentClause) :
			SyntaxNode(SyntaxNodeType::Attribute),
			m_identifierToken(std::move(identifierToken)),
			m_argumentClause(std::move(argumentClause))
		{
		}

	public:
		/// <summary>
		/// Create an outer node with this node and the provided parent
		/// </summary>
		std::shared_ptr<const OuterTree::Attribute> CreateOuter(
			const OuterTree::SyntaxNode* parentNode) const
		{
			return OuterTree::SyntaxWrapper::CreateOuter(
				GetSelf<Attribute>(),
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
		/// Gets the identifier token
		/// </summary>
		const SyntaxToken& GetIdentifierToken() const
		{
			return *m_identifierToken;
		}

		/// <summary>
		/// Gets a value indicating whether there is an argument clause
		/// </summary>
		bool HasArgumentClause() const
		{
			return m_argumentClause != nullptr;
		}

		/// <summary>
		/// Gets the argument clause
		/// </summary>
		const AttributeArgumentClause& GetArgumentClause() const
		{
			return *m_argumentClause;
		}

		/// <summary>
		/// Equality operator
		/// </summary>
		bool operator ==(const Attribute& rhs) const
		{
			return *m_identifierToken == *rhs.m_identifierToken &&
				SyntaxUtils::AreOptionalValuesEqual(m_argumentClause, rhs.m_argumentClause);
		}

		bool operator !=(const Attribute& rhs) const
		{
			return !(*this == rhs);
		}

	protected:
		/// <summary>
		/// SyntaxNode Equals
		/// </summary>
		virtual bool Equals(const SyntaxNode& rhs) const final
		{
			return *this == static_cast<const Attribute&>(rhs);
		}

	private:
		std::shared_ptr<const SyntaxToken> m_identifierToken;
		std::shared_ptr<const AttributeArgumentClause> m_argumentClause;
	};
}
