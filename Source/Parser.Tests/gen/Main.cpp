import std.core;
import Antlr4.Runtime;
import Soup.Syntax.Parser;

#include "..\..\..\SoupTest\Assert\SoupAssert.h"
#include "..\..\..\SoupTest\Assert\RunTest.h"
using namespace SoupTest;

#include "Parser\LexerTests.gen.h"
#include "Parser\ParserAttributesTests.gen.h"
#include "Parser\ParserExpressionTests.gen.h"
#include "Parser\ParseTranslationUnitTests.gen.h"

#include "Parser\Attribute\ParseAttributeSpecifierTests.gen.h"

#include "Parser\Declaration\ParseAccessorSpecifierTests.gen.h"
#include "Parser\Declaration\ParseClassSpecifierTests.gen.h"
#include "Parser\Declaration\ParseConstructorDefinitionTests.gen.h"
#include "Parser\Declaration\ParseEnumSpecifierTests.gen.h"
#include "Parser\Declaration\ParseFunctionDefinitionTests.gen.h"
#include "Parser\Declaration\ParseMemberDeclarationTests.gen.h"
#include "Parser\Declaration\ParseNamespaceDefinitionTests.gen.h"
#include "Parser\Declaration\ParseSimpleDeclarationTests.gen.h"

#include "Parser\Expression\ParseBinaryExpressionTests.gen.h"
#include "Parser\Expression\ParseIdentifierExpressionTests.gen.h"
#include "Parser\Expression\ParseInvocationExpressionTests.gen.h"
#include "Parser\Expression\ParseLambdaExpressionTests.gen.h"
#include "Parser\Expression\ParseLiteralExpressionTests.gen.h"
#include "Parser\Expression\ParseSubscriptExpressionTests.gen.h"
#include "Parser\Expression\ParseThisExpressionTests.gen.h"
#include "Parser\Expression\ParseUnaryExpressionTests.gen.h"

#include "Parser\Statement\ParseCompoundStatementTests.gen.h"
#include "Parser\Statement\ParseEmptyStatementTests.gen.h"
#include "Parser\Statement\ParseExpressionStatementTests.gen.h"
#include "Parser\Statement\ParseIfStatementTests.gen.h"
#include "Parser\Statement\ParseReturnStatementTests.gen.h"

#include "RoundTrip\RoundTripTests.gen.h"

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
	state += RunInnerTreeFunctionDefinitionTests();
	state += RunInnerTreeIdentifierTypeTests();
	state += RunInnerTreeInitializerDeclaratorListTests();
	state += RunInnerTreeInitializerDeclaratorTests();
	state += RunInnerTreeInitializerListTests();
	state += RunInnerTreeMemberDeclarationTests();
	state += RunInnerTreeMemberDeclaratorListTests();
	state += RunInnerTreeMemberDeclaratorTests();
	state += RunInnerTreeMemberInitializerTests();
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
	state += RunOuterTreeFunctionDefinitionTests();
	state += RunOuterTreeIdentifierTypeTests();
	state += RunOuterTreeInitializerDeclaratorListTests();
	state += RunOuterTreeInitializerDeclaratorTests();
	state += RunOuterTreeInitializerListTests();
	state += RunOuterTreeMemberDeclarationTests();
	state += RunOuterTreeMemberDeclaratorListTests();
	state += RunOuterTreeMemberDeclaratorTests();
	state += RunOuterTreeMemberInitializerTests();
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

	state += RunLexerTests();
	state += RunParserAttributesTests();
	state += RunParserExpressionTests();
	state += RunParseTranslationUnitTests();

	state += RunParseAttributeSpecifierTests();

	state += RunParseAccessorSpecifierTests();
	state += RunParseClassSpecifierTests();
	state += RunParseConstructorDefinitionTests();
	state += RunParseEnumSpecifierTests();
	state += RunParseFunctionDefinitionTests();
	state += RunParseMemberDeclarationTests();
	state += RunParseNamespaceDefinitionTests();
	state += RunParseSimpleDeclarationTests();

	state += RunParseBinaryExpressionTests();
	state += RunParseIdentifierExpressionTests();
	state += RunParseInvocationExpressionTests();
	state += RunParseLambdaExpressionTests();
	state += RunParseLiteralExpressionTests();
	state += RunParseSubscriptExpressionTests();
	state += RunParseThisExpressionTests();
	state += RunParseUnaryExpressionTests();

	state += RunParseCompoundStatementTests();
	state += RunParseIfStatementTests();
	state += RunParseReturnStatementTests();
	state += RunParseEmptyStatementTests();
	state += RunParseExpressionStatementTests();

	state += RunRoundTripTests();

	std::cout << state.FailCount << " FAILED." << std::endl;
	std::cout << state.PassCount << " PASSED." << std::endl;

	return 0;
}
