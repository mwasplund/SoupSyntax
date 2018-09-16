#pragma once
#include "Node.h"

namespace Soup::Syntax
{
    /// <summary>
    /// The function definition
    /// </summary>
    export class ParameterList : public Node
    {
    public:
        /// <summary>
        /// Gets or sets the list of parameters
        /// </summary>
        const std::vector<Node>& GetParameters() const;

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const ParameterList& rhs) const;

        /// <summary>
        /// Inequality operator
        /// </summary>
        bool operator !=(const ParameterList& rhs) const;
    };
}
