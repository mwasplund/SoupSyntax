#pragma once
#include "ExpressionNode.h"

namespace Soup::Syntax
{
    /// <summary>
    /// Arithmetic Expression
    /// </summary>
    export class ArithmeticExpression : ExpressionNode
    {
    public:
        /// <summary>
        /// The left expression
        /// </summary>
        const ExpressionNode& GetLeft() const;

        /// <summary>
        /// The right expression
        /// </summary>
        const ExpressionNode& GetRight() const;
    };
}
