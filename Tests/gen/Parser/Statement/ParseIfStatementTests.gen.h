#pragma once
#include "ParseIfStatementTests.h"
#include "../../RunTest.h"

TestState RunParseIfStatementTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseIfStatementTests>();
    TestState state = { 0, 0 };

    std::cout << "Running ParseIfStatementTests:" << std::endl;

    std::cout << "IfEmptyStatement" << std::endl;
    state += RunTest([&testClass]() { testClass->IfEmptyStatement(); });

    std::cout << "IfEmptyStatementWithElseClause" << std::endl;
    state += RunTest([&testClass]() { testClass->IfEmptyStatementWithElseClause(); });

    std::cout << "IfStatementReturnWithElseClause" << std::endl;
    state += RunTest([&testClass]() { testClass->IfStatementReturnWithElseClause(); });

    return state;
}
