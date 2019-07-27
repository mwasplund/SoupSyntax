#pragma once

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// The syntax list with token separators
    /// </summary>
    export template<class TNode>
    class SyntaxSeparatorList final
    {
        friend class ::Soup::Syntax::SyntaxFactory;
        static_assert(
            std::is_base_of<SyntaxNode, TNode>::value ||
            std::is_same<SyntaxToken, TNode>::value,
            "TNode must be derived from SyntaxNode or be a SyntaxToken.");

    private:
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

    public:
        /// <summary>
        /// Create an outer node with this node and the provided parent
        /// </summary>
        template<class TOuter>
        std::shared_ptr<const OuterTree::SyntaxSeparatorList<TOuter>> CreateOuter(
            OuterTree::SyntaxNode* parentNode) const
        {
            return OuterTree::SyntaxWrapper::CreateOuter(
                GetSelf(),
                parentNode);
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
        /// <summary>
        /// Get the shared pointer to myself
        /// </summary>
        std::shared_ptr<const SyntaxSeparatorList<TNode>> GetSelf() const
        {
            auto sharedSelf = m_self.lock();
            if (sharedSelf == nullptr)
                throw std::runtime_error("Failed to get self pointer for list.");

            return sharedSelf;
        }

        /// <summary>
        /// Set the weak reference to myself
        /// </summary>
        void SetSelf(const std::shared_ptr<const SyntaxSeparatorList<TNode>>& self) const
        {
            m_self = self;
        }

    private:
        mutable std::weak_ptr<const SyntaxSeparatorList<TNode>> m_self;
        std::vector<std::shared_ptr<const TNode>> m_items;
        std::vector<std::shared_ptr<const SyntaxToken>> m_separators;
    };
}
