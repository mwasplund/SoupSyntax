#pragma once
#include "/AST/InnerTree/Declaration/PointerDeclaratorTests.h"

TestState RunInnerTreePointerDeclaratorTests() 
 {
    auto className = "InnerTreePointerDeclaratorTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreePointerDeclaratorTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "Initialize", [&testClass]() { testClass->Initialize(); });
    state += RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(className, "OperatorNotEqualPointerOperator", [&testClass]() { testClass->OperatorNotEqualPointerOperator(); });
    state += RunTest(className, "OperatorNotEqualDeclarator", [&testClass]() { testClass->OperatorNotEqualDeclarator(); });

    return state;
}