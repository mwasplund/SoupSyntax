#pragma once
#include "AST/OuterTree/Attribute/AttributeSpecifierTests.h"

TestState RunOuterTreeAttributeSpecifierTests() 
 {
	auto className = "OuterTreeAttributeSpecifierTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeAttributeSpecifierTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += Soup::Test::RunTest(className, "InitializeComplex", [&testClass]() { testClass->InitializeComplex(); });
	state += Soup::Test::RunTest(className, "GetChildrenSimple", [&testClass]() { testClass->GetChildrenSimple(); });
	state += Soup::Test::RunTest(className, "GetChildrenComplex", [&testClass]() { testClass->GetChildrenComplex(); });
	state += Soup::Test::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualOuterOpenBracketToken", [&testClass]() { testClass->OperatorNotEqualOuterOpenBracketToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualInnerOpenBracketToken", [&testClass]() { testClass->OperatorNotEqualInnerOpenBracketToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualAttributes", [&testClass]() { testClass->OperatorNotEqualAttributes(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualInnerCloseBracketToken", [&testClass]() { testClass->OperatorNotEqualInnerCloseBracketToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualOuterCloseBracketToken", [&testClass]() { testClass->OperatorNotEqualOuterCloseBracketToken(); });

	return state;
}