#pragma once
#include "../RunTest.h"
#include "RoundTripTests.h"

TestState RunRoundTripTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::RoundTripTests>();
    TestState state = { 0, 0 };

    std::cout << "Running RoundTripTests:" << std::endl;

    std::cout << "RoundTrip" << std::endl;
    state += RunTest([&testClass]() { testClass->RoundTrip("BlockComment.cpp"); });
    state += RunTest([&testClass]() { testClass->RoundTrip("EmptyFile.cpp"); });
    state += RunTest([&testClass]() { testClass->RoundTrip("HelloWorld.cpp"); });
    state += RunTest([&testClass]() { testClass->RoundTrip("LineComment.cpp"); });
    // state += RunTest([&testClass]() { testClass->RoundTrip("Namespace.cpp"); });
    // state += RunTest([&testClass]() { testClass->RoundTrip("SimpleClass.cpp"); });
    //state += RunTest([&testClass]() { testClass->RoundTrip("TemplateArguments.cpp"); });

    return state;
}
