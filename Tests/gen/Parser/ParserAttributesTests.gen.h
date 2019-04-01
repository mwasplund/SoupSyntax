#pragma once
#include "ParserAttributesTests.h"
#include "../RunTest.h"

TestState RunParserAttributesTests()
{
    std::string className = "ParserAttributesTests";
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParserAttributesTests>();
    TestState state = { 0, 0 };

    return state;
}
