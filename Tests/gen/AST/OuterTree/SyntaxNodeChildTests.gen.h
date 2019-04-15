#pragma once
#include "AST/OuterTree/SyntaxNodeChildTests.h"
#include "RunTest.h"

TestState RunOuterTreeSyntaxNodeChildTests()
{
    std::string className = "OuterTree::SyntaxNodeChildTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::OuterTreeSyntaxNodeChildTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "TokenInitialize",
        [&testClass]() { testClass->TokenInitialize(); });
    state += RunTest(
        className,
        "TokenOperatorEqual",
        [&testClass]() { testClass->TokenOperatorEqual(); });
    state += RunTest(
        className,
        "TokenOperatorNotEqualToken",
        [&testClass]() { testClass->TokenOperatorNotEqualToken(); });
    state += RunTest(
        className,
        "TokenOperatorNotEqualNode",
        [&testClass]() { testClass->TokenOperatorNotEqualNode(); });
    state += RunTest(
        className,
        "NodeInitialize",
        [&testClass]() { testClass->NodeInitialize(); });
    state += RunTest(
        className,
        "NodeOperatorEqual",
        [&testClass]() { testClass->NodeOperatorEqual(); });
    state += RunTest(
        className,
        "NodeOperatorNotEqualToken",
        [&testClass]() { testClass->NodeOperatorNotEqualToken(); });
    state += RunTest(
        className,
        "NodeOperatorNotEqualNode",
        [&testClass]() { testClass->NodeOperatorNotEqualNode(); });

    return state;
}