#pragma once
#include "Statement.h"

namespace Soup::Syntax
{
    /// <summary>
    /// Return statement node
    /// </summary>
    export class ReturnStatement : Statement
    {
    public:
        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const ReturnStatement& rhs) const;

        /// <summary>
        /// Inequality operator
        /// </summary>
        bool operator !=(const ReturnStatement& rhs) const;
    };
}
