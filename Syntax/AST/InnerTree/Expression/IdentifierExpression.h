#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// The base identifier expression
    /// </summary>
    export class IdentifierExpression : public Expression
    {
    protected:
        IdentifierExpression(SyntaxNodeType type) :
            Expression(type)
        {
        }
    };
}
