#pragma once

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// A simple template identifier referencing a single Identifier
	/// </summary>
	export class SimpleTemplateIdentifier final : public UnqualifiedIdentifier
	{
		friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

	// TODO: Friend broken in MSVC modules
	public: // private:
		/// <summary>
		/// Initialize
		/// </summary>
		SimpleTemplateIdentifier(
			std::shared_ptr<const InnerTree::SimpleTemplateIdentifier> innerNode,
			const SyntaxNode* parentNode) :
			UnqualifiedIdentifier(innerNode, parentNode),
			m_identifierToken(innerNode->GetIdentifierToken().CreateOuter(this)),
			m_lessThanToken(innerNode->GetLessThanToken().CreateOuter(this)),
			m_templateArgumentList(innerNode->GetTemplateArgumentList().CreateOuter<SyntaxNode>(this)),
			m_greaterThanToken(innerNode->GetGreaterThanToken().CreateOuter(this))
		{
		}

	public:
		/// <summary>
		/// Gets the identifier token
		/// </summary>
		const SyntaxToken& GetIdentifierToken() const
		{
			return *m_identifierToken;
		}

		/// <summary>
		/// Gets the less than token
		/// </summary>
		const SyntaxToken& GetLessThanToken() const
		{
			return *m_lessThanToken;
		}

		/// <summary>
		/// Gets the template argument list
		/// </summary>
		const SyntaxSeparatorList<SyntaxNode>& GetTemplateArgumentList() const
		{
			return *m_templateArgumentList;
		}

		/// <summary>
		/// Gets the greater than token
		/// </summary>
		const SyntaxToken& GetGreaterThanToken() const
		{
			return *m_greaterThanToken;
		}

		/// <summary>
		/// Get the collection of children nodes and tokens
		/// </summary>
		virtual std::vector<SyntaxNodeChild> GetChildren() const override final
		{
			std::vector<SyntaxNodeChild> children;

			children.push_back(SyntaxNodeChild(m_identifierToken));
			children.push_back(SyntaxNodeChild(m_lessThanToken));

			auto templateArgumentChildren = m_templateArgumentList->GetChildren();
			children.insert(children.end(), templateArgumentChildren.begin(), templateArgumentChildren.end());

			children.push_back(SyntaxNodeChild(m_greaterThanToken));

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
		std::shared_ptr<const SyntaxToken> m_identifierToken;
		std::shared_ptr<const SyntaxToken> m_lessThanToken;
		std::shared_ptr<const SyntaxSeparatorList<SyntaxNode>> m_templateArgumentList;
		std::shared_ptr<const SyntaxToken> m_greaterThanToken;
	};
}
