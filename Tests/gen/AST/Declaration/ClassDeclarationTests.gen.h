#pragma once
#include "ClassDeclarationTests.h"
#include "../RunTest.h"

TestState RunClassDeclarationTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ClassDeclarationTests>();
    TestState state = { 0, 0 };

    std::cout << "Running ClassDeclarationTests:" << std::endl;

    std::cout << "InitializeNoIdentifier" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeNoIdentifier(); });

    std::cout << "InitializeWithIdentifier" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeWithIdentifier(); });

    std::cout << "GetChildrenNoIdentifier" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildrenNoIdentifier(); });

    std::cout << "GetChildrenWithIdentifier" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildrenWithIdentifier(); });

    std::cout << "OperatorEqualNoIdentifier" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqualNoIdentifier(); });

    std::cout << "OperatorEqualWithIdentifier" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqualWithIdentifier(); });

    std::cout << "OperatorNotEqualClassToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualClassToken(); });

    std::cout << "OperatorNotEqualNoIdentifier" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualNoIdentifier(); });

    std::cout << "OperatorNotEqualWithIdentifier" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualWithIdentifier(); });

    std::cout << "OperatorNotEqualOpenBraceToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualOpenBraceToken(); });

    std::cout << "OperatorNotEqualEnumeratorList" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualEnumeratorList(); });

    std::cout << "OperatorNotEqualCloseBraceToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualCloseBraceToken(); });

    return state;
}