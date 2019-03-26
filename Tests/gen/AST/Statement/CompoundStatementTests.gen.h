#pragma once
#include "CompoundStatementTests.h"
#include "../RunTest.h"

TestState RunCompoundStatementTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::CompoundStatementTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running CompoundStatementTests:" << std::endl;

    std::wcout << L"InitializeEmpty" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeEmpty(); });

    std::wcout << L"InitializeSingleStatement" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSingleStatement(); });

    std::wcout << L"GetChildrenEmpty" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildrenEmpty(); });

    std::wcout << L"GetChildrenSingleStatement" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildrenSingleStatement(); });

    std::wcout << L"OperatorEqualEmpty" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqualEmpty(); });

    std::wcout << L"OperatorEqualSingleStatement" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqualSingleStatement(); });

    std::wcout << L"OperatorNotEqualOpenBraceToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualOpenBraceToken(); });

    std::wcout << L"OperatorNotEqualEmpty" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualEmpty(); });

    std::wcout << L"OperatorNotEqualSingleStatement" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualSingleStatement(); });

    std::wcout << L"OperatorNotEqualCloseBraceToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualCloseBraceToken(); });

    return state;
}