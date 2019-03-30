#pragma once
#include "SimpleDeclarationStatementTests.h"
#include "../RunTest.h"

TestState RunSimpleDeclarationStatementTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::SimpleDeclarationStatementTests>();
    TestState state = { 0, 0 };

    std::cout << "Running SimpleDeclarationStatementTests:" << std::endl;

    std::cout << "InitializeSimple" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::cout << "GetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildren(); });

    std::cout << "OperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::cout << "OperatorNotEqualDeclarationSpecifier" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualDeclarationSpecifier(); });

    std::cout << "OperatorNotEqualInitializerDeclaratorList" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualInitializerDeclaratorList(); });

    std::cout << "OperatorNotEqualSemicolonToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

    return state;
}