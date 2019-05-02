#pragma once
#include "/AST/OuterTree/SyntaxTokenTests.h"

TestState RunOuterTreeSyntaxTokenTests() 
 {
    auto className = "OuterTreeSyntaxTokenTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeSyntaxTokenTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(className, "OperatorNotEqualType", [&testClass]() { testClass->OperatorNotEqualType(); });
    state += RunTest(className, "OperatorNotEqualValue", [&testClass]() { testClass->OperatorNotEqualValue(); });

    return state;
}