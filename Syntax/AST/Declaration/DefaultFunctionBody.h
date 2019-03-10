#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// The explicit default function body
    /// </summary>
    export class DefaultFunctionBody final : public SyntaxNode
    {
        friend class SyntaxFactory;

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
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            return std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(m_equalToken),
                    SyntaxNodeChild(m_defaultToken),
                    SyntaxNodeChild(m_semicolonToken),
                });
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
