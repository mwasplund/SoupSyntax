#pragma once

namespace Soup::Syntax::OuterTree
{
    /// <summary>
    /// Accessor specifier for class declaration
    /// ex. "public:"
    /// </summary>
    export class AccessorSpecifier final : public Declaration
    {
        friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        AccessorSpecifier(
            std::shared_ptr<const InnerTree::AccessorSpecifier> innerNode,
            const SyntaxNode* parentNode) :
            Declaration(innerNode, parentNode),
            m_accessorToken(innerNode->GetAccessorToken().CreateOuter(this)),
            m_colonToken(innerNode->GetColonToken().CreateOuter(this))
        {
        }

    public:
        /// <summary>
        /// Gets the optional SyntaxToken for the accessor specifier.
        /// </summary>
        const SyntaxToken& GetAccessorToken() const
        {
            return *m_accessorToken;
        }

        /// <summary>
        /// Gets the SyntaxToken for the colon.
        /// </summary>
        const SyntaxToken& GetColonToken() const
        {
            return *m_colonToken;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            std::vector<SyntaxNodeChild> children;

            children.push_back(SyntaxNodeChild(m_accessorToken));
            children.push_back(SyntaxNodeChild(m_colonToken));

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
        std::shared_ptr<const SyntaxToken> m_accessorToken;
        std::shared_ptr<const SyntaxToken> m_colonToken;
    };
}
