#pragma once

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// This expression
    /// </summary>
    export class ThisExpression final : public Expression
    {
        friend class ::Soup::Syntax::SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        ThisExpression(std::shared_ptr<const SyntaxToken> token) :
            Expression(SyntaxNodeType::ThisExpression),
            m_token(std::move(token))
        {
        }

    public:
        /// <summary>
        /// Create an outer node with this node and the provided parent
        /// </summary>
        std::shared_ptr<const OuterTree::ThisExpression> CreateOuter(
            const OuterTree::SyntaxNode* parentNode) const
        {
            return OuterTree::SyntaxWrapper::CreateOuter(
                GetSelf<ThisExpression>(),
                parentNode);
        }

        /// <summary>
        /// Create an outer node with this node and the provided parent
        /// </summary>
        virtual std::shared_ptr<const OuterTree::SyntaxNode> CreateOuterAny(
            const OuterTree::SyntaxNode* parentNode) const override final
        {
            return std::static_pointer_cast<const OuterTree::SyntaxNode>(
                CreateOuter(parentNode));
        }

        /// <summary>
        /// Gets the token
        /// </summary>
        const SyntaxToken& GetToken() const
        {
            return *m_token;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const ThisExpression& rhs) const
        {
            return *m_token == *rhs.m_token;
        }

        bool operator !=(const ThisExpression& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const ThisExpression&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxToken> m_token;
    };
}
