
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
        DestructorIdentifierExpression,
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
        QualifiedIdentifierExpression,
        RegularFunctionBody,
        ReturnStatement,
        SimpleDeclaration,
        SimpleIdentifierExpression,
        SimpleTemplateIdentifierExpression,
        SubscriptExpression,
        ThisExpression,
        TranslationUnit,
        TryFunctionBody,
        TryStatement,
        UnaryExpression,
        ValueEqualInitializer,
    };
}
