#pragma once
#include "ClassDeclarationTests.h"
#include "../RunTest.h"

TestState RunClassDeclarationTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ClassDeclarationTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running ClassDeclarationTests:" << std::endl;

    std::wcout << L"InitializeNoIdentifier" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeNoIdentifier(); });

    std::wcout << L"InitializeWithIdentifier" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeWithIdentifier(); });

    std::wcout << L"GetChildrenNoIdentifier" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildrenNoIdentifier(); });

    std::wcout << L"GetChildrenWithIdentifier" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildrenWithIdentifier(); });

    std::wcout << L"OperatorEqualNoIdentifier" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqualNoIdentifier(); });

    std::wcout << L"OperatorEqualWithIdentifier" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqualWithIdentifier(); });

    std::wcout << L"OperatorNotEqualClassToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualClassToken(); });

    std::wcout << L"OperatorNotEqualNoIdentifier" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualNoIdentifier(); });

    std::wcout << L"OperatorNotEqualWithIdentifier" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualWithIdentifier(); });

    std::wcout << L"OperatorNotEqualOpenBraceToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualOpenBraceToken(); });

    std::wcout << L"OperatorNotEqualEnumeratorList" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualEnumeratorList(); });

    std::wcout << L"OperatorNotEqualCloseBraceToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualCloseBraceToken(); });

    return state;
}