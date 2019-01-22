#pragma once
#include "ParserTests.h"
#include "RunTest.h"

int RunParserTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParserTests>();
    int failedCount = 0;

    std::wcout << L"Running ParserTests:" << std::endl;

    std::wcout << L"SingleRule_BooleanLiterals" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleRule_BooleanLiterals("true"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_BooleanLiterals("false"); });

    std::wcout << L"SingleRule_PointerLiterals" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleRule_PointerLiterals("nullptr"); });

    std::wcout << L"SingleRule_Literals" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleRule_Literals("1"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_Literals("1.0"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_Literals("'c'"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_Literals("\"s\""); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_Literals("true"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_Literals("nullptr"); });

    return failedCount;
}
