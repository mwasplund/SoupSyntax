#pragma once
#include "AST/OuterTree/Declaration/PrimitiveDataTypeSpecifierTests.h"
#include "RunTest.h"

TestState RunOuterTreePrimitiveDataTypeSpecifierTests()
{
    std::string className = "OuterTree::PrimitiveDataTypeSpecifierTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::OuterTreePrimitiveDataTypeSpecifierTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "InitializeSimple",
        [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(
        className,
        "GetChildren",
        [&testClass]() { testClass->GetChildren(); });
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