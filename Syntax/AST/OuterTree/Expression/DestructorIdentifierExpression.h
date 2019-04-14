#pragma once

namespace Soup::Syntax::OuterTree
{
    /// <summary>
    /// A class destructor identifier expression
    /// </summary>
    export class DestructorIdentifierExpression final : public UnqualifiedIdentifierExpression
    {
        friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        DestructorIdentifierExpression(
            std::shared_ptr<const InnerTree::DestructorIdentifierExpression> innerNode,
            const SyntaxNode* parentNode) :
            UnqualifiedIdentifierExpression(innerNode, parentNode),
            m_tildeToken(innerNode->GetTildeToken().CreateOuter(this)),
            m_identifierToken(innerNode->GetIdentifierToken().CreateOuter(this))
        {
        }

    public:
        /// <summary>
        /// Gets the tilde token
        /// </summary>
        const SyntaxToken& GetTildeToken() const
        {
            return *m_tildeToken;
        }

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
            return std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(m_tildeToken),
                    SyntaxNodeChild(m_identifierToken),
                });
        }

        /// <summary>
        /// Visitor Accept
        /// </summary>
        virtual void Accept(ISyntaxVisitor& visitor) const override final
        {
            visitor.Visit(*this);
        }

    private:
        std::shared_ptr<const SyntaxToken> m_tildeToken;
        std::shared_ptr<const SyntaxToken> m_identifierToken;
    };
}
