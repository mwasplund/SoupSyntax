#pragma once
#include "ArithmeticExpression.h"

namespace Soup::Syntax
{
    /// <summary>
    /// Addition
    /// </summary>
    export class AdditionExpression : ArithmeticExpression
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
    };
}
