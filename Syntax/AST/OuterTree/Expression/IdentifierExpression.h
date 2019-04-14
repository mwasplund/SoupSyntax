#pragma once

namespace Soup::Syntax::OuterTree
{
    /// <summary>
    /// The base identifier expression
    /// </summary>
    export class IdentifierExpression : public Expression
    {
    protected:
        IdentifierExpression(
            std::shared_ptr<const InnerTree::SyntaxNode> innerNode,
            const SyntaxNode* parentNode) :
            Expression(std::move(innerNode), parentNode)
        {
        }
    };
}
