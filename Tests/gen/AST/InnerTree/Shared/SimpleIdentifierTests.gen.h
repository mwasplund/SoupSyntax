#pragma once
#include "/AST/InnerTree/Shared/SimpleIdentifierTests.h"

TestState RunInnerTreeSimpleIdentifierTests() 
 {
    auto className = "InnerTreeSimpleIdentifierTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeSimpleIdentifierTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "Initialize", [&testClass]() { testClass->Initialize(); });
    state += RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += RunTest(className, "OperatorNotEqualIdentifier", [&testClass]() { testClass->OperatorNotEqualIdentifier(); });

    return state;
}