#pragma once

namespace Soup::Syntax::OuterTree
{
    /// <summary>
    /// The attribute
    /// </summary>
    export class Attribute final : public SyntaxNode
    {
        friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        Attribute(
            std::shared_ptr<const InnerTree::Attribute> innerNode,
            const SyntaxNode* parentNode) :
            SyntaxNode(innerNode, parentNode),
            m_identifierToken(innerNode->GetIdentifierToken().CreateOuter(this))
        {
        }

    public:
        /// <summary>
        /// Gets the identifier token
        /// </summary>
        const SyntaxToken& GetIdentifierToken() const
        {
            return *m_identifierToken;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            std::vector<SyntaxNodeChild> children;

            children.push_back(SyntaxNodeChild(m_identifierToken));

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
        std::shared_ptr<const SyntaxToken> m_identifierToken;
    };
}
