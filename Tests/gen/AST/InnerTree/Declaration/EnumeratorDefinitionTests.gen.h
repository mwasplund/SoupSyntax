#pragma once
#include "AST/InnerTree/Declaration/EnumeratorDefinitionTests.h"
#include "RunTest.h"

TestState RunInnerTreeEnumeratorDefinitionTests()
{
    std::string className = "InnerTree::EnumeratorDefinitionTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::EnumeratorDefinitionTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "Initialize",
        [&testClass]() { testClass->Initialize(); });
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