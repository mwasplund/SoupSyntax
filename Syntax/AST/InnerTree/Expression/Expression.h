#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// The base expression node
    /// </summary>
    export class Expression : public SyntaxNode
    {
    protected:
        Expression(SyntaxNodeType type) :
            SyntaxNode(type)
        {
        }
    };
}
