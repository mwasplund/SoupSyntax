import std.core;
import Soup.Syntax;

#include "..\..\..\..\SoupTest\Assert\SoupAssert.h"
#include "..\..\..\..\SoupTest\Assert\RunTest.h"
using namespace SoupTest;

// Inner Tree
#include "AST\InnerTree\Attribute\AttributeTests.gen.h"
#include "AST\InnerTree\Attribute\AttributeArgumentClauseTests.gen.h"
#include "AST\InnerTree\Attribute\AttributeSpecifierTests.gen.h"

#include "AST\InnerTree\Declaration\AccessorSpecifierTests.gen.h"
#include "AST\InnerTree\Declaration\ClassSpecifierTests.gen.h"
#include "AST\InnerTree\Declaration\ConstructorDefinitionTests.gen.h"
#include "AST\InnerTree\Declaration\ConstructorInitializerTests.gen.h"
#include "AST\InnerTree\Declaration\DeclarationSpecifierSequenceTests.gen.h"
#include "AST\InnerTree\Declaration\DefaultFunctionBodyTests.gen.h"
#include "AST\InnerTree\Declaration\DeleteFunctionBodyTests.gen.h"
#include "AST\InnerTree\Declaration\EmptyDeclarationTests.gen.h"
#include "AST\InnerTree\Declaration\EnumSpecifierTests.gen.h"
#include "AST\InnerTree\Declaration\EnumeratorDefinitionTests.gen.h"
#include "AST\InnerTree\Declaration\ExportDeclarationTests.gen.h"
#include "AST\InnerTree\Declaration\FunctionDefinitionTests.gen.h"
#include "AST\InnerTree\Declaration\IdentifierTypeTests.gen.h"
#include "AST\InnerTree\Declaration\InitializerDeclaratorListTests.gen.h"
#include "AST\InnerTree\Declaration\InitializerDeclaratorTests.gen.h"
#include "AST\InnerTree\Declaration\InitializerListTests.gen.h"
#include "AST\InnerTree\Declaration\MemberDeclarationTests.gen.h"
#include "AST\InnerTree\Declaration\MemberDeclaratorListTests.gen.h"
#include "AST\InnerTree\Declaration\MemberDeclaratorTests.gen.h"
#include "AST\InnerTree\Declaration\MemberInitializerTests.gen.h"
#include "AST\InnerTree\Declaration\ModuleDeclarationTests.gen.h"
#include "AST\InnerTree\Declaration\ModuleImportDeclarationTests.gen.h"
#include "AST\InnerTree\Declaration\NamespaceDefinitionTests.gen.h"
#include "AST\InnerTree\Declaration\ParameterListTests.gen.h"
#include "AST\InnerTree\Declaration\ParameterTests.gen.h"
#include "AST\InnerTree\Declaration\PointerDeclaratorTests.gen.h"
#include "AST\InnerTree\Declaration\PointerOperatorTests.gen.h"
#include "AST\InnerTree\Declaration\PrimitiveDataTypeSpecifierTests.gen.h"
#include "AST\InnerTree\Declaration\SimpleDeclarationTests.gen.h"
#include "AST\InnerTree\Declaration\TypeSpecifierSequenceTests.gen.h"
#include "AST\InnerTree\Declaration\ValueEqualInitializerTests.gen.h"

#include "AST\InnerTree\Expression\BinaryExpressionTests.gen.h"
#include "AST\InnerTree\Expression\IdentifierExpressionTests.gen.h"
#include "AST\InnerTree\Expression\InvocationExpressionTests.gen.h"
#include "AST\InnerTree\Expression\LambdaCaptureClauseTests.gen.h"
#include "AST\InnerTree\Expression\LambdaExpressionTests.gen.h"
#include "AST\InnerTree\Expression\LiteralExpressionTests.gen.h"
#include "AST\InnerTree\Expression\SubscriptExpressionTests.gen.h"
#include "AST\InnerTree\Expression\ThisExpressionTests.gen.h"
#include "AST\InnerTree\Expression\UnaryExpressionTests.gen.h"

#include "AST\InnerTree\Shared\DestructorIdentifierTests.gen.h"
#include "AST\InnerTree\Shared\NestedNameSpecifierTests.gen.h"
#include "AST\InnerTree\Shared\SimpleIdentifierTests.gen.h"
#include "AST\InnerTree\Shared\SimpleTemplateIdentifierTests.gen.h"

#include "AST\InnerTree\Statement\CompoundStatementTests.gen.h"
#include "AST\InnerTree\Statement\DeclarationStatementTests.gen.h"
#include "AST\InnerTree\Statement\ElseClauseTests.gen.h"
#include "AST\InnerTree\Statement\EmptyStatementTests.gen.h"
#include "AST\InnerTree\Statement\ExpressionStatementTests.gen.h"
#include "AST\InnerTree\Statement\IfStatementTests.gen.h"
#include "AST\InnerTree\Statement\ReturnStatementTests.gen.h"

#include "AST\InnerTree\TranslationUnitTests.gen.h"
#include "AST\InnerTree\SyntaxTokenTests.gen.h"

// Outer Tree
#include "AST\OuterTree\Attribute\AttributeTests.gen.h"
#include "AST\OuterTree\Attribute\AttributeArgumentClauseTests.gen.h"
#include "AST\OuterTree\Attribute\AttributeSpecifierTests.gen.h"

#include "AST\OuterTree\Declaration\AccessorSpecifierTests.gen.h"
#include "AST\OuterTree\Declaration\ClassSpecifierTests.gen.h"
#include "AST\OuterTree\Declaration\ConstructorDefinitionTests.gen.h"
#include "AST\OuterTree\Declaration\ConstructorInitializerTests.gen.h"
#include "AST\OuterTree\Declaration\DeclarationSpecifierSequenceTests.gen.h"
#include "AST\OuterTree\Declaration\DefaultFunctionBodyTests.gen.h"
#include "AST\OuterTree\Declaration\DeleteFunctionBodyTests.gen.h"
#include "AST\OuterTree\Declaration\EmptyDeclarationTests.gen.h"
#include "AST\OuterTree\Declaration\EnumSpecifierTests.gen.h"
#include "AST\OuterTree\Declaration\EnumeratorDefinitionTests.gen.h"
#include "AST\OuterTree\Declaration\ExportDeclarationTests.gen.h"
#include "AST\OuterTree\Declaration\FunctionDefinitionTests.gen.h"
#include "AST\OuterTree\Declaration\IdentifierTypeTests.gen.h"
#include "AST\OuterTree\Declaration\InitializerDeclaratorListTests.gen.h"
#include "AST\OuterTree\Declaration\InitializerDeclaratorTests.gen.h"
#include "AST\OuterTree\Declaration\InitializerListTests.gen.h"
#include "AST\OuterTree\Declaration\MemberDeclarationTests.gen.h"
#include "AST\OuterTree\Declaration\MemberDeclaratorListTests.gen.h"
#include "AST\OuterTree\Declaration\MemberDeclaratorTests.gen.h"
#include "AST\OuterTree\Declaration\MemberInitializerTests.gen.h"
#include "AST\OuterTree\Declaration\ModuleDeclarationTests.gen.h"
#include "AST\OuterTree\Declaration\ModuleImportDeclarationTests.gen.h"
#include "AST\OuterTree\Declaration\NamespaceDefinitionTests.gen.h"
#include "AST\OuterTree\Declaration\ParameterListTests.gen.h"
#include "AST\OuterTree\Declaration\ParameterTests.gen.h"
#include "AST\OuterTree\Declaration\PointerDeclaratorTests.gen.h"
#include "AST\OuterTree\Declaration\PointerOperatorTests.gen.h"
#include "AST\OuterTree\Declaration\PrimitiveDataTypeSpecifierTests.gen.h"
#include "AST\OuterTree\Declaration\SimpleDeclarationTests.gen.h"
#include "AST\OuterTree\Declaration\TypeSpecifierSequenceTests.gen.h"
#include "AST\OuterTree\Declaration\ValueEqualInitializerTests.gen.h"

#include "AST\OuterTree\Expression\BinaryExpressionTests.gen.h"
#include "AST\OuterTree\Expression\IdentifierExpressionTests.gen.h"
#include "AST\OuterTree\Expression\InvocationExpressionTests.gen.h"
#include "AST\OuterTree\Expression\LambdaCaptureClauseTests.gen.h"
#include "AST\OuterTree\Expression\LambdaExpressionTests.gen.h"
#include "AST\OuterTree\Expression\LiteralExpressionTests.gen.h"
#include "AST\OuterTree\Expression\SubscriptExpressionTests.gen.h"
#include "AST\OuterTree\Expression\ThisExpressionTests.gen.h"
#include "AST\OuterTree\Expression\UnaryExpressionTests.gen.h"

#include "AST\OuterTree\Shared\DestructorIdentifierTests.gen.h"
#include "AST\OuterTree\Shared\NestedNameSpecifierTests.gen.h"
#include "AST\OuterTree\Shared\SimpleIdentifierTests.gen.h"
#include "AST\OuterTree\Shared\SimpleTemplateIdentifierTests.gen.h"

#include "AST\OuterTree\Statement\CompoundStatementTests.gen.h"
#include "AST\OuterTree\Statement\DeclarationStatementTests.gen.h"
#include "AST\OuterTree\Statement\ElseClauseTests.gen.h"
#include "AST\OuterTree\Statement\EmptyStatementTests.gen.h"
#include "AST\OuterTree\Statement\ExpressionStatementTests.gen.h"
#include "AST\OuterTree\Statement\IfStatementTests.gen.h"
#include "AST\OuterTree\Statement\ReturnStatementTests.gen.h"

#include "AST\OuterTree\TranslationUnitTests.gen.h"
#include "AST\OuterTree\SyntaxNodeChildTests.gen.h"
#include "AST\OuterTree\SyntaxTokenTests.gen.h"

int main()
{
	std::cout << "Running Tests..." << std::endl;

	TestState state = { 0, 0 };

	// Inner Tree
	state += RunInnerTreeAttributeTests();
	state += RunInnerTreeAttributeArgumentClauseTests();
	state += RunInnerTreeAttributeSpecifierTests();

	state += RunInnerTreeAccessorSpecifierTests();
	state += RunInnerTreeClassSpecifierTests();
	state += RunInnerTreeConstructorDefinitionTests();
	state += RunInnerTreeConstructorInitializerTests();
	state += RunInnerTreeDeclarationSpecifierSequenceTests();
	state += RunInnerTreeDefaultFunctionBodyTests();
	state += RunInnerTreeDeleteFunctionBodyTests();
	state += RunInnerTreeEmptyDeclarationTests();
	state += RunInnerTreeEnumSpecifierTests();
	state += RunInnerTreeEnumeratorDefinitionTests();
	state += RunInnerTreeExportDeclarationTests();
	state += RunInnerTreeFunctionDefinitionTests();
	state += RunInnerTreeIdentifierTypeTests();
	state += RunInnerTreeInitializerDeclaratorListTests();
	state += RunInnerTreeInitializerDeclaratorTests();
	state += RunInnerTreeInitializerListTests();
	state += RunInnerTreeMemberDeclarationTests();
	state += RunInnerTreeMemberDeclaratorListTests();
	state += RunInnerTreeMemberDeclaratorTests();
	state += RunInnerTreeMemberInitializerTests();
	state += RunInnerTreeModuleDeclarationTests();
	state += RunInnerTreeModuleImportDeclarationTests();
	state += RunInnerTreeNamespaceDefinitionTests();
	state += RunInnerTreeParameterListTests();
	state += RunInnerTreeParameterTests();
	state += RunInnerTreePointerDeclaratorTests();
	state += RunInnerTreePointerOperatorTests();
	state += RunInnerTreePrimitiveDataTypeSpecifierTests();
	state += RunInnerTreeSimpleDeclarationTests();
	state += RunInnerTreeTypeSpecifierSequenceTests();
	state += RunInnerTreeValueEqualInitializerTests();

	state += RunInnerTreeBinaryExpressionTests();
	state += RunInnerTreeIdentifierExpressionTests();
	state += RunInnerTreeInvocationExpressionTests();
	state += RunInnerTreeLambdaCaptureClauseTests();
	state += RunInnerTreeLambdaExpressionTests();
	state += RunInnerTreeLiteralExpressionTests();
	state += RunInnerTreeSubscriptExpressionTests();
	state += RunInnerTreeThisExpressionTests();
	state += RunInnerTreeUnaryExpressionTests();

	state += RunInnerTreeDestructorIdentifierTests();
	state += RunInnerTreeNestedNameSpecifierTests();
	state += RunInnerTreeSimpleIdentifierTests();
	state += RunInnerTreeSimpleTemplateIdentifierTests();

	state += RunInnerTreeCompoundStatementTests();
	state += RunInnerTreeElseClauseTests();
	state += RunInnerTreeEmptyStatementTests();
	state += RunInnerTreeExpressionStatementTests();
	state += RunInnerTreeIfStatementTests();
	state += RunInnerTreeReturnStatementTests();
	state += RunInnerTreeDeclarationStatementTests();

	state += RunInnerTreeSyntaxTokenTests();
	state += RunInnerTreeTranslationUnitTests();

	// Outer Tree
	state += RunOuterTreeAttributeTests();
	state += RunOuterTreeAttributeArgumentClauseTests();
	state += RunOuterTreeAttributeSpecifierTests();

	state += RunOuterTreeAccessorSpecifierTests();
	state += RunOuterTreeClassSpecifierTests();
	state += RunOuterTreeConstructorDefinitionTests();
	state += RunOuterTreeConstructorInitializerTests();
	state += RunOuterTreeDeclarationSpecifierSequenceTests();
	state += RunOuterTreeDefaultFunctionBodyTests();
	state += RunOuterTreeDeleteFunctionBodyTests();
	state += RunOuterTreeEmptyDeclarationTests();
	state += RunOuterTreeEnumSpecifierTests();
	state += RunOuterTreeEnumeratorDefinitionTests();
	state += RunOuterTreeExportDeclarationTests();
	state += RunOuterTreeFunctionDefinitionTests();
	state += RunOuterTreeIdentifierTypeTests();
	state += RunOuterTreeInitializerDeclaratorListTests();
	state += RunOuterTreeInitializerDeclaratorTests();
	state += RunOuterTreeInitializerListTests();
	state += RunOuterTreeMemberDeclarationTests();
	state += RunOuterTreeMemberDeclaratorListTests();
	state += RunOuterTreeMemberDeclaratorTests();
	state += RunOuterTreeMemberInitializerTests();
	state += RunOuterTreeModuleDeclarationTests();
	state += RunOuterTreeModuleImportDeclarationTests();
	state += RunOuterTreeNamespaceDefinitionTests();
	state += RunOuterTreeParameterListTests();
	state += RunOuterTreeParameterTests();
	state += RunOuterTreePointerDeclaratorTests();
	state += RunOuterTreePointerOperatorTests();
	state += RunOuterTreePrimitiveDataTypeSpecifierTests();
	state += RunOuterTreeSimpleDeclarationTests();
	state += RunOuterTreeTypeSpecifierSequenceTests();
	state += RunOuterTreeValueEqualInitializerTests();

	state += RunOuterTreeBinaryExpressionTests();
	state += RunOuterTreeIdentifierExpressionTests();
	state += RunOuterTreeInvocationExpressionTests();
	state += RunOuterTreeLambdaCaptureClauseTests();
	state += RunOuterTreeLambdaExpressionTests();
	state += RunOuterTreeLiteralExpressionTests();
	state += RunOuterTreeSubscriptExpressionTests();
	state += RunOuterTreeThisExpressionTests();
	state += RunOuterTreeUnaryExpressionTests();

	state += RunOuterTreeDestructorIdentifierTests();
	state += RunOuterTreeNestedNameSpecifierTests();
	state += RunOuterTreeSimpleIdentifierTests();
	state += RunOuterTreeSimpleTemplateIdentifierTests();

	state += RunOuterTreeCompoundStatementTests();
	state += RunOuterTreeElseClauseTests();
	state += RunOuterTreeEmptyStatementTests();
	state += RunOuterTreeExpressionStatementTests();
	state += RunOuterTreeIfStatementTests();
	state += RunOuterTreeReturnStatementTests();
	state += RunOuterTreeDeclarationStatementTests();

	state += RunOuterTreeSyntaxNodeChildTests();
	state += RunOuterTreeSyntaxTokenTests();
	state += RunOuterTreeTranslationUnitTests();

	std::cout << state.FailCount << " FAILED." << std::endl;
	std::cout << state.PassCount << " PASSED." << std::endl;

	return 0;
}
