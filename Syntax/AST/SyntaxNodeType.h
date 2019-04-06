
#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// Syntax node type
    /// </summary>
    export enum class SyntaxNodeType
    {
        AccessorSpecifier,
        BinaryExpression,
        CatchClause,
        ClassDeclaration,
        CompoundStatement,
        ConstructorDefinition,
        ConstructorInitializer,
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
        InitializerList,
        LiteralExpression,
        MemberInitializer,
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
