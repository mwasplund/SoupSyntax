#pragma once
#include "SyntaxNode.h"

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
}
