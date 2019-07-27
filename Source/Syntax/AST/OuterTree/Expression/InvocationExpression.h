#pragma once

namespace Soup::Syntax::OuterTree
{
    /// <summary>
    /// Invocation Expression that represents an invocation of a single
    /// function.
    /// Ex. "DoWork(1, 2)"
    /// </summary>
    export class InvocationExpression : public Expression
    {
        friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        InvocationExpression(
            std::shared_ptr<const InnerTree::InvocationExpression> innerNode,
            const SyntaxNode* parentNode) :
            Expression(innerNode, parentNode),
            m_leftExpression(innerNode->GetLeftExpression().CreateOuter<Expression>(this)),
            m_openParenthesisToken(innerNode->GetOpenParenthesisToken().CreateOuter(this)),
            m_parameters(innerNode->GetParameters().CreateOuter<SyntaxNode>(this)),
            m_closeParenthesisToken(innerNode->GetCloseParenthesisToken().CreateOuter(this))
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
            return *m_openParenthesisToken;
        }

        /// <summary>
        /// Gets the list of parameters
        /// </summary>
        const SyntaxSeparatorList<SyntaxNode>& GetParameters() const
        {
            return *m_parameters;
        }

        /// <summary>
        /// The close parenthesis token
        /// </summary>
        const SyntaxToken& GetCloseParenthesisToken() const
        {
            return *m_closeParenthesisToken;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            std::vector<SyntaxNodeChild> children;

            children.push_back(SyntaxNodeChild(m_leftExpression));
            children.push_back(SyntaxNodeChild(m_openParenthesisToken));

            auto parameterChildren = m_parameters->GetChildren();
            children.insert(children.end(), parameterChildren.begin(), parameterChildren.end());

            children.push_back(SyntaxNodeChild(m_closeParenthesisToken));

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
        std::shared_ptr<const Expression> m_leftExpression;
        std::shared_ptr<const SyntaxToken> m_openParenthesisToken;
        std::shared_ptr<const SyntaxSeparatorList<SyntaxNode>> m_parameters;
        std::shared_ptr<const SyntaxToken> m_closeParenthesisToken;
    };
}
