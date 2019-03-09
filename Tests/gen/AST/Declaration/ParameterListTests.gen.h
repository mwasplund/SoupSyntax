#pragma once
#include "ParameterListTests.h"
#include "../RunTest.h"

int RunParameterListTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParameterListTests>();
    int failedCount = 0;

    std::wcout << L"Running ParameterListTests:" << std::endl;

    std::wcout << L"InitializeSimple" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::wcout << L"OperatorEqual" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::wcout << L"OperatorNotEqualLeftParenthesisToken" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorNotEqualLeftParenthesisToken(); });

    std::wcout << L"OperatorNotEqualParameters" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorNotEqualParameters(); });

    std::wcout << L"OperatorNotEqualRightParenthesisToken" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorNotEqualRightParenthesisToken(); });

    return failedCount;
}