#pragma once
#include "SyntaxNode.h"

namespace Soup::Syntax
{
    /// <summary>
    /// An identifier
    /// </summary>
    export class Identifier final : public SyntaxNode
    {
    private:
        std::string value;

    public:
        /// <summary>
        /// Initialize
        /// </summary>
        Identifier(std::string value);

        /// <summary>
        /// Gets or sets the value
        /// </summary>
        const std::string& GetValue() const;

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const Identifier& rhs) const;
        bool operator !=(const Identifier& rhs) const;

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
