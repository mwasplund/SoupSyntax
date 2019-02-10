#pragma once
#include "LiteralExpression.h"

namespace Soup::Syntax
{
    /// <summary>
    /// An integer literal expression
    /// </summary>
    export class IntegerLiteralExpression final : public LiteralExpression
    {
    public:
        /// <summary>
        /// Initialize
        /// </summary>
        IntegerLiteralExpression(int value);

        /// <summary>
        /// Gets or sets the value
        /// </summary>
        int GetValue() const;

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const IntegerLiteralExpression& rhs) const;
        bool operator !=(const IntegerLiteralExpression& rhs) const;

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
        int m_value;
    };
}
