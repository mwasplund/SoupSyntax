#pragma once
#include "AST/InnerTree/Declaration/PrimitiveDataTypeDeclarationTests.h"
#include "RunTest.h"

TestState RunInnerTreePrimitiveDataTypeDeclarationTests()
{
    std::string className = "InnerTree::PrimitiveDataTypeDeclarationTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::InnerTreePrimitiveDataTypeDeclarationTests>();
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