#pragma once

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// Enum declaration
    /// </summary>
    export class EnumDeclaration final : public Declaration
    {
        friend class ::Soup::Syntax::SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        EnumDeclaration(
            std::shared_ptr<const SyntaxToken> enumToken,
            std::shared_ptr<const SyntaxToken> classToken,
            std::shared_ptr<const SyntaxToken> identifierToken,
            std::shared_ptr<const SyntaxToken> openBraceToken,
            std::shared_ptr<const SyntaxSeparatorList<EnumeratorDefinition>> enumeratorList,
            std::shared_ptr<const SyntaxToken> closeBraceToken) :
            Declaration(SyntaxNodeType::EnumDeclaration),
            m_enumToken(std::move(enumToken)),
            m_classToken(std::move(classToken)),
            m_identifierToken(std::move(identifierToken)),
            m_openBraceToken(std::move(openBraceToken)),
            m_enumeratorList(std::move(enumeratorList)),
            m_closeBraceToken(std::move(closeBraceToken))
        {
        }

    public:
        /// <summary>
        /// Create an outer node with this node and the provided parent
        /// </summary>
        std::shared_ptr<const OuterTree::EnumDeclaration> CreateOuter(
            const OuterTree::SyntaxNode* parentNode) const
        {
            return OuterTree::SyntaxWrapper::CreateOuter(
                GetSelf<EnumDeclaration>(),
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
        /// Gets the SyntaxToken for the enum keyword.
        /// </summary>
        const SyntaxToken& GetEnumToken() const
        {
            return *m_enumToken;
        }

        /// <summary>
        /// Gets a value indicating whether the optional SyntaxToken 
        /// for the class/struct keyword is present.
        /// </summary>
        bool HasClassToken() const
        {
            return m_classToken != nullptr;
        }

        /// <summary>
        /// Gets the optional SyntaxToken for the class/struct keyword.
        /// </summary>
        const SyntaxToken& GetClassToken() const
        {
            if (!HasClassToken())
                throw std::runtime_error("No ClassToken present.");
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
        /// Gets the list of enumerators
        /// </summary>
        const SyntaxSeparatorList<EnumeratorDefinition>& GetEnumeratorList() const
        {
            return *m_enumeratorList;
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
        bool operator ==(const EnumDeclaration& rhs) const
        {
            return *m_enumToken == *rhs.m_enumToken &&
                SyntaxUtils::AreOptionalValuesEqual(m_classToken, rhs.m_classToken) &&
                SyntaxUtils::AreOptionalValuesEqual(m_identifierToken, rhs.m_identifierToken) &&
                *m_openBraceToken == *rhs.m_openBraceToken &&
                *m_enumeratorList == *rhs.m_enumeratorList &&
                *m_closeBraceToken == *rhs.m_closeBraceToken;
        }

        bool operator !=(const EnumDeclaration& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const EnumDeclaration&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxToken> m_enumToken;
        std::shared_ptr<const SyntaxToken> m_classToken;
        std::shared_ptr<const SyntaxToken> m_identifierToken;
        std::shared_ptr<const SyntaxToken> m_openBraceToken;
        std::shared_ptr<const SyntaxSeparatorList<EnumeratorDefinition>> m_enumeratorList;
        std::shared_ptr<const SyntaxToken> m_closeBraceToken;
    };
}
