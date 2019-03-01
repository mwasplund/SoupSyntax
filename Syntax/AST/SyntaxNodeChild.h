
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
        SyntaxNodeChild(const SyntaxNode& node) :
            m_node(&node),
            m_token(nullptr)
        {
        }
        
        SyntaxNodeChild(const SyntaxToken& token) :
            m_node(nullptr),
            m_token(&token)
        {
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

    private:
        const SyntaxNode* m_node;
        const SyntaxToken* m_token;
    };
}
