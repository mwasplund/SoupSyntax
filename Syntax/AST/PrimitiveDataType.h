#pragma once
#include "Node.h"

namespace Soup::Syntax
{
    /// <summary>
    /// Primitive data type enumerations
    /// </summary>
    export enum class PrimitiveDataType
    {
        /// <summary>
        /// Character
        /// </summary>
        Char,

        /// <summary>
        /// Character 16
        /// </summary>
        Char16,

        /// <summary>
        /// Character 32
        /// </summary>
        Char32,

        /// <summary>
        /// Wide character
        /// </summary>
        WChar,

        /// <summary>
        /// Boolean
        /// </summary>
        Bool,

        /// <summary>
        /// Short integer
        /// </summary>
        Short,

        /// <summary>
        /// Integer
        /// </summary>
        Int,

        /// <summary>
        /// Long Integer
        /// </summary>
        Long,

        /// <summary>
        /// Signed Integer
        /// </summary>
        Signed,

        /// <summary>
        /// Unsighed Integer
        /// </summary>
        Unsigned,

        /// <summary>
        /// Floating point
        /// </summary>
        Float,

        /// <summary>
        /// Double precision floating point
        /// </summary>
        Double,

        /// <summary>
        /// Void type
        /// </summary>
        Void,

        /// <summary>
        /// Auto type
        /// </summary>
        Auto,
    };

    /// <summary>
    /// Primitive data type node
    /// </summary>
    export class PrimitiveDataTypeNode : public Node
    {
    private:
        PrimitiveDataType type;

    public:
        /// <summary>
        /// Gets or sets the type
        /// </summary>
        PrimitiveDataType GetType() const;

        /// <summary>
        /// Initialize
        /// </summary>
        PrimitiveDataTypeNode(PrimitiveDataType type);

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const PrimitiveDataTypeNode& rhs) const;

        /// <summary>
        /// Inequality operator
        /// </summary>
        bool operator !=(const PrimitiveDataTypeNode& rhs) const;

    protected:
        /// <summary>
        /// Node Equals
        /// </summary>
        virtual bool Equals(const Node& rhs) const final;
    };
}
