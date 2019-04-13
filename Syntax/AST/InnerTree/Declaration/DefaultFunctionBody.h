#pragma once

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// The explicit default function body
    /// </summary>
    export class DefaultFunctionBody final : public SyntaxNode
    {
        friend class ::Soup::Syntax::SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        DefaultFunctionBody(
            std::shared_ptr<const SyntaxToken> equalToken,
            std::shared_ptr<const SyntaxToken> defaultToken,
            std::shared_ptr<const SyntaxToken> semicolonToken) :
            SyntaxNode(SyntaxNodeType::DefaultFunctionBody),
            m_equalToken(std::move(equalToken)),
            m_defaultToken(std::move(defaultToken)),
            m_semicolonToken(std::move(semicolonToken))
        {
        }

    public:
        /// <summary>
        /// Get the equal token
        /// </summary>
        const SyntaxToken& GetEqualToken() const
        {
            return *m_equalToken;
        }

        /// <summary>
        /// Get the default token
        /// </summary>
        const SyntaxToken& GetDefaultToken() const
        {
            return *m_defaultToken;
        }

        /// <summary>
        /// Get the semicolon token
        /// </summary>
        const SyntaxToken& GetSemicolonToken() const
        {
            return *m_semicolonToken;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const DefaultFunctionBody& rhs) const
        {
            return *m_equalToken == *rhs.m_equalToken &&
                *m_defaultToken == *rhs.m_defaultToken &&
                *m_semicolonToken == *rhs.m_semicolonToken;
        }

        bool operator !=(const DefaultFunctionBody& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const DefaultFunctionBody&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxToken> m_equalToken;
        std::shared_ptr<const SyntaxToken> m_defaultToken;
        std::shared_ptr<const SyntaxToken> m_semicolonToken;
    };
}
