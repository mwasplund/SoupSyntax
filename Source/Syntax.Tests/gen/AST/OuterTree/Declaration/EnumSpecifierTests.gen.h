#pragma once
#include "AST/OuterTree/Declaration/EnumSpecifierTests.h"

TestState RunOuterTreeEnumSpecifierTests() 
 {
	auto className = "OuterTreeEnumSpecifierTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::OuterTreeEnumSpecifierTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "InitializeNoClassOrIdentifier", [&testClass]() { testClass->InitializeNoClassOrIdentifier(); });
	state += Soup::Test::RunTest(className, "InitializeWithClassAndIdentifier", [&testClass]() { testClass->InitializeWithClassAndIdentifier(); });
	state += Soup::Test::RunTest(className, "GetChildrenNoClassOrIdentifier", [&testClass]() { testClass->GetChildrenNoClassOrIdentifier(); });
	state += Soup::Test::RunTest(className, "GetChildrenWithClassAndIdentifier", [&testClass]() { testClass->GetChildrenWithClassAndIdentifier(); });
	state += Soup::Test::RunTest(className, "OperatorEqualNoClassOrIdentifier", [&testClass]() { testClass->OperatorEqualNoClassOrIdentifier(); });
	state += Soup::Test::RunTest(className, "OperatorEqualWithClassAndIdentifier", [&testClass]() { testClass->OperatorEqualWithClassAndIdentifier(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualEnumToken", [&testClass]() { testClass->OperatorNotEqualEnumToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualNoClass", [&testClass]() { testClass->OperatorNotEqualNoClass(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualWithClass", [&testClass]() { testClass->OperatorNotEqualWithClass(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualNoIdentifier", [&testClass]() { testClass->OperatorNotEqualNoIdentifier(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualWithIdentifier", [&testClass]() { testClass->OperatorNotEqualWithIdentifier(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualOpenBraceToken", [&testClass]() { testClass->OperatorNotEqualOpenBraceToken(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualEnumeratorList", [&testClass]() { testClass->OperatorNotEqualEnumeratorList(); });
	state += Soup::Test::RunTest(className, "OperatorNotEqualCloseBraceToken", [&testClass]() { testClass->OperatorNotEqualCloseBraceToken(); });

	return state;
}