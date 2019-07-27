#pragma once

namespace Soup::Syntax::OuterTree
{
    /// <summary>
    /// An expression statement that consists of a single root expression 
    /// followed by a semicolon
    /// </summary>
    export class ExpressionStatement final : public Statement
    {
        friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        ExpressionStatement(
            std::shared_ptr<const InnerTree::ExpressionStatement> innerNode,
            const SyntaxNode* parentNode) :
            Statement(innerNode, parentNode),
            m_expression(innerNode->GetExpression().CreateOuter<Expression>(this)),
            m_semicolonToken(innerNode->GetSemicolonToken().CreateOuter(this))
        {
        }

    public:
        /// <summary>
        /// Gets the expression.
        /// </summary>
        const Expression& GetExpression() const
        {
            return *m_expression;
        }

        /// <summary>
        /// Gets the SyntaxToken for the semicolon.
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
                SyntaxNodeChild(m_expression),
                SyntaxNodeChild(m_semicolonToken),
            });

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
        std::shared_ptr<const Expression> m_expression;
        std::shared_ptr<const SyntaxToken> m_semicolonToken;
    };
}
