#pragma once
#include "Expression.h"
#include "LiteralType.h"

namespace Soup::Syntax
{
    /// <summary>
    /// A literal expression
    /// </summary>
    export class LiteralExpression final : public Expression
    {
    public:
        /// <summary>
        /// Initialize
        /// </summary>
        LiteralExpression(LiteralType type, std::string value);

        /// <summary>
        /// Gets or sets the type
        /// </summary>
        LiteralType GetType() const;

        /// <summary>
        /// Gets or sets the value
        /// </summary>
        const std::string& GetValue() const;

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const LiteralExpression& rhs) const;
        bool operator !=(const LiteralExpression& rhs) const;

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
        LiteralType m_type;
        std::string m_value;
    };
}
