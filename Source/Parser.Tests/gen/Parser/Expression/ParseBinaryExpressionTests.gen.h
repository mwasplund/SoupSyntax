#pragma once
#include "Parser/Expression/ParseBinaryExpressionTests.h"

TestState RunParseBinaryExpressionTests() 
 {
	auto className = "ParseBinaryExpressionTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParseBinaryExpressionTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "IdentifierAddition", [&testClass]() { testClass->IdentifierAddition(); });
	state += Soup::Test::RunTest(className, "IdentifierSubtraction", [&testClass]() { testClass->IdentifierSubtraction(); });
	state += Soup::Test::RunTest(className, "IdentifierMultiplication", [&testClass]() { testClass->IdentifierMultiplication(); });
	state += Soup::Test::RunTest(className, "IdentifierDivision", [&testClass]() { testClass->IdentifierDivision(); });
	state += Soup::Test::RunTest(className, "IdentifierModulo", [&testClass]() { testClass->IdentifierModulo(); });
	state += Soup::Test::RunTest(className, "IdentifierBitwiseAnd", [&testClass]() { testClass->IdentifierBitwiseAnd(); });
	state += Soup::Test::RunTest(className, "IdentifierBitwiseOr", [&testClass]() { testClass->IdentifierBitwiseOr(); });
	state += Soup::Test::RunTest(className, "IdentifierBitwiseExclusiveOr", [&testClass]() { testClass->IdentifierBitwiseExclusiveOr(); });
	state += Soup::Test::RunTest(className, "IdentifierBitwiseLeftShift", [&testClass]() { testClass->IdentifierBitwiseLeftShift(); });
	state += Soup::Test::RunTest(className, "IdentifierBitwiseRightShift", [&testClass]() { testClass->IdentifierBitwiseRightShift(); });
	state += Soup::Test::RunTest(className, "IdentifierSimpleAssignment", [&testClass]() { testClass->IdentifierSimpleAssignment(); });
	state += Soup::Test::RunTest(className, "IdentifierAdditionAssignment", [&testClass]() { testClass->IdentifierAdditionAssignment(); });
	state += Soup::Test::RunTest(className, "IdentifierSubtractionAssignment", [&testClass]() { testClass->IdentifierSubtractionAssignment(); });
	state += Soup::Test::RunTest(className, "IdentifierMultiplicationAssignment", [&testClass]() { testClass->IdentifierMultiplicationAssignment(); });
	state += Soup::Test::RunTest(className, "IdentifierDivisionAssignment", [&testClass]() { testClass->IdentifierDivisionAssignment(); });
	state += Soup::Test::RunTest(className, "IdentifierModuloAssignment", [&testClass]() { testClass->IdentifierModuloAssignment(); });
	state += Soup::Test::RunTest(className, "IdentifierBitwiseExclusiveOrAssignment", [&testClass]() { testClass->IdentifierBitwiseExclusiveOrAssignment(); });
	state += Soup::Test::RunTest(className, "IdentifierBitwiseAndAssignment", [&testClass]() { testClass->IdentifierBitwiseAndAssignment(); });
	state += Soup::Test::RunTest(className, "IdentifierBitwiseOrAssignment", [&testClass]() { testClass->IdentifierBitwiseOrAssignment(); });
	state += Soup::Test::RunTest(className, "IdentifierBitwiseLeftShiftAssignment", [&testClass]() { testClass->IdentifierBitwiseLeftShiftAssignment(); });
	state += Soup::Test::RunTest(className, "IdentifierBitwiseRightShiftAssignment", [&testClass]() { testClass->IdentifierBitwiseRightShiftAssignment(); });
	state += Soup::Test::RunTest(className, "IdentifierEquals", [&testClass]() { testClass->IdentifierEquals(); });
	state += Soup::Test::RunTest(className, "IdentifierNotEquals", [&testClass]() { testClass->IdentifierNotEquals(); });
	state += Soup::Test::RunTest(className, "IdentifierLessThan", [&testClass]() { testClass->IdentifierLessThan(); });
	state += Soup::Test::RunTest(className, "IdentifierGreaterThan", [&testClass]() { testClass->IdentifierGreaterThan(); });
	state += Soup::Test::RunTest(className, "IdentifierLessThanOrEqual", [&testClass]() { testClass->IdentifierLessThanOrEqual(); });
	state += Soup::Test::RunTest(className, "IdentifierGreaterThanOrEqual", [&testClass]() { testClass->IdentifierGreaterThanOrEqual(); });
	state += Soup::Test::RunTest(className, "IdentifierLogicalAnd", [&testClass]() { testClass->IdentifierLogicalAnd(); });
	state += Soup::Test::RunTest(className, "IdentifierLogicalOr", [&testClass]() { testClass->IdentifierLogicalOr(); });
	state += Soup::Test::RunTest(className, "IdentifierMemberOfObject", [&testClass]() { testClass->IdentifierMemberOfObject(); });
	state += Soup::Test::RunTest(className, "IdentifierMemberOfPointer", [&testClass]() { testClass->IdentifierMemberOfPointer(); });
	state += Soup::Test::RunTest(className, "IdentifierPointerToMemberOfObject", [&testClass]() { testClass->IdentifierPointerToMemberOfObject(); });
	state += Soup::Test::RunTest(className, "IdentifierPointerToMemberOfPointer", [&testClass]() { testClass->IdentifierPointerToMemberOfPointer(); });

	return state;
}