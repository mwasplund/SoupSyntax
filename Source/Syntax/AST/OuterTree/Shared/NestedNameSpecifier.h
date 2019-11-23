#pragma once

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// The nested name specifier sequence
	/// TODO: All items must be either identifier or template
	/// see if we can subclass the left to force this
	/// </summary>
	export class NestedNameSpecifier final : public SyntaxNode
	{
		friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

	// TODO: Friend broken in MSVC modules
	public: // private:
		/// <summary>
		/// Initialize
		/// </summary>
		NestedNameSpecifier(
			std::shared_ptr<const InnerTree::NestedNameSpecifier> innerNode,
			const SyntaxNode* parentNode) :
			SyntaxNode(innerNode, parentNode),
			m_specifierSequence(innerNode->GetSpecifierSequence().CreateOuter<SyntaxNode>(this))
		{
		}

	public:
		/// <summary>
		/// Get the collection of children nodes and tokens
		/// </summary>
		virtual std::vector<SyntaxNodeChild> GetChildren() const override final
		{
			std::vector<SyntaxNodeChild> children;

			auto specifierChildren = m_specifierSequence->GetChildren();
			children.insert(children.end(), specifierChildren.begin(), specifierChildren.end());

			return children;
		}

		/// <summary>
		/// Visitor Accept
		/// </summary>
		virtual void Accept(ISyntaxVisitor& visitor) const override final
		{
			visitor.Visit(*this);
		}

		/// <summary>
		/// Gets the specifier sequence
		/// </summary>
		const SyntaxSeparatorList<SyntaxNode>& GetSpecifierSequence() const
		{
			return *m_specifierSequence;
		}

	private:
		std::shared_ptr<const SyntaxSeparatorList<SyntaxNode>> m_specifierSequence;
	};
}
