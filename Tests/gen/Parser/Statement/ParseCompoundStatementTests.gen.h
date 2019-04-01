#pragma once
#include "ParseCompoundStatementTests.h"
#include "../../RunTest.h"

TestState RunParseCompoundStatementTests()
{
    std::string className = "ParseCompoundStatementTests";
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseCompoundStatementTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "EmptyCompoundStatement",
        [&testClass]() { testClass->EmptyCompoundStatement(); });
    state += RunTest(
        className,
        "CompoundStatementWithSingleStatment",
        [&testClass]() { testClass->CompoundStatementWithSingleStatment(); });

    return state;
}
