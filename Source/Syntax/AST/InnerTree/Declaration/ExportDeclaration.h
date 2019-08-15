#pragma once

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// Module declaration
    /// </summary>
    export class ExportDeclaration final : public Declaration
    {
        friend class ::Soup::Syntax::SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        ExportDeclaration(
            std::shared_ptr<const SyntaxToken> exportToken,
            std::shared_ptr<const Declaration> declaration) :
            Declaration(SyntaxNodeType::ExportDeclaration),
            m_exportToken(std::move(exportToken)),
            m_declaration(std::move(declaration))
        {
        }

    public:
        /// <summary>
        /// Create an outer node with this node and the provided parent
        /// </summary>
        std::shared_ptr<const OuterTree::ExportDeclaration> CreateOuter(
            const OuterTree::SyntaxNode* parentNode) const
        {
            return OuterTree::SyntaxWrapper::CreateOuter(
                GetSelf<ExportDeclaration>(),
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
        /// Gets the export token.
        /// </summary>
        const SyntaxToken& GetExportToken() const
        {
            return *m_exportToken;
        }

        /// <summary>
        /// Gets the exported declaration
        /// </summary>
        const Declaration& GetDeclaration() const
        {
            return *m_declaration;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const ExportDeclaration& rhs) const
        {
            return *m_exportToken == *rhs.m_exportToken &&
                *m_declaration == *rhs.m_declaration;
        }

        bool operator !=(const ExportDeclaration& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const ExportDeclaration&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxToken> m_exportToken;
        std::shared_ptr<const Declaration> m_declaration;
    };
}
