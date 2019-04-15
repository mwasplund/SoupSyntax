#pragma once
#include "AST/InnerTree/Declaration/AccessorSpecifierTests.h"
#include "RunTest.h"

TestState RunInnerTreeAccessorSpecifierTests()
{
    std::string className = "InnerTree::AccessorSpecifierTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::InnerTreeAccessorSpecifierTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "Initialize",
        [&testClass]() { testClass->Initialize(); });
    state += RunTest(
        className,
        "OperatorEqual",
        [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(
        className,
        "OperatorNotEqualAccessorToken",
        [&testClass]() { testClass->OperatorNotEqualAccessorToken(); });
    state += RunTest(
        className,
        "OperatorNotEqualColonToken",
        [&testClass]() { testClass->OperatorNotEqualColonToken(); });

    return state;
}