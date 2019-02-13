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
    public:
        RegularFunctionBody(std::shared_ptr<CompoundStatement> statements) :
            m_statements(statements)
        {
        }

        /// <summary>
        /// Gets or sets the statements
        /// </summary>
        const CompoundStatement& GetStatements() const
        {
            return *m_statements;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const RegularFunctionBody& rhs) const
        {
            return *m_statements == *rhs.m_statements;
        }

        bool operator !=(const RegularFunctionBody& rhs) const
        {
            return !(*this == rhs);
        }

        /// <summary>
        /// Convert to string representation
        /// </summary>
        virtual std::string ToString() const override final
        {
            return "RegularFunctionBody";
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const RegularFunctionBody&>(rhs);
        }

    private:
        std::shared_ptr<CompoundStatement> m_statements;
    };
}
