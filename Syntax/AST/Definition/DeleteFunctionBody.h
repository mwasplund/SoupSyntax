#pragma once
#include "Node.h"

namespace Soup::Syntax
{
    /// <summary>
    /// The delete function body
    /// </summary>
    export class DeleteFunctionBody : Node
    {
    public:
        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const DeleteFunctionBody& rhs) const;

        /// <summary>
        /// Inequality operator
        /// </summary>
        bool operator !=(const DeleteFunctionBody& rhs) const;
    }
}
