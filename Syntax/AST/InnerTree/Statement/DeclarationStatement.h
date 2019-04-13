#pragma once

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// Declaration statement node that allows for block declarations to 
    /// also be interpreted as statements
    /// TODO: Possibly introduce BlockDeclaration class to limit declarations allowed
    /// </summary>
    export class DeclarationStatement final : public Statement
    {
        friend class ::Soup::Syntax::SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        DeclarationStatement(
            std::shared_ptr<const Declaration> declaration) :
            Statement(SyntaxNodeType::DeclarationStatement),
            m_declaration(std::move(declaration))
        {
        }

    public:
        /// <summary>
        /// Gets the declaration
        /// </summary>
        const Declaration& GetDeclaration() const
        {
            return *m_declaration;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const DeclarationStatement& rhs) const
        {
            return *m_declaration == *rhs.m_declaration;
        }

        bool operator !=(const DeclarationStatement& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const DeclarationStatement&>(rhs);
        }

    private:
        std::shared_ptr<const Declaration> m_declaration;
    };
}
