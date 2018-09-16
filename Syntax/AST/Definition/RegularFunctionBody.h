#pragma once
#include "Node.h"

namespace Soup::Syntax
{
    /// <summary>
    /// The regular function body
    /// </summary>
    export class RegularFunctionBody : Node
    {
    public:
        /// <summary>
        /// Gets or sets the statements
        /// </summary>
        const CompoundStatement& GetStatements() const;

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const RegularFunctionBody& rhs) const;

        /// <summary>
        /// Inequality operator
        /// </summary>
        bool operator !=(const RegularFunctionBody& rhs) const;
    }
}
