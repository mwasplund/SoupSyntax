#pragma once
#include "ParseIfStatementTests.h"
#include "../../RunTest.h"

TestState RunParseIfStatementTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseIfStatementTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running ParseIfStatementTests:" << std::endl;

    std::wcout << L"IfEmptyStatement" << std::endl;
    state += RunTest([&testClass]() { testClass->IfEmptyStatement(); });

    std::wcout << L"IfEmptyStatementWithElseClause" << std::endl;
    state += RunTest([&testClass]() { testClass->IfEmptyStatementWithElseClause(); });

    std::wcout << L"IfStatementReturnWithElseClause" << std::endl;
    state += RunTest([&testClass]() { testClass->IfStatementReturnWithElseClause(); });

    return state;
}
