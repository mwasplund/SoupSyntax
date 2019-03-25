#pragma once
#include "ParseSimpleDeclarationStatementTests.h"
#include "../../RunTest.h"

TestState RunParseSimpleDeclarationStatementTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseSimpleDeclarationStatementTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running ParseSimpleDeclarationStatementTests:" << std::endl;

    std::wcout << L"SingleIntVariable" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleIntVariable(); });

    std::wcout << L"SingleIntVariableWithInitializer" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleIntVariableWithInitializer(); });

    std::wcout << L"DoubleIntVariable" << std::endl;
    state += RunTest([&testClass]() { testClass->DoubleIntVariable(); });

    std::wcout << L"DoubleIntVariableSingleWithInitializer" << std::endl;
    state += RunTest([&testClass]() { testClass->DoubleIntVariableSingleWithInitializer(); });

    std::wcout << L"DoubleIntVariableBothWithInitializer" << std::endl;
    state += RunTest([&testClass]() { testClass->DoubleIntVariableBothWithInitializer(); });

    std::wcout << L"SingleIntLeadingAndTrailingModifierVariable" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleIntLeadingAndTrailingModifierVariable(); });

    return state;
}
