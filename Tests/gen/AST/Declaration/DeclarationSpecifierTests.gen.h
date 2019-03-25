#pragma once
#include "DeclarationSpecifierTests.h"
#include "../RunTest.h"

TestState RunDeclarationSpecifierTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::DeclarationSpecifierTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running DeclarationSpecifierTests:" << std::endl;

    std::wcout << L"InitializeSimpleNoModifiers" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimpleNoModifiers(); });

    std::wcout << L"InitializeSimpleWithModifiers" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimpleWithModifiers(); });

    std::wcout << L"GetChildrenNoModifiers" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildrenNoModifiers(); });

    std::wcout << L"GetChildrenWithModifiers" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildrenWithModifiers(); });

    std::wcout << L"OperatorEqualNoModifiers" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqualNoModifiers(); });

    std::wcout << L"OperatorEqualWithModifiers" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqualWithModifiers(); });

    std::wcout << L"OperatorNotEqualNoLeadingModifiers" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualNoLeadingModifiers(); });

    std::wcout << L"OperatorNotEqualLeadingModifiers" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualLeadingModifiers(); });

    std::wcout << L"OperatorNotEqualTypeSpecifier" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualTypeSpecifier(); });

    std::wcout << L"OperatorNotEqualNoTrailingModifiers" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualNoTrailingModifiers(); });

    std::wcout << L"OperatorNotEqualTrailingModifiers" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualTrailingModifiers(); });

    return state;
}