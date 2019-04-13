
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
        std::shared_ptr<T> GetSelf() const
        {
            auto sharedSelf = m_self;
            if (sharedSelf == nullptr)
                throw std::runtime_error("Failed to get self pointer.");

            auto typedSelf = std::dynamic_pointer_cast<T>();
            if (typedSelf == nullptr)
                throw std::runtime_error("Failed to get cast self pointer.");

            return typedSelf;
        }

        /// <summary>
        /// Set the weak reference to myself
        /// </summary>
        template<typename T>
        void SetSelf(std::shared_ptr<SyntaxNode> self) const
        {
            m_self = self;
        }

    private:
        SyntaxNodeType m_type;
        std::weak_ptr<SyntaxNode> m_self;
    };
}
