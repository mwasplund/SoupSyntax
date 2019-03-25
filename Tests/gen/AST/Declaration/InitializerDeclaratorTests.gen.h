#pragma once
#include "InitializerDeclaratorTests.h"
#include "../RunTest.h"

TestState RunInitializerDeclaratorTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::InitializerDeclaratorTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running InitializerDeclaratorTests:" << std::endl;

    std::wcout << L"InitializeSimpleNoInitializer" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimpleNoInitializer(); });

    std::wcout << L"InitializeSimpleWithInitializer" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimpleWithInitializer(); });

    std::wcout << L"GetChildrenNoInitializer" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildrenNoInitializer(); });

    std::wcout << L"GetChildrenWithInitializer" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildrenWithInitializer(); });

    std::wcout << L"OperatorEqualNoInitializer" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqualNoInitializer(); });

    std::wcout << L"OperatorEqualWithInitializer" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqualWithInitializer(); });

    std::wcout << L"OperatorNotEqualDeclarator" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualDeclarator(); });

    std::wcout << L"OperatorNotEqualNoInitializer" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualNoInitializer(); });

    std::wcout << L"OperatorNotEqualWithInitializer" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualWithInitializer(); });

    return state;
}