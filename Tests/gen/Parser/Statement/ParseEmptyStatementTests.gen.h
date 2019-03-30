#pragma once
#include "ParseEmptyStatementTests.h"
#include "../../RunTest.h"

TestState RunParseEmptyStatementTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseEmptyStatementTests>();
    TestState state = { 0, 0 };

    std::cout << "Running ParseEmptyStatementTests:" << std::endl;

    state += RunTest(
        "Simple",
        [&testClass]() { testClass->Simple(); });

    return state;
}
