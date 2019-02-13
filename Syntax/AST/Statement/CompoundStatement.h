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
    public:
        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const CompoundStatement& rhs) const
        {
            return m_statements == rhs.m_statements;
        }

        bool operator !=(const CompoundStatement& rhs) const
        {
            return !(*this == rhs);
        }

        /// <summary>
        /// Gets or sets the list of statements
        /// </summary>
        const std::vector<std::shared_ptr<Statement>>& GetStatements() const
        {
            return m_statements;
        }

        std::vector<std::shared_ptr<Statement>>& GetStatements()
        {
            return m_statements;
        }

        /// <summary>
        /// Convert to string representation
        /// </summary>
        virtual std::string ToString() const override final
        {
            return "CompoundStatement";
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const CompoundStatement&>(rhs);
        }

    private:
        std::vector<std::shared_ptr<Statement>> m_statements;
    };
}
