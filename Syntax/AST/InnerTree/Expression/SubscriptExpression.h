#pragma once

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// Subscript Expression
    /// </summary>
    export class SubscriptExpression : public Expression
    {
        friend class ::Soup::Syntax::SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        SubscriptExpression(
            std::shared_ptr<const Expression> leftExpression,
            std::shared_ptr<const SyntaxToken> openBracket, 
            std::shared_ptr<const Expression> rightExpression,
            std::shared_ptr<const SyntaxToken> closeBracket) :
            Expression(SyntaxNodeType::SubscriptExpression),
            m_leftExpression(std::move(leftExpression)),
            m_openBracket(std::move(openBracket)),
            m_rightExpression(std::move(rightExpression)),
            m_closeBracket(std::move(closeBracket))
        {
        }

    public:
        /// <summary>
        /// The left expression
        /// </summary>
        const Expression& GetLeft() const
        {
            return *m_leftExpression;
        }

        /// <summary>
        /// The left bracket token
        /// </summary>
        const SyntaxToken& GetOpenBracket() const
        {
            return *m_openBracket;
        }

        /// <summary>
        /// The right expression
        /// </summary>
        const Expression& GetRight() const
        {
            return *m_rightExpression;
        }

        /// <summary>
        /// The right bracket token
        /// </summary>
        const SyntaxToken& GetCloseBracket() const
        {
            return *m_closeBracket;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const SubscriptExpression& rhs) const
        {
            return *m_leftExpression == *rhs.m_leftExpression &&
                *m_openBracket == *rhs.m_openBracket &&
                *m_rightExpression == *rhs.m_rightExpression &&
                *m_closeBracket == *rhs.m_closeBracket;
        }

        bool operator !=(const SubscriptExpression& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const SubscriptExpression&>(rhs);
        }

    private:
        std::shared_ptr<const Expression> m_leftExpression;
        std::shared_ptr<const SyntaxToken> m_openBracket;
        std::shared_ptr<const Expression> m_rightExpression;
        std::shared_ptr<const SyntaxToken> m_closeBracket;
    };
}
