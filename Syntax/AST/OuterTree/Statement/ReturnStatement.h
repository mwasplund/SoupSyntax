#pragma once

namespace Soup::Syntax::OuterTree
{
    /// <summary>
    /// Return statement node
    /// </summary>
    export class ReturnStatement final : public Statement
    {
        friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        ReturnStatement(
            std::shared_ptr<const InnerTree::ReturnStatement> innerNode,
            const SyntaxNode* parentNode) :
            Statement(innerNode, parentNode),
            m_returnToken(innerNode->GetReturnToken().CreateOuter(this)),
            m_expression(innerNode->GetExpression().CreateOuter<Expression>(this)),
            m_semicolonToken(innerNode->GetSemicolonToken().CreateOuter(this))
        {
        }

    public:
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
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            std::vector<SyntaxNodeChild> children(
            {
                SyntaxNodeChild(m_returnToken),
            });

            if (HasExpression())
            {
                children.push_back(SyntaxNodeChild(m_expression));
            }

            children.push_back(SyntaxNodeChild(m_semicolonToken));

            return children;
        }

        /// <summary>
        /// Visitor Accept
        /// </summary>
        virtual void Accept(ISyntaxVisitor& visitor) const override final
        {
            visitor.Visit(*this);
        }

    private:
        std::shared_ptr<const SyntaxToken> m_returnToken;
        std::shared_ptr<const Expression> m_expression;
        std::shared_ptr<const SyntaxToken> m_semicolonToken;
    };
}
