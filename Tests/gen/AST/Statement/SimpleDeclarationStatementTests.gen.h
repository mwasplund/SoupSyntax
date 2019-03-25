#pragma once
#include "SimpleDeclarationStatementTests.h"
#include "../RunTest.h"

TestState RunSimpleDeclarationStatementTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::SimpleDeclarationStatementTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running SimpleDeclarationStatementTests:" << std::endl;

    std::wcout << L"InitializeSimple" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::wcout << L"GetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildren(); });

    std::wcout << L"OperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::wcout << L"OperatorNotEqualDeclarationSpecifier" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualDeclarationSpecifier(); });

    std::wcout << L"OperatorNotEqualInitializerDeclaratorList" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualInitializerDeclaratorList(); });

    std::wcout << L"OperatorNotEqualSemicolonToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

    return state;
}