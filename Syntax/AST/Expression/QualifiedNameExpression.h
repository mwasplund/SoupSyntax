#pragma once
#include "SimpleNameExpression.h"

namespace Soup::Syntax
{
    /// <summary>
    /// A Qualified name expression
    /// </summary>
    export class QualifiedNameExpression final : public NameExpression
    {
    public:
        /// <summary>
        /// Initialize
        /// </summary>
        QualifiedNameExpression(
            std::shared_ptr<NameExpression> left,
            std::shared_ptr<SimpleNameExpression> right);

        /// <summary>
        /// Gets the left name expression
        /// Can be either recursive qualified or simple.
        /// </summary>
        const NameExpression& GetLeft() const;

        /// <summary>
        /// Gets the right simple name expressions
        /// </summary>
        const SimpleNameExpression& GetRight() const;

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const QualifiedNameExpression& rhs) const;
        bool operator !=(const QualifiedNameExpression& rhs) const;

        /// <summary>
        /// Convert to string representation
        /// </summary>
        virtual std::string ToString() const override final;

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final;

    private:
        std::shared_ptr<NameExpression> m_left;
        std::shared_ptr<SimpleNameExpression> m_right;
    };
}
