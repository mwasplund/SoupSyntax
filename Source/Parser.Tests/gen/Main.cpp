#include <filesystem>
#include <fstream>
#include <iostream>
#include <memory>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>

import Antlr4Runtime;
import SoupSyntaxParser;
import Soup.Test.Assert;

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

	std::cout << state.PassCount << " PASSED." << std::endl;
	std::cout << state.FailCount << " FAILED." << std::endl;

	if (state.FailCount > 0)
		return 1;
	else
		return 0;
}
