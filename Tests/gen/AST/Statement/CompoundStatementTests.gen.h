#pragma once
#include "CompoundStatementTests.h"
#include "../RunTest.h"

TestState RunCompoundStatementTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::CompoundStatementTests>();
    TestState state = { 0, 0 };

    std::cout << "Running CompoundStatementTests:" << std::endl;

    std::cout << "InitializeEmpty" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeEmpty(); });

    std::cout << "InitializeSingleStatement" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSingleStatement(); });

    std::cout << "GetChildrenEmpty" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildrenEmpty(); });

    std::cout << "GetChildrenSingleStatement" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildrenSingleStatement(); });

    std::cout << "OperatorEqualEmpty" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqualEmpty(); });

    std::cout << "OperatorEqualSingleStatement" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqualSingleStatement(); });

    std::cout << "OperatorNotEqualOpenBraceToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualOpenBraceToken(); });

    std::cout << "OperatorNotEqualEmpty" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualEmpty(); });

    std::cout << "OperatorNotEqualSingleStatement" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualSingleStatement(); });

    std::cout << "OperatorNotEqualCloseBraceToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualCloseBraceToken(); });

    return state;
}