
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
        DestructorIdentifier,
        ElseClause,
        EmptyDeclaration,
        EmptyStatement,
        EnumDeclaration,
        EnumeratorDefinition,
        ExpressionStatement,
        FunctionDefinition,
        IdentifierExpression,
        IdentifierType,
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
        NestedNameSpecifier,
        Parameter,
        ParameterList,
        PrimitiveDataTypeSpecifier,
        RegularFunctionBody,
        ReturnStatement,
        SimpleDeclaration,
        SimpleIdentifier,
        SimpleTemplateIdentifier,
        SubscriptExpression,
        ThisExpression,
        TranslationUnit,
        TryFunctionBody,
        TryStatement,
        UnaryExpression,
        ValueEqualInitializer,
    };
}
