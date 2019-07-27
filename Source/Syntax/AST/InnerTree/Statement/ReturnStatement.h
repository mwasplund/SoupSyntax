#pragma once

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// Return statement node
    /// </summary>
    export class ReturnStatement final : public Statement
    {
        friend class ::Soup::Syntax::SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        ReturnStatement(
            std::shared_ptr<const SyntaxToken> returnToken,
            std::shared_ptr<const Expression> expression,
            std::shared_ptr<const SyntaxToken> semicolonToken) :
            Statement(SyntaxNodeType::ReturnStatement),
            m_returnToken(std::move(returnToken)),
            m_expression(std::move(expression)),
            m_semicolonToken(std::move(semicolonToken))
        {
        }

    public:
        /// <summary>
        /// Create an outer node with this node and the provided parent
        /// </summary>
        std::shared_ptr<const OuterTree::ReturnStatement> CreateOuter(
            const OuterTree::SyntaxNode* parentNode) const
        {
            return OuterTree::SyntaxWrapper::CreateOuter(
                GetSelf<ReturnStatement>(),
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
        /// Gets the return keyword
        /// </summary>
        const SyntaxToken& GetReturnToken() const
        {
            return *m_returnToken;
        }

        /// <summary>
        /// Gets the optional expression that is to be evaluated to generate the value
        /// to return.
        /// </summary>
        const Expression& GetExpression() const
        {
            if (!HasExpression())
                throw std::runtime_error("No Expression present.");
            return *m_expression;
        }

        /// <summary>
        /// Gets a value indicating whether there is an optional expression.
        /// </summary>
        bool HasExpression() const
        {
            return m_expression != nullptr;
        }

        /// <summary>
        /// Gets the semicolon token
        /// </summary>
        const SyntaxToken& GetSemicolonToken() const
        {
            return *m_semicolonToken;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const ReturnStatement& rhs) const
        {
            // The expression is optional
            bool expressionEqual = false;
            if (!HasExpression() || !rhs.HasExpression())
            {
                expressionEqual = !HasExpression() && !rhs.HasExpression();
            }
            else
            {
                expressionEqual = *m_expression == *rhs.m_expression;
            }

            return *m_returnToken == *rhs.m_returnToken &&
                expressionEqual &&
                *m_semicolonToken  == *rhs.m_semicolonToken;
        }

        bool operator !=(const ReturnStatement& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const ReturnStatement&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxToken> m_returnToken;
        std::shared_ptr<const Expression> m_expression;
        std::shared_ptr<const SyntaxToken> m_semicolonToken;
    };
}
