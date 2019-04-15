#pragma once
#include "../RunTest.h"
#include "ParseAccessorSpecifierTests.h"

TestState RunParseAccessorSpecifierTests()
{
    std::string className = "ParseAccessorSpecifierTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::ParseAccessorSpecifierTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "SimplePublic",
        [&testClass]() { testClass->SimplePublic(); });
    state += RunTest(
        className,
        "SimplePrivate",
        [&testClass]() { testClass->SimplePrivate(); });
    state += RunTest(
        className,
        "SimpleProtected",
        [&testClass]() { testClass->SimpleProtected(); });

    return state;
}
