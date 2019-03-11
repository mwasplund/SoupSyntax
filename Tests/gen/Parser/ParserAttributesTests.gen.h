#pragma once
#include "ParserAttributesTests.h"
#include "../RunTest.h"

TestState RunParserAttributesTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParserAttributesTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running ParserAttributesTests:" << std::endl;

    return state;
}
