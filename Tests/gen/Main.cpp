import std.core;
import Antlr4.Runtime;
import SoupSyntax;

#include "AST\Declaration\DefaultFunctionBodyTests.gen.h"
#include "AST\Declaration\DeleteFunctionBodyTests.gen.h"
#include "AST\Declaration\FunctionDefinitionTests.gen.h"
#include "AST\Declaration\ParameterListTests.gen.h"
#include "AST\Declaration\ParameterTests.gen.h"
#include "AST\Declaration\PrimitiveDataTypeDeclarationTests.gen.h"

#include "AST\Expression\BinaryExpressionTests.gen.h"
#include "AST\Expression\LiteralExpressionTests.gen.h"
#include "AST\Expression\NameExpressionTests.gen.h"
#include "AST\Expression\SubscriptExpressionTests.gen.h"
#include "AST\Expression\ThisExpressionTests.gen.h"
#include "AST\Expression\UnaryExpressionTests.gen.h"

#include "AST\SyntaxNodeChildTests.gen.h"
#include "AST\SyntaxTokenTests.gen.h"

#include "Parser\LexerTests.gen.h"
#include "Parser\ParserAttributesTests.gen.h"
#include "Parser\ParserExpressionTests.gen.h"
#include "Parser\SyntaxFunctionTests.gen.h"
#include "Parser\SyntaxMiscTests.gen.h"
#include "Parser\SyntaxNamespaceTests.gen.h"
#include "Parser\SyntaxVariableTests.gen.h"

#include "Parser\Expression\ParseLiteralExpressionTests.gen.h"
#include "Parser\Expression\ParseNameExpressionTests.gen.h"
#include "Parser\Expression\ParseSubscriptExpressionTests.gen.h"
#include "Parser\Expression\ParseThisExpressionTests.gen.h"
#include "Parser\Expression\ParseUnaryExpressionTests.gen.h"

int main()
{
    std::wcout << L"Running Tests..." << std::endl;

    int failedCount = 0;

    failedCount += RunDefaultFunctionBodyTests();
    failedCount += RunDeleteFunctionBodyTests();
    failedCount += RunFunctionDefinitionTests();
    failedCount += RunParameterListTests();
    failedCount += RunParameterTests();
    failedCount += RunPrimitiveDataTypeDeclarationTests();

    failedCount += RunBinaryExpressionTests();
    failedCount += RunLiteralExpressionTests();
    failedCount += RunNameExpressionTests();
    failedCount += RunSubscriptExpressionTests();
    failedCount += RunThisExpressionTests();
    failedCount += RunUnaryExpressionTests();

    failedCount += RunSyntaxNodeChildTests();
    failedCount += RunSyntaxTokenTests();

    failedCount += RunLexerTests();
    failedCount += RunParserAttributesTests();
    failedCount += RunParserExpressionTests();
    failedCount += RunSyntaxFunctionTests();
    failedCount += RunSyntaxMiscTests();
    failedCount += RunSyntaxNamespaceTests();
    failedCount += RunSyntaxVariableTests();

    failedCount += RunParseLiteralExpressionTests();
    failedCount += RunParseNameExpressionTests();
    failedCount += RunParseSubscriptExpressionTests();
    failedCount += RunParseThisExpressionTests();
    failedCount += RunParseUnaryExpressionTests();

    std::wcout << failedCount << L" FAILED." << std::endl;
    return 0;
}
