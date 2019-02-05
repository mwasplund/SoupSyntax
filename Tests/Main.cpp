import std.core;
import Antlr4.Runtime;
import SoupSyntax;

#include "LexerTests.gen.h"
#include "ParserAttributesTests.gen.h"
#include "ParserExpressionTests.gen.h"
#include "ParserTests.gen.h"
#include "SyntaxFunctionTests.gen.h"
#include "SyntaxMiscTests.gen.h"
#include "SyntaxNamespaceTests.gen.h"
#include "SyntaxVariableTests.gen.h"

int main()
{
  std::wcout << L"Running Tests..." << std::endl;

  int failedCount = 0;
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
