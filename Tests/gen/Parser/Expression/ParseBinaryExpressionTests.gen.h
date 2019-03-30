#pragma once
#include "ParseBinaryExpressionTests.h"
#include "../../RunTest.h"

TestState RunParseBinaryExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseBinaryExpressionTests>();
    TestState state = { 0, 0 };

    std::cout << "Running ParseBinaryExpressionTests:" << std::endl;

    state += RunTest(
        "IdentifierAddition",
        [&testClass]() { testClass->IdentifierAddition(); });

    state += RunTest(
        "IdentifierSubtraction",
        [&testClass]() { testClass->IdentifierSubtraction(); });

    state += RunTest(
        "IdentifierMultiplication",
        [&testClass]() { testClass->IdentifierMultiplication(); });

    std::cout << "IdentifierDivision" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierDivision(); });

    state += RunTest(
        "IdentifierModulo",
        [&testClass]() { testClass->IdentifierModulo(); });

    state += RunTest(
        "IdentifierBitwiseAnd",
        [&testClass]() { testClass->IdentifierBitwiseAnd(); });

    state += RunTest(
        "IdentifierBitwiseOr",
        [&testClass]() { testClass->IdentifierBitwiseOr(); });

    state += RunTest(
        "IdentifierBitwiseExclusiveOr",
        [&testClass]() { testClass->IdentifierBitwiseExclusiveOr(); });

    state += RunTest(
        "IdentifierBitwiseLeftShift",
        [&testClass]() { testClass->IdentifierBitwiseLeftShift(); });

    state += RunTest(
        "IdentifierBitwiseRightShift",
        [&testClass]() { testClass->IdentifierBitwiseRightShift(); });

    state += RunTest(
        "IdentifierSimpleAssignment",
        [&testClass]() { testClass->IdentifierSimpleAssignment(); });

    state += RunTest(
        "IdentifierAdditionAssignment",
        [&testClass]() { testClass->IdentifierAdditionAssignment(); });

    state += RunTest(
        "IdentifierSubtractionAssignment",
        [&testClass]() { testClass->IdentifierSubtractionAssignment(); });

    state += RunTest(
        "IdentifierMultiplicationAssignment",
        [&testClass]() { testClass->IdentifierMultiplicationAssignment(); });

    state += RunTest(
        "IdentifierDivisionAssignment",
        [&testClass]() { testClass->IdentifierDivisionAssignment(); });

    state += RunTest(
        "IdentifierModuloAssignment",
        [&testClass]() { testClass->IdentifierModuloAssignment(); });

    state += RunTest(
        "IdentifierBitwiseExclusiveOrAssignment",
        [&testClass]() { testClass->IdentifierBitwiseExclusiveOrAssignment(); });

    state += RunTest(
        "IdentifierBitwiseAndAssignment",
        [&testClass]() { testClass->IdentifierBitwiseAndAssignment(); });

    state += RunTest(
        "IdentifierBitwiseOrAssignment",
        [&testClass]() { testClass->IdentifierBitwiseOrAssignment(); });

    state += RunTest(
        "IdentifierBitwiseLeftShiftAssignment",
        [&testClass]() { testClass->IdentifierBitwiseLeftShiftAssignment(); });

    state += RunTest(
        "IdentifierBitwiseRightShiftAssignment",
        [&testClass]() { testClass->IdentifierBitwiseRightShiftAssignment(); });

    state += RunTest(
        "IdentifierEquals",
        [&testClass]() { testClass->IdentifierEquals(); });

    state += RunTest(
        "IdentifierNotEquals",
        [&testClass]() { testClass->IdentifierNotEquals(); });

    state += RunTest(
        "IdentifierLessThan",
        [&testClass]() { testClass->IdentifierLessThan(); });

    // std::cout << "IdentifierGreaterThan" << std::endl;
    // TODO : Not consuming all tokens... state += RunTest([&testClass]() { testClass->IdentifierGreaterThan(); });

    state += RunTest(
        "IdentifierLessThanOrEqual",
        [&testClass]() { testClass->IdentifierLessThanOrEqual(); });

    state += RunTest(
        "IdentifierGreaterThanOrEqual",
        [&testClass]() { testClass->IdentifierGreaterThanOrEqual(); });

    // std::cout << "IdentifierThreeWayComparison" << std::endl;
    // TODO state += RunTest([&testClass]() { testClass->IdentifierThreeWayComparison(); });

    state += RunTest(
        "IdentifierLogicalAnd",
        [&testClass]() { testClass->IdentifierLogicalAnd(); });

    state += RunTest(
        "IdentifierLogicalOr",
        [&testClass]() { testClass->IdentifierLogicalOr(); });

    state += RunTest(
        "IdentifierMemberOfObject",
        [&testClass]() { testClass->IdentifierMemberOfObject(); });

    state += RunTest(
        "IdentifierMemberOfPointer",
        [&testClass]() { testClass->IdentifierMemberOfPointer(); });

    state += RunTest(
        "IdentifierPointerToMemberOfObject",
        [&testClass]() { testClass->IdentifierPointerToMemberOfObject(); });

    state += RunTest(
        "IdentifierPointerToMemberOfPointer",
        [&testClass]() { testClass->IdentifierPointerToMemberOfPointer(); });

    return state;
}
