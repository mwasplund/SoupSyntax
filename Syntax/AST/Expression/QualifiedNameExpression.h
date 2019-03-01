#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// A Qualified name expression
    /// Includes a double colon qualifier for a simple name along with
    /// an optional recursive name expression that can be either another
    /// qualified name or a simple name.
    /// </summary>
    export class QualifiedNameExpression final : public NameExpression
    {
        friend class SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        QualifiedNameExpression(
            std::shared_ptr<const NameExpression> left,
            std::shared_ptr<const SyntaxToken> scopeResolutionToken,
            std::shared_ptr<const SimpleNameExpression> right) :
            NameExpression(SyntaxNodeType::QualifiedNameExpression),
            m_left(std::move(left)),
            m_scopeResolutionToken(std::move(scopeResolutionToken)),
            m_right(std::move(right))
        {
        }

    public:
        /// <summary>
        /// Create a clone with the right name replaced
        /// </summary>
        std::shared_ptr<const QualifiedNameExpression> WithRight(
            std::shared_ptr<const SimpleNameExpression> right) const
        {
            // TODO : Use syntax factory
            return std::shared_ptr<const QualifiedNameExpression>(
                new QualifiedNameExpression(
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
        const NameExpression& GetLeft() const
        {
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
        const SimpleNameExpression& GetRight() const
        {
            return *m_right;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            return std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(*m_left),
                    SyntaxNodeChild(*m_scopeResolutionToken),
                    SyntaxNodeChild(*m_right),
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
        bool operator ==(const QualifiedNameExpression& rhs) const
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

        bool operator !=(const QualifiedNameExpression& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const QualifiedNameExpression&>(rhs);
        }

    private:
        std::shared_ptr<const NameExpression> m_left;
        std::shared_ptr<const SyntaxToken> m_scopeResolutionToken;
        std::shared_ptr<const SimpleNameExpression> m_right;
    };
}
