#pragma once
#include "PrimaryExpressionTests.h"
#include "../../RunTest.h"

int RunPrimaryExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::PrimaryExpressionTests>();
    int failedCount = 0;

    std::wcout << L"Running PrimaryExpressionTests:" << std::endl;

    std::wcout << L"SingleLiteralType" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleLiteralType("0", LiteralType::Integer); });
    failedCount += RunTest([&testClass]() { testClass->SingleLiteralType("1", LiteralType::Integer); });
    failedCount += RunTest([&testClass]() { testClass->SingleLiteralType("0.0f", LiteralType::Floating); });
    failedCount += RunTest([&testClass]() { testClass->SingleLiteralType("'1'", LiteralType::Character); });
    failedCount += RunTest([&testClass]() { testClass->SingleLiteralType("nullptr", LiteralType::Pointer); });
    failedCount += RunTest([&testClass]() { testClass->SingleLiteralType("\" \"", LiteralType::String); });
    failedCount += RunTest([&testClass]() { testClass->SingleLiteralType("2h", LiteralType::UserDefined); });

    std::wcout << L"SingleThisExpression" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleThisExpression(); });

    std::wcout << L"SingleSimpleNameExpression" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleSimpleNameExpression(); });
    
    std::wcout << L"SingleQualifiedNameExpression" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleQualifiedNameExpression(); });

    return failedCount;
}
