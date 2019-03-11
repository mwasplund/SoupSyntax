#pragma once
#include "FunctionDefinitionTests.h"
#include "../RunTest.h"

TestState RunFunctionDefinitionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::FunctionDefinitionTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running FunctionDefinitionTests:" << std::endl;

    std::wcout << L"InitializeSimple" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::wcout << L"GetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildren(); });

    std::wcout << L"OperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::wcout << L"OperatorNotEqualReturnType" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualReturnType(); });

    std::wcout << L"OperatorNotEqualIdentifier" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualIdentifier(); });

    std::wcout << L"OperatorNotEqualParameterList" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualParameterList(); });

    std::wcout << L"OperatorNotEqualBody" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualBody(); });

    return state;
}