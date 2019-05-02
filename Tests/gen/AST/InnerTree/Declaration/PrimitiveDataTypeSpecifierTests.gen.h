#pragma once
#include "/AST/InnerTree/Declaration/PrimitiveDataTypeSpecifierTests.h"

TestState RunInnerTreePrimitiveDataTypeSpecifierTests() 
 {
    auto className = "InnerTreePrimitiveDataTypeSpecifierTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreePrimitiveDataTypeSpecifierTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(className, "OperatorNotEqualPrimitiveType", [&testClass]() { testClass->OperatorNotEqualPrimitiveType(); });
    state += RunTest(className, "OperatorNotEqualToken", [&testClass]() { testClass->OperatorNotEqualToken(); });

    return state;
}