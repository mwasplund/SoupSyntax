﻿#pragma once

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// The syntax list with token separators
	/// </summary>
	export template<class TNode>
	class SyntaxSeparatorList final
	{
		static_assert(
			std::is_base_of<SyntaxNode, TNode>::value ||
			std::is_same<SyntaxToken, TNode>::value,
			"TNode must be derived from SyntaxNode or be a SyntaxToken.");

	public:
		/// <summary>
		/// Initialize
		/// </summary>
		SyntaxSeparatorList(
			std::vector<std::shared_ptr<const TNode>> items,
			std::vector<std::shared_ptr<const SyntaxToken>> separators) :
			m_items(std::move(items)),
			m_separators(std::move(separators))
		{
			// TODO: Debug only?
			for (auto& item : m_items)
			{
				if (item == nullptr)
				{
					throw std::runtime_error("No null items allowed");
				}
			}

			for (auto& separator : m_separators)
			{
				if (separator == nullptr)
				{
					throw std::runtime_error("No null separators allowed");
				}
			}
		}

		/// <summary>
		/// Gets the list of items
		/// </summary>
		const std::vector<std::shared_ptr<const TNode>>& GetItems() const
		{
			return m_items;
		}

		/// <summary>
		/// Gets the list of separators
		/// </summary>
		const std::vector<std::shared_ptr<const SyntaxToken>>& GetSeparators() const
		{
			return m_separators;
		}

		/// <summary>
		/// Get the collection of children nodes and tokens
		/// </summary>
		std::vector<SyntaxNodeChild> GetChildren() const
		{
			std::vector<SyntaxNodeChild> children;

			size_t i = 0;
			for (i = 0; i < m_items.size(); i++)
			{
				children.push_back(SyntaxNodeChild(m_items.at(i)));

				// Check if there is a separator after the item
				if (i < m_separators.size())
				{
					children.push_back(SyntaxNodeChild(m_separators.at(i)));
				}
			}

			return children;
		}

		/// <summary>
		/// Equality operator
		/// </summary>
		bool operator ==(const SyntaxSeparatorList<TNode>& rhs) const
		{
			return SyntaxUtils::AreListsEqual(m_items, rhs.m_items) &&
				SyntaxUtils::AreListsEqual(m_separators, rhs.m_separators);
		}

		bool operator !=(const SyntaxSeparatorList<TNode>& rhs) const
		{
			return !(*this == rhs);
		}

	private:
		std::vector<std::shared_ptr<const TNode>> m_items;
		std::vector<std::shared_ptr<const SyntaxToken>> m_separators;
	};
}
