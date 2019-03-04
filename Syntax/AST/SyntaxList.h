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
            std::vector<std::shared_ptr<const TNode>> items,
            std::vector<std::shared_ptr<const SyntaxToken>> separators) :
            m_items(std::move(items)),
            m_separators(std::move(separators))
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
        /// Gets the list of separators
        /// </summary>
        const std::vector<std::shared_ptr<const TNode>>& GetSeparators() const
        {
            return m_separators;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        std::vector<SyntaxNodeChild> GetChildren() const
        {
            std::vector<SyntaxNodeChild> children;

            for (size_t i = 0; i < m_items.size(); i++)
            {
                if (i > 0)
                {
                    children.push_back(SyntaxNodeChild(*m_separators.at(i - 1)));
                }

                children.push_back(SyntaxNodeChild(*m_items.at(i)));
            }

            return children;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const SyntaxList<TNode>& rhs) const
        {
            return 
                std::equal(
                    begin(m_items),
                    end(m_items),
                    begin(rhs.m_items),
                    end(rhs.m_items),
                    [](const std::shared_ptr<const TNode>& lhs, const std::shared_ptr<const TNode>& rhs)
                    {
                        return *lhs == *rhs;
                    }) &&
                std::equal(
                    begin(m_separators),
                    end(m_separators),
                    begin(rhs.m_separators),
                    end(rhs.m_separators),
                    [](const std::shared_ptr<const SyntaxToken>& lhs, const std::shared_ptr<const SyntaxToken>& rhs)
                    {
                        return *lhs == *rhs;
                    });
        }

        bool operator !=(const SyntaxList<TNode>& rhs) const
        {
            return !(*this == rhs);
        }

    private:
        std::vector<std::shared_ptr<const TNode>> m_items;
        std::vector<std::shared_ptr<const SyntaxToken>> m_separators;
    };
}
