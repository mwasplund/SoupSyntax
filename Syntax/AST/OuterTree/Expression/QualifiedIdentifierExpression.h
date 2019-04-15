#pragma once

namespace Soup::Syntax::OuterTree
{
    /// <summary>
    /// A Qualified identifier expression
    /// Includes a double colon qualifier for a simple name along with
    /// an optional recursive name expression that can be either another
    /// qualified name or a simple name.
    /// TODO: All items to the left must be either identifier or template
    /// see if we can subclass the left to force this
    /// </summary>
    export class QualifiedIdentifierExpression final : public IdentifierExpression
    {
        friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        QualifiedIdentifierExpression(
            std::shared_ptr<const InnerTree::QualifiedIdentifierExpression> innerNode,
            const SyntaxNode* parentNode) :
            IdentifierExpression(innerNode, parentNode),
            m_left(
                innerNode->HasLeft() ?
                    innerNode->GetLeft().CreateOuter<IdentifierExpression>(this) :
                    nullptr),
            m_scopeResolutionToken(innerNode->GetScopeResolutionToken().CreateOuter(this)),
            m_right(innerNode->GetRight().CreateOuter<UnqualifiedIdentifierExpression>(this))
        {
        }

    public:
        /// <summary>
        /// Checks if there is an optional left
        /// </summary>
        bool HasLeft() const
        {
            return m_left != nullptr;
        }

        /// <summary>
        /// Gets the left name expression
        /// Can be either recursive qualified or simple.
        /// </summary>
        const IdentifierExpression& GetLeft() const
        {
            if (!HasLeft())
                throw std::runtime_error("No LeftExpression present.");
            return *m_left;
        }

        /// <summary>
        /// Gets the scope resolution operator nested name specifier
        /// </summary>
        const SyntaxToken& GetScopeResolutionToken() const
        {
            return *m_scopeResolutionToken;
        }

        /// <summary>
        /// Gets the right simple name expressions
        /// </summary>
        const UnqualifiedIdentifierExpression& GetRight() const
        {
            return *m_right;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            std::vector<SyntaxNodeChild> children;
            if (HasLeft())
            {
                children.push_back(SyntaxNodeChild(m_left));
            }

            children.push_back(SyntaxNodeChild(m_scopeResolutionToken));
            children.push_back(SyntaxNodeChild(m_right));

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
        std::shared_ptr<const IdentifierExpression> m_left;
        std::shared_ptr<const SyntaxToken> m_scopeResolutionToken;
        std::shared_ptr<const UnqualifiedIdentifierExpression> m_right;
    };
}
