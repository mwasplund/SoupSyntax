#pragma once
#include "ParseIfStatementTests.h"
#include "../../RunTest.h"

TestState RunParseIfStatementTests()
{
    std::string className = "ParseIfStatementTests";
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseIfStatementTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "IfEmptyStatement",
        [&testClass]() { testClass->IfEmptyStatement(); });
    state += RunTest(
        className,
        "IfEmptyStatementWithElseClause",
        [&testClass]() { testClass->IfEmptyStatementWithElseClause(); });
    state += RunTest(
        className,
        "IfStatementReturnWithElseClause",
        [&testClass]() { testClass->IfStatementReturnWithElseClause(); });

    return state;
}
