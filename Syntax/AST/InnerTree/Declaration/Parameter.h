#pragma once

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// The parameter
    /// </summary>
    export class Parameter final : public SyntaxNode
    {
        friend class ::Soup::Syntax::SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        Parameter(
            std::shared_ptr<const SyntaxNode> declarationSpecifier,
            std::shared_ptr<const SyntaxNode> declarator) :
            SyntaxNode(SyntaxNodeType::Parameter),
            m_declarationSpecifier(std::move(declarationSpecifier)),
            m_declarator(std::move(declarator))
        {
        }

    public:
        /// <summary>
        /// Gets the list of declaration specifier sequence
        /// </summary>
        const SyntaxNode& GetDeclarationSpecifier() const
        {
            return *m_declarationSpecifier;
        }

        /// <summary>
        /// Gets the declarator
        /// </summary>
        const SyntaxNode& GetDeclarator() const
        {
            return *m_declarator;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const Parameter& rhs) const
        {
            return *m_declarationSpecifier == *rhs.m_declarationSpecifier &&
                *m_declarator == *rhs.m_declarator;
        }

        bool operator !=(const Parameter& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const Parameter&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxNode> m_declarationSpecifier;
        std::shared_ptr<const SyntaxNode> m_declarator;
    };
}
