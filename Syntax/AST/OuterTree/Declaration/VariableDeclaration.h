﻿#pragma once

namespace Soup::Syntax::OuterTree
{
    /// <summary>
    /// The varaible declaration
    /// </summary>
    export class VariableDeclaration final : public Declaration
    {
        friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        VariableDeclaration(
            std::shared_ptr<const InnerTree::VariableDeclaration> innerNode,
            const SyntaxNode* parentNode) :
            Declaration(innerNode, parentNode),
            m_declarationSpecifier(innerNode->GetDeclarationSpecifier().CreateOuter(this)),
            m_initializerDeclaratorList(innerNode->GetInitializerDeclaratorList().CreateOuter(this))
        {
        }

    public:
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
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            return std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(m_declarationSpecifier),
                    SyntaxNodeChild(m_initializerDeclaratorList),
                });
        }

        /// <summary>
        /// Visitor Accept
        /// </summary>
        virtual void Accept(ISyntaxVisitor& visitor) const override final
        {
            visitor.Visit(*this);
        }

    private:
        std::shared_ptr<const DeclarationSpecifier> m_declarationSpecifier;
        std::shared_ptr<const InitializerDeclaratorList> m_initializerDeclaratorList;
    };
}
