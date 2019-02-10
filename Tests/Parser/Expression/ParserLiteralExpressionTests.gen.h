#pragma once
#include "ParserLiteralExpressionTests.h"
#include "../../RunTest.h"

int RunParserLiteralExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParserLiteralExpressionTests>();
    int failedCount = 0;

    std::wcout << L"Running ParserLiteralExpressionTests:" << std::endl;

    std::wcout << L"SingleRule_PrimaryExpressions" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleLiteralType("0", LiteralType::Integer); });
    failedCount += RunTest([&testClass]() { testClass->SingleLiteralType("1", LiteralType::Integer); });
    failedCount += RunTest([&testClass]() { testClass->SingleLiteralType("0.0f", LiteralType::Floating); });
    failedCount += RunTest([&testClass]() { testClass->SingleLiteralType("'1'", LiteralType::Character); });
    failedCount += RunTest([&testClass]() { testClass->SingleLiteralType("nullptr", LiteralType::Pointer); });
    failedCount += RunTest([&testClass]() { testClass->SingleLiteralType("\" \"", LiteralType::String); });
    failedCount += RunTest([&testClass]() { testClass->SingleLiteralType("2h", LiteralType::UserDefined); });

    return failedCount;
}
