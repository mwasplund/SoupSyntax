#pragma once
#include "Literal.h"

namespace Soup::Syntax
{
    /// <summary>
    /// An integer value
    /// </summary>
    export class IntegerLiteral final : public Literal
    {
    private:
        int value;

    public:
        /// <summary>
        /// Initialize
        /// </summary>
        IntegerLiteral(int value);

        /// <summary>
        /// Gets or sets the value
        /// </summary>
        int GetValue() const;

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const IntegerLiteral& rhs) const;
        bool operator !=(const IntegerLiteral& rhs) const;

        /// <summary>
        /// Convert to string representation
        /// </summary>
        virtual std::string ToString() const override final;

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final;
    };
}
