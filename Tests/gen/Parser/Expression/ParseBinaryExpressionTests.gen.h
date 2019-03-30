#pragma once
#include "ParseBinaryExpressionTests.h"
#include "../../RunTest.h"

TestState RunParseBinaryExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseBinaryExpressionTests>();
    TestState state = { 0, 0 };

    std::cout << "Running ParseBinaryExpressionTests:" << std::endl;

    std::cout << "IdentifierAddition" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierAddition(); });

    std::cout << "IdentifierSubtraction" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierSubtraction(); });

    std::cout << "IdentifierMultiplication" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierMultiplication(); });

    std::cout << "IdentifierDivision" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierDivision(); });

    std::cout << "IdentifierModulo" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierModulo(); });

    std::cout << "IdentifierBitwiseAnd" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierBitwiseAnd(); });

    std::cout << "IdentifierBitwiseOr" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierBitwiseOr(); });

    std::cout << "IdentifierBitwiseExclusiveOr" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierBitwiseExclusiveOr(); });

    std::cout << "IdentifierBitwiseLeftShift" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierBitwiseLeftShift(); });

    std::cout << "IdentifierBitwiseRightShift" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierBitwiseRightShift(); });

    std::cout << "IdentifierSimpleAssignment" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierSimpleAssignment(); });

    std::cout << "IdentifierAdditionAssignment" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierAdditionAssignment(); });

    std::cout << "IdentifierSubtractionAssignment" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierSubtractionAssignment(); });

    std::cout << "IdentifierMultiplicationAssignment" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierMultiplicationAssignment(); });

    std::cout << "IdentifierDivisionAssignment" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierDivisionAssignment(); });

    std::cout << "IdentifierModuloAssignment" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierModuloAssignment(); });

    std::cout << "IdentifierBitwiseExclusiveOrAssignment" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierBitwiseExclusiveOrAssignment(); });

    std::cout << "IdentifierBitwiseAndAssignment" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierBitwiseAndAssignment(); });

    std::cout << "IdentifierBitwiseOrAssignment" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierBitwiseOrAssignment(); });

    std::cout << "IdentifierBitwiseLeftShiftAssignment" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierBitwiseLeftShiftAssignment(); });

    std::cout << "IdentifierBitwiseRightShiftAssignment" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierBitwiseRightShiftAssignment(); });

    std::cout << "IdentifierEquals" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierEquals(); });

    std::cout << "IdentifierNotEquals" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierNotEquals(); });

    std::cout << "IdentifierLessThan" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierLessThan(); });

    std::cout << "IdentifierGreaterThan" << std::endl;
    // TODO : Not consuming all tokens... state += RunTest([&testClass]() { testClass->IdentifierGreaterThan(); });

    std::cout << "IdentifierLessThanOrEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierLessThanOrEqual(); });

    std::cout << "IdentifierGreaterThanOrEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierGreaterThanOrEqual(); });

    std::cout << "IdentifierThreeWayComparison" << std::endl;
    // TODO state += RunTest([&testClass]() { testClass->IdentifierThreeWayComparison(); });

    std::cout << "IdentifierLogicalAnd" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierLogicalAnd(); });

    std::cout << "IdentifierLogicalOr" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierLogicalOr(); });

    std::cout << "IdentifierMemberOfObject" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierMemberOfObject(); });

    std::cout << "IdentifierMemberOfPointer" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierMemberOfPointer(); });

    std::cout << "IdentifierPointerToMemberOfObject" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierPointerToMemberOfObject(); });

    std::cout << "IdentifierPointerToMemberOfPointer" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierPointerToMemberOfPointer(); });

    return state;
}
