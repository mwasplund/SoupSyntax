#pragma once
#include "/Parser/Expression/ParseInvocationExpressionTests.h"

TestState RunParseInvocationExpressionTests() 
 {
    auto className = "ParseInvocationExpressionTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseInvocationExpressionTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "SimpleInvocation", [&testClass]() { testClass->SimpleInvocation(); });
    state += RunTest(className, "ComplexInvocation", [&testClass]() { testClass->ComplexInvocation(); });
    state += RunTest(className, "BracedInitializerParameter", [&testClass]() { testClass->BracedInitializerParameter(); });
    state += RunTest(className, "EnumValueParameter", [&testClass]() { testClass->EnumValueParameter(); });
    state += RunTest(className, "QualifiedTemplateSpecification", [&testClass]() { testClass->QualifiedTemplateSpecification(); });

    return state;
}