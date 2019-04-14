#pragma once

namespace Soup::Syntax::OuterTree
{
    /// <summary>
    /// A statement that introduces, creates, and optionally initializes 
    /// one or more identifiers as a member of a class.
    /// TODO: May want to rename if MemberDeclaration is used in class heirarchy
    /// </summary>
    export class MemberDeclaration final : public Declaration
    {
        friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        MemberDeclaration(
            std::shared_ptr<const InnerTree::MemberDeclaration> innerNode,
            const SyntaxNode* parentNode) :
            Declaration(innerNode, parentNode),
            m_declarationSpecifier(innerNode->GetDeclarationSpecifier().CreateOuter(this)),
            m_memberDeclaratorList(innerNode->GetMemberDeclaratorList().CreateOuter(this)),
            m_semicolonToken(innerNode->GetSemicolonToken().CreateOuter(this))
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
        /// Gets the MemberDeclaratorList.
        /// </summary>
        const MemberDeclaratorList& GetMemberDeclaratorList() const
        {
            return *m_memberDeclaratorList;
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
                SyntaxNodeChild(m_memberDeclaratorList),
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

    private:
        std::shared_ptr<const DeclarationSpecifier> m_declarationSpecifier;
        std::shared_ptr<const MemberDeclaratorList> m_memberDeclaratorList;
        std::shared_ptr<const SyntaxToken> m_semicolonToken;
    };
}
