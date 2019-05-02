#pragma once
#include "/Parser/Expression/ParseUnaryExpressionTests.h"

TestState RunParseUnaryExpressionTests() 
 {
    auto className = "ParseUnaryExpressionTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseUnaryExpressionTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "SingleIdentifierPlus", [&testClass]() { testClass->SingleIdentifierPlus(); });
    state += RunTest(className, "SingleIdentifierMinus", [&testClass]() { testClass->SingleIdentifierMinus(); });
    state += RunTest(className, "SingleIdentifierPreIncrement", [&testClass]() { testClass->SingleIdentifierPreIncrement(); });
    state += RunTest(className, "SingleIdentifierPreDecrement", [&testClass]() { testClass->SingleIdentifierPreDecrement(); });
    state += RunTest(className, "SingleIdentifierPostIncrement", [&testClass]() { testClass->SingleIdentifierPostIncrement(); });
    state += RunTest(className, "SingleIdentifierPostDecrement", [&testClass]() { testClass->SingleIdentifierPostDecrement(); });
    state += RunTest(className, "SingleIdentifierLogicalNot", [&testClass]() { testClass->SingleIdentifierLogicalNot(); });
    state += RunTest(className, "SingleIdentifierIndirection", [&testClass]() { testClass->SingleIdentifierIndirection(); });
    state += RunTest(className, "SingleIdentifierAddressOf", [&testClass]() { testClass->SingleIdentifierAddressOf(); });

    return state;
}