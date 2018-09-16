#pragma once

namespace Soup.StaticAnalysis.AST
{
    /// <summary>
    /// An integer value
    /// </summary>
    class IntegerLiteral : LiteralNode
    {
    public:
        /// <summary>
        /// Gets or sets the value
        /// </summary>
        int GetValue() const;

        /// <summary>
        /// Initialize
        /// </summary>
        IntegerLiteral(int value);

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator =(const IntegerLiteral& rhs) const;

        /// <summary>
        /// Inequality operator
        /// </summary>
        bool operator !=(const IntegerLiteral& rhs) const;
    }
}
