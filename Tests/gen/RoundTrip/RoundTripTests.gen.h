#pragma once
#include "../RunTest.h"
#include "RoundTripTests.h"

TestState RunRoundTripTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::RoundTripTests>();
    TestState state = { 0, 0 };

    std::cout << "Running RoundTripTests:" << std::endl;

    state += RunTest(
        "RoundTrip[BlockComment.cpp]",
        [&testClass]() { testClass->RoundTrip("BlockComment.cpp"); });
    state += RunTest(
        "RoundTrip[EmptyFile.cpp]",
        [&testClass]() { testClass->RoundTrip("EmptyFile.cpp"); });
    state += RunTest(
        "RoundTrip[HelloWorld.cpp]",
        [&testClass]() { testClass->RoundTrip("HelloWorld.cpp"); });
    state += RunTest(
        "RoundTrip[LineComment.cpp]",
        [&testClass]() { testClass->RoundTrip("LineComment.cpp"); });
    state += RunTest(
        "RoundTrip[Namespace.cpp]",
        [&testClass]() { testClass->RoundTrip("Namespace.cpp"); });
    // state += RunTest(
    //    "RoundTrip[SimpleClass.cpp]",
    //    [&testClass]() { testClass->RoundTrip("SimpleClass.cpp"); });
    //state += RunTest(
    //    "RoundTrip[TemplateArguments.cpp]",
    //    [&testClass]() { testClass->RoundTrip("TemplateArguments.cpp"); });

    return state;
}
