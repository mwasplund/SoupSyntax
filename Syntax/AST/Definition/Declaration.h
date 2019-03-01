#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// Declaration
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
