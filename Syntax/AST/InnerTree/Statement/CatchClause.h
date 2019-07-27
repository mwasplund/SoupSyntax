#pragma once
#include "CompoundStatement.h"

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// Try statement catch clause node
    /// </summary>
    export class CatchClause final : public SyntaxNode
    {
        friend class ::Soup::Syntax::SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        CatchClause(
            std::shared_ptr<const SyntaxToken> catchToken,
            std::shared_ptr<const SyntaxToken> openParenthesisToken,
            std::shared_ptr<const Expression> conditionExpression,
            std::shared_ptr<const SyntaxToken> closeParenthesisToken,
            std::shared_ptr<const CompoundStatement> compoundStatement) :
            SyntaxNode(SyntaxNodeType::CatchClause),
            m_catchToken(std::move(catchToken)),
            m_openParenthesisToken(std::move(openParenthesisToken)),
            m_conditionExpression(std::move(conditionExpression)),
            m_closeParenthesisToken(std::move(closeParenthesisToken)),
            m_compoundStatement(std::move(compoundStatement))
        {
        }

    public:
        /// <summary>
        /// Create an outer node with this node and the provided parent
        /// </summary>
        std::shared_ptr<const OuterTree::CatchClause> CreateOuter(
            const OuterTree::SyntaxNode* parentNode) const
        {
            return OuterTree::SyntaxWrapper::CreateOuter(
                GetSelf<CatchClause>(),
                parentNode);
        }

        /// <summary>
        /// Create an outer node with this node and the provided parent
        /// </summary>
        virtual std::shared_ptr<const OuterTree::SyntaxNode> CreateOuterAny(
            const OuterTree::SyntaxNode* parentNode) const override final
        {
            return std::static_pointer_cast<const OuterTree::SyntaxNode>(
                CreateOuter(parentNode));
        }

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
        const SyntaxToken& GetOpenParenthesisToken() const
        {
            return *m_openParenthesisToken;
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
        const SyntaxToken& GetCloseParenthesisToken() const
        {
            return *m_closeParenthesisToken;
        }

        /// <summary>
        /// Gets the Statement that is executed when the condition evaluates to true.
        /// </summary>
        const CompoundStatement& GetCompoundStatement() const
        {
            return *m_compoundStatement;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const CatchClause& rhs) const
        {
            return *m_catchToken == *rhs.m_catchToken &&
                *m_openParenthesisToken  == *rhs.m_openParenthesisToken &&
                *m_conditionExpression == *rhs.m_conditionExpression &&
                *m_closeParenthesisToken  == *rhs.m_closeParenthesisToken &&
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
        std::shared_ptr<const SyntaxToken> m_openParenthesisToken;
        std::shared_ptr<const Expression> m_conditionExpression;
        std::shared_ptr<const SyntaxToken> m_closeParenthesisToken;
        std::shared_ptr<const CompoundStatement> m_compoundStatement;
    };
}
