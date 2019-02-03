#pragma once
#include "Node.h"

namespace Soup::Syntax
{
    /// <summary>
    /// An identifier
    /// </summary>
    export class Identifier final : public Node
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
        /// Node Equals
        /// </summary>
        virtual bool Equals(const Node& rhs) const final;
    };
}
