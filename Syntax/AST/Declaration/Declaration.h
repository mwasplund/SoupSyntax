#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// Declaration introduce names into a C++
    /// </summary>
    export class Declaration : public SyntaxNode
    {
    protected:
        /// <summary>
        /// Initialize
        /// </summary>
        Declaration(SyntaxNodeType type) :
            SyntaxNode(type)
        {
        }
    };
}
