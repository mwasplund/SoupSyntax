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
        bool operator !=(const ReturnStatement& rhs) const;

    protected:
        /// <summary>
        /// Node Equals
        /// </summary>
        virtual bool Equals(const Node& rhs) const final;
    };
}
