﻿#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// A statement that introduces, creates, and optionally initializes 
    /// one or more identifiers.
    /// </summary>
    export class SimpleDeclarationStatement final : public Statement
    {
        friend class SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        SimpleDeclarationStatement(
            std::shared_ptr<const DeclarationSpecifier> declarationSpecifier,
            std::shared_ptr<const InitializerDeclaratorList> initializerDeclaratorList,
            std::shared_ptr<const SyntaxToken> semicolonToken) :
            Statement(SyntaxNodeType::SimpleDeclarationStatement),
            m_declarationSpecifier(std::move(declarationSpecifier)),
            m_initializerDeclaratorList(std::move(initializerDeclaratorList)),
            m_semicolonToken(std::move(semicolonToken))
        {
        }

    public:
        /// <summary>
        /// Gets the DeclarationSpecifier.
        /// </summary>
        const DeclarationSpecifier& GetDeclarationSpecifier() const
        {
            return *m_declarationSpecifier;
        }

        /// <summary>
        /// Gets the InitializerDeclaratorList.
        /// </summary>
        const InitializerDeclaratorList& GetInitializerDeclaratorList() const
        {
            return *m_initializerDeclaratorList;
        }

        /// <summary>
        /// Gets the SyntaxToken for the semicolon.
        /// </summary>
        const SyntaxToken& GetSemicolonToken() const
        {
            return *m_semicolonToken;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            std::vector<SyntaxNodeChild> children(
            {
                SyntaxNodeChild(m_declarationSpecifier),
                SyntaxNodeChild(m_initializerDeclaratorList),
                SyntaxNodeChild(m_semicolonToken),
            });

            return children;
        }

        /// <summary>
        /// Visitor Accept
        /// </summary>
        virtual void Accept(ISyntaxVisitor& visitor) const override final
        {
            visitor.Visit(*this);
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const SimpleDeclarationStatement& rhs) const
        {
            return *m_declarationSpecifier == *rhs.m_declarationSpecifier &&
                *m_initializerDeclaratorList == *rhs.m_initializerDeclaratorList &&
                *m_semicolonToken == *rhs.m_semicolonToken;
        }

        bool operator !=(const SimpleDeclarationStatement& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const SimpleDeclarationStatement&>(rhs);
        }

    private:
        std::shared_ptr<const DeclarationSpecifier> m_declarationSpecifier;
        std::shared_ptr<const InitializerDeclaratorList> m_initializerDeclaratorList;
        std::shared_ptr<const SyntaxToken> m_semicolonToken;
    };
}
