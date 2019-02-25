#pragma once
#include "SyntaxNode.h"

namespace Soup::Syntax
{
    /// <summary>
    /// The try function body
    /// </summary>
    export class TryFunctionBody final : public SyntaxNode
    {
    public:
        /// <summary>
        /// Gets or sets the statements
        /// </summary>
        const CompoundStatement& GetStatements() const
        {
            return m_statements;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const TryFunctionBody& rhs) const
        {
            return m_statements == rhs.m_statements;
        }

        bool operator !=(const TryFunctionBody& rhs) const
        {
            return !(*this == rhs);
        }

        /// <summary>
        /// Convert to string representation
        /// </summary>
        virtual std::wstring ToString() const override final
        {
            return L"TryFunctionBody";
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const TryFunctionBody&>(rhs);
        }

    private:
        CompoundStatement m_statements;
    };
}
