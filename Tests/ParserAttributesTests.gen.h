#pragma once
#include "ParserAttributesTests.h"
#include "RunTest.h"

int RunParserAttributesTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParserAttributesTests>();
    int failedCount = 0;

    std::wcout << L"Running ParserAttributesTests:" << std::endl;

    return failedCount;
}
