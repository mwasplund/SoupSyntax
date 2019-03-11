#pragma once
#include "SyntaxNodeChildTests.h"
#include "../RunTest.h"

TestState RunSyntaxNodeChildTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::SyntaxNodeChildTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running SyntaxNodeChildTests:" << std::endl;

    std::wcout << L"TokenInitializeSimple" << std::endl;
    state += RunTest([&testClass]() { testClass->TokenInitialize(); });

    std::wcout << L"TokenOperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->TokenOperatorEqual(); });

    std::wcout << L"TokenOperatorNotEqualToken" << std::endl;
    state += RunTest([&testClass]() { testClass->TokenOperatorNotEqualToken(); });

    std::wcout << L"TokenOperatorNotEqualNode" << std::endl;
    state += RunTest([&testClass]() { testClass->TokenOperatorNotEqualNode(); });

    std::wcout << L"NodeInitializeSimple" << std::endl;
    state += RunTest([&testClass]() { testClass->NodeInitialize(); });

    std::wcout << L"NodeOperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->NodeOperatorEqual(); });

    std::wcout << L"NodeOperatorNotEqualToken" << std::endl;
    state += RunTest([&testClass]() { testClass->NodeOperatorNotEqualToken(); });

    std::wcout << L"NodeOperatorNotEqualNode" << std::endl;
    state += RunTest([&testClass]() { testClass->NodeOperatorNotEqualNode(); });

    return state;
}