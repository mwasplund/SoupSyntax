#pragma once
#include "ParseUnaryExpressionTests.h"
#include "../../RunTest.h"

TestState RunParseUnaryExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseUnaryExpressionTests>();
    TestState state = { 0, 0 };

    std::cout << "Running ParseUnaryExpressionTests:" << std::endl;

    std::cout << "SingleIdentifierPlus" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleIdentifierPlus(); });

    std::cout << "SingleIdentifierMinus" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleIdentifierMinus(); });

    std::cout << "SingleIdentifierBitwiseNot" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleIdentifierBitwiseNot(); });

    std::cout << "SingleIdentifierPreIncrement" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleIdentifierPreIncrement(); });

    std::cout << "SingleIdentifierPreDecrement" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleIdentifierPreDecrement(); });

    std::cout << "SingleIdentifierPostIncrement" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleIdentifierPostIncrement(); });

    std::cout << "SingleIdentifierPostDecrement" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleIdentifierPostDecrement(); });

    std::cout << "SingleIdentifierLogicalNot" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleIdentifierLogicalNot(); });

    std::cout << "SingleIdentifierIndirection" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleIdentifierIndirection(); });

    std::cout << "SingleIdentifierAddressOf" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleIdentifierAddressOf(); });

    return state;
}
