#pragma once
#include "/AST/InnerTree/Declaration/ModuleImportDeclarationTests.h"

TestState RunInnerTreeModuleImportDeclarationTests() 
 {
    auto className = "InnerTreeModuleImportDeclarationTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeModuleImportDeclarationTests>();
    TestState state = { 0, 0 };
    state += SoupTest::RunTest(className, "Initialize", [&testClass]() { testClass->Initialize(); });
    state += SoupTest::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualImport", [&testClass]() { testClass->OperatorNotEqualImport(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualName", [&testClass]() { testClass->OperatorNotEqualName(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualSemicolon", [&testClass]() { testClass->OperatorNotEqualSemicolon(); });

    return state;
}