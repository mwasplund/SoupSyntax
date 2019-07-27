#pragma once
#include "CompoundStatement.h"

namespace Soup::Syntax::OuterTree
{
    /// <summary>
    /// Try statement catch clause node
    /// </summary>
    export class CatchClause final : public SyntaxNode
    {
        friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        CatchClause(
            std::shared_ptr<const InnerTree::CatchClause> innerNode,
            const SyntaxNode* parentNode) :
            SyntaxNode(innerNode, parentNode),
            m_catchToken(innerNode->GetCatchToken().CreateOuter(this)),
            m_openParenthesisToken(innerNode->GetOpenParenthesisToken().CreateOuter(this)),
            m_conditionExpression(innerNode->GetConditionExpression().CreateOuter<Expression>(this)),
            m_closeParenthesisToken(innerNode->GetCloseParenthesisToken().CreateOuter(this)),
            m_compoundStatement(innerNode->GetCompoundStatement().CreateOuter(this))
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
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            return std::vector<SyntaxNodeChild>(
            {
                SyntaxNodeChild(m_catchToken),
                SyntaxNodeChild(m_openParenthesisToken),
                SyntaxNodeChild(m_conditionExpression),
                SyntaxNodeChild(m_closeParenthesisToken),
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

    private:
        std::shared_ptr<const SyntaxToken> m_catchToken;
        std::shared_ptr<const SyntaxToken> m_openParenthesisToken;
        std::shared_ptr<const Expression> m_conditionExpression;
        std::shared_ptr<const SyntaxToken> m_closeParenthesisToken;
        std::shared_ptr<const CompoundStatement> m_compoundStatement;
    };
}
