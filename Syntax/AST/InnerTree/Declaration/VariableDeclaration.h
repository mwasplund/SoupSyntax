﻿#pragma once

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// The varaible declaration
    /// </summary>
    export class VariableDeclaration final : public Declaration
    {
    public:
        /// <summary>
        /// Initialize
        /// </summary>
        VariableDeclaration(
            std::shared_ptr<const DeclarationSpecifier>&& declarationSpecifier,
            std::shared_ptr<const InitializerDeclaratorList>&& initializerDeclaratorList) :
            Declaration(SyntaxNodeType::SimpleDefinition),
            m_declarationSpecifier(std::move(declarationSpecifier)),
            m_initializerDeclaratorList(std::move(initializerDeclaratorList))
        {
        }

        /// <summary>
        /// Gets the specifiers
        /// </summary>
        const DeclarationSpecifier& GetDeclarationSpecifier() const
        {
            return *m_declarationSpecifier;
        }

        /// <summary>
        /// Gets the optional initializer
        /// </summary>
        const InitializerDeclaratorList& GetInitializerDeclaratorList() const
        {
            return *m_initializerDeclaratorList;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const SimpleDefinition& rhs) const
        {
            return *m_declarationSpecifier == *rhs.m_declarationSpecifier &&
                *m_initializerDeclaratorList == *rhs.m_initializerDeclaratorList;
        }

        bool operator !=(const SimpleDefinition& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const SimpleDefinition&>(rhs);
        }

    private:
        std::shared_ptr<const DeclarationSpecifier> m_declarationSpecifier;
        std::shared_ptr<const InitializerDeclaratorList> m_initializerDeclaratorList;
    };
}