﻿#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// The syntax list
    /// </summary>
    export template<class TNode>
    class SyntaxList final
    {
        static_assert(std::is_base_of<SyntaxNode, TNode>::value, "TNode must be derived from SyntaxNode.");

    public:
        /// <summary>
        /// Initialize
        /// </summary>
        SyntaxList(
            std::vector<std::shared_ptr<const TNode>> items) :
            m_items(std::move(items))
        {
        }

        /// <summary>
        /// Gets the list of items
        /// </summary>
        const std::vector<std::shared_ptr<const TNode>>& GetItems() const
        {
            return m_items;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        std::vector<SyntaxNodeChild> GetChildren() const
        {
            std::vector<SyntaxNodeChild> children;

            for (size_t i = 0; i < m_items.size(); i++)
            {
                children.push_back(SyntaxNodeChild(m_items.at(i)));
            }

            return children;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const SyntaxList<TNode>& rhs) const
        {
            return SyntaxUtils::AreListsEqual(m_items, rhs.m_items);
        }

        bool operator !=(const SyntaxList<TNode>& rhs) const
        {
            return !(*this == rhs);
        }

    private:
        std::vector<std::shared_ptr<const TNode>> m_items;
    };
}
