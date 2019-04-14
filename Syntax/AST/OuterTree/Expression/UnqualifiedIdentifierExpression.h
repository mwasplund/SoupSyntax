#pragma once

namespace Soup::Syntax::OuterTree
{
    /// <summary>
    /// The base identifier expression for all unqualified identifiers that terminate
    /// a qualified identifier.s
    /// </summary>
    export class UnqualifiedIdentifierExpression : public IdentifierExpression
    {
    protected:
        UnqualifiedIdentifierExpression(
            std::shared_ptr<const InnerTree::SyntaxNode> innerNode,
            const SyntaxNode* parentNode) :
            IdentifierExpression(innerNode, parentNode)
        {
        }
    };
}
