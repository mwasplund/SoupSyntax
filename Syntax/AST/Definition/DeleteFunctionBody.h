#pragma once
#include "Node.h"

namespace Soup::Syntax
{
    /// <summary>
    /// The delete function body
    /// </summary>
    export class DeleteFunctionBody : public Node
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

    protected:
        /// <summary>
        /// Node Equals
        /// </summary>
        virtual bool Equals(const Node& rhs) const final;
    };
}
