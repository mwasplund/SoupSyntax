#pragma once
#include "/Parser/Declaration/ParseSimpleDeclarationTests.h"

TestState RunParseSimpleDeclarationTests() 
 {
    auto className = "ParseSimpleDeclarationTests";
    auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseSimpleDeclarationTests>();
    TestState state = { 0, 0 };
    state += RunTest(className, "ClassSpecifierVariable", [&testClass]() { testClass->ClassSpecifierVariable(); });
    state += RunTest(className, "EnumSpecifierVariable", [&testClass]() { testClass->EnumSpecifierVariable(); });
    state += RunTest(className, "SimpleIdentifierVariable", [&testClass]() { testClass->SimpleIdentifierVariable(); });
    state += RunTest(className, "TemplateClassVariable", [&testClass]() { testClass->TemplateClassVariable(); });
    state += RunTest(className, "TemplateOfTemplateVariable", [&testClass]() { testClass->TemplateOfTemplateVariable(); });
    state += RunTest(className, "VariableWithInitializer", [&testClass]() { testClass->VariableWithInitializer(); });
    state += RunTest(className, "DoubleVariable", [&testClass]() { testClass->DoubleVariable(); });
    state += RunTest(className, "DoubleVariableSingleWithInitializer", [&testClass]() { testClass->DoubleVariableSingleWithInitializer(); });
    state += RunTest(className, "DoubleVariableBothWithInitializer", [&testClass]() { testClass->DoubleVariableBothWithInitializer(); });
    state += RunTest(className, "SingleIntLeadingAndTrailingModifierVariable", [&testClass]() { testClass->SingleIntLeadingAndTrailingModifierVariable(); });
    state += RunTest(className, "SingleTemplateWithInitializerList", [&testClass]() { testClass->SingleTemplateWithInitializerList(); });

    return state;
}