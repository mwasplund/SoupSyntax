import std.core;
import Antlr4.Runtime;
import SoupSyntax;

#include "LexerTests.h"

using namespace Soup::Syntax::UnitTests;

int main()
{
  std::wcout << L"Hello World!" << std::endl;

  try
  {
    auto lexerTests = std::make_unique<LexerTests>();
    lexerTests->Run();
    std::wcout << L"Tests PASS!" << std::endl;
  }
  catch (...)
  {
    std::wcout << L"Tests FAIL!" << std::endl;
  }

  return 0;
}