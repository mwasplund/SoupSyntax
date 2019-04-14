#pragma once

namespace Soup::Syntax::OuterTree
{
    /// <summary>
    /// The delete function body
    /// </summary>
    export class DeleteFunctionBody final : public SyntaxNode
    {
        friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        DeleteFunctionBody(
            std::shared_ptr<const InnerTree::DeleteFunctionBody> innerNode,
            const SyntaxNode* parentNode) :
            SyntaxNode(innerNode, parentNode),
            m_equalToken(innerNode->GetEqualToken().CreateOuter(this)),
            m_deleteToken(innerNode->GetDeleteToken().CreateOuter(this)),
            m_semicolonToken(innerNode->GetSemicolonToken().CreateOuter(this))
        {
        }

    public:
        /// <summary>
        /// Get the equal token
        /// </summary>
        const SyntaxToken& GetEqualToken() const
        {
            return *m_equalToken;
        }

        /// <summary>
        /// Get the delete token
        /// </summary>
        const SyntaxToken& GetDeleteToken() const
        {
            return *m_deleteToken;
        }

        /// <summary>
        /// Get the semicolon token
        /// </summary>
        const SyntaxToken& GetSemicolonToken() const
        {
            return *m_semicolonToken;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            return std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(m_equalToken),
                    SyntaxNodeChild(m_deleteToken),
                    SyntaxNodeChild(m_semicolonToken),
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
        std::shared_ptr<const SyntaxToken> m_equalToken;
        std::shared_ptr<const SyntaxToken> m_deleteToken;
        std::shared_ptr<const SyntaxToken> m_semicolonToken;
    };
}
