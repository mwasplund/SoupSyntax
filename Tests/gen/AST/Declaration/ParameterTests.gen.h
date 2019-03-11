#pragma once
#include "ParameterTests.h"
#include "../RunTest.h"

TestState RunParameterTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParameterTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running ParameterTests:" << std::endl;

    std::wcout << L"InitializeSimple" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::wcout << L"GetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildren(); });

    std::wcout << L"OperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::wcout << L"OperatorNotEqualDeclarationSpecifierSequence" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualDeclarationSpecifierSequence(); });

    std::wcout << L"OperatorNotEqualDeclarator" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualDeclarator(); });

    return state;
}