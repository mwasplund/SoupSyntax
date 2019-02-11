import std.core;
import Antlr4.Runtime;
import SoupSyntax;

#include "AST\BinaryExpressionTests.gen.h"
#include "AST\LiteralExpressionTests.gen.h"
#include "AST\NameExpressionTests.gen.h"
#include "AST\SubscriptExpressionTests.gen.h"
#include "AST\SyntaxTokenTests.gen.h"
#include "AST\UnaryExpressionTests.gen.h"

#include "Parser\LexerTests.gen.h"
#include "Parser\ParserAttributesTests.gen.h"
#include "Parser\ParserExpressionTests.gen.h"
#include "Parser\SyntaxFunctionTests.gen.h"
#include "Parser\SyntaxMiscTests.gen.h"
#include "Parser\SyntaxNamespaceTests.gen.h"
#include "Parser\SyntaxVariableTests.gen.h"

#include "Parser\Expression\PostfixExpressionTests.gen.h"
#include "Parser\Expression\PrimaryExpressionTests.gen.h"

int main()
{
    std::wcout << L"Running Tests..." << std::endl;

    int failedCount = 0;

    failedCount += RunBinaryExpressionTests();
    failedCount += RunLiteralExpressionTests();
    failedCount += RunNameExpressionTests();
    failedCount += RunSyntaxTokenTests();
    failedCount += RunSubscriptExpressionTests();
    failedCount += RunUnaryExpressionTests();

    failedCount += RunLexerTests();
    failedCount += RunParserAttributesTests();
    failedCount += RunParserExpressionTests();
    failedCount += RunSyntaxFunctionTests();
    failedCount += RunSyntaxMiscTests();
    failedCount += RunSyntaxNamespaceTests();
    failedCount += RunSyntaxVariableTests();

    failedCount += RunPostfixExpressionTests();
    failedCount += RunPrimaryExpressionTests();

    std::wcout << failedCount << L" FAILED." << std::endl;
    return 0;
}
