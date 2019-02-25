
#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// Base syntax node
    /// </summary>
    export class SyntaxNode
    {
    public:
        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator==(const SyntaxNode &rhs) const
        {
            return typeid(*this) == typeid(rhs) &&
                Equals(rhs);
        }

        bool operator!=(const SyntaxNode &rhs) const
        {
            return !(*this == rhs);
        }

        /// <summary>
        /// Convert to string representation
        /// </summary>
        virtual std::wstring ToString() const = 0;

    private:
        /// <summary>
        /// Shared equality check
        /// Only called when the types are verified to be equal
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const = 0;
    };
}
