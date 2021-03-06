﻿module;
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>
export module SoupSyntax;

// Predefine nodes to get around circular references
// used in the visitors
namespace Soup::Syntax
{
	// Core
	class SyntaxFactory;
	class SyntaxTrivia;
}

namespace Soup::Syntax::InnerTree
{
	// Core
	class SyntaxNode;
	template<typename T>
	class SyntaxList;
	template<typename T>
	class SyntaxSeparatorList;
	class SyntaxToken;
	class TranslationUnit;

	// Shared
	class DestructorIdentifier;
	class NestedNameSpecifier;
	class Parameter;
	class ParameterList;
	class SimpleIdentifier;
	class SimpleTemplateIdentifier;

	// Attribute
	class Attribute;
	class AttributeArgumentClause;
	class AttributeSpecifier;

	// Expressions
	class BinaryExpression;
	class Expression;
	class IdentifierExpression;
	class InvocationExpression;
	class LambdaCaptureClause;
	class LambdaExpression;
	class LiteralExpression;
	class SubscriptExpression;
	class ThisExpression;
	class UnaryExpression;

	// Declarations
	class AccessorSpecifier;
	class ClassSpecifier;
	class ConstructorDefinition;
	class ConstructorInitializer;
	class Declaration;
	class DeclarationSpecifierSequence;
	class DefaultFunctionBody;
	class DeleteFunctionBody;
	class EmptyDeclaration;
	class EnumSpecifier;
	class EnumeratorDefinition;
	class ExportDeclaration;
	class FunctionDefinition;
	class IdentifierType;
	class InitializerDeclarator;
	class InitializerDeclaratorList;
	class InitializerList;
	class MemberDeclaration;
	class MemberDeclarator;
	class MemberDeclaratorList;
	class MemberInitializer;
	class ModuleDeclaration;
	class ModuleImportDeclaration;
	class NamespaceDefinition;
	class PointerDeclarator;
	class PointerOperator;
	class PrimitiveDataTypeSpecifier;
	class RegularFunctionBody;
	class TryFunctionBody;
	class TypeSpecifierSequence;
	class SimpleDeclaration;
	class UsingDirective;
	class ValueEqualInitializer;

	// Statements
	class CatchClause;
	class CompoundStatement;
	class DeclarationStatement;
	class ElseClause;
	class EmptyStatement;
	class ExpressionStatement;
	class IfStatement;
	class ReturnStatement;
	class Statement;
	class TryStatement;
}

namespace Soup::Syntax::OuterTree
{
	// Core
	class SyntaxNode;
	class SyntaxNodeChild;
	template<typename T>
	class SyntaxList;
	template<typename T>
	class SyntaxSeparatorList;
	class SyntaxToken;
	class TranslationUnit;

	// Shared
	class DestructorIdentifier;
	class NestedNameSpecifier;
	class Parameter;
	class ParameterList;
	class SimpleIdentifier;
	class SimpleTemplateIdentifier;

	// Attribute
	class Attribute;
	class AttributeArgumentClause;
	class AttributeSpecifier;

	// Expressions
	class BinaryExpression;
	class Expression;
	class IdentifierExpression;
	class InvocationExpression;
	class LambdaCaptureClause;
	class LambdaExpression;
	class LiteralExpression;
	class SubscriptExpression;
	class ThisExpression;
	class UnaryExpression;

	// Declarations
	class AccessorSpecifier;
	class ClassSpecifier;
	class ConstructorDefinition;
	class ConstructorInitializer;
	class Declaration;
	class DeclarationSpecifierSequence;
	class DefaultFunctionBody;
	class DeleteFunctionBody;
	class EmptyDeclaration;
	class EnumSpecifier;
	class EnumeratorDefinition;
	class ExportDeclaration;
	class FunctionDefinition;
	class IdentifierType;
	class InitializerDeclarator;
	class InitializerDeclaratorList;
	class InitializerList;
	class MemberDeclaration;
	class MemberDeclarator;
	class MemberDeclaratorList;
	class ModuleDeclaration;
	class ModuleImportDeclaration;
	class MemberInitializer;
	class NamespaceDefinition;
	class PointerDeclarator;
	class PointerOperator;
	class PrimitiveDataTypeSpecifier;
	class RegularFunctionBody;
	class TryFunctionBody;
	class TypeSpecifierSequence;
	class SimpleDeclaration;
	class UsingDirective;
	class ValueEqualInitializer;

	// Statements
	class CatchClause;
	class CompoundStatement;
	class DeclarationStatement;
	class ElseClause;
	class EmptyStatement;
	class ExpressionStatement;
	class IfStatement;
	class ReturnStatement;
	class Statement;
	class TryStatement;
}

// AST
#include "AST/BinaryOperator.h"
#include "AST/LiteralType.h"
#include "AST/PrimitiveDataType.h"
#include "AST/SyntaxNodeType.h"
#include "AST/SyntaxTokenType.h"
#include "AST/SyntaxTrivia.h"
#include "AST/SyntaxUtils.h"
#include "AST/TextSpan.h"
#include "AST/UnaryOperator.h"

// Grant Inner Tree access to the outer wrapper
#include "AST/OuterTree/SyntaxWrapper.h"

// Inner Tree
#include "AST/InnerTree/SyntaxNode.h"
#include "AST/InnerTree/SyntaxToken.h"
#include "AST/InnerTree/SyntaxList.h"
#include "AST/InnerTree/SyntaxSeparatorList.h"
#include "AST/InnerTree/Shared/UnqualifiedIdentifier.h"
#include "AST/InnerTree/Expression/Expression.h"
#include "AST/InnerTree/Statement/Statement.h"
#include "AST/InnerTree/Statement/CompoundStatement.h"
#include "AST/InnerTree/Declaration/Declaration.h"
#include "AST/InnerTree/Declaration/TypeSpecifier.h"

#include "AST/InnerTree/Shared/DestructorIdentifier.h"
#include "AST/InnerTree/Shared/NestedNameSpecifier.h"
#include "AST/InnerTree/Shared/Parameter.h"
#include "AST/InnerTree/Shared/ParameterList.h"
#include "AST/InnerTree/Shared/SimpleIdentifier.h"
#include "AST/InnerTree/Shared/SimpleTemplateIdentifier.h"

#include "AST/InnerTree/Attribute/AttributeArgumentClause.h"
#include "AST/InnerTree/Attribute/Attribute.h"
#include "AST/InnerTree/Attribute/AttributeSpecifier.h"

#include "AST/InnerTree/Expression/BinaryExpression.h"
#include "AST/InnerTree/Expression/IdentifierExpression.h"
#include "AST/InnerTree/Expression/InvocationExpression.h"
#include "AST/InnerTree/Expression/LambdaCaptureClause.h"
#include "AST/InnerTree/Expression/LambdaExpression.h"
#include "AST/InnerTree/Expression/LiteralExpression.h"
#include "AST/InnerTree/Expression/SubscriptExpression.h"
#include "AST/InnerTree/Expression/ThisExpression.h"
#include "AST/InnerTree/Expression/UnaryExpression.h"

#include "AST/InnerTree/Statement/CatchClause.h"
#include "AST/InnerTree/Statement/DeclarationStatement.h"
#include "AST/InnerTree/Statement/ElseClause.h"
#include "AST/InnerTree/Statement/EmptyStatement.h"
#include "AST/InnerTree/Statement/ExpressionStatement.h"
#include "AST/InnerTree/Statement/IfStatement.h"
#include "AST/InnerTree/Statement/ReturnStatement.h"
#include "AST/InnerTree/Statement/TryStatement.h"

#include "AST/InnerTree/Declaration/AccessorSpecifier.h"
#include "AST/InnerTree/Declaration/DeclarationSpecifierSequence.h"
#include "AST/InnerTree/Declaration/ClassSpecifier.h"
#include "AST/InnerTree/Declaration/IdentifierType.h"
#include "AST/InnerTree/Declaration/InitializerDeclarator.h"
#include "AST/InnerTree/Declaration/InitializerDeclaratorList.h"
#include "AST/InnerTree/Declaration/InitializerList.h"
#include "AST/InnerTree/Declaration/ConstructorDefinition.h"
#include "AST/InnerTree/Declaration/ConstructorInitializer.h"
#include "AST/InnerTree/Declaration/DefaultFunctionBody.h"
#include "AST/InnerTree/Declaration/DeleteFunctionBody.h"
#include "AST/InnerTree/Declaration/EmptyDeclaration.h"
#include "AST/InnerTree/Declaration/EnumeratorDefinition.h"
#include "AST/InnerTree/Declaration/EnumSpecifier.h"
#include "AST/InnerTree/Declaration/ExportDeclaration.h"
#include "AST/InnerTree/Declaration/FunctionDefinition.h"
#include "AST/InnerTree/Declaration/MemberDeclarator.h"
#include "AST/InnerTree/Declaration/MemberDeclaratorList.h"
#include "AST/InnerTree/Declaration/MemberDeclaration.h"
#include "AST/InnerTree/Declaration/MemberInitializer.h"
#include "AST/InnerTree/Declaration/ModuleDeclaration.h"
#include "AST/InnerTree/Declaration/ModuleImportDeclaration.h"
#include "AST/InnerTree/Declaration/NamespaceDefinition.h"
#include "AST/InnerTree/Declaration/PointerOperator.h"
#include "AST/InnerTree/Declaration/PointerDeclarator.h"
#include "AST/InnerTree/Declaration/PrimitiveDataTypeSpecifier.h"
#include "AST/InnerTree/Declaration/RegularFunctionBody.h"
#include "AST/InnerTree/Declaration/SimpleDeclaration.h"
#include "AST/InnerTree/Declaration/TryFunctionBody.h"
#include "AST/InnerTree/Declaration/TypeSpecifierSequence.h"
#include "AST/InnerTree/Declaration/UsingDirective.h"
#include "AST/InnerTree/Declaration/ValueEqualInitializer.h"

#include "AST/InnerTree/TranslationUnit.h"

// Expose ISyntaxVisitor to Outer Tree
#include "AST/Visitor/ISyntaxVisitor.h"

// Outer Tree
#include "AST/OuterTree/SyntaxNode.h"
#include "AST/OuterTree/SyntaxToken.h"
#include "AST/OuterTree/SyntaxNodeChild.h"
#include "AST/OuterTree/SyntaxList.h"
#include "AST/OuterTree/SyntaxSeparatorList.h"
#include "AST/OuterTree/Shared/UnqualifiedIdentifier.h"
#include "AST/OuterTree/Expression/Expression.h"
#include "AST/OuterTree/Statement/Statement.h"
#include "AST/OuterTree/Statement/CompoundStatement.h"
#include "AST/OuterTree/Declaration/Declaration.h"
#include "AST/OuterTree/Declaration/TypeSpecifier.h"

#include "AST/OuterTree/Shared/DestructorIdentifier.h"
#include "AST/OuterTree/Shared/NestedNameSpecifier.h"
#include "AST/OuterTree/Shared/Parameter.h"
#include "AST/OuterTree/Shared/ParameterList.h"
#include "AST/OuterTree/Shared/SimpleIdentifier.h"
#include "AST/OuterTree/Shared/SimpleTemplateIdentifier.h"

#include "AST/OuterTree/Attribute/AttributeArgumentClause.h"
#include "AST/OuterTree/Attribute/Attribute.h"
#include "AST/OuterTree/Attribute/AttributeSpecifier.h"

#include "AST/OuterTree/Expression/BinaryExpression.h"
#include "AST/OuterTree/Expression/IdentifierExpression.h"
#include "AST/OuterTree/Expression/InvocationExpression.h"
#include "AST/OuterTree/Expression/LambdaCaptureClause.h"
#include "AST/OuterTree/Expression/LambdaExpression.h"
#include "AST/OuterTree/Expression/LiteralExpression.h"
#include "AST/OuterTree/Expression/SubscriptExpression.h"
#include "AST/OuterTree/Expression/ThisExpression.h"
#include "AST/OuterTree/Expression/UnaryExpression.h"

#include "AST/OuterTree/Statement/CatchClause.h"
#include "AST/OuterTree/Statement/DeclarationStatement.h"
#include "AST/OuterTree/Statement/ElseClause.h"
#include "AST/OuterTree/Statement/EmptyStatement.h"
#include "AST/OuterTree/Statement/ExpressionStatement.h"
#include "AST/OuterTree/Statement/IfStatement.h"
#include "AST/OuterTree/Statement/ReturnStatement.h"
#include "AST/OuterTree/Statement/TryStatement.h"

#include "AST/OuterTree/Declaration/AccessorSpecifier.h"
#include "AST/OuterTree/Declaration/DeclarationSpecifierSequence.h"
#include "AST/OuterTree/Declaration/ClassSpecifier.h"
#include "AST/OuterTree/Declaration/IdentifierType.h"
#include "AST/OuterTree/Declaration/InitializerDeclarator.h"
#include "AST/OuterTree/Declaration/InitializerDeclaratorList.h"
#include "AST/OuterTree/Declaration/InitializerList.h"
#include "AST/OuterTree/Declaration/ConstructorDefinition.h"
#include "AST/OuterTree/Declaration/ConstructorInitializer.h"
#include "AST/OuterTree/Declaration/DefaultFunctionBody.h"
#include "AST/OuterTree/Declaration/DeleteFunctionBody.h"
#include "AST/OuterTree/Declaration/EmptyDeclaration.h"
#include "AST/OuterTree/Declaration/EnumeratorDefinition.h"
#include "AST/OuterTree/Declaration/EnumSpecifier.h"
#include "AST/OuterTree/Declaration/ExportDeclaration.h"
#include "AST/OuterTree/Declaration/FunctionDefinition.h"
#include "AST/OuterTree/Declaration/MemberDeclarator.h"
#include "AST/OuterTree/Declaration/MemberDeclaratorList.h"
#include "AST/OuterTree/Declaration/MemberDeclaration.h"
#include "AST/OuterTree/Declaration/MemberInitializer.h"
#include "AST/OuterTree/Declaration/ModuleDeclaration.h"
#include "AST/OuterTree/Declaration/ModuleImportDeclaration.h"
#include "AST/OuterTree/Declaration/NamespaceDefinition.h"
#include "AST/OuterTree/Declaration/PointerOperator.h"
#include "AST/OuterTree/Declaration/PointerDeclarator.h"
#include "AST/OuterTree/Declaration/PrimitiveDataTypeSpecifier.h"
#include "AST/OuterTree/Declaration/RegularFunctionBody.h"
#include "AST/OuterTree/Declaration/SimpleDeclaration.h"
#include "AST/OuterTree/Declaration/TryFunctionBody.h"
#include "AST/OuterTree/Declaration/TypeSpecifierSequence.h"
#include "AST/OuterTree/Declaration/UsingDirective.h"
#include "AST/OuterTree/Declaration/ValueEqualInitializer.h"

#include "AST/OuterTree/TranslationUnit.h"

// Visitor
#include "AST/Visitor/DefaultSyntaxVisitor.h"
#include "AST/Visitor/SyntaxWalker.h"
#include "AST/Visitor/SyntaxSourceWriter.h"
#include "AST/Visitor/SyntaxTreeWriter.h"

// SyntaxTree
#include "AST/SyntaxFactory.h"
#include "AST/SyntaxTree.h"
