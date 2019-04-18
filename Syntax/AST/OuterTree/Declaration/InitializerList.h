#pragma once

namespace Soup::Syntax::OuterTree
{
    /// <summary>
    /// The initializer list used to initialize values surrounded by either 
    /// braces or parenthesis "(a, b)" or "{a, b}"
    /// </summary>
    export class InitializerList final : public SyntaxNode
    {
        friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        InitializerList(
            std::shared_ptr<const InnerTree::InitializerList> innerNode,
            const SyntaxNode* parentNode) :
            SyntaxNode(innerNode, parentNode),
            m_openToken(innerNode->GetOpenToken().CreateOuter(this)),
            m_values(innerNode->GetValues().CreateOuter<SyntaxNode>(this)),
            m_closeToken(innerNode->GetCloseToken().CreateOuter(this))
        {
        }

    public:
        /// <summary>
        /// Gets the left token
        /// </summary>
        const SyntaxToken& GetOpenToken() const
        {
            return *m_openToken;
        }

        /// <summary>
        /// Gets the list of values
        /// </summary>
        const SyntaxSeparatorList<SyntaxNode>& GetValues() const
        {
            return *m_values;
        }

        /// <summary>
        /// Gets the right token
        /// </summary>
        const SyntaxToken& GetCloseToken() const
        {
            return *m_closeToken;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            std::vector<SyntaxNodeChild> children;

            children.push_back(SyntaxNodeChild(m_openToken));

            auto valueChildren = m_values->GetChildren();
            children.insert(children.end(), valueChildren.begin(), valueChildren.end());

            children.push_back(SyntaxNodeChild(m_closeToken));

            return children;
        }

        /// <summary>
        /// Visitor Accept
        /// </summary>
        virtual void Accept(ISyntaxVisitor& visitor) const override final
        {
            visitor.Visit(*this);
        }

    private:
        std::shared_ptr<const SyntaxToken> m_openToken;
        std::shared_ptr<const SyntaxSeparatorList<SyntaxNode>> m_values;
        std::shared_ptr<const SyntaxToken> m_closeToken;
    };
}
