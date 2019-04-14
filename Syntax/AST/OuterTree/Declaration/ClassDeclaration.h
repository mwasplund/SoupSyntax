#pragma once

namespace Soup::Syntax::OuterTree
{
    /// <summary>
    /// Class declaration
    /// </summary>
    export class ClassDeclaration final : public Declaration
    {
        friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        ClassDeclaration(
            std::shared_ptr<const InnerTree::ClassDeclaration> innerNode,
            const SyntaxNode* parentNode) :
            Declaration(innerNode, parentNode),
            m_classToken(innerNode->GetClassToken().CreateOuter(this)),
            m_identifierToken(innerNode->GetIdentifierToken().CreateOuter(this)),
            m_openBraceToken(innerNode->GetOpenBraceToken().CreateOuter(this)),
            m_memberDeclarations(innerNode->GetMemberDeclarations().CreateOuter<Declaration>(this)),
            m_closeBraceToken(innerNode->GetCloseBraceToken().CreateOuter(this))
        {
        }

    public:
        /// <summary>
        /// Gets the optional SyntaxToken for the class/struct keyword.
        /// </summary>
        const SyntaxToken& GetClassToken() const
        {
            return *m_classToken;
        }

        /// <summary>
        /// Gets a value indicating whether the optional SyntaxToken 
        /// for the identifier is present.
        /// </summary>
        bool HasIdentifierToken() const
        {
            return m_identifierToken != nullptr;
        }

        /// <summary>
        /// Gets the optional SyntaxToken for the class/struct keyword.
        /// </summary>
        const SyntaxToken& GetIdentifierToken() const
        {
            if (!HasIdentifierToken())
                throw std::runtime_error("No IdentifierToken present.");
            return *m_identifierToken;
        }

        /// <summary>
        /// Gets the SyntaxToken for the left brace.
        /// </summary>
        const SyntaxToken& GetOpenBraceToken() const
        {
            return *m_openBraceToken;
        }

        /// <summary>
        /// Gets the list of member declarations
        /// </summary>
        const SyntaxList<Declaration>& GetMemberDeclarations() const
        {
            return *m_memberDeclarations;
        }

        /// <summary>
        /// Gets the SyntaxToken for the right brace.
        /// </summary>
        const SyntaxToken& GetCloseBraceToken() const
        {
            return *m_closeBraceToken;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            std::vector<SyntaxNodeChild> children;

            children.push_back(SyntaxNodeChild(m_classToken));

            if (HasIdentifierToken())
            {
                children.push_back(SyntaxNodeChild(m_identifierToken));
            }

            children.push_back(SyntaxNodeChild(m_openBraceToken));
    
            auto memberDeclarationChildren = m_memberDeclarations->GetChildren();
            children.insert(children.end(), memberDeclarationChildren.begin(), memberDeclarationChildren.end());

            children.push_back(SyntaxNodeChild(m_closeBraceToken));

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
        std::shared_ptr<const SyntaxToken> m_classToken;
        std::shared_ptr<const SyntaxToken> m_identifierToken;
        std::shared_ptr<const SyntaxToken> m_openBraceToken;
        std::shared_ptr<const SyntaxList<Declaration>> m_memberDeclarations;
        std::shared_ptr<const SyntaxToken> m_closeBraceToken;
    };
}
