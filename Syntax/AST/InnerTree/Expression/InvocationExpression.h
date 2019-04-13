﻿#pragma once

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// Invocation Expression that represents an invocation of a single
    /// function.
    /// Ex. "DoWork(1, 2)"
    /// </summary>
    export class InvocationExpression : public Expression
    {
        friend class ::Soup::Syntax::SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        InvocationExpression(
            std::shared_ptr<const Expression> leftExpression,
            std::shared_ptr<const SyntaxToken> openParenthesis, 
            std::shared_ptr<const SyntaxSeparatorList<Expression>> parameters,
            std::shared_ptr<const SyntaxToken> closeParenthesis) :
            Expression(SyntaxNodeType::InvocationExpression),
            m_leftExpression(std::move(leftExpression)),
            m_openParenthesis(std::move(openParenthesis)),
            m_parameters(std::move(parameters)),
            m_closeParenthesis(std::move(closeParenthesis))
        {
        }

    public:
        /// <summary>
        /// The left expression
        /// </summary>
        const Expression& GetLeftExpression() const
        {
            return *m_leftExpression;
        }

        /// <summary>
        /// The open parenthesis token
        /// </summary>
        const SyntaxToken& GetOpenParenthesisToken() const
        {
            return *m_openParenthesis;
        }

        /// <summary>
        /// Gets the list of parameters
        /// </summary>
        const SyntaxSeparatorList<Expression>& GetParameters() const
        {
            return *m_parameters;
        }

        /// <summary>
        /// The close parenthesis token
        /// </summary>
        const SyntaxToken& GetCloseParenthesisToken() const
        {
            return *m_closeParenthesis;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const InvocationExpression& rhs) const
        {
            return *m_leftExpression == *rhs.m_leftExpression &&
                *m_openParenthesis == *rhs.m_openParenthesis &&
                *m_parameters == *rhs.m_parameters &&
                *m_closeParenthesis == *rhs.m_closeParenthesis;
        }

        bool operator !=(const InvocationExpression& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const InvocationExpression&>(rhs);
        }

    private:
        std::shared_ptr<const Expression> m_leftExpression;
        std::shared_ptr<const SyntaxToken> m_openParenthesis;
        std::shared_ptr<const SyntaxSeparatorList<Expression>> m_parameters;
        std::shared_ptr<const SyntaxToken> m_closeParenthesis;
    };
}