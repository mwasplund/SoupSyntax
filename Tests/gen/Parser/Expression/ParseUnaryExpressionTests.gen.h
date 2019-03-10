#pragma once
#include "ParseUnaryExpressionTests.h"
#include "../../RunTest.h"

int RunParseUnaryExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseUnaryExpressionTests>();
    int failedCount = 0;

    std::wcout << L"Running ParseUnaryExpressionTests:" << std::endl;

    std::wcout << L"SingleIdentifierPlus" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleIdentifierPlus(); });

    std::wcout << L"SingleIdentifierMinus" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleIdentifierMinus(); });

    std::wcout << L"SingleIdentifierBitwiseNot" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleIdentifierBitwiseNot(); });

    std::wcout << L"SingleIdentifierPreIncrement" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleIdentifierPreIncrement(); });

    std::wcout << L"SingleIdentifierPreDecrement" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleIdentifierPreDecrement(); });

    std::wcout << L"SingleIdentifierPostIncrement" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleIdentifierPostIncrement(); });

    std::wcout << L"SingleIdentifierPostDecrement" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleIdentifierPostDecrement(); });

    std::wcout << L"SingleIdentifierLogicalNot" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleIdentifierLogicalNot(); });

    std::wcout << L"SingleIdentifierIndirection" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleIdentifierIndirection(); });

    std::wcout << L"SingleIdentifierAddressOf" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleIdentifierAddressOf(); });

    return failedCount;
}
