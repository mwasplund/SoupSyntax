#pragma once
#include "/AST/OuterTree/Declaration/FunctionDefinitionTests.h"

TestState RunOuterTreeFunctionDefinitionTests() 
 {
    auto className = "OuterTreeFunctionDefinitionTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeFunctionDefinitionTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
    state += RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(className, "OperatorNotEqualAttributeSpecifier", [&testClass]() { testClass->OperatorNotEqualAttributeSpecifier(); });
    state += RunTest(className, "OperatorNotEqualReturnType", [&testClass]() { testClass->OperatorNotEqualReturnType(); });
    state += RunTest(className, "OperatorNotEqualIdentifier", [&testClass]() { testClass->OperatorNotEqualIdentifier(); });
    state += RunTest(className, "OperatorNotEqualParameterList", [&testClass]() { testClass->OperatorNotEqualParameterList(); });
    state += RunTest(className, "OperatorNotEqualBody", [&testClass]() { testClass->OperatorNotEqualBody(); });

    return state;
}