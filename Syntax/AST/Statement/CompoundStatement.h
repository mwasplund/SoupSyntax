﻿#pragma once
#include "Node.h"
#include "Statement.h"

namespace Soup::Syntax
{
    /// <summary>
    /// Compound statement node
    /// </summary>
    export class CompoundStatement : public Node
    {
    private:
        std::vector<Statement> statements;

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

    protected:
        /// <summary>
        /// Node Equals
        /// </summary>
        virtual bool Equals(const Node& rhs) const final;
    };
}
