#pragma once
#include "Node.h"

namespace Soup::Syntax
{
    /// <summary>
    /// The delete function body
    /// </summary>
    export class DeleteFunctionBody final : public Node
    {
    public:
        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const DeleteFunctionBody& rhs) const;
        bool operator !=(const DeleteFunctionBody& rhs) const;

        /// <summary>
        /// Convert to string representation
        /// </summary>
        virtual std::string ToString() const override final;

    protected:
        /// <summary>
        /// Node Equals
        /// </summary>
        virtual bool Equals(const Node& rhs) const final;
    };
}
