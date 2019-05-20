#pragma once
#include "ParserAttributesTests.h"

TestState RunParserAttributesTests()
{
    std::string className = "ParserAttributesTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::ParserAttributesTests>();
    TestState state = { 0, 0 };

    return state;
}
