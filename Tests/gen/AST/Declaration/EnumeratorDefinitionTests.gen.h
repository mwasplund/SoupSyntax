#pragma once
#include "EnumeratorDefinitionTests.h"
#include "../RunTest.h"

TestState RunEnumeratorDefinitionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::EnumeratorDefinitionTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running EnumeratorDefinitionTests:" << std::endl;

    std::wcout << L"Initialize" << std::endl;
    state += RunTest([&testClass]() { testClass->Initialize(); });

    std::wcout << L"GetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildren(); });

    std::wcout << L"OperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::wcout << L"OperatorNotEqualIdentifierToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualIdentifierToken(); });

    return state;
}