#pragma once
#include "Parser/Expression/ParseLiteralExpressionTests.h"

TestState RunParseLiteralExpressionTests() 
 {
	auto className = "ParseLiteralExpressionTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseLiteralExpressionTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "SingleIntegerLiteralType(\"0\")", [&testClass]() { testClass->SingleIntegerLiteralType("0"); });
	state += Soup::Test::RunTest(className, "SingleIntegerLiteralType(\"1\")", [&testClass]() { testClass->SingleIntegerLiteralType("1"); });
	state += Soup::Test::RunTest(className, "SingleFloatingLiteralType(\"0.0f\")", [&testClass]() { testClass->SingleFloatingLiteralType("0.0f"); });
	state += Soup::Test::RunTest(className, "SingleCharacterLiteralType(\"'1'\")", [&testClass]() { testClass->SingleCharacterLiteralType("'1'"); });
	state += Soup::Test::RunTest(className, "SinglePointerLiteralType(\"nullptr\")", [&testClass]() { testClass->SinglePointerLiteralType("nullptr"); });
	state += Soup::Test::RunTest(className, "SingleStringLiteralType(\"\" \"\")", [&testClass]() { testClass->SingleStringLiteralType("\" \""); });
	state += Soup::Test::RunTest(className, "SingleBooleanLiteralType(\"true\", Soup::Syntax::SyntaxTokenType::True)", [&testClass]() { testClass->SingleBooleanLiteralType("true", Soup::Syntax::SyntaxTokenType::True); });
	state += Soup::Test::RunTest(className, "SingleBooleanLiteralType(\"false\", Soup::Syntax::SyntaxTokenType::False)", [&testClass]() { testClass->SingleBooleanLiteralType("false", Soup::Syntax::SyntaxTokenType::False); });
	state += Soup::Test::RunTest(className, "SingleUserDefinedLiteralType(\"2h\")", [&testClass]() { testClass->SingleUserDefinedLiteralType("2h"); });

	return state;
}