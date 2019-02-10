#pragma once
#include "IntegerLiteralExpressionTests.h"
#include "../RunTest.h"

int RunIntegerLiteralExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::IntegerLiteralExressionTests>();
    int failedCount = 0;

    std::wcout << L"Running IntegerLiteralExressionTests:" << std::endl;

    std::wcout << L"InitializeSimple" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->InitializeSimple(); });

    return failedCount;
}