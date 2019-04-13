#pragma once
#include "PrimitiveDataTypeDeclarationTests.h"
#include "../RunTest.h"

TestState RunPrimitiveDataTypeDeclarationTests()
{
    std::string className = "PrimitiveDataTypeDeclarationTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::PrimitiveDataTypeDeclarationTests>();
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