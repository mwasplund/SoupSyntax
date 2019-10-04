#pragma once
#include "/AST/InnerTree/Declaration/EnumSpecifierTests.h"

TestState RunInnerTreeEnumSpecifierTests() 
 {
	auto className = "InnerTreeEnumSpecifierTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::InnerTreeEnumSpecifierTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "InitializeNoClassOrIdentifier", [&testClass]() { testClass->InitializeNoClassOrIdentifier(); });
	state += SoupTest::RunTest(className, "InitializeWithClassAndIdentifier", [&testClass]() { testClass->InitializeWithClassAndIdentifier(); });
	state += SoupTest::RunTest(className, "OperatorEqualNoClassOrIdentifier", [&testClass]() { testClass->OperatorEqualNoClassOrIdentifier(); });
	state += SoupTest::RunTest(className, "OperatorEqualWithClassAndIdentifier", [&testClass]() { testClass->OperatorEqualWithClassAndIdentifier(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualEnumToken", [&testClass]() { testClass->OperatorNotEqualEnumToken(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualNoClass", [&testClass]() { testClass->OperatorNotEqualNoClass(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualWithClass", [&testClass]() { testClass->OperatorNotEqualWithClass(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualNoIdentifier", [&testClass]() { testClass->OperatorNotEqualNoIdentifier(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualWithIdentifier", [&testClass]() { testClass->OperatorNotEqualWithIdentifier(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualOpenBraceToken", [&testClass]() { testClass->OperatorNotEqualOpenBraceToken(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualEnumeratorList", [&testClass]() { testClass->OperatorNotEqualEnumeratorList(); });
	state += SoupTest::RunTest(className, "OperatorNotEqualCloseBraceToken", [&testClass]() { testClass->OperatorNotEqualCloseBraceToken(); });

	return state;
}