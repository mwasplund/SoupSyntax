#pragma once

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// Type specifier base class
    /// </summary>
    export class TypeSpecifier : public SyntaxNode
    {
    protected:
        /// <summary>
        /// Initialize
        /// </summary>
        TypeSpecifier(SyntaxNodeType type) :
            SyntaxNode(type)
        {
        }
    };
}
