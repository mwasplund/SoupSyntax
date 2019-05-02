#pragma once
#include "/AST/OuterTree/Declaration/PrimitiveDataTypeSpecifierTests.h"

TestState RunOuterTreePrimitiveDataTypeSpecifierTests() 
 {
    auto className = "OuterTreePrimitiveDataTypeSpecifierTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreePrimitiveDataTypeSpecifierTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
    state += RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(className, "OperatorNotEqualPrimitiveType", [&testClass]() { testClass->OperatorNotEqualPrimitiveType(); });
    state += RunTest(className, "OperatorNotEqualToken", [&testClass]() { testClass->OperatorNotEqualToken(); });

    return state;
}