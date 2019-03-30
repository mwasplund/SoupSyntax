#pragma once
#include "EnumDeclarationTests.h"
#include "../RunTest.h"

TestState RunEnumDeclarationTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::EnumDeclarationTests>();
    TestState state = { 0, 0 };

    std::cout << "Running EnumDeclarationTests:" << std::endl;

    std::cout << "InitializeNoClassOrIdentifier" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeNoClassOrIdentifier(); });

    std::cout << "InitializeWithClassAndIdentifier" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeWithClassAndIdentifier(); });

    std::cout << "GetChildrenNoClassOrIdentifier" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildrenNoClassOrIdentifier(); });

    std::cout << "GetChildrenWithClassAndIdentifier" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildrenWithClassAndIdentifier(); });

    std::cout << "OperatorEqualNoClassOrIdentifier" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqualNoClassOrIdentifier(); });

    std::cout << "OperatorEqualWithClassAndIdentifier" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqualWithClassAndIdentifier(); });

    std::cout << "OperatorNotEqualEnumToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualEnumToken(); });

    std::cout << "OperatorNotEqualNoClass" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualNoClass(); });

    std::cout << "OperatorNotEqualWithClass" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualWithClass(); });

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