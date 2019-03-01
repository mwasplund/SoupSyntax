#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// The base Name expression that can either be a SimpleNameExpression
    /// or a QualifiedNameExpression. The main purpose of this heirarchy is to
    /// allow QualifiedNameExpression left recursion.
    /// </summary>
    export class NameExpression : public Expression
    {
    protected:
        NameExpression(SyntaxNodeType type) :
            Expression(type)
        {
        }
    };
}
