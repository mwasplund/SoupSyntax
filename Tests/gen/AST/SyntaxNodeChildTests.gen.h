#pragma once
#include "SyntaxNodeChildTests.h"
#include "../RunTest.h"

TestState RunSyntaxNodeChildTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::SyntaxNodeChildTests>();
    TestState state = { 0, 0 };

    std::cout << "Running SyntaxNodeChildTests:" << std::endl;

    std::cout << "TokenInitializeSimple" << std::endl;
    state += RunTest([&testClass]() { testClass->TokenInitialize(); });

    std::cout << "TokenOperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->TokenOperatorEqual(); });

    std::cout << "TokenOperatorNotEqualToken" << std::endl;
    state += RunTest([&testClass]() { testClass->TokenOperatorNotEqualToken(); });

    std::cout << "TokenOperatorNotEqualNode" << std::endl;
    state += RunTest([&testClass]() { testClass->TokenOperatorNotEqualNode(); });

    std::cout << "NodeInitializeSimple" << std::endl;
    state += RunTest([&testClass]() { testClass->NodeInitialize(); });

    std::cout << "NodeOperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->NodeOperatorEqual(); });

    std::cout << "NodeOperatorNotEqualToken" << std::endl;
    state += RunTest([&testClass]() { testClass->NodeOperatorNotEqualToken(); });

    std::cout << "NodeOperatorNotEqualNode" << std::endl;
    state += RunTest([&testClass]() { testClass->NodeOperatorNotEqualNode(); });

    return state;
}