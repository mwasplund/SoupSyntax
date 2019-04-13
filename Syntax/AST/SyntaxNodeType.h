
#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// Syntax node type
    /// </summary>
    export enum class SyntaxNodeType
    {
        Attribute,
        AttributeSpecifier,
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
        FunctionDefinition,
        IfStatement,
        InitializerDeclarator,
        InitializerDeclaratorList,
        InitializerList,
        InvocationExpression,
        LiteralExpression,
        MemberDeclaration,
        MemberDeclarator,
        MemberDeclaratorList,
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
