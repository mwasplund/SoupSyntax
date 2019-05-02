#pragma once
#include "/AST/InnerTree/TranslationUnitTests.h"

TestState RunInnerTreeTranslationUnitTests() 
 {
    auto className = "InnerTreeTranslationUnitTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeTranslationUnitTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(className, "InitializeComplex", [&testClass]() { testClass->InitializeComplex(); });
    state += RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(className, "OperatorNotEqualNoDeclarations", [&testClass]() { testClass->OperatorNotEqualNoDeclarations(); });
    state += RunTest(className, "OperatorNotEqualWithDelarations", [&testClass]() { testClass->OperatorNotEqualWithDelarations(); });
    state += RunTest(className, "OperatorNotEqualEndOfFileToken", [&testClass]() { testClass->OperatorNotEqualEndOfFileToken(); });

    return state;
}