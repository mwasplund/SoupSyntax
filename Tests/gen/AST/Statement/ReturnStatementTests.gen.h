#pragma once
#include "ReturnStatementTests.h"
#include "../RunTest.h"

TestState RunReturnStatementTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ReturnStatementTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running ReturnStatementTests:" << std::endl;

    std::wcout << L"InitializeNoExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeNoExpression(); });

    std::wcout << L"InitializeWithExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeWithExpression(); });

    std::wcout << L"GetChildrenNoExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildrenNoExpression(); });

    std::wcout << L"GetChildrenWithExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildrenWithExpression(); });

    std::wcout << L"OperatorEqualNoExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqualNoExpression(); });

    std::wcout << L"OperatorEqualWithExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqualWithExpression(); });

    std::wcout << L"OperatorNotEqualReturnToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualReturnToken(); });

    std::wcout << L"OperatorNotEqualNoExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualNoExpression(); });

    std::wcout << L"OperatorNotEqualWithExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualWithExpression(); });

    std::wcout << L"OperatorNotEqualSemicolonToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualSemicolonToken(); });

    return state;
}