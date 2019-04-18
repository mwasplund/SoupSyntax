#pragma once

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// The initializer list used to initialize values surrounded by either 
    /// braces or parenthesis "(a, b)" or "{a, b}"
    /// </summary>
    export class InitializerList final : public SyntaxNode
    {
        friend class ::Soup::Syntax::SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        InitializerList(
            std::shared_ptr<const SyntaxToken> openToken,
            std::shared_ptr<const SyntaxSeparatorList<SyntaxNode>> values,
            std::shared_ptr<const SyntaxToken> closeToken) :
            SyntaxNode(SyntaxNodeType::InitializerList),
            m_openToken(std::move(openToken)),
            m_values(std::move(values)),
            m_closeToken(std::move(closeToken))
        {
        }

    public:
        /// <summary>
        /// Create an outer node with this node and the provided parent
        /// </summary>
        std::shared_ptr<const OuterTree::InitializerList> CreateOuter(
            const OuterTree::SyntaxNode* parentNode) const
        {
            return OuterTree::SyntaxWrapper::CreateOuter(
                GetSelf<InitializerList>(),
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
        /// Gets the left token
        /// </summary>
        const SyntaxToken& GetOpenToken() const
        {
            return *m_openToken;
        }

        /// <summary>
        /// Gets the list of values
        /// TODO: Could be an expression or a braced initializer...
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
        /// Equality operator
        /// </summary>
        bool operator ==(const InitializerList& rhs) const
        {
            return *m_openToken == *rhs.m_openToken &&
                *m_values == *rhs.m_values &&
                *m_closeToken == *rhs.m_closeToken;
        }

        bool operator !=(const InitializerList& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const InitializerList&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxToken> m_openToken;
        std::shared_ptr<const SyntaxSeparatorList<SyntaxNode>> m_values;
        std::shared_ptr<const SyntaxToken> m_closeToken;
    };
}
