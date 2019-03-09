
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
        FunctionDeclaration,
        FunctionDefinition,
        InitializerDeclarator,
        InitializerDeclaratorList,
        LiteralExpression,
        Parameter,
        ParameterList,
        PrimitiveDataTypeDeclaration,
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
