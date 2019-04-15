#pragma once
#include "AST/OuterTree/Declaration/EnumeratorDefinitionTests.h"
#include "RunTest.h"

TestState RunOuterTreeEnumeratorDefinitionTests()
{
    std::string className = "OuterTree::EnumeratorDefinitionTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::OuterTreeEnumeratorDefinitionTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "Initialize",
        [&testClass]() { testClass->Initialize(); });
    state += RunTest(
        className,
        "GetChildren",
        [&testClass]() { testClass->GetChildren(); });
    state += RunTest(
        className,
        "OperatorEqual",
        [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(
        className,
        "OperatorNotEqualIdentifierToken",
        [&testClass]() { testClass->OperatorNotEqualIdentifierToken(); });

    return state;
}