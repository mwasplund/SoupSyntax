#pragma once

namespace Soup::Syntax::OuterTree
{
    /// <summary>
    /// The base expression node
    /// </summary>
    export class Expression : public SyntaxNode
    {
    protected:
        Expression(
            std::shared_ptr<const InnerTree::SyntaxNode> innerNode,
            const SyntaxNode* parentNode) :
            SyntaxNode(std::move(innerNode), parentNode)
        {
        }
    };
}
