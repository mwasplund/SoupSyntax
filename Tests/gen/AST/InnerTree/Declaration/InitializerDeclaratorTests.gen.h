#pragma once
#include "/AST/InnerTree/Declaration/InitializerDeclaratorTests.h"

TestState RunInnerTreeInitializerDeclaratorTests() 
 {
    auto className = "InnerTreeInitializerDeclaratorTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeInitializerDeclaratorTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "InitializeSimpleNoInitializer", [&testClass]() { testClass->InitializeSimpleNoInitializer(); });
    state += RunTest(className, "InitializeSimpleWithInitializer", [&testClass]() { testClass->InitializeSimpleWithInitializer(); });
    state += RunTest(className, "OperatorEqualNoInitializer", [&testClass]() { testClass->OperatorEqualNoInitializer(); });
    state += RunTest(className, "OperatorEqualWithInitializer", [&testClass]() { testClass->OperatorEqualWithInitializer(); });
    state += RunTest(className, "OperatorNotEqualDeclarator", [&testClass]() { testClass->OperatorNotEqualDeclarator(); });
    state += RunTest(className, "OperatorNotEqualNoInitializer", [&testClass]() { testClass->OperatorNotEqualNoInitializer(); });
    state += RunTest(className, "OperatorNotEqualWithInitializer", [&testClass]() { testClass->OperatorNotEqualWithInitializer(); });

    return state;
}