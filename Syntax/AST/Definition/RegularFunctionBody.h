#pragma once
#include "SyntaxNode.h"
#include "CompoundStatement.h"

namespace Soup::Syntax
{
    /// <summary>
    /// The regular function body
    /// </summary>
    export class RegularFunctionBody final : public SyntaxNode
    {
    private:
        std::shared_ptr<CompoundStatement> m_statements;

    public:
        RegularFunctionBody(std::shared_ptr<CompoundStatement> statements);

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
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final;
    };
}
