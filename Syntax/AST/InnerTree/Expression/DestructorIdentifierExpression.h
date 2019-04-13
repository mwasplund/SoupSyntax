#pragma once

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// A class destructor identifier expression
    /// </summary>
    export class DestructorIdentifierExpression final : public UnqualifiedIdentifierExpression
    {
        friend class ::Soup::Syntax::SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        DestructorIdentifierExpression(
            std::shared_ptr<const SyntaxToken> tildeToken,
            std::shared_ptr<const SyntaxToken> identifierToken) :
            UnqualifiedIdentifierExpression(SyntaxNodeType::DestructorIdentifierExpression),
            m_tildeToken(std::move(tildeToken)),
            m_identifierToken(std::move(identifierToken))
        {
        }

    public:
        /// <summary>
        /// Gets the tilde token
        /// </summary>
        const SyntaxToken& GetTildeToken() const
        {
            return *m_tildeToken;
        }

        /// <summary>
        /// Gets the identifier token
        /// </summary>
        const SyntaxToken& GetIdentifierToken() const
        {
            return *m_identifierToken;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const DestructorIdentifierExpression& rhs) const
        {
            return *m_tildeToken == *rhs.m_tildeToken &&
                *m_identifierToken == *rhs.m_identifierToken;
        }

        bool operator !=(const DestructorIdentifierExpression& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const DestructorIdentifierExpression&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxToken> m_tildeToken;
        std::shared_ptr<const SyntaxToken> m_identifierToken;
    };
}
