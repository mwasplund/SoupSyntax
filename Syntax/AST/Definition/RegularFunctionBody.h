﻿#pragma once
#include "Node.h"
#include "CompoundStatement.h"

namespace Soup::Syntax
{
    /// <summary>
    /// The regular function body
    /// </summary>
    export class RegularFunctionBody final : public Node
    {
    private:
        CompoundStatement statements;

    public:
        /// <summary>
        /// Gets or sets the statements
        /// </summary>
        const CompoundStatement& GetStatements() const;

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const RegularFunctionBody& rhs) const;
        bool operator !=(const RegularFunctionBody& rhs) const;

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
