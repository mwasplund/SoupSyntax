#pragma once
#include "/Parser/Expression/ParseBinaryExpressionTests.h"

TestState RunParseBinaryExpressionTests() 
 {
	auto className = "ParseBinaryExpressionTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseBinaryExpressionTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "IdentifierAddition", [&testClass]() { testClass->IdentifierAddition(); });
	state += SoupTest::RunTest(className, "IdentifierSubtraction", [&testClass]() { testClass->IdentifierSubtraction(); });
	state += SoupTest::RunTest(className, "IdentifierMultiplication", [&testClass]() { testClass->IdentifierMultiplication(); });
	state += SoupTest::RunTest(className, "IdentifierDivision", [&testClass]() { testClass->IdentifierDivision(); });
	state += SoupTest::RunTest(className, "IdentifierModulo", [&testClass]() { testClass->IdentifierModulo(); });
	state += SoupTest::RunTest(className, "IdentifierBitwiseAnd", [&testClass]() { testClass->IdentifierBitwiseAnd(); });
	state += SoupTest::RunTest(className, "IdentifierBitwiseOr", [&testClass]() { testClass->IdentifierBitwiseOr(); });
	state += SoupTest::RunTest(className, "IdentifierBitwiseExclusiveOr", [&testClass]() { testClass->IdentifierBitwiseExclusiveOr(); });
	state += SoupTest::RunTest(className, "IdentifierBitwiseLeftShift", [&testClass]() { testClass->IdentifierBitwiseLeftShift(); });
	state += SoupTest::RunTest(className, "IdentifierBitwiseRightShift", [&testClass]() { testClass->IdentifierBitwiseRightShift(); });
	state += SoupTest::RunTest(className, "IdentifierSimpleAssignment", [&testClass]() { testClass->IdentifierSimpleAssignment(); });
	state += SoupTest::RunTest(className, "IdentifierAdditionAssignment", [&testClass]() { testClass->IdentifierAdditionAssignment(); });
	state += SoupTest::RunTest(className, "IdentifierSubtractionAssignment", [&testClass]() { testClass->IdentifierSubtractionAssignment(); });
	state += SoupTest::RunTest(className, "IdentifierMultiplicationAssignment", [&testClass]() { testClass->IdentifierMultiplicationAssignment(); });
	state += SoupTest::RunTest(className, "IdentifierDivisionAssignment", [&testClass]() { testClass->IdentifierDivisionAssignment(); });
	state += SoupTest::RunTest(className, "IdentifierModuloAssignment", [&testClass]() { testClass->IdentifierModuloAssignment(); });
	state += SoupTest::RunTest(className, "IdentifierBitwiseExclusiveOrAssignment", [&testClass]() { testClass->IdentifierBitwiseExclusiveOrAssignment(); });
	state += SoupTest::RunTest(className, "IdentifierBitwiseAndAssignment", [&testClass]() { testClass->IdentifierBitwiseAndAssignment(); });
	state += SoupTest::RunTest(className, "IdentifierBitwiseOrAssignment", [&testClass]() { testClass->IdentifierBitwiseOrAssignment(); });
	state += SoupTest::RunTest(className, "IdentifierBitwiseLeftShiftAssignment", [&testClass]() { testClass->IdentifierBitwiseLeftShiftAssignment(); });
	state += SoupTest::RunTest(className, "IdentifierBitwiseRightShiftAssignment", [&testClass]() { testClass->IdentifierBitwiseRightShiftAssignment(); });
	state += SoupTest::RunTest(className, "IdentifierEquals", [&testClass]() { testClass->IdentifierEquals(); });
	state += SoupTest::RunTest(className, "IdentifierNotEquals", [&testClass]() { testClass->IdentifierNotEquals(); });
	state += SoupTest::RunTest(className, "IdentifierLessThan", [&testClass]() { testClass->IdentifierLessThan(); });
	state += SoupTest::RunTest(className, "IdentifierGreaterThan", [&testClass]() { testClass->IdentifierGreaterThan(); });
	state += SoupTest::RunTest(className, "IdentifierLessThanOrEqual", [&testClass]() { testClass->IdentifierLessThanOrEqual(); });
	state += SoupTest::RunTest(className, "IdentifierGreaterThanOrEqual", [&testClass]() { testClass->IdentifierGreaterThanOrEqual(); });
	state += SoupTest::RunTest(className, "IdentifierLogicalAnd", [&testClass]() { testClass->IdentifierLogicalAnd(); });
	state += SoupTest::RunTest(className, "IdentifierLogicalOr", [&testClass]() { testClass->IdentifierLogicalOr(); });
	state += SoupTest::RunTest(className, "IdentifierMemberOfObject", [&testClass]() { testClass->IdentifierMemberOfObject(); });
	state += SoupTest::RunTest(className, "IdentifierMemberOfPointer", [&testClass]() { testClass->IdentifierMemberOfPointer(); });
	state += SoupTest::RunTest(className, "IdentifierPointerToMemberOfObject", [&testClass]() { testClass->IdentifierPointerToMemberOfObject(); });
	state += SoupTest::RunTest(className, "IdentifierPointerToMemberOfPointer", [&testClass]() { testClass->IdentifierPointerToMemberOfPointer(); });

	return state;
}