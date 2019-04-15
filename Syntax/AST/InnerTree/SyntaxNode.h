
#pragma once

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// Base syntax node of the inner tree that maintains the down hierarchy
    /// </summary>
    export class SyntaxNode
    {
    protected:
        /// <summary>
        /// Initialize
        /// </summary>
        SyntaxNode(SyntaxNodeType type) :
            m_type(type)
        {
        }

    public:
        /// <summary>
        /// Create an outer node with this node and the provided parent
        /// </summary>
        virtual std::shared_ptr<const OuterTree::SyntaxNode> CreateOuterAny(
            const OuterTree::SyntaxNode* parentNode) const = 0;

        /// <summary>
        /// Helper method to return a typed outer syntax node
        /// </summary>
        template<typename T>
        std::shared_ptr<const T> CreateOuter(
            const OuterTree::SyntaxNode* parentNode) const
        {
            auto typedOuter = std::dynamic_pointer_cast<const T>(
                CreateOuterAny(parentNode));
            if (typedOuter == nullptr)
                throw std::runtime_error("Failed to cast outer node to requested type.");

            return typedOuter;
        }

        /// <summary>
        /// Get the node type
        /// </summary>
        SyntaxNodeType GetType() const
        {
            return m_type;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator==(const SyntaxNode& rhs) const
        {
            return typeid(*this) == typeid(rhs) &&
                Equals(rhs);
        }

        bool operator!=(const SyntaxNode &rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// Shared polymorphic equality check
        /// Only called when the types are verified to be equal
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const = 0;

        /// <summary>
        /// Get the shared pointer to myself
        /// </summary>
        template<typename T>
        std::shared_ptr<const T> GetSelf() const
        {
            auto sharedSelf = m_self.lock();
            if (sharedSelf == nullptr)
                throw std::runtime_error("Failed to get self pointer: " + std::string(typeid(T).name()));

            auto typedSelf = std::dynamic_pointer_cast<const T>(sharedSelf);
            if (typedSelf == nullptr)
                throw std::runtime_error("Failed to get cast self pointer: " + std::string(typeid(T).name()));

            return typedSelf;
        }

        /// <summary>
        /// Set the weak reference to myself
        /// </summary>
        void SetSelf(const std::shared_ptr<const SyntaxNode>& self) const
        {
            m_self = self;
        }

    private:
        SyntaxNodeType m_type;
        mutable std::weak_ptr<const SyntaxNode> m_self;
    };
}
