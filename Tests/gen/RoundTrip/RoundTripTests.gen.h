#pragma once
#include "../RunTest.h"
#include "RoundTripTests.h"

TestState RunRoundTripTests()
{
    std::string className = "RoundTripTests";
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::RoundTripTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "RoundTrip[BlockComment.cpp]",
        [&testClass]() { testClass->RoundTrip("BlockComment.cpp"); });
    state += RunTest(
        className,
        "RoundTrip[ClassComplex.cpp]",
        [&testClass]() { testClass->RoundTrip("ClassComplex.cpp"); });
    state += RunTest(
        className,
        "RoundTrip[ClassConstructor.cpp]",
        [&testClass]() { testClass->RoundTrip("ClassConstructor.cpp"); });
    state += RunTest(
        className,
        "RoundTrip[ClassSimple.cpp]",
        [&testClass]() { testClass->RoundTrip("ClassSimple.cpp"); });
    state += RunTest(
        className,
        "RoundTrip[EmptyFile.cpp]",
        [&testClass]() { testClass->RoundTrip("EmptyFile.cpp"); });
    state += RunTest(
        className,
        "RoundTrip[HelloWorld.cpp]",
        [&testClass]() { testClass->RoundTrip("HelloWorld.cpp"); });
    state += RunTest(
        className,
        "RoundTrip[LineComment.cpp]",
        [&testClass]() { testClass->RoundTrip("LineComment.cpp"); });
    state += RunTest(
        className,
        "RoundTrip[Namespace.cpp]",
        [&testClass]() { testClass->RoundTrip("Namespace.cpp"); });
    state += RunTest(
        className,
        "RoundTrip[TemplateArguments.cpp]",
        [&testClass]() { testClass->RoundTrip("TemplateArguments.cpp"); });

    return state;
}
