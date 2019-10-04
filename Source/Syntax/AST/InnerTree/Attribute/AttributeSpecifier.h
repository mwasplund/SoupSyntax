#pragma once
#include "Attribute.h"

namespace Soup::Syntax::InnerTree
{
	/// <summary>
	/// The attribute sepecifier
	/// </summary>
	export class AttributeSpecifier final : public SyntaxNode
	{
		friend class ::Soup::Syntax::SyntaxFactory;

	private:
		/// <summary>
		/// Initialize
		/// </summary>
		AttributeSpecifier(
			std::shared_ptr<const SyntaxToken> outerOpenBracketToken,
			std::shared_ptr<const SyntaxToken> innerOpenBracketToken,
			std::shared_ptr<const SyntaxSeparatorList<Attribute>> attributes,
			std::shared_ptr<const SyntaxToken> innerCloseBracketToken,
			std::shared_ptr<const SyntaxToken> outerCloseBracketToken) :
			SyntaxNode(SyntaxNodeType::AttributeSpecifier),
			m_outerOpenBracketToken(std::move(outerOpenBracketToken)),
			m_innerOpenBracketToken(std::move(innerOpenBracketToken)),
			m_attributes(std::move(attributes)),
			m_innerCloseBracketToken(std::move(innerCloseBracketToken)),
			m_outerCloseBracketToken(std::move(outerCloseBracketToken))
		{
		}

	public:
		/// <summary>
		/// Create an outer node with this node and the provided parent
		/// </summary>
		std::shared_ptr<const OuterTree::AttributeSpecifier> CreateOuter(
			const OuterTree::SyntaxNode* parentNode) const
		{
			return OuterTree::SyntaxWrapper::CreateOuter(
				GetSelf<AttributeSpecifier>(),
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
		/// Gets the outer open bracket token
		/// </summary>
		const SyntaxToken& GetOuterOpenBracketToken() const
		{
			return *m_outerOpenBracketToken;
		}

		/// <summary>
		/// Gets the inner open bracket token
		/// </summary>
		const SyntaxToken& GetInnerOpenBracketToken() const
		{
			return *m_innerOpenBracketToken;
		}

		/// <summary>
		/// Gets the list of attributes
		/// </summary>
		const SyntaxSeparatorList<Attribute>& GetAttributes() const
		{
			return *m_attributes;
		}

		/// <summary>
		/// Gets the inner close bracket token
		/// </summary>
		const SyntaxToken& GetInnerCloseBracketToken() const
		{
			return *m_innerCloseBracketToken;
		}

		/// <summary>
		/// Gets the outer close bracket token
		/// </summary>
		const SyntaxToken& GetOuterCloseBracketToken() const
		{
			return *m_outerCloseBracketToken;
		}

		/// <summary>
		/// Equality operator
		/// </summary>
		bool operator ==(const AttributeSpecifier& rhs) const
		{
			return *m_outerOpenBracketToken == *rhs.m_outerOpenBracketToken &&
				*m_innerOpenBracketToken == *rhs.m_innerOpenBracketToken &&
				*m_attributes == *rhs.m_attributes &&
				*m_innerCloseBracketToken == *rhs.m_innerCloseBracketToken &&
				*m_outerCloseBracketToken == *rhs.m_outerCloseBracketToken;
		}

		bool operator !=(const AttributeSpecifier& rhs) const
		{
			return !(*this == rhs);
		}

	protected:
		/// <summary>
		/// SyntaxNode Equals
		/// </summary>
		virtual bool Equals(const SyntaxNode& rhs) const final
		{
			return *this == static_cast<const AttributeSpecifier&>(rhs);
		}

	private:
		std::shared_ptr<const SyntaxToken> m_outerOpenBracketToken;
		std::shared_ptr<const SyntaxToken> m_innerOpenBracketToken;
		std::shared_ptr<const SyntaxSeparatorList<Attribute>> m_attributes;
		std::shared_ptr<const SyntaxToken> m_innerCloseBracketToken;
		std::shared_ptr<const SyntaxToken> m_outerCloseBracketToken;
	};
}
