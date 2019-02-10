import std.core;
import Antlr4.Runtime;
import SoupSyntax;

#include "AST\BinaryExpressionTests.gen.h"
#include "AST\IntegerLiteralExpressionTests.gen.h"

#include "Parser\LexerTests.gen.h"
#include "Parser\ParserAttributesTests.gen.h"
#include "Parser\ParserExpressionTests.gen.h"
#include "Parser\ParserTests.gen.h"
#include "Parser\SyntaxFunctionTests.gen.h"
#include "Parser\SyntaxMiscTests.gen.h"
#include "Parser\SyntaxNamespaceTests.gen.h"
#include "Parser\SyntaxVariableTests.gen.h"

int main()
{
  std::wcout << L"Running Tests..." << std::endl;

  int failedCount = 0;

  failedCount += RunBinaryExpressionTests();
  failedCount += RunIntegerLiteralExpressionTests();

  failedCount += RunLexerTests();
  failedCount += RunParserAttributesTests();
  failedCount += RunParserExpressionTests();
  failedCount += RunParserTests();
  failedCount += RunSyntaxFunctionTests();
  failedCount += RunSyntaxMiscTests();
  failedCount += RunSyntaxNamespaceTests();
  failedCount += RunSyntaxVariableTests();

  std::wcout << failedCount << L" FAILED." << std::endl;
  return 0;
}
