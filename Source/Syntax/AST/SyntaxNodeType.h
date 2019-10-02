﻿
#pragma once

namespace Soup::Syntax
{
	/// <summary>
	/// Syntax node type
	/// </summary>
	export enum class SyntaxNodeType
	{
		Attribute,
		AttributeArgumentClause,
		AttributeSpecifier,
		AccessorSpecifier,
		BinaryExpression,
		CatchClause,
		ClassSpecifier,
		CompoundStatement,
		ConstructorDefinition,
		ConstructorInitializer,
		DeclarationSpecifierSequence,
		DeclarationStatement,
		DefaultFunctionBody,
		DeleteFunctionBody,
		DestructorIdentifier,
		ElseClause,
		EmptyDeclaration,
		EmptyStatement,
		EnumSpecifier,
		EnumeratorDefinition,
		ExportDeclaration,
		ExpressionStatement,
		FunctionDefinition,
		IdentifierExpression,
		IdentifierType,
		IfStatement,
		InitializerDeclarator,
		InitializerDeclaratorList,
		InitializerList,
		InvocationExpression,
		LambdaCaptureClause,
		LambdaExpression,
		LiteralExpression,
		MemberDeclaration,
		MemberDeclarator,
		MemberDeclaratorList,
		MemberInitializer,
		ModuleDeclaration,
		ModuleImportDeclaration,
		NamespaceDefinition,
		NestedNameSpecifier,
		Parameter,
		ParameterList,
		PrimitiveDataTypeSpecifier,
		PointerDeclarator,
		PointerOperator,
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
		TypeSpecifierSequence,
		UnaryExpression,
		ValueEqualInitializer,
	};
}
