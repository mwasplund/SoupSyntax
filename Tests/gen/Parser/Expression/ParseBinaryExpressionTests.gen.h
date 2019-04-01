#pragma once
#include "ParseBinaryExpressionTests.h"
#include "../../RunTest.h"

TestState RunParseBinaryExpressionTests()
{
    std::string className = "ParseBinaryExpressionTests";
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseBinaryExpressionTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "IdentifierAddition",
        [&testClass]() { testClass->IdentifierAddition(); });
    state += RunTest(
        className,
        "IdentifierSubtraction",
        [&testClass]() { testClass->IdentifierSubtraction(); });
    state += RunTest(
        className,
        "IdentifierMultiplication",
        [&testClass]() { testClass->IdentifierMultiplication(); });
    state += RunTest(
        className,
        "IdentifierDivision",
        [&testClass]() { testClass->IdentifierDivision(); });
    state += RunTest(
        className,
        "IdentifierModulo",
        [&testClass]() { testClass->IdentifierModulo(); });
    state += RunTest(
        className,
        "IdentifierBitwiseAnd",
        [&testClass]() { testClass->IdentifierBitwiseAnd(); });
    state += RunTest(
        className,
        "IdentifierBitwiseOr",
        [&testClass]() { testClass->IdentifierBitwiseOr(); });
    state += RunTest(
        className,
        "IdentifierBitwiseExclusiveOr",
        [&testClass]() { testClass->IdentifierBitwiseExclusiveOr(); });
    state += RunTest(
        className,
        "IdentifierBitwiseLeftShift",
        [&testClass]() { testClass->IdentifierBitwiseLeftShift(); });
    state += RunTest(
        className,
        "IdentifierBitwiseRightShift",
        [&testClass]() { testClass->IdentifierBitwiseRightShift(); });
    state += RunTest(
        className,
        "IdentifierSimpleAssignment",
        [&testClass]() { testClass->IdentifierSimpleAssignment(); });
    state += RunTest(
        className,
        "IdentifierAdditionAssignment",
        [&testClass]() { testClass->IdentifierAdditionAssignment(); });
    state += RunTest(
        className,
        "IdentifierSubtractionAssignment",
        [&testClass]() { testClass->IdentifierSubtractionAssignment(); });
    state += RunTest(
        className,
        "IdentifierMultiplicationAssignment",
        [&testClass]() { testClass->IdentifierMultiplicationAssignment(); });
    state += RunTest(
        className,
        "IdentifierDivisionAssignment",
        [&testClass]() { testClass->IdentifierDivisionAssignment(); });
    state += RunTest(
        className,
        "IdentifierModuloAssignment",
        [&testClass]() { testClass->IdentifierModuloAssignment(); });
    state += RunTest(
        className,
        "IdentifierBitwiseExclusiveOrAssignment",
        [&testClass]() { testClass->IdentifierBitwiseExclusiveOrAssignment(); });
    state += RunTest(
        className,
        "IdentifierBitwiseAndAssignment",
        [&testClass]() { testClass->IdentifierBitwiseAndAssignment(); });
    state += RunTest(
        className,
        "IdentifierBitwiseOrAssignment",
        [&testClass]() { testClass->IdentifierBitwiseOrAssignment(); });
    state += RunTest(
        className,
        "IdentifierBitwiseLeftShiftAssignment",
        [&testClass]() { testClass->IdentifierBitwiseLeftShiftAssignment(); });
    state += RunTest(
        className,
        "IdentifierBitwiseRightShiftAssignment",
        [&testClass]() { testClass->IdentifierBitwiseRightShiftAssignment(); });
    state += RunTest(
        className,
        "IdentifierEquals",
        [&testClass]() { testClass->IdentifierEquals(); });
    state += RunTest(
        className,
        "IdentifierNotEquals",
        [&testClass]() { testClass->IdentifierNotEquals(); });
    state += RunTest(
        className,
        "IdentifierLessThan",
        [&testClass]() { testClass->IdentifierLessThan(); });
    // std::cout << "IdentifierGreaterThan" << std::endl;
    // TODO : Not consuming all tokens... state += RunTest([&testClass]() { testClass->IdentifierGreaterThan(); });
    state += RunTest(
        className,
        "IdentifierLessThanOrEqual",
        [&testClass]() { testClass->IdentifierLessThanOrEqual(); });
    state += RunTest(
        className,
        "IdentifierGreaterThanOrEqual",
        [&testClass]() { testClass->IdentifierGreaterThanOrEqual(); });
    // std::cout << "IdentifierThreeWayComparison" << std::endl;
    // TODO state += RunTest([&testClass]() { testClass->IdentifierThreeWayComparison(); });
    state += RunTest(
        className,
        "IdentifierLogicalAnd",
        [&testClass]() { testClass->IdentifierLogicalAnd(); });
    state += RunTest(
        className,
        "IdentifierLogicalOr",
        [&testClass]() { testClass->IdentifierLogicalOr(); });
    state += RunTest(
        className,
        "IdentifierMemberOfObject",
        [&testClass]() { testClass->IdentifierMemberOfObject(); });
    state += RunTest(
        className,
        "IdentifierMemberOfPointer",
        [&testClass]() { testClass->IdentifierMemberOfPointer(); });
    state += RunTest(
        className,
        "IdentifierPointerToMemberOfObject",
        [&testClass]() { testClass->IdentifierPointerToMemberOfObject(); });
    state += RunTest(
        className,
        "IdentifierPointerToMemberOfPointer",
        [&testClass]() { testClass->IdentifierPointerToMemberOfPointer(); });

    return state;
}
