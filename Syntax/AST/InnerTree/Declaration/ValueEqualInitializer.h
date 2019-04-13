#pragma once

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// The value equal initializer
    /// </summary>
    export class ValueEqualInitializer final : public SyntaxNode
    {
        friend class ::Soup::Syntax::SyntaxFactory;

    private:
        ValueEqualInitializer(
            std::shared_ptr<const SyntaxToken> equalToken,
            std::shared_ptr<const Expression> expression) :
            SyntaxNode(SyntaxNodeType::ValueEqualInitializer),
            m_equalToken(std::move(equalToken)),
            m_expression(std::move(expression))
        {
        }

    public:
        /// <summary>
        /// Gets the equal token
        /// </summary>
        const SyntaxToken& GetEqualToken() const
        {
            return *m_equalToken;
        }

        /// <summary>
        /// Gets the expression
        /// </summary>
        const SyntaxNode& GetExpression() const
        {
            return *m_expression;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const ValueEqualInitializer& rhs) const
        {
            return *m_equalToken == *rhs.m_equalToken &&
                *m_expression == *rhs.m_expression;
        }

        bool operator !=(const ValueEqualInitializer& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const ValueEqualInitializer&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxToken> m_equalToken;
        std::shared_ptr<const Expression> m_expression;
    };
}
