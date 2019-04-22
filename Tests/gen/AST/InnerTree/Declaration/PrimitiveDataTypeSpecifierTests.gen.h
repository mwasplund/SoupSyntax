#pragma once
#include "AST/InnerTree/Declaration/PrimitiveDataTypeSpecifierTests.h"
#include "RunTest.h"

TestState RunInnerTreePrimitiveDataTypeSpecifierTests()
{
    std::string className = "InnerTree::PrimitiveDataTypeSpecifierTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::InnerTreePrimitiveDataTypeSpecifierTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "InitializeSimple",
        [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(
        className,
        "OperatorEqual",
        [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(
        className,
        "OperatorNotEqualPrimitiveType",
        [&testClass]() { testClass->OperatorNotEqualPrimitiveType(); });
    state += RunTest(
        className,
        "OperatorNotEqualToken",
        [&testClass]() { testClass->OperatorNotEqualToken(); });

    return state;
}