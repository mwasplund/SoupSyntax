#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// If statement node
    /// </summary>
    export class IfStatement final : public Statement
    {
        friend class SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        IfStatement(
            std::shared_ptr<const SyntaxToken> ifToken,
            std::shared_ptr<const SyntaxToken> leftParenthesisToken,
            std::shared_ptr<const Expression> conditionExpression,
            std::shared_ptr<const SyntaxToken> rightParenthesisToken,
            std::shared_ptr<const Statement> statement,
            std::shared_ptr<const ElseClause> elseClause) :
            Statement(SyntaxNodeType::IfStatement),
            m_ifToken(std::move(ifToken)),
            m_leftParenthesisToken(std::move(leftParenthesisToken)),
            m_conditionExpression(std::move(conditionExpression)),
            m_rightParenthesisToken(std::move(rightParenthesisToken)),
            m_statement(std::move(statement)),
            m_elseClause(std::move(elseClause))
        {
        }

    public:
        /// <summary>
        /// Gets the SyntaxToken for the if keyword.
        /// </summary>
        const SyntaxToken& GetIfToken() const
        {
            return *m_ifToken;
        }

        /// <summary>
        /// Gets the SyntaxToken for the left parenthesis of the condition.
        /// </summary>
        const SyntaxToken& GetLeftParenthesisToken() const
        {
            return *m_leftParenthesisToken;
        }

        /// <summary>
        /// Gets the root expression for the condition.
        /// </summary>
        const Expression& GetConditionExpression() const
        {
            return *m_conditionExpression;
        }

        /// <summary>
        /// Gets the SyntaxToken for the right parenthesis of the condition.
        /// </summary>
        const SyntaxToken& GetRightParenthesisToken() const
        {
            return *m_rightParenthesisToken;
        }

        /// <summary>
        /// Gets the Statement that is executed when the condition evaluates to true.
        /// </summary>
        const Statement& GetStatement() const
        {
            return *m_statement;
        }

        /// <summary>
        /// Gets the optional else clause of the if statment that is executed when the 
        /// condition evaluates to false.
        /// </summary>
        const ElseClause& GetElseClause() const
        {
            return *m_elseClause;
        }

        /// <summary>
        /// Gets a value indicating whether there is an optional else clause.
        /// </summary>
        bool HasElseClause() const
        {
            return m_elseClause != nullptr;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            std::vector<SyntaxNodeChild> children(
            {
                SyntaxNodeChild(m_ifToken),
                SyntaxNodeChild(m_leftParenthesisToken),
                SyntaxNodeChild(m_conditionExpression),
                SyntaxNodeChild(m_rightParenthesisToken),
                SyntaxNodeChild(m_statement),
            });

            if (HasElseClause())
            {
                children.push_back(SyntaxNodeChild(m_elseClause));
            }

            return children;
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
        bool operator ==(const IfStatement& rhs) const
        {
            // The else clause is optional
            bool elseClauseEqual = false;
            if (!HasElseClause() || !rhs.HasElseClause())
            {
                elseClauseEqual = !HasElseClause() && !rhs.HasElseClause();
            }
            else
            {
                elseClauseEqual = *m_elseClause == *rhs.m_elseClause;
            }

            return *m_ifToken == *rhs.m_ifToken &&
                *m_leftParenthesisToken  == *rhs.m_leftParenthesisToken &&
                *m_conditionExpression  == *rhs.m_conditionExpression &&
                *m_rightParenthesisToken  == *rhs.m_rightParenthesisToken &&
                *m_statement  == *rhs.m_statement &&
                elseClauseEqual;
        }

        bool operator !=(const IfStatement& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const IfStatement&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxToken> m_ifToken;
        std::shared_ptr<const SyntaxToken> m_leftParenthesisToken;
        std::shared_ptr<const Expression> m_conditionExpression;
        std::shared_ptr<const SyntaxToken> m_rightParenthesisToken;
        std::shared_ptr<const Statement> m_statement;
        std::shared_ptr<const ElseClause> m_elseClause;
    };
}
