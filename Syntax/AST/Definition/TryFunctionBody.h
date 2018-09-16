#pragma once
#include "Node.h"

namespace Soup::Syntax
{
    /// <summary>
    /// The try function body
    /// </summary>
    export class TryFunctionBody : Node
    {
    public:
        /// <summary>
        /// Gets or sets the statements
        /// </summary>
        const CompoundStatement& GetStatements() const;

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const TryFunctionBody& rhs) const;

        /// <summary>
        /// Inequality operator
        /// </summary>
        bool operator !=(const TryFunctionBody& rhs) const;
    }
}
