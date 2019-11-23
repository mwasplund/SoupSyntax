#pragma once

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// The initializer declarator list node
	/// TODO: Can this be a direct list on the parent?
	/// </summary>
	export class InitializerDeclaratorList final : public SyntaxNode
	{
		friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

	// TODO: Friend broken in MSVC modules
	public: // private:
		/// <summary>
		/// Initialize
		/// </summary>
		InitializerDeclaratorList(
			std::shared_ptr<const InnerTree::InitializerDeclaratorList> innerNode,
			const SyntaxNode* parentNode) :
			SyntaxNode(innerNode, parentNode),
			m_items(innerNode->GetItems().CreateOuter<InitializerDeclarator>(this))
		{
		}

	public:
		/// <summary>
		/// Gets the list of items
		/// </summary>
		const SyntaxSeparatorList<InitializerDeclarator>& GetItems() const
		{
			return *m_items;
		}

		/// <summary>
		/// Get the collection of children nodes and tokens
		/// </summary>
		virtual std::vector<SyntaxNodeChild> GetChildren() const override final
		{
			std::vector<SyntaxNodeChild> children;

			auto itemsChildren = m_items->GetChildren();
			children.insert(children.end(), itemsChildren.begin(), itemsChildren.end());

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
		std::shared_ptr<const SyntaxSeparatorList<InitializerDeclarator>> m_items;
	};
}
