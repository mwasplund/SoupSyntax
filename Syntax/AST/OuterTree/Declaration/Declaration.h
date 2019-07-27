#pragma once

namespace Soup::Syntax::OuterTree
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
        Declaration(
            std::shared_ptr<const InnerTree::SyntaxNode> innerNode,
            const SyntaxNode* parentNode) :
            SyntaxNode(std::move(innerNode), parentNode)
        {
        }
    };
}
