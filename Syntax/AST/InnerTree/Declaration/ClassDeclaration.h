#pragma once

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// Class declaration
    /// </summary>
    export class ClassDeclaration final : public Declaration
    {
        friend class ::Soup::Syntax::SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        ClassDeclaration(
            std::shared_ptr<const SyntaxToken> classToken,
            std::shared_ptr<const SyntaxToken> identifierToken,
            std::shared_ptr<const SyntaxToken> openBraceToken,
            std::shared_ptr<const SyntaxList<Declaration>> memberDeclarations,
            std::shared_ptr<const SyntaxToken> closeBraceToken) :
            Declaration(SyntaxNodeType::ClassDeclaration),
            m_classToken(std::move(classToken)),
            m_identifierToken(std::move(identifierToken)),
            m_openBraceToken(std::move(openBraceToken)),
            m_memberDeclarations(std::move(memberDeclarations)),
            m_closeBraceToken(std::move(closeBraceToken))
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
        /// Equality operator
        /// </summary>
        bool operator ==(const ClassDeclaration& rhs) const
        {
            return *m_classToken == *rhs.m_classToken &&
                SyntaxUtils::AreOptionalValuesEqual(m_identifierToken, rhs.m_identifierToken) &&
                *m_openBraceToken == *rhs.m_openBraceToken &&
                *m_memberDeclarations == *rhs.m_memberDeclarations &&
                *m_closeBraceToken == *rhs.m_closeBraceToken;
        }

        bool operator !=(const ClassDeclaration& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const ClassDeclaration&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxToken> m_classToken;
        std::shared_ptr<const SyntaxToken> m_identifierToken;
        std::shared_ptr<const SyntaxToken> m_openBraceToken;
        std::shared_ptr<const SyntaxList<Declaration>> m_memberDeclarations;
        std::shared_ptr<const SyntaxToken> m_closeBraceToken;
    };
}
