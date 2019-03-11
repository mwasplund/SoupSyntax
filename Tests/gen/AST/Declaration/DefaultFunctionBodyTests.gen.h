#pragma once
#include "DefaultFunctionBodyTests.h"
#include "../RunTest.h"

TestState RunDefaultFunctionBodyTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::DefaultFunctionBodyTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running DefaultFunctionBodyTests:" << std::endl;

    std::wcout << L"InitializeSimple" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::wcout << L"GetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildren(); });

    std::wcout << L"OperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::wcout << L"OperatorNotEqualEqualToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualEqualToken(); });

    std::wcout << L"OperatorNotEqualDefaultToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualDefaultToken(); });

    std::wcout << L"OperatorNotEqualSemicolonToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

    return state;
}