#pragma once
#include "Node.h"
#include <string>

namespace Soup::Syntax
{
    /// <summary>
    /// An identifier
    /// </summary>
    export class Identifier : public Node
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

        /// <summary>
        /// Inequality operator
        /// </summary>
        bool operator !=(const Identifier& rhs) const;

    protected:
        /// <summary>
        /// Node Equals
        /// </summary>
        virtual bool Equals(const Node& rhs) const final;
    };
}
