#pragma once

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// A simple identifier expression referencing a single Identifier
    /// </summary>
    export class SimpleIdentifierExpression final : public UnqualifiedIdentifierExpression
    {
        friend class ::Soup::Syntax::SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        SimpleIdentifierExpression(std::shared_ptr<const SyntaxToken> identifierToken) :
            UnqualifiedIdentifierExpression(SyntaxNodeType::SimpleIdentifierExpression),
            m_identifierToken(std::move(identifierToken))
        {
        }

    public:
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
        bool operator ==(const SimpleIdentifierExpression& rhs) const
        {
            return *m_identifierToken == *rhs.m_identifierToken;
        }

        bool operator !=(const SimpleIdentifierExpression& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const SimpleIdentifierExpression&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxToken> m_identifierToken;
    };
}
