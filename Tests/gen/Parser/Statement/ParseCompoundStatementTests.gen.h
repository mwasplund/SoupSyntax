#pragma once
#include "ParseCompoundStatementTests.h"
#include "../../RunTest.h"

TestState RunParseCompoundStatementTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseCompoundStatementTests>();
    TestState state = { 0, 0 };

    std::cout << "Running ParseCompoundStatementTests:" << std::endl;

    state += RunTest(
        "EmptyCompoundStatement",
        [&testClass]() { testClass->EmptyCompoundStatement(); });

    state += RunTest(
        "CompoundStatementWithSingleStatment",
        [&testClass]() { testClass->CompoundStatementWithSingleStatment(); });

    return state;
}
