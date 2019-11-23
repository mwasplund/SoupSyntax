#pragma once

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// The root translation unit node
	/// </summary>
	export class TranslationUnit : public SyntaxNode
	{
		friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

	// TODO: Friend broken in MSVC modules
	public: // private:
		/// <summary>
		/// Initialize
		/// </summary>
		TranslationUnit(
			std::shared_ptr<const InnerTree::TranslationUnit> innerNode,
			const SyntaxNode* parentNode) :
			SyntaxNode(innerNode, parentNode),
			m_declarations(innerNode->GetDeclarations().CreateOuter<Declaration>(this)),
			m_endOfFileToken(innerNode->GetEndOfFileToken().CreateOuter(this))
		{
		}

	public:
		/// <summary>
		/// Gets the option declaration sequence
		/// </summary>
		const SyntaxList<Declaration>& GetDeclarations() const
		{
			return *m_declarations;
		}

		/// <summary>
		/// Gets the option declaration sequence
		/// </summary>
		const SyntaxToken& GetEndOfFileToken() const
		{
			return *m_endOfFileToken;
		}

		/// <summary>
		/// Get the collection of children nodes and tokens
		/// </summary>
		virtual std::vector<SyntaxNodeChild> GetChildren() const override final
		{
			std::vector<SyntaxNodeChild> children;

			auto declarationChildren = m_declarations->GetChildren();
			children.insert(children.end(), declarationChildren.begin(), declarationChildren.end());

			children.push_back(SyntaxNodeChild(m_endOfFileToken));

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
		std::shared_ptr<const SyntaxList<Declaration>> m_declarations;
		std::shared_ptr<const SyntaxToken> m_endOfFileToken;
	};
}
