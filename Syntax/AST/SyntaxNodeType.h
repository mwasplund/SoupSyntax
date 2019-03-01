
#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// Syntax node type
    /// </summary>
    export enum class SyntaxNodeType
    {
        BinaryExpression,
        CompoundStatement,
        DeclarationSequence,
        DeclarationSpecifierSequence,
        DefaultFunctionBody,
        DeleteFunctionBody,
        FunctionDefinition,
        InitializerDeclarator,
        InitializerDeclaratorList,
        LiteralExpression,
        ParameterList,
        PrimitiveDataTypeNode,
        QualifiedNameExpression,
        RegularFunctionBody,
        ReturnStatement,
        SimpleDefinition,
        SimpleNameExpression,
        SubscriptExpression,
        ThisExpression,
        TranslationUnit,
        TryFunctionBody,
        UnaryExpression,
    };
}
