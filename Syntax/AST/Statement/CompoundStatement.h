#pragma once
#include "Node.h"

namespace Soup::Syntax
{
    /// <summary>
    /// Compound statement node
    /// </summary>
    export class CompoundStatement : Node
    {
    public:
        /// <summary>
        /// Gets or sets the list of statements
        /// </summary>
        const std::vector<Statement>& GetStatements() const;

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const CompoundStatement& rhs) const;

        /// <summary>
        /// Inequality operator
        /// </summary>
        bool operator !=(const CompoundStatement& rhs) const;
    }
}
