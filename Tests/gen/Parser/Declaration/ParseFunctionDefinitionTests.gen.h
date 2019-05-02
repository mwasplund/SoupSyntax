#pragma once
#include "/Parser/Declaration/ParseFunctionDefinitionTests.h"

TestState RunParseFunctionDefinitionTests() 
 {
    auto className = "ParseFunctionDefinitionTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseFunctionDefinitionTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "SimpleFunctionRegular", [&testClass]() { testClass->SimpleFunctionRegular(); });
    state += RunTest(className, "SimpleFunctionDefault", [&testClass]() { testClass->SimpleFunctionDefault(); });
    state += RunTest(className, "SimpleFunctionDelete", [&testClass]() { testClass->SimpleFunctionDelete(); });
    state += RunTest(className, "SimpleFunctionParameter", [&testClass]() { testClass->SimpleFunctionParameter(); });
    state += RunTest(className, "SimpleFunctionAttribute", [&testClass]() { testClass->SimpleFunctionAttribute(); });

    return state;
}