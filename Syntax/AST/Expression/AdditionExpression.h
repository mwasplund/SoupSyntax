#pragma once
#include "ArithmeticExpression.h"

namespace Soup::Syntax
{
    /// <summary>
    /// Addition
    /// </summary>
    export class AdditionExpression : public ArithmeticExpression
    {
    public:
        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const AdditionExpression& rhs) const;

        /// <summary>
        /// Inequality operator
        /// </summary>
        bool operator !=(const AdditionExpression& rhs) const;

    protected:
        /// <summary>
        /// Node Equals
        /// </summary>
        virtual bool Equals(const Node& rhs) const final;
    };
}
