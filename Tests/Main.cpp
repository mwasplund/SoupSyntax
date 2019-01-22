import std.core;
import Antlr4.Runtime;
import SoupSyntax;

#include "LexerTests.gen.h"
#include "ParserTests.gen.h"
#include "SyntaxVariableTests.gen.h"

int main()
{
  std::wcout << L"Running Tests..." << std::endl;

  int failedCount = 0;
  failedCount += RunLexerTests();
  failedCount += RunParserTests();
  failedCount += RunSyntaxVariableTests();

  std::wcout << failedCount << L" FAILED." << std::endl;
  return 0;
}