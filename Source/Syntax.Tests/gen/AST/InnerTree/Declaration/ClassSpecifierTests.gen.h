#pragma once
#include "/AST/InnerTree/Declaration/ClassSpecifierTests.h"

TestState RunInnerTreeClassSpecifierTests() 
 {
	auto className = "InnerTreeClassSpecifierTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeClassSpecifierTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "InitializeNoIdentifier", [&testClass]() { testClass->InitializeNoIdentifier(); });
	state += SoupTest::RunTest(className, "InitializeWithIdentifier", [&testClass]() { testClass->InitializeWithIdentifier(); });
	state += SoupTest::RunTest(className, "OperatorEqualNoIdentifier", [&testClass]() { testClass->OperatorEqualNoIdentifier(); });
	state += SoupTest::RunTest(className, "OperatorEqualWithIdentifier", [&testClass]() { testClass->OperatorEqualWithIdentifier(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualClassToken", [&testClass]() { testClass->OperatorNotEqualClassToken(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualNoIdentifier", [&testClass]() { testClass->OperatorNotEqualNoIdentifier(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualWithIdentifier", [&testClass]() { testClass->OperatorNotEqualWithIdentifier(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualOpenBraceToken", [&testClass]() { testClass->OperatorNotEqualOpenBraceToken(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualMemberDeclarations", [&testClass]() { testClass->OperatorNotEqualMemberDeclarations(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualCloseBraceToken", [&testClass]() { testClass->OperatorNotEqualCloseBraceToken(); });

	return state;
}