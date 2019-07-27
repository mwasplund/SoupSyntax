#pragma once

namespace Soup::Syntax::OuterTree
{
    /// <summary>
    /// A literal expression
    /// </summary>
    export class LiteralExpression final : public Expression
    {
        friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        LiteralExpression(
            std::shared_ptr<const InnerTree::LiteralExpression> innerNode,
            const SyntaxNode* parentNode) :
            Expression(innerNode, parentNode),
            m_literalType(innerNode->GetLiteralType()),
            m_token(innerNode->GetToken().CreateOuter(this))
        {
        }

    public:
        /// <summary>
        /// Gets the type
        /// </summary>
        LiteralType GetLiteralType() const
        {
            return m_literalType;
        }

        /// <summary>
        /// Gets the token
        /// </summary>
        const SyntaxToken& GetToken() const
        {
            return *m_token;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            return std::vector<SyntaxNodeChild>(
            {
                SyntaxNodeChild(m_token),
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
        LiteralType m_literalType;
        std::shared_ptr<const SyntaxToken> m_token;
    };
}
