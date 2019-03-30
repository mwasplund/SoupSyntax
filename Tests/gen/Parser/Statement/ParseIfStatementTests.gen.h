#pragma once
#include "ParseIfStatementTests.h"
#include "../../RunTest.h"

TestState RunParseIfStatementTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseIfStatementTests>();
    TestState state = { 0, 0 };

    std::cout << "Running ParseIfStatementTests:" << std::endl;

    state += RunTest(
        "IfEmptyStatement",
        [&testClass]() { testClass->IfEmptyStatement(); });

    state += RunTest(
        "IfEmptyStatementWithElseClause",
        [&testClass]() { testClass->IfEmptyStatementWithElseClause(); });

    state += RunTest(
        "IfStatementReturnWithElseClause",
        [&testClass]() { testClass->IfStatementReturnWithElseClause(); });

    return state;
}
