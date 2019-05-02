#pragma once
#include "/AST/OuterTree/Declaration/InitializerDeclaratorTests.h"

TestState RunOuterTreeInitializerDeclaratorTests() 
 {
    auto className = "OuterTreeInitializerDeclaratorTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeInitializerDeclaratorTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "InitializeSimpleNoInitializer", [&testClass]() { testClass->InitializeSimpleNoInitializer(); });
    state += RunTest(className, "InitializeSimpleWithInitializer", [&testClass]() { testClass->InitializeSimpleWithInitializer(); });
    state += RunTest(className, "GetChildrenNoInitializer", [&testClass]() { testClass->GetChildrenNoInitializer(); });
    state += RunTest(className, "GetChildrenWithInitializer", [&testClass]() { testClass->GetChildrenWithInitializer(); });
    state += RunTest(className, "OperatorEqualNoInitializer", [&testClass]() { testClass->OperatorEqualNoInitializer(); });
    state += RunTest(className, "OperatorEqualWithInitializer", [&testClass]() { testClass->OperatorEqualWithInitializer(); });
    state += RunTest(className, "OperatorNotEqualDeclarator", [&testClass]() { testClass->OperatorNotEqualDeclarator(); });
    state += RunTest(className, "OperatorNotEqualNoInitializer", [&testClass]() { testClass->OperatorNotEqualNoInitializer(); });
    state += RunTest(className, "OperatorNotEqualWithInitializer", [&testClass]() { testClass->OperatorNotEqualWithInitializer(); });

    return state;
}