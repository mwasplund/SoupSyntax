#pragma once
#include "LiteralNode.h"

namespace Soup::Syntax
{
    /// <summary>
    /// An integer value
    /// </summary>
    export class IntegerLiteral : public LiteralNode
    {
    private:
        int value;

    public:
        /// <summary>
        /// Gets or sets the value
        /// </summary>
        int GetValue() const;

        /// <summary>
        /// Initialize
        /// </summary>
        IntegerLiteral(int value);

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const IntegerLiteral& rhs) const;

        /// <summary>
        /// Inequality operator
        /// </summary>
        bool operator !=(const IntegerLiteral& rhs) const;

    protected:
        /// <summary>
        /// Node Equals
        /// </summary>
        virtual bool Equals(const Node& rhs) const final;
    };
}
