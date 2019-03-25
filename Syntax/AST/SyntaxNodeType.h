
#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// Syntax node type
    /// </summary>
    export enum class SyntaxNodeType
    {
        BinaryExpression,
        CatchClause,
        CompoundStatement,
        DeclarationSequence,
        DeclarationSpecifier,
        DefaultFunctionBody,
        DeleteFunctionBody,
        ElseClause,
        EmptyStatement,
        FunctionDeclaration,
        FunctionDefinition,
        IfStatement,
        InitializerDeclarator,
        InitializerDeclaratorList,
        LiteralExpression,
        Parameter,
        ParameterList,
        PrimitiveDataTypeDeclaration,
        QualifiedNameExpression,
        RegularFunctionBody,
        ReturnStatement,
        SimpleDeclarationStatement,
        SimpleNameExpression,
        SubscriptExpression,
        ThisExpression,
        TranslationUnit,
        TryFunctionBody,
        TryStatement,
        UnaryExpression,
        ValueEqualInitializer,
    };
}
