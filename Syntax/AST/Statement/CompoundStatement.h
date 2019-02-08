#pragma once
#include "SyntaxNode.h"
#include "Statement.h"

namespace Soup::Syntax
{
    /// <summary>
    /// Compound statement node
    /// </summary>
    export class CompoundStatement final : public SyntaxNode
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

        /// <summary>
        /// Convert to string representation
        /// </summary>
        virtual std::string ToString() const override final;

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final;
    };
}
