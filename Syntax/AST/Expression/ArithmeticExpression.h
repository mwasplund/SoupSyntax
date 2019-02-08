#pragma once
#include "Expression.h"

namespace Soup::Syntax
{
    /// <summary>
    /// Arithmetic Expression
    /// </summary>
    export class ArithmeticExpression : public Expression
    {
    protected:
        std::unique_ptr<Expression> left;
        std::unique_ptr<Expression> right;
    public:
        /// <summary>
        /// The left expression
        /// </summary>
        const Expression& GetLeft() const;

        /// <summary>
        /// The right expression
        /// </summary>
        const Expression& GetRight() const;
    };
}
