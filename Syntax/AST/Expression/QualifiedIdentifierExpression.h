#pragma once

namespace Soup::Syntax
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
        friend class SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        QualifiedIdentifierExpression(
            std::shared_ptr<const IdentifierExpression> left,
            std::shared_ptr<const SyntaxToken> scopeResolutionToken,
            std::shared_ptr<const UnqualifiedIdentifierExpression> right) :
            IdentifierExpression(SyntaxNodeType::QualifiedIdentifierExpression),
            m_left(std::move(left)),
            m_scopeResolutionToken(std::move(scopeResolutionToken)),
            m_right(std::move(right))
        {
        }

    public:
        /// <summary>
        /// Create a clone with the right identifier replaced
        /// </summary>
        std::shared_ptr<const QualifiedIdentifierExpression> WithRight(
            std::shared_ptr<const UnqualifiedIdentifierExpression> right) const
        {
            // TODO : Use syntax factory
            return std::shared_ptr<const QualifiedIdentifierExpression>(
                new QualifiedIdentifierExpression(
                    m_left,
                    m_scopeResolutionToken,
                    std::move(right)));
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

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const QualifiedIdentifierExpression& rhs) const
        {
            // The left expression is optional
            bool leftEqual = false;
            if (!HasLeft() || !rhs.HasLeft())
            {
                leftEqual = !HasLeft() && !rhs.HasLeft();
            }
            else
            {
                leftEqual = *m_left == *rhs.m_left;
            }

            return leftEqual &&
                *m_scopeResolutionToken == *rhs.m_scopeResolutionToken &&
                *m_right == *rhs.m_right;
        }

        bool operator !=(const QualifiedIdentifierExpression& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const QualifiedIdentifierExpression&>(rhs);
        }

    private:
        std::shared_ptr<const IdentifierExpression> m_left;
        std::shared_ptr<const SyntaxToken> m_scopeResolutionToken;
        std::shared_ptr<const UnqualifiedIdentifierExpression> m_right;
    };
}
