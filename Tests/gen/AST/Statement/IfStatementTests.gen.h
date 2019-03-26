#pragma once
#include "IfStatementTests.h"
#include "../RunTest.h"

TestState RunIfStatementTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::IfStatementTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running IfStatementTests:" << std::endl;

    std::wcout << L"InitializeNoElseClause" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeNoElseClause(); });

    std::wcout << L"InitializeWithElseClause" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeWithElseClause(); });

    std::wcout << L"GetChildrenNoElseClause" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildrenNoElseClause(); });

    std::wcout << L"GetChildrenWithElseClause" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildrenWithElseClause(); });

    std::wcout << L"OperatorEqualNoElseClause" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqualNoElseClause(); });

    std::wcout << L"OperatorEqualWithElseClause" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqualWithElseClause(); });

    std::wcout << L"OperatorNotEqualIfToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualIfToken(); });

    std::wcout << L"OperatorNotEqualOpenParenthesisToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualOpenParenthesisToken(); });

    std::wcout << L"OperatorNotEqualConditionExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualConditionExpression(); });

    std::wcout << L"OperatorNotEqualCloseParenthesisToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualCloseParenthesisToken(); });

    std::wcout << L"OperatorNotEqualStatement" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualStatement(); });

    std::wcout << L"OperatorNotEqualNoElseClause" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualNoElseClause(); });

    std::wcout << L"OperatorNotEqualWithElseClause" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualWithElseClause(); });

    return state;
}