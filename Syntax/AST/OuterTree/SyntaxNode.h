
#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// Base syntax node
    /// </summary>
    export class SyntaxNode
    {
    protected:
        /// <summary>
        /// Initialize
        /// </summary>
        SyntaxNode(SyntaxNodeType type) :
            m_type(type),
            m_parent(nullptr)
            m_span(),
            m_fullSpan()
        {
        }

        /// <summary>
        /// Get the node type
        /// </summary>
        void SetParent(SyntaxNode* value) const
        {
            if (value == nullptr)
                throw std::runtime_error("Cannot set parent to null.");
            if (m_parent != nullptr)
                throw std::runtime_error("Cannot set parent. Already set.");
            m_parent = value;
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
        /// Get a value indicating whether the node has a parent attached
        /// </summary>
        bool HasParent() const
        {
            return m_parent != nullptr;
        }

        /// <summary>
        /// Get the parent node
        /// </summary>
        SyntaxNode& GetParent() const
        {
            if (m_parent == nullptr)
                throw std::runtime_error("No parent attached.");
            return *m_parent;
        }

        /// <summary>
        /// Get the text span for the node
        /// </summary>
        TextSpan GetSpan() const
        {
            return m_span;
        }

        /// <summary>
        /// Get the text span for the node including all leading and trailing trivial
        /// </summary>
        TextSpan GetFullSpan() const
        {
            return m_fullSpan;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const = 0;

        /// <summary>
        /// Visitor Accept
        /// </summary>
        virtual void Accept(ISyntaxVisitor& visitor) const = 0;

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

    private:
        /// <summary>
        /// Shared equality check
        /// Only called when the types are verified to be equal
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const = 0;

    private:
        SyntaxNodeType m_type;
        TextSpan m_span;
        TextSpan m_fullSpan;
        SyntaxNode* m_parent;
    };
}
