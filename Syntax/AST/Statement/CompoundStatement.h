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
        /// Initialize
        /// </summary>
        CompoundStatement() :
            m_statements()
        {
        }

        CompoundStatement(std::vector<std::shared_ptr<const Statement>> statements) :
            m_statements(std::move(statements))
        {
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const CompoundStatement& rhs) const
        {
            return std::equal(
                begin(m_statements),
                end(m_statements),
                begin(rhs.m_statements),
                end(rhs.m_statements),
                [](const std::shared_ptr<const Statement>& lhs, const std::shared_ptr<const Statement>& rhs)
                {
                    return *lhs == *rhs;
                });
        }

        bool operator !=(const CompoundStatement& rhs) const
        {
            return !(*this == rhs);
        }

        /// <summary>
        /// Gets or sets the list of statements
        /// </summary>
        const std::vector<std::shared_ptr<const Statement>>& GetStatements() const
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
        std::vector<std::shared_ptr<const Statement>> m_statements;
    };
}
