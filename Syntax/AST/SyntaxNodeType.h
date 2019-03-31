
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
        ClassDeclaration,
        CompoundStatement,
        DeclarationSpecifier,
        DeclarationStatement,
        DefaultFunctionBody,
        DeleteFunctionBody,
        ElseClause,
        EmptyDeclaration,
        EmptyStatement,
        EnumDeclaration,
        EnumeratorDefinition,
        ExpressionStatement,
        FunctionDeclaration,
        FunctionDefinition,
        IfStatement,
        InitializerDeclarator,
        InitializerDeclaratorList,
        LiteralExpression,
        NamespaceDefinition,
        Parameter,
        ParameterList,
        PrimitiveDataTypeDeclaration,
        QualifiedNameExpression,
        RegularFunctionBody,
        ReturnStatement,
        SimpleDeclaration,
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
