#pragma once
#include "AST/InnerTree/Attribute/AttributeSpecifierTests.h"

TestState RunInnerTreeAttributeSpecifierTests() 
 {
	auto className = "InnerTreeAttributeSpecifierTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeAttributeSpecifierTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "InitializeSimple", [&testClass]() { testClass->InitializeSimple(); });
	state += SoupTest::RunTest(className, "InitializeComplex", [&testClass]() { testClass->InitializeComplex(); });
	state += SoupTest::RunTest(className, "OperatorEqual", [&testClass]() { testClass->OperatorEqual(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualOuterOpenBracketToken", [&testClass]() { testClass->OperatorNotEqualOuterOpenBracketToken(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualInnerOpenBracketToken", [&testClass]() { testClass->OperatorNotEqualInnerOpenBracketToken(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualAttributes", [&testClass]() { testClass->OperatorNotEqualAttributes(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualInnerCloseBracketToken", [&testClass]() { testClass->OperatorNotEqualInnerCloseBracketToken(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualOuterCloseBracketToken", [&testClass]() { testClass->OperatorNotEqualOuterCloseBracketToken(); });

	return state;
}