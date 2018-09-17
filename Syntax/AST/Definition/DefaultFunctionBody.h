#pragma once
#include "Node.h"

namespace Soup::Syntax
{
    /// <summary>
    /// The default function body
    /// </summary>
    export class DefaultFunctionBody : public Node
    {
    public:
        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const DefaultFunctionBody& rhs) const;

        /// <summary>
        /// Inequality operator
        /// </summary>
        bool operator !=(const DefaultFunctionBody& rhs) const;

    protected:
        /// <summary>
        /// Node Equals
        /// </summary>
        virtual bool Equals(const Node& rhs) const final;
    };
}
