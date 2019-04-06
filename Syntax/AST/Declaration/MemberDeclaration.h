#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// A statement that introduces, creates, and optionally initializes 
    /// one or more identifiers as a member of a class.
    /// TODO: May want to rename if MemberDeclaration is used in class heirarchy
    /// </summary>
    export class MemberDeclaration final : public Declaration
    {
        friend class SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        MemberDeclaration(
            std::shared_ptr<const DeclarationSpecifier> declarationSpecifier,
            std::shared_ptr<const MemberDeclaratorList> memberDeclaratorList,
            std::shared_ptr<const SyntaxToken> semicolonToken) :
            Declaration(SyntaxNodeType::MemberDeclaration),
            m_declarationSpecifier(std::move(declarationSpecifier)),
            m_memberDeclaratorList(std::move(memberDeclaratorList)),
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

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const MemberDeclaration& rhs) const
        {
            return *m_declarationSpecifier == *rhs.m_declarationSpecifier &&
                *m_memberDeclaratorList == *rhs.m_memberDeclaratorList &&
                *m_semicolonToken == *rhs.m_semicolonToken;
        }

        bool operator !=(const MemberDeclaration& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const MemberDeclaration&>(rhs);
        }

    private:
        std::shared_ptr<const DeclarationSpecifier> m_declarationSpecifier;
        std::shared_ptr<const MemberDeclaratorList> m_memberDeclaratorList;
        std::shared_ptr<const SyntaxToken> m_semicolonToken;
    };
}
