#pragma once
#include "PrimitiveDataTypeDeclarationTests.h"
#include "../RunTest.h"

TestState RunPrimitiveDataTypeDeclarationTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::PrimitiveDataTypeDeclarationTests>();
    TestState state = { 0, 0 };

    std::cout << "Running PrimitiveDataTypeDeclarationTests:" << std::endl;

    state += RunTest(
        "InitializeSimple",
        [&testClass]() { testClass->InitializeSimple(); });

    state += RunTest(
        "GetChildren",
        [&testClass]() { testClass->GetChildren(); });

    state += RunTest(
        "OperatorEqual",
        [&testClass]() { testClass->OperatorEqual(); });

    state += RunTest(
        "OperatorNotEqualPrimitiveType",
        [&testClass]() { testClass->OperatorNotEqualPrimitiveType(); });

    state += RunTest(
        "OperatorNotEqualToken",
        [&testClass]() { testClass->OperatorNotEqualToken(); });

    return state;
}