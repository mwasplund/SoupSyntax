#pragma once
#include "AST/OuterTree/Declaration/PrimitiveDataTypeDeclarationTests.h"
#include "RunTest.h"

TestState RunOuterTreePrimitiveDataTypeDeclarationTests()
{
    std::string className = "OuterTree::PrimitiveDataTypeDeclarationTests";
    auto testClass = std::make_unique<Soup::Syntax::OuterTree::UnitTests::PrimitiveDataTypeDeclarationTests>();
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