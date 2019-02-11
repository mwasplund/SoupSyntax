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
        LiteralExpression(LiteralType type, std::string value) :
            m_type(type),
            m_value(std::move(value))
        {
        }

        /// <summary>
        /// Gets or sets the type
        /// </summary>
        LiteralType GetType() const
        {
            return m_type;
        }

        /// <summary>
        /// Gets or sets the value
        /// </summary>
        const std::string& GetValue() const
        {
            return m_value;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const LiteralExpression& rhs) const
        {
            return m_type == rhs.m_type &&
                m_value == rhs.m_value;
        }

        bool operator !=(const LiteralExpression& rhs) const
        {
            return !(*this == rhs);
        }

        /// <summary>
        /// Convert to string representation
        /// </summary>
        virtual std::string ToString() const override final
        {
            return std::string("LiteralExpression<") + m_value + ">";
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const LiteralExpression&>(rhs);
        }

    private:
        LiteralType m_type;
        std::string m_value;
    };
}
