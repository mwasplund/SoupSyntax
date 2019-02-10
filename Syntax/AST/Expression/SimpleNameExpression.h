#pragma once
#include "NameExpression.h"

namespace Soup::Syntax
{
    /// <summary>
    /// A simple name expression referencing a single Identifier
    /// </summary>
    export class SimpleNameExpression final : public NameExpression
    {
    public:
        /// <summary>
        /// Initialize
        /// </summary>
        SimpleNameExpression(std::string identifier);

        /// <summary>
        /// Gets the left name expression
        /// </summary>
        const std::string& GetIdentifier() const;

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const SimpleNameExpression& rhs) const;
        bool operator !=(const SimpleNameExpression& rhs) const;

        /// <summary>
        /// Convert to string representation
        /// </summary>
        virtual std::string ToString() const override final;

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final;

    private:
        std::string m_identifier;
    };
}
