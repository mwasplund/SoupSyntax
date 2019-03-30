#pragma once
#include "PrimitiveDataTypeDeclarationTests.h"
#include "../RunTest.h"

TestState RunPrimitiveDataTypeDeclarationTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::PrimitiveDataTypeDeclarationTests>();
    TestState state = { 0, 0 };

    std::cout << "Running PrimitiveDataTypeDeclarationTests:" << std::endl;

    std::cout << "InitializeSimple" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::cout << "GetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildren(); });

    std::cout << "OperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::cout << "OperatorNotEqualPrimitiveType" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualPrimitiveType(); });

    std::cout << "OperatorNotEqualToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualToken(); });

    return state;
}