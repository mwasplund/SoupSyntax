#pragma once
#include "ExpressionNode.h"

namespace Soup::Syntax
{
    /// <summary>
    /// Arithmetic Expression
    /// </summary>
    export class ArithmeticExpression : public ExpressionNode
    {
    protected:
        std::unique_ptr<ExpressionNode> left;
        std::unique_ptr<ExpressionNode> right;
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
