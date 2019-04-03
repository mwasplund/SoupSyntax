#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// The base identifier expression for all unqualified identifiers that terminate
    /// a qualified identifier.s
    /// </summary>
    export class UnqualifiedIdentifierExpression : public IdentifierExpression
    {
    protected:
        UnqualifiedIdentifierExpression(SyntaxNodeType type) :
            IdentifierExpression(type)
        {
        }
    };
}
