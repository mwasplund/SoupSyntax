#pragma once

namespace Soup::Syntax::InnerTree
{
	/// <summary>
	/// The initializer declarator list node
	/// TODO: Can this be a direct list on the parent?
	/// </summary>
	export class InitializerDeclaratorList final : public SyntaxNode
	{
		friend class ::Soup::Syntax::SyntaxFactory;

	private:
		/// <summary>
		/// Initialize
		/// </summary>
		InitializerDeclaratorList(
			std::shared_ptr<const SyntaxSeparatorList<InitializerDeclarator>> items) :
			SyntaxNode(SyntaxNodeType::InitializerDeclaratorList),
			m_items(std::move(items))
		{
		}

	public:
		/// <summary>
		/// Create an outer node with this node and the provided parent
		/// </summary>
		std::shared_ptr<const OuterTree::InitializerDeclaratorList> CreateOuter(
			const OuterTree::SyntaxNode* parentNode) const
		{
			return OuterTree::SyntaxWrapper::CreateOuter(
				GetSelf<InitializerDeclaratorList>(),
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
		/// Gets the list of items
		/// </summary>
		const SyntaxSeparatorList<InitializerDeclarator>& GetItems() const
		{
			return *m_items;
		}

		/// <summary>
		/// Equality operator
		/// </summary>
		bool operator ==(const InitializerDeclaratorList& rhs) const
		{
			return *m_items == *rhs.m_items;
		}

		bool operator !=(const InitializerDeclaratorList& rhs) const
		{
			return !(*this == rhs);
		}

	protected:
		/// <summary>
		/// SyntaxNode Equals
		/// </summary>
		virtual bool Equals(const SyntaxNode& rhs) const final
		{
			return *this == static_cast<const InitializerDeclaratorList&>(rhs);
		}

	private:
		std::shared_ptr<const SyntaxSeparatorList<InitializerDeclarator>> m_items;
	};
}
