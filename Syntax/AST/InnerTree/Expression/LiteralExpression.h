#pragma once

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// A literal expression
    /// </summary>
    export class LiteralExpression final : public Expression
    {
        friend class ::Soup::Syntax::SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        LiteralExpression(
            LiteralType type,
            std::shared_ptr<const SyntaxToken> token) :
            Expression(SyntaxNodeType::LiteralExpression),
            m_type(type),
            m_token(std::move(token))
        {
        }

    public:
        /// <summary>
        /// Gets the type
        /// </summary>
        LiteralType GetLiteralType() const
        {
            return m_type;
        }

        /// <summary>
        /// Gets the token
        /// </summary>
        const SyntaxToken& GetToken() const
        {
            return *m_token;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const LiteralExpression& rhs) const
        {
            return m_type == rhs.m_type &&
                *m_token == *rhs.m_token;
        }

        bool operator !=(const LiteralExpression& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const LiteralExpression&>(rhs);
        }

    private:
        LiteralType m_type;
        std::shared_ptr<const SyntaxToken> m_token;
    };
}
