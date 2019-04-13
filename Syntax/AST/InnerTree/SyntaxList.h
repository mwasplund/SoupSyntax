#pragma once

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// The syntax list
    /// </summary>
    export template<class TNode>
    class SyntaxList final
    {
        friend class ::Soup::Syntax::SyntaxFactory;
        static_assert(std::is_base_of<SyntaxNode, TNode>::value, "TNode must be derived from SyntaxNode.");

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        SyntaxList(
            std::vector<std::shared_ptr<const TNode>> items) :
            m_items(std::move(items))
        {
            // TODO: Debug only?
            for (auto& item : m_items)
            {
                if (item == nullptr)
                {
                    throw std::runtime_error("No null items allowed");
                }
            }
        }

    public:
        /// <summary>
        /// Gets the list of items
        /// </summary>
        const std::vector<std::shared_ptr<const TNode>>& GetItems() const
        {
            return m_items;
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
