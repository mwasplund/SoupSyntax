#pragma once

namespace Soup::Syntax::OuterTree
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
        TypeSpecifier(
            std::shared_ptr<const InnerTree::SyntaxNode> innerNode,
            const SyntaxNode* parentNode) :
            SyntaxNode(std::move(innerNode), parentNode)
        {
        }
    };
}
