﻿#pragma once
#include "Expression.h"
#include "BinaryOperator.h"
#include "SyntaxToken.h"

namespace Soup::Syntax
{
    /// <summary>
    /// Subscript Expression
    /// </summary>
    export class SubscriptExpression : public Expression
    {
        friend class SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        SubscriptExpression(
            std::shared_ptr<const Expression> leftExpression,
            std::shared_ptr<const SyntaxToken> leftBracket, 
            std::shared_ptr<const Expression> rightExpression,
            std::shared_ptr<const SyntaxToken> rightBracket) :
            m_leftExpression(std::move(leftExpression)),
            m_leftBracket(std::move(leftBracket)),
            m_rightExpression(std::move(rightExpression)),
            m_rightBracket(std::move(rightBracket))
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
        const SyntaxToken& GetLeftBracket() const
        {
            return *m_leftBracket;
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
        const SyntaxToken& GetRightBracket() const
        {
            return *m_rightBracket;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const SubscriptExpression& rhs) const
        {
            return *m_leftExpression == *rhs.m_leftExpression &&
                *m_leftBracket == *rhs.m_leftBracket &&
                *m_rightExpression == *rhs.m_rightExpression &&
                *m_rightBracket == *rhs.m_rightBracket;
        }

        bool operator !=(const SubscriptExpression& rhs) const
        {
            return !(*this == rhs);
        }

        /// <summary>
        /// Convert to string representation
        /// </summary>
        virtual std::wstring ToString() const override final
        {
            return L"SubscriptExpression";
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
        std::shared_ptr<const SyntaxToken> m_leftBracket;
        std::shared_ptr<const Expression> m_rightExpression;
        std::shared_ptr<const SyntaxToken> m_rightBracket;
    };
}
