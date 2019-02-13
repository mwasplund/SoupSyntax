#pragma once
#include "LiteralExpressionTests.h"
#include "../RunTest.h"

int RunLiteralExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::LiteralExressionTests>();
    int failedCount = 0;

    std::wcout << L"Running LiteralExressionTests:" << std::endl;

    std::wcout << L"InitializeSimple" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::wcout << L"OperatorEqual" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::wcout << L"OperatorNotEqualType" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorNotEqualType(); });

    std::wcout << L"OperatorNotEqualToken" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->OperatorNotEqualToken(); });

    return failedCount;
}