#pragma once
#include "/AST/OuterTree/Declaration/ConstructorDefinitionTests.h"

TestState RunOuterTreeConstructorDefinitionTests() 
 {
    auto className = "OuterTreeConstructorDefinitionTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeConstructorDefinitionTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(className, "InitializeComplex", [&testClass]() { testClass->InitializeComplex(); });
    state += RunTest(className, "GetChildrenSimple", [&testClass]() { testClass->GetChildrenSimple(); });
    state += RunTest(className, "GetChildrenComplex", [&testClass]() { testClass->GetChildrenComplex(); });
    state += RunTest(className, "OperatorEqualSimple", [&testClass]() { testClass->OperatorEqualSimple(); });
    state += RunTest(className, "OperatorEqualComplex", [&testClass]() { testClass->OperatorEqualComplex(); });
    state += RunTest(className, "OperatorNotEqualIdentifier", [&testClass]() { testClass->OperatorNotEqualIdentifier(); });
    state += RunTest(className, "OperatorNotEqualParameterList", [&testClass]() { testClass->OperatorNotEqualParameterList(); });
    state += RunTest(className, "OperatorNotEqualNoConstructorInitializer", [&testClass]() { testClass->OperatorNotEqualNoConstructorInitializer(); });
    state += RunTest(className, "OperatorNotEqualConstructorInitializer", [&testClass]() { testClass->OperatorNotEqualConstructorInitializer(); });
    state += RunTest(className, "OperatorNotEqualBody", [&testClass]() { testClass->OperatorNotEqualBody(); });

    return state;
}