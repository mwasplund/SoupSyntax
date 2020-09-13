#pragma once
#include "RoundTrip/RoundTripTests.h"

TestState RunRoundTripTests() 
 {
	auto className = "RoundTripTests";
	auto testClass = std::make_shared<Soup::Syntax::UnitTests::RoundTripTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "RoundTrip(\"BlockComment.cpp\")", [&testClass]() { testClass->RoundTrip("BlockComment.cpp"); });
	state += Soup::Test::RunTest(className, "RoundTrip(\"ClassComplex.cpp\")", [&testClass]() { testClass->RoundTrip("ClassComplex.cpp"); });
	state += Soup::Test::RunTest(className, "RoundTrip(\"ClassConstructor.cpp\")", [&testClass]() { testClass->RoundTrip("ClassConstructor.cpp"); });
	state += Soup::Test::RunTest(className, "RoundTrip(\"ClassSimple.cpp\")", [&testClass]() { testClass->RoundTrip("ClassSimple.cpp"); });
	state += Soup::Test::RunTest(className, "RoundTrip(\"EmptyFile.cpp\")", [&testClass]() { testClass->RoundTrip("EmptyFile.cpp"); });
	state += Soup::Test::RunTest(className, "RoundTrip(\"FunctionParameters.cpp\")", [&testClass]() { testClass->RoundTrip("FunctionParameters.cpp"); });
	state += Soup::Test::RunTest(className, "RoundTrip(\"FunctionSimple.cpp\")", [&testClass]() { testClass->RoundTrip("FunctionSimple.cpp"); });
	state += Soup::Test::RunTest(className, "RoundTrip(\"HelloWorld.cpp\")", [&testClass]() { testClass->RoundTrip("HelloWorld.cpp"); });
	state += Soup::Test::RunTest(className, "RoundTrip(\"LineComment.cpp\")", [&testClass]() { testClass->RoundTrip("LineComment.cpp"); });
	state += Soup::Test::RunTest(className, "RoundTrip(\"LineComments.cpp\")", [&testClass]() { testClass->RoundTrip("LineComments.cpp"); });
	state += Soup::Test::RunTest(className, "RoundTrip(\"Namespace.cpp\")", [&testClass]() { testClass->RoundTrip("Namespace.cpp"); });
	state += Soup::Test::RunTest(className, "RoundTrip(\"TemplateArguments.cpp\")", [&testClass]() { testClass->RoundTrip("TemplateArguments.cpp"); });

	return state;
}