#pragma once
#include "ParseCompoundStatementTests.h"
#include "../../RunTest.h"

TestState RunParseCompoundStatementTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseCompoundStatementTests>();
    TestState state = { 0, 0 };

    std::cout << "Running ParseCompoundStatementTests:" << std::endl;

    std::cout << "EmptyCompoundStatement" << std::endl;
    state += RunTest([&testClass]() { testClass->EmptyCompoundStatement(); });

    std::cout << "CompoundStatementWithSingleStatment" << std::endl;
    state += RunTest([&testClass]() { testClass->CompoundStatementWithSingleStatment(); });

    return state;
}
