#pragma once
#include "/AST/OuterTree/SyntaxNodeChildTests.h"

TestState RunOuterTreeSyntaxNodeChildTests() 
 {
    auto className = "OuterTreeSyntaxNodeChildTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeSyntaxNodeChildTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "TokenInitialize", [&testClass]() { testClass->TokenInitialize(); });
    state += RunTest(className, "TokenOperatorEqual", [&testClass]() { testClass->TokenOperatorEqual(); });
    state += RunTest(className, "TokenOperatorNotEqualToken", [&testClass]() { testClass->TokenOperatorNotEqualToken(); });
    state += RunTest(className, "TokenOperatorNotEqualNode", [&testClass]() { testClass->TokenOperatorNotEqualNode(); });
    state += RunTest(className, "NodeInitialize", [&testClass]() { testClass->NodeInitialize(); });
    state += RunTest(className, "NodeOperatorEqual", [&testClass]() { testClass->NodeOperatorEqual(); });
    state += RunTest(className, "NodeOperatorNotEqualToken", [&testClass]() { testClass->NodeOperatorNotEqualToken(); });
    state += RunTest(className, "NodeOperatorNotEqualNode", [&testClass]() { testClass->NodeOperatorNotEqualNode(); });

    return state;
}