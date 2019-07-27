#pragma once
#include "/Parser/ParseTranslationUnitTests.h"

TestState RunParseTranslationUnitTests() 
 {
    auto className = "ParseTranslationUnitTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseTranslationUnitTests>();
    TestState state = { 0, 0 };
    state += SoupTest::RunTest(className, "EmptyFile", [&testClass]() { testClass->EmptyFile(); });
    state += SoupTest::RunTest(className, "OnlyTrivia", [&testClass]() { testClass->OnlyTrivia(); });
    state += SoupTest::RunTest(className, "OnlyComments", [&testClass]() { testClass->OnlyComments(); });
    state += SoupTest::RunTest(className, "SingleEmptyDeclaration", [&testClass]() { testClass->SingleEmptyDeclaration(); });
    state += SoupTest::RunTest(className, "MultipleDeclarations", [&testClass]() { testClass->MultipleDeclarations(); });

    return state;
}