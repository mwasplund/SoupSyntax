#pragma once
#include "ParseSimpleDeclarationStatementTests.h"
#include "../../RunTest.h"

TestState RunParseSimpleDeclarationStatementTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseSimpleDeclarationStatementTests>();
    TestState state = { 0, 0 };

    std::cout << "Running ParseSimpleDeclarationStatementTests:" << std::endl;

    std::cout << "SingleIntVariable" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleIntVariable(); });

    std::cout << "SingleIntVariableWithInitializer" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleIntVariableWithInitializer(); });

    std::cout << "DoubleIntVariable" << std::endl;
    state += RunTest([&testClass]() { testClass->DoubleIntVariable(); });

    std::cout << "DoubleIntVariableSingleWithInitializer" << std::endl;
    state += RunTest([&testClass]() { testClass->DoubleIntVariableSingleWithInitializer(); });

    std::cout << "DoubleIntVariableBothWithInitializer" << std::endl;
    state += RunTest([&testClass]() { testClass->DoubleIntVariableBothWithInitializer(); });

    std::cout << "SingleIntLeadingAndTrailingModifierVariable" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleIntLeadingAndTrailingModifierVariable(); });

    return state;
}
