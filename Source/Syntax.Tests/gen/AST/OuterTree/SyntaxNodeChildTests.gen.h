#pragma once
#include "AST/OuterTree/SyntaxNodeChildTests.h"

TestState RunOuterTreeSyntaxNodeChildTests() 
 {
	auto className = "OuterTreeSyntaxNodeChildTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeSyntaxNodeChildTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "TokenInitialize", [&testClass]() { testClass->TokenInitialize(); });
	state += Soup::Test::RunTest(className, "TokenOperatorEqual", [&testClass]() { testClass->TokenOperatorEqual(); });
	state += Soup::Test::RunTest(className, "TokenOperatorNotEqualToken", [&testClass]() { testClass->TokenOperatorNotEqualToken(); });
	state += Soup::Test::RunTest(className, "TokenOperatorNotEqualNode", [&testClass]() { testClass->TokenOperatorNotEqualNode(); });
	state += Soup::Test::RunTest(className, "NodeInitialize", [&testClass]() { testClass->NodeInitialize(); });
	state += Soup::Test::RunTest(className, "NodeOperatorEqual", [&testClass]() { testClass->NodeOperatorEqual(); });
	state += Soup::Test::RunTest(className, "NodeOperatorNotEqualToken", [&testClass]() { testClass->NodeOperatorNotEqualToken(); });
	state += Soup::Test::RunTest(className, "NodeOperatorNotEqualNode", [&testClass]() { testClass->NodeOperatorNotEqualNode(); });

	return state;
}