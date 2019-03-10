#pragma once
#include "SyntaxNodeChildTests.h"
#include "../RunTest.h"

int RunSyntaxNodeChildTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::SyntaxNodeChildTests>();
    int failedCount = 0;

    std::wcout << L"Running SyntaxNodeChildTests:" << std::endl;

    std::wcout << L"TokenInitializeSimple" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->TokenInitialize(); });

    std::wcout << L"TokenOperatorEqual" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->TokenOperatorEqual(); });

    std::wcout << L"TokenOperatorNotEqualToken" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->TokenOperatorNotEqualToken(); });

    std::wcout << L"TokenOperatorNotEqualNode" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->TokenOperatorNotEqualNode(); });

    std::wcout << L"NodeInitializeSimple" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->NodeInitialize(); });

    std::wcout << L"NodeOperatorEqual" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->NodeOperatorEqual(); });

    std::wcout << L"NodeOperatorNotEqualToken" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->NodeOperatorNotEqualToken(); });

    std::wcout << L"NodeOperatorNotEqualNode" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->NodeOperatorNotEqualNode(); });

    return failedCount;
}