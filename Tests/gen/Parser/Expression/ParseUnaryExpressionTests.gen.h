#pragma once
#include "ParseUnaryExpressionTests.h"
#include "../../RunTest.h"

TestState RunParseUnaryExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseUnaryExpressionTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running ParseUnaryExpressionTests:" << std::endl;

    std::wcout << L"SingleIdentifierPlus" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleIdentifierPlus(); });

    std::wcout << L"SingleIdentifierMinus" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleIdentifierMinus(); });

    std::wcout << L"SingleIdentifierBitwiseNot" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleIdentifierBitwiseNot(); });

    std::wcout << L"SingleIdentifierPreIncrement" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleIdentifierPreIncrement(); });

    std::wcout << L"SingleIdentifierPreDecrement" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleIdentifierPreDecrement(); });

    std::wcout << L"SingleIdentifierPostIncrement" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleIdentifierPostIncrement(); });

    std::wcout << L"SingleIdentifierPostDecrement" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleIdentifierPostDecrement(); });

    std::wcout << L"SingleIdentifierLogicalNot" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleIdentifierLogicalNot(); });

    std::wcout << L"SingleIdentifierIndirection" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleIdentifierIndirection(); });

    std::wcout << L"SingleIdentifierAddressOf" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleIdentifierAddressOf(); });

    return state;
}
