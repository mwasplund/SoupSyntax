#pragma once
#include "/AST/InnerTree/SyntaxTokenTests.h"

TestState RunInnerTreeSyntaxTokenTests() 
 {
    auto className = "InnerTreeSyntaxTokenTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeSyntaxTokenTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(className, "OperatorNotEqualType", [&testClass]() { testClass->OperatorNotEqualType(); });
    state += RunTest(className, "OperatorNotEqualValue", [&testClass]() { testClass->OperatorNotEqualValue(); });

    return state;
}