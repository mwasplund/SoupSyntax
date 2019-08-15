#pragma once
#include "/AST/OuterTree/Declaration/ExportDeclarationTests.h"

TestState RunOuterTreeExportDeclarationTests() 
 {
    auto className = "OuterTreeExportDeclarationTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeExportDeclarationTests>();
    TestState state = { 0, 0 };
    state += SoupTest::RunTest(className, "Initialize", [&testClass]() { testClass->Initialize(); });
    state += SoupTest::RunTest(className, "GetChildren", [&testClass]() { testClass->GetChildren(); });
    state += SoupTest::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualExport", [&testClass]() { testClass->OperatorNotEqualExport(); });
    state += SoupTest::RunTest(className, "OperatorNotEqualDeclaration", [&testClass]() { testClass->OperatorNotEqualDeclaration(); });

    return state;
}