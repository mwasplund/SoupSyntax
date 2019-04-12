#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// Compound statement node
    /// </summary>
    export class Statement : public SyntaxNode
    {
    protected:
        /// <summary>
        /// Initialize
        /// </summary>
        Statement(SyntaxNodeType type) :
            SyntaxNode(type)
        {
        }
    };
}
