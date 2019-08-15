#pragma once

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// Module Import declaration
    /// </summary>
    export class ModuleImportDeclaration final : public Declaration
    {
        friend class ::Soup::Syntax::SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        ModuleImportDeclaration(
            std::shared_ptr<const SyntaxToken> importToken,
            std::shared_ptr<const SyntaxSeparatorList<SyntaxToken>> nameIdentifierList,
            std::shared_ptr<const SyntaxToken> semicolonToken) :
            Declaration(SyntaxNodeType::ModuleImportDeclaration),
            m_importToken(std::move(importToken)),
            m_nameIdentifierList(std::move(nameIdentifierList)),
            m_semicolonToken(std::move(semicolonToken))
        {
        }

    public:
        /// <summary>
        /// Create an outer node with this node and the provided parent
        /// </summary>
        std::shared_ptr<const OuterTree::ModuleImportDeclaration> CreateOuter(
            const OuterTree::SyntaxNode* parentNode) const
        {
            return OuterTree::SyntaxWrapper::CreateOuter(
                GetSelf<ModuleImportDeclaration>(),
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
        /// Gets the import token.
        /// </summary>
        const SyntaxToken& GetImportToken() const
        {
            return *m_importToken;
        }

        /// <summary>
        /// Gets the list of colon separated name identifiers.
        /// </summary>
        const SyntaxSeparatorList<SyntaxToken>& GetNameIdentifierList() const
        {
            return *m_nameIdentifierList;
        }

        /// <summary>
        /// Gets the SyntaxToken for the semicolon.
        /// </summary>
        const SyntaxToken& GetSemicolonToken() const
        {
            return *m_semicolonToken;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const ModuleImportDeclaration& rhs) const
        {
            return *m_importToken == *rhs.m_importToken &&
                *m_nameIdentifierList == *rhs.m_nameIdentifierList &&
                *m_semicolonToken == *rhs.m_semicolonToken;
        }

        bool operator !=(const ModuleImportDeclaration& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const ModuleImportDeclaration&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxToken> m_importToken;
        std::shared_ptr<const SyntaxSeparatorList<SyntaxToken>> m_nameIdentifierList;
        std::shared_ptr<const SyntaxToken> m_semicolonToken;
    };
}
