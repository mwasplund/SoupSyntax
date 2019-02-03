
#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// Base node
    /// </summary>
    export class Node
    {
    public:
        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const Node& rhs) const;
        bool operator !=(const Node& rhs) const;

        /// <summary>
        /// Convert to string representation
        /// </summary>
        virtual std::string ToString() const = 0;

    private:
        /// <summary>
        /// Shared equality check
        /// Only called when the types are verified to be equal
        /// </summary>
        virtual bool Equals(const Node& rhs) const = 0;
    };
}
