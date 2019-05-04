#pragma once
#include "/RoundTrip/RoundTripTests.h"

TestState RunRoundTripTests() 
 {
    auto className = "RoundTripTests";
    auto testClass = std::make_shared<Soup::Syntax::UnitTests::RoundTripTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "RoundTrip(\"BlockComment.cpp\")", [&testClass]() { testClass->RoundTrip("BlockComment.cpp"); });
    state += RunTest(className, "RoundTrip(\"ClassComplex.cpp\")", [&testClass]() { testClass->RoundTrip("ClassComplex.cpp"); });
    state += RunTest(className, "RoundTrip(\"ClassConstructor.cpp\")", [&testClass]() { testClass->RoundTrip("ClassConstructor.cpp"); });
    state += RunTest(className, "RoundTrip(\"ClassSimple.cpp\")", [&testClass]() { testClass->RoundTrip("ClassSimple.cpp"); });
    state += RunTest(className, "RoundTrip(\"EmptyFile.cpp\")", [&testClass]() { testClass->RoundTrip("EmptyFile.cpp"); });
    state += RunTest(className, "RoundTrip(\"FunctionParameters.cpp\")", [&testClass]() { testClass->RoundTrip("FunctionParameters.cpp"); });
    state += RunTest(className, "RoundTrip(\"FunctionSimple.cpp\")", [&testClass]() { testClass->RoundTrip("FunctionSimple.cpp"); });
    state += RunTest(className, "RoundTrip(\"HelloWorld.cpp\")", [&testClass]() { testClass->RoundTrip("HelloWorld.cpp"); });
    state += RunTest(className, "RoundTrip(\"LineComment.cpp\")", [&testClass]() { testClass->RoundTrip("LineComment.cpp"); });
    state += RunTest(className, "RoundTrip(\"LineComments.cpp\")", [&testClass]() { testClass->RoundTrip("LineComments.cpp"); });
    state += RunTest(className, "RoundTrip(\"Namespace.cpp\")", [&testClass]() { testClass->RoundTrip("Namespace.cpp"); });
    state += RunTest(className, "RoundTrip(\"TemplateArguments.cpp\")", [&testClass]() { testClass->RoundTrip("TemplateArguments.cpp"); });

    return state;
}