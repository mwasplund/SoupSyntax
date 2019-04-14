#pragma once

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// Declaration specifier sequence
    /// </summary>
    export class DeclarationSpecifier final : public SyntaxNode
    {
        friend class ::Soup::Syntax::SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        DeclarationSpecifier(
            std::shared_ptr<const SyntaxList<SyntaxToken>> leadingModifiers,
            std::shared_ptr<const SyntaxNode> typeSpecifier,
            std::shared_ptr<const SyntaxList<SyntaxToken>> trailingModifiers) :
            SyntaxNode(SyntaxNodeType::DeclarationSpecifier),
            m_leadingModifiers(std::move(leadingModifiers)),
            m_typeSpecifier(std::move(typeSpecifier)),
            m_trailingModifiers(std::move(trailingModifiers))
        {
        }

    public:
        /// <summary>
        /// Create an outer node with this node and the provided parent
        /// </summary>
        std::shared_ptr<const OuterTree::DeclarationSpecifier> CreateOuter(
            const OuterTree::SyntaxNode* parentNode) const
        {
            return OuterTree::SyntaxWrapper::CreateOuter(
                GetSelf<DeclarationSpecifier>(),
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
        /// Equality operator
        /// </summary>
        bool operator ==(const DeclarationSpecifier& rhs) const
        {
            return *m_leadingModifiers == *rhs.m_leadingModifiers &&
                *m_typeSpecifier == *rhs.m_typeSpecifier &&
                *m_trailingModifiers == *rhs.m_trailingModifiers;
        }

        bool operator !=(const DeclarationSpecifier& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const DeclarationSpecifier&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxList<SyntaxToken>> m_leadingModifiers;
        std::shared_ptr<const SyntaxNode> m_typeSpecifier;
        std::shared_ptr<const SyntaxList<SyntaxToken>> m_trailingModifiers;
    };
}
