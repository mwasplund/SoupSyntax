#pragma once
#include "AST/OuterTree/SyntaxTokenTests.h"

TestState RunOuterTreeSyntaxTokenTests() 
 {
	auto className = "OuterTreeSyntaxTokenTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeSyntaxTokenTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualType", [&testClass]() { testClass->OperatorNotEqualType(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualValue", [&testClass]() { testClass->OperatorNotEqualValue(); });

	return state;
}