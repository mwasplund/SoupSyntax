#pragma once
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
        std::vector<std::shared_ptr<Statement>> m_statements;

    public:
        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const CompoundStatement& rhs) const;
        bool operator !=(const CompoundStatement& rhs) const;

        /// <summary>
        /// Gets or sets the list of statements
        /// </summary>
        const std::vector<std::shared_ptr<Statement>>& GetStatements() const;
        std::vector<std::shared_ptr<Statement>>& GetStatements();

    protected:
        /// <summary>
        /// Node Equals
        /// </summary>
        virtual bool Equals(const Node& rhs) const final;
    };
}
