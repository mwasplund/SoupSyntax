#pragma once
#include "/Parser/Expression/ParseLambdaExpressionTests.h"

TestState RunParseLambdaExpressionTests() 
 {
    auto className = "ParseLambdaExpressionTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseLambdaExpressionTests>();
    TestState state = { 0, 0 };
    state += SoupTest::RunTest(className, "Simple", [&testClass]() { testClass->Simple(); });
    state += SoupTest::RunTest(className, "EmptyParameterList", [&testClass]() { testClass->EmptyParameterList(); });
    state += SoupTest::RunTest(className, "SingleCaptureReference", [&testClass]() { testClass->SingleCaptureReference(); });
    state += SoupTest::RunTest(className, "SingleParameterAndReturnStatement", [&testClass]() { testClass->SingleParameterAndReturnStatement(); });

    return state;
}