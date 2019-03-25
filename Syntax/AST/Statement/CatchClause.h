#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// Try statement catch clause node
    /// </summary>
    export class CatchClause final : public SyntaxNode
    {
        friend class SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        CatchClause(
            std::shared_ptr<const SyntaxToken> catchToken,
            std::shared_ptr<const SyntaxToken> leftParenthesisToken,
            std::shared_ptr<const Expression> conditionExpression,
            std::shared_ptr<const SyntaxToken> rightParenthesisToken,
            std::shared_ptr<const CompoundStatement> compoundStatement) :
            SyntaxNode(SyntaxNodeType::CatchClause),
            m_catchToken(std::move(catchToken)),
            m_leftParenthesisToken(std::move(leftParenthesisToken)),
            m_conditionExpression(std::move(conditionExpression)),
            m_rightParenthesisToken(std::move(rightParenthesisToken)),
            m_compoundStatement(std::move(compoundStatement))
        {
        }

    public:
        /// <summary>
        /// Gets the SyntaxToken for the catch keyword.
        /// </summary>
        const SyntaxToken& GetCatchToken() const
        {
            return *m_catchToken;
        }

        /// <summary>
        /// Gets the SyntaxToken for the left parenthesis.
        /// </summary>
        const SyntaxToken& GetLeftParenthesisToken() const
        {
            return *m_leftParenthesisToken;
        }

        /// <summary>
        /// Gets the todo
        /// </summary>
        const Expression& GetConditionExpression() const
        {
            return *m_conditionExpression;
        }

        /// <summary>
        /// Gets the SyntaxToken for the right parenthesis.
        /// </summary>
        const SyntaxToken& GetRightParenthesisToken() const
        {
            return *m_rightParenthesisToken;
        }

        /// <summary>
        /// Gets the Statement that is executed when the condition evaluates to true.
        /// </summary>
        const CompoundStatement& GetCompoundStatement() const
        {
            return *m_compoundStatement;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            return std::vector<SyntaxNodeChild>(
            {
                SyntaxNodeChild(m_catchToken),
                SyntaxNodeChild(m_leftParenthesisToken),
                SyntaxNodeChild(m_conditionExpression),
                SyntaxNodeChild(m_rightParenthesisToken),
                SyntaxNodeChild(m_compoundStatement),
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
        bool operator ==(const CatchClause& rhs) const
        {
            return *m_catchToken == *rhs.m_catchToken &&
                *m_leftParenthesisToken  == *rhs.m_leftParenthesisToken &&
                *m_conditionExpression == *rhs.m_conditionExpression &&
                *m_rightParenthesisToken  == *rhs.m_rightParenthesisToken &&
                *m_compoundStatement  == *rhs.m_compoundStatement;
        }

        bool operator !=(const CatchClause& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const CatchClause&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxToken> m_catchToken;
        std::shared_ptr<const SyntaxToken> m_leftParenthesisToken;
        std::shared_ptr<const Expression> m_conditionExpression;
        std::shared_ptr<const SyntaxToken> m_rightParenthesisToken;
        std::shared_ptr<const CompoundStatement> m_compoundStatement;
    };
}
