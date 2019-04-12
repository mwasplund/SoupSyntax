
#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// The node child that can either be another node or a terminal token
    /// </summary>
    export class SyntaxNodeChild
    {
    public:
        /// <summary>
        /// Initialize
        /// </summary>
        SyntaxNodeChild(std::shared_ptr<const SyntaxNode> node) :
            m_node(std::move(node)),
            m_token(nullptr)
        {
            if (!IsNode())
            {
                throw std::logic_error("Child of type node must have node.");
            }
        }
        
        SyntaxNodeChild(std::shared_ptr<const SyntaxToken> token) :
            m_node(nullptr),
            m_token(std::move(token))
        {
            if (!IsToken())
            {
                throw std::logic_error("Child of type token must have token.");
            }
        }

        /// <summary>
        /// Check if the child is a node
        /// </summary>
        bool IsNode() const
        {
            return m_node != nullptr;
        }

        /// <summary>
        /// Check if the child is a token
        /// </summary>
        bool IsToken() const
        {
            return m_token != nullptr;
        }

        /// <summary>
        /// Get the child as a node
        /// </summary>
        const SyntaxNode& AsNode() const
        {
            return *m_node;
        }

        /// <summary>
        /// Get the child as a token
        /// </summary>
        const SyntaxToken& AsToken() const
        {
            return *m_token;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator==(const SyntaxNodeChild& rhs) const
        {
            if (IsNode() && rhs.IsNode())
            {
                return AsNode() == rhs.AsNode();
            }
            else if (IsToken() && rhs.IsToken())
            {
                return AsToken() == rhs.AsToken();
            }
            else
            {
                // Mismatched type
                return false;
            }
        }

        bool operator!=(const SyntaxNodeChild &rhs) const
        {
            return !(*this == rhs);
        }

    private:
        std::shared_ptr<const SyntaxNode> m_node;
        std::shared_ptr<const SyntaxToken> m_token;
    };
}
