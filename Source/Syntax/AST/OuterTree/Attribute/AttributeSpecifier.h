#pragma once

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// The attribute sepecifier
	/// </summary>
	export class AttributeSpecifier final : public SyntaxNode
	{
		friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

	// TODO: Friend broken in MSVC modules
	public: // private:
		/// <summary>
		/// Initialize
		/// </summary>
		AttributeSpecifier(
			std::shared_ptr<const InnerTree::AttributeSpecifier> innerNode,
			const SyntaxNode* parentNode) :
			SyntaxNode(innerNode, parentNode),
			m_outerOpenBracketToken(innerNode->GetOuterOpenBracketToken().CreateOuter(this)),
			m_innerOpenBracketToken(innerNode->GetInnerOpenBracketToken().CreateOuter(this)),
			m_attributes(innerNode->GetAttributes().CreateOuter<Attribute>(this)),
			m_innerCloseBracketToken(innerNode->GetInnerCloseBracketToken().CreateOuter(this)),
			m_outerCloseBracketToken(innerNode->GetOuterCloseBracketToken().CreateOuter(this))
		{
		}

	public:
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
		/// Get the collection of children nodes and tokens
		/// </summary>
		virtual std::vector<SyntaxNodeChild> GetChildren() const override final
		{
			std::vector<SyntaxNodeChild> children;

			children.push_back(SyntaxNodeChild(m_outerOpenBracketToken));
			children.push_back(SyntaxNodeChild(m_innerOpenBracketToken));

			auto attributeChildren = m_attributes->GetChildren();
			children.insert(children.end(), attributeChildren.begin(), attributeChildren.end());

			children.push_back(SyntaxNodeChild(m_innerCloseBracketToken));
			children.push_back(SyntaxNodeChild(m_outerCloseBracketToken));

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
		std::shared_ptr<const SyntaxToken> m_outerOpenBracketToken;
		std::shared_ptr<const SyntaxToken> m_innerOpenBracketToken;
		std::shared_ptr<const SyntaxSeparatorList<Attribute>> m_attributes;
		std::shared_ptr<const SyntaxToken> m_innerCloseBracketToken;
		std::shared_ptr<const SyntaxToken> m_outerCloseBracketToken;
	};
}
