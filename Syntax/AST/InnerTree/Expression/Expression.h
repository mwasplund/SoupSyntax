#pragma once

namespace Soup::Syntax::InnerTree
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
