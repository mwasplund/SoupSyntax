#pragma once

namespace Soup::Syntax::OuterTree
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
        Statement(
            std::shared_ptr<const InnerTree::SyntaxNode> innerNode,
            const SyntaxNode* parentNode) :
            SyntaxNode(innerNode, parentNode)
        {
        }
    };
}
