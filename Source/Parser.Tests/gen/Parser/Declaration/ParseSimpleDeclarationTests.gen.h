#pragma once
#include "Parser/Declaration/ParseSimpleDeclarationTests.h"

TestState RunParseSimpleDeclarationTests() 
 {
	auto className = "ParseSimpleDeclarationTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseSimpleDeclarationTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "ClassSpecifierVariable", [&testClass]() { testClass->ClassSpecifierVariable(); });
	state += SoupTest::RunTest(className, "EnumSpecifierVariable", [&testClass]() { testClass->EnumSpecifierVariable(); });
	state += SoupTest::RunTest(className, "SimplePrimitiveVariable(\"char\", Soup::Syntax::SyntaxTokenType::Char, Soup::Syntax::PrimitiveDataType::Char)", [&testClass]() { testClass->SimplePrimitiveVariable("char", Soup::Syntax::SyntaxTokenType::Char, Soup::Syntax::PrimitiveDataType::Char); });
	state += SoupTest::RunTest(className, "SimplePrimitiveVariable(\"char8_t\", Soup::Syntax::SyntaxTokenType::Char8, Soup::Syntax::PrimitiveDataType::Char8)", [&testClass]() { testClass->SimplePrimitiveVariable("char8_t", Soup::Syntax::SyntaxTokenType::Char8, Soup::Syntax::PrimitiveDataType::Char8); });
	state += SoupTest::RunTest(className, "SimplePrimitiveVariable(\"char16_t\", Soup::Syntax::SyntaxTokenType::Char16, Soup::Syntax::PrimitiveDataType::Char16)", [&testClass]() { testClass->SimplePrimitiveVariable("char16_t", Soup::Syntax::SyntaxTokenType::Char16, Soup::Syntax::PrimitiveDataType::Char16); });
	state += SoupTest::RunTest(className, "SimplePrimitiveVariable(\"char32_t\", Soup::Syntax::SyntaxTokenType::Char32, Soup::Syntax::PrimitiveDataType::Char32)", [&testClass]() { testClass->SimplePrimitiveVariable("char32_t", Soup::Syntax::SyntaxTokenType::Char32, Soup::Syntax::PrimitiveDataType::Char32); });
	state += SoupTest::RunTest(className, "SimplePrimitiveVariable(\"wchar_t\", Soup::Syntax::SyntaxTokenType::WChar, Soup::Syntax::PrimitiveDataType::WChar)", [&testClass]() { testClass->SimplePrimitiveVariable("wchar_t", Soup::Syntax::SyntaxTokenType::WChar, Soup::Syntax::PrimitiveDataType::WChar); });
	state += SoupTest::RunTest(className, "SimplePrimitiveVariable(\"bool\", Soup::Syntax::SyntaxTokenType::Bool, Soup::Syntax::PrimitiveDataType::Bool)", [&testClass]() { testClass->SimplePrimitiveVariable("bool", Soup::Syntax::SyntaxTokenType::Bool, Soup::Syntax::PrimitiveDataType::Bool); });
	state += SoupTest::RunTest(className, "SimplePrimitiveVariable(\"short\", Soup::Syntax::SyntaxTokenType::Short, Soup::Syntax::PrimitiveDataType::Short)", [&testClass]() { testClass->SimplePrimitiveVariable("short", Soup::Syntax::SyntaxTokenType::Short, Soup::Syntax::PrimitiveDataType::Short); });
	state += SoupTest::RunTest(className, "SimplePrimitiveVariable(\"int\", Soup::Syntax::SyntaxTokenType::Int, Soup::Syntax::PrimitiveDataType::Int)", [&testClass]() { testClass->SimplePrimitiveVariable("int", Soup::Syntax::SyntaxTokenType::Int, Soup::Syntax::PrimitiveDataType::Int); });
	state += SoupTest::RunTest(className, "SimplePrimitiveVariable(\"long\", Soup::Syntax::SyntaxTokenType::Long, Soup::Syntax::PrimitiveDataType::Long)", [&testClass]() { testClass->SimplePrimitiveVariable("long", Soup::Syntax::SyntaxTokenType::Long, Soup::Syntax::PrimitiveDataType::Long); });
	state += SoupTest::RunTest(className, "SimplePrimitiveVariable(\"signed\", Soup::Syntax::SyntaxTokenType::Signed, Soup::Syntax::PrimitiveDataType::Signed)", [&testClass]() { testClass->SimplePrimitiveVariable("signed", Soup::Syntax::SyntaxTokenType::Signed, Soup::Syntax::PrimitiveDataType::Signed); });
	state += SoupTest::RunTest(className, "SimplePrimitiveVariable(\"unsigned\", Soup::Syntax::SyntaxTokenType::Unsigned, Soup::Syntax::PrimitiveDataType::Unsigned)", [&testClass]() { testClass->SimplePrimitiveVariable("unsigned", Soup::Syntax::SyntaxTokenType::Unsigned, Soup::Syntax::PrimitiveDataType::Unsigned); });
	state += SoupTest::RunTest(className, "SimplePrimitiveVariable(\"float\", Soup::Syntax::SyntaxTokenType::Float, Soup::Syntax::PrimitiveDataType::Float)", [&testClass]() { testClass->SimplePrimitiveVariable("float", Soup::Syntax::SyntaxTokenType::Float, Soup::Syntax::PrimitiveDataType::Float); });
	state += SoupTest::RunTest(className, "SimplePrimitiveVariable(\"double\", Soup::Syntax::SyntaxTokenType::Double, Soup::Syntax::PrimitiveDataType::Double)", [&testClass]() { testClass->SimplePrimitiveVariable("double", Soup::Syntax::SyntaxTokenType::Double, Soup::Syntax::PrimitiveDataType::Double); });
	state += SoupTest::RunTest(className, "SimplePrimitiveVariable(\"void\", Soup::Syntax::SyntaxTokenType::Void, Soup::Syntax::PrimitiveDataType::Void)", [&testClass]() { testClass->SimplePrimitiveVariable("void", Soup::Syntax::SyntaxTokenType::Void, Soup::Syntax::PrimitiveDataType::Void); });
	state += SoupTest::RunTest(className, "SimplePrimitiveVariable(\"auto\", Soup::Syntax::SyntaxTokenType::Auto, Soup::Syntax::PrimitiveDataType::Auto)", [&testClass]() { testClass->SimplePrimitiveVariable("auto", Soup::Syntax::SyntaxTokenType::Auto, Soup::Syntax::PrimitiveDataType::Auto); });
	state += SoupTest::RunTest(className, "SimpleIdentifierVariable", [&testClass]() { testClass->SimpleIdentifierVariable(); });
	state += SoupTest::RunTest(className, "TemplateClassVariable", [&testClass]() { testClass->TemplateClassVariable(); });
	state += SoupTest::RunTest(className, "TemplateOfTemplateVariable", [&testClass]() { testClass->TemplateOfTemplateVariable(); });
	state += SoupTest::RunTest(className, "VariableWithInitializer", [&testClass]() { testClass->VariableWithInitializer(); });
	state += SoupTest::RunTest(className, "DoubleVariable", [&testClass]() { testClass->DoubleVariable(); });
	state += SoupTest::RunTest(className, "DoubleVariableSingleWithInitializer", [&testClass]() { testClass->DoubleVariableSingleWithInitializer(); });
	state += SoupTest::RunTest(className, "DoubleVariableBothWithInitializer", [&testClass]() { testClass->DoubleVariableBothWithInitializer(); });
	state += SoupTest::RunTest(className, "SingleIntLeadingAndTrailingModifierVariable", [&testClass]() { testClass->SingleIntLeadingAndTrailingModifierVariable(); });
	state += SoupTest::RunTest(className, "SingleTemplateWithInitializerList", [&testClass]() { testClass->SingleTemplateWithInitializerList(); });

	return state;
}