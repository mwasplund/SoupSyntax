
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
