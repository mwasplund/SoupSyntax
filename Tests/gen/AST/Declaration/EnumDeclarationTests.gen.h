#pragma once
#include "EnumDeclarationTests.h"
#include "../RunTest.h"

TestState RunEnumDeclarationTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::EnumDeclarationTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running EnumDeclarationTests:" << std::endl;

    std::wcout << L"InitializeNoClassOrIdentifier" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeNoClassOrIdentifier(); });

    std::wcout << L"InitializeWithClassAndIdentifier" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeWithClassAndIdentifier(); });

    std::wcout << L"GetChildrenNoClassOrIdentifier" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildrenNoClassOrIdentifier(); });

    std::wcout << L"GetChildrenWithClassAndIdentifier" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildrenWithClassAndIdentifier(); });

    std::wcout << L"OperatorEqualNoClassOrIdentifier" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqualNoClassOrIdentifier(); });

    std::wcout << L"OperatorEqualWithClassAndIdentifier" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqualWithClassAndIdentifier(); });

    std::wcout << L"OperatorNotEqualEnumToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualEnumToken(); });

    std::wcout << L"OperatorNotEqualNoClass" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualNoClass(); });

    std::wcout << L"OperatorNotEqualWithClass" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualWithClass(); });

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