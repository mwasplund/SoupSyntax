#pragma once

namespace Soup::Syntax::OuterTree
{
    /// <summary>
    /// Declaration specifier sequence
    /// </summary>
    export class DeclarationSpecifier final : public SyntaxNode
    {
        friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        DeclarationSpecifier(
            std::shared_ptr<const InnerTree::DeclarationSpecifier> innerNode,
            const SyntaxNode* parentNode) :
            SyntaxNode(innerNode, parentNode),
            m_leadingModifiers(innerNode->GetLeadingModifiers().CreateOuter<SyntaxToken>(this)),
            m_typeSpecifier(innerNode->GetTypeSpecifier().CreateOuterAny(this)),
            m_trailingModifiers(innerNode->GetTrailingModifiers().CreateOuter<SyntaxToken>(this))
        {
        }

    public:
        /// <summary>
        /// Gets the collection of leading modifier specifiers before the type
        /// </summary>
        const SyntaxList<SyntaxToken>& GetLeadingModifiers() const
        {
            return *m_leadingModifiers;
        }

        /// <summary>
        /// Gets the type specifier
        /// </summary>
        const SyntaxNode& GetTypeSpecifier() const
        {
            return *m_typeSpecifier;
        }

        /// <summary>
        /// Gets the collection of trailing modifier specifiers after the type
        /// </summary>
        const SyntaxList<SyntaxToken>& GetTrailingModifiers() const
        {
            return *m_trailingModifiers;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            std::vector<SyntaxNodeChild> children;

            auto leadingModifierChildren = m_leadingModifiers->GetChildren();
            children.insert(children.end(), leadingModifierChildren.begin(), leadingModifierChildren.end());

            children.push_back(SyntaxNodeChild(m_typeSpecifier));

            auto trailingModifierChildren = m_trailingModifiers->GetChildren();
            children.insert(children.end(), trailingModifierChildren.begin(), trailingModifierChildren.end());

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
        std::shared_ptr<const SyntaxList<SyntaxToken>> m_leadingModifiers;
        std::shared_ptr<const SyntaxNode> m_typeSpecifier;
        std::shared_ptr<const SyntaxList<SyntaxToken>> m_trailingModifiers;
    };
}
