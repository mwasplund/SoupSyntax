#pragma once

namespace Soup::Syntax::InnerTree
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
