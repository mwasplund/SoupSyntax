#pragma once

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// Attribute argument clause
    /// Ex. "(1, 2)"
    /// </summary>
    export class AttributeArgumentClause : public SyntaxNode
    {
        friend class ::Soup::Syntax::SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        AttributeArgumentClause(
            std::shared_ptr<const SyntaxToken> openParenthesisToken, 
            std::shared_ptr<const SyntaxList<SyntaxToken>> tokens,
            std::shared_ptr<const SyntaxToken> closeParenthesisToken) :
            SyntaxNode(SyntaxNodeType::AttributeArgumentClause),
            m_openParenthesisToken(std::move(openParenthesisToken)),
            m_tokens(std::move(tokens)),
            m_closeParenthesisToken(std::move(closeParenthesisToken))
        {
        }

    public:
        /// <summary>
        /// Create an outer node with this node and the provided parent
        /// </summary>
        std::shared_ptr<const OuterTree::AttributeArgumentClause> CreateOuter(
            const OuterTree::SyntaxNode* parentNode) const
        {
            return OuterTree::SyntaxWrapper::CreateOuter(
                GetSelf<AttributeArgumentClause>(),
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
        /// The open parenthesis token
        /// </summary>
        const SyntaxToken& GetOpenParenthesisToken() const
        {
            return *m_openParenthesisToken;
        }

        /// <summary>
        /// Gets the list of tokens
        /// </summary>
        const SyntaxList<SyntaxToken>& GetTokens() const
        {
            return *m_tokens;
        }

        /// <summary>
        /// The close parenthesis token
        /// </summary>
        const SyntaxToken& GetCloseParenthesisToken() const
        {
            return *m_closeParenthesisToken;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const AttributeArgumentClause& rhs) const
        {
            return *m_openParenthesisToken == *rhs.m_openParenthesisToken &&
                *m_tokens == *rhs.m_tokens &&
                *m_closeParenthesisToken == *rhs.m_closeParenthesisToken;
        }

        bool operator !=(const AttributeArgumentClause& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const AttributeArgumentClause&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxToken> m_openParenthesisToken;
        std::shared_ptr<const SyntaxList<SyntaxToken>> m_tokens;
        std::shared_ptr<const SyntaxToken> m_closeParenthesisToken;
    };
}
