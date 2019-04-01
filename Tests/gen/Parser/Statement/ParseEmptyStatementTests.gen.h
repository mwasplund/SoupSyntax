#pragma once
#include "ParseEmptyStatementTests.h"
#include "../../RunTest.h"

TestState RunParseEmptyStatementTests()
{
    std::string className = "ParseEmptyStatementTests";
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseEmptyStatementTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "Simple",
        [&testClass]() { testClass->Simple(); });

    return state;
}
