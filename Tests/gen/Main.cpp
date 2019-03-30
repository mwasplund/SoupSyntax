import std.core;
import Antlr4.Runtime;
import SoupSyntax;

#include "AST\Declaration\ClassDeclarationTests.gen.h"
#include "AST\Declaration\DeclarationSpecifierTests.gen.h"
#include "AST\Declaration\DefaultFunctionBodyTests.gen.h"
#include "AST\Declaration\DeleteFunctionBodyTests.gen.h"
#include "AST\Declaration\EmptyDeclarationTests.gen.h"
#include "AST\Declaration\EnumDeclarationTests.gen.h"
#include "AST\Declaration\EnumeratorDefinitionTests.gen.h"
#include "AST\Declaration\FunctionDefinitionTests.gen.h"
#include "AST\Declaration\InitializerDeclaratorListTests.gen.h"
#include "AST\Declaration\InitializerDeclaratorTests.gen.h"
#include "AST\Declaration\ParameterListTests.gen.h"
#include "AST\Declaration\ParameterTests.gen.h"
#include "AST\Declaration\PrimitiveDataTypeDeclarationTests.gen.h"
#include "AST\Declaration\ValueEqualInitializerTests.gen.h"

#include "AST\Expression\BinaryExpressionTests.gen.h"
#include "AST\Expression\LiteralExpressionTests.gen.h"
#include "AST\Expression\NameExpressionTests.gen.h"
#include "AST\Expression\SubscriptExpressionTests.gen.h"
#include "AST\Expression\ThisExpressionTests.gen.h"
#include "AST\Expression\UnaryExpressionTests.gen.h"

#include "AST\Statement\CompoundStatementTests.gen.h"
#include "AST\Statement\ElseClauseTests.gen.h"
#include "AST\Statement\EmptyStatementTests.gen.h"
#include "AST\Statement\IfStatementTests.gen.h"
#include "AST\Statement\ReturnStatementTests.gen.h"
#include "AST\Statement\SimpleDeclarationStatementTests.gen.h"

#include "AST\SyntaxNodeChildTests.gen.h"
#include "AST\SyntaxTokenTests.gen.h"

#include "Parser\LexerTests.gen.h"
#include "Parser\ParserAttributesTests.gen.h"
#include "Parser\ParserExpressionTests.gen.h"
#include "Parser\SyntaxMiscTests.gen.h"
#include "Parser\SyntaxNamespaceTests.gen.h"

#include "Parser\Declaration\ParseClassDeclarationTests.gen.h"
#include "Parser\Declaration\ParseEnumDeclarationTests.gen.h"
#include "Parser\Declaration\ParseFunctionDefinitionTests.gen.h"

#include "Parser\Expression\ParseBinaryExpressionTests.gen.h"
#include "Parser\Expression\ParseLiteralExpressionTests.gen.h"
#include "Parser\Expression\ParseNameExpressionTests.gen.h"
#include "Parser\Expression\ParseSubscriptExpressionTests.gen.h"
#include "Parser\Expression\ParseThisExpressionTests.gen.h"
#include "Parser\Expression\ParseUnaryExpressionTests.gen.h"

#include "Parser\Statement\ParseCompoundStatementTests.gen.h"
#include "Parser\Statement\ParseIfStatementTests.gen.h"
#include "Parser\Statement\ParseReturnStatementTests.gen.h"
#include "Parser\Statement\ParseSimpleDeclarationStatementTests.gen.h"

int main()
{
    std::cout << "Running Tests..." << std::endl;

    TestState state = { 0, 0 };

    state += RunClassDeclarationTests();
    state += RunDeclarationSpecifierTests();
    state += RunDefaultFunctionBodyTests();
    state += RunDeleteFunctionBodyTests();
    state += RunEmptyDeclarationTests();
    state += RunEnumDeclarationTests();
    state += RunEnumeratorDefinitionTests();
    state += RunFunctionDefinitionTests();
    state += RunInitializerDeclaratorListTests();
    state += RunInitializerDeclaratorTests();
    state += RunParameterListTests();
    state += RunParameterTests();
    state += RunPrimitiveDataTypeDeclarationTests();
    state += RunValueEqualInitializerTests();

    state += RunBinaryExpressionTests();
    state += RunLiteralExpressionTests();
    state += RunNameExpressionTests();
    state += RunSubscriptExpressionTests();
    state += RunThisExpressionTests();
    state += RunUnaryExpressionTests();

    state += RunCompoundStatementTests();
    state += RunElseClauseTests();
    state += RunEmptyStatementTests();
    state += RunIfStatementTests();
    state += RunReturnStatementTests();
    state += RunSimpleDeclarationStatementTests();

    state += RunSyntaxNodeChildTests();
    state += RunSyntaxTokenTests();

    state += RunLexerTests();
    state += RunParserAttributesTests();
    state += RunParserExpressionTests();
    state += RunSyntaxMiscTests();
    state += RunSyntaxNamespaceTests();

    state += RunParseClassDeclarationTests();
    state += RunParseEnumDeclarationTests();
    state += RunParseFunctionDefinitionTests();

    state += RunParseBinaryExpressionTests();
    state += RunParseLiteralExpressionTests();
    state += RunParseNameExpressionTests();
    state += RunParseSubscriptExpressionTests();
    state += RunParseThisExpressionTests();
    state += RunParseUnaryExpressionTests();

    state += RunParseCompoundStatementTests();
    state += RunParseIfStatementTests();
    state += RunParseReturnStatementTests();
    state += RunParseSimpleDeclarationStatementTests();

    std::cout << state.FailCount << " FAILED." << std::endl;
    std::cout << state.PassCount << " PASSED." << std::endl;

    return 0;
}
