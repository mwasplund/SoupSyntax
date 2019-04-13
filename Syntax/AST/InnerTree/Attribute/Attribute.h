#pragma once

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// The attribute
    /// </summary>
    export class Attribute final : public SyntaxNode
    {
        friend class ::Soup::Syntax::SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        Attribute(
            std::shared_ptr<const SyntaxToken> identifierToken) :
            SyntaxNode(SyntaxNodeType::Attribute),
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
        bool operator ==(const Attribute& rhs) const
        {
            return *m_identifierToken == *rhs.m_identifierToken;
        }

        bool operator !=(const Attribute& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const Attribute&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxToken> m_identifierToken;
    };
}
