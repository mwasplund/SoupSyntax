#pragma once
#include "ParseBinaryExpressionTests.h"
#include "../../RunTest.h"

TestState RunParseBinaryExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseBinaryExpressionTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running ParseBinaryExpressionTests:" << std::endl;

    std::wcout << L"IdentifierAddition" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierAddition(); });

    std::wcout << L"IdentifierSubtraction" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierSubtraction(); });

    std::wcout << L"IdentifierMultiplication" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierMultiplication(); });

    std::wcout << L"IdentifierDivision" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierDivision(); });

    std::wcout << L"IdentifierModulo" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierModulo(); });

    std::wcout << L"IdentifierBitwiseAnd" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierBitwiseAnd(); });

    std::wcout << L"IdentifierBitwiseOr" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierBitwiseOr(); });

    std::wcout << L"IdentifierBitwiseExclusiveOr" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierBitwiseExclusiveOr(); });

    std::wcout << L"IdentifierBitwiseLeftShift" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierBitwiseLeftShift(); });

    std::wcout << L"IdentifierBitwiseRightShift" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierBitwiseRightShift(); });

    std::wcout << L"IdentifierSimpleAssignment" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierSimpleAssignment(); });

    std::wcout << L"IdentifierAdditionAssignment" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierAdditionAssignment(); });

    std::wcout << L"IdentifierSubtractionAssignment" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierSubtractionAssignment(); });

    std::wcout << L"IdentifierMultiplicationAssignment" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierMultiplicationAssignment(); });

    std::wcout << L"IdentifierDivisionAssignment" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierDivisionAssignment(); });

    std::wcout << L"IdentifierModuloAssignment" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierModuloAssignment(); });

    std::wcout << L"IdentifierBitwiseExclusiveOrAssignment" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierBitwiseExclusiveOrAssignment(); });

    std::wcout << L"IdentifierBitwiseAndAssignment" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierBitwiseAndAssignment(); });

    std::wcout << L"IdentifierBitwiseOrAssignment" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierBitwiseOrAssignment(); });

    std::wcout << L"IdentifierBitwiseLeftShiftAssignment" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierBitwiseLeftShiftAssignment(); });

    std::wcout << L"IdentifierBitwiseRightShiftAssignment" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierBitwiseRightShiftAssignment(); });

    std::wcout << L"IdentifierEquals" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierEquals(); });

    std::wcout << L"IdentifierNotEquals" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierNotEquals(); });

    std::wcout << L"IdentifierLessThan" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierLessThan(); });

    std::wcout << L"IdentifierGreaterThan" << std::endl;
    // TODO : Not consuming all tokens... state += RunTest([&testClass]() { testClass->IdentifierGreaterThan(); });

    std::wcout << L"IdentifierLessThanOrEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierLessThanOrEqual(); });

    std::wcout << L"IdentifierGreaterThanOrEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierGreaterThanOrEqual(); });

    std::wcout << L"IdentifierThreeWayComparison" << std::endl;
    // TODO state += RunTest([&testClass]() { testClass->IdentifierThreeWayComparison(); });

    std::wcout << L"IdentifierLogicalAnd" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierLogicalAnd(); });

    std::wcout << L"IdentifierLogicalOr" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierLogicalOr(); });

    std::wcout << L"IdentifierMemberOfObject" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierMemberOfObject(); });

    std::wcout << L"IdentifierMemberOfPointer" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierMemberOfPointer(); });

    std::wcout << L"IdentifierPointerToMemberOfObject" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierPointerToMemberOfObject(); });

    std::wcout << L"IdentifierPointerToMemberOfPointer" << std::endl;
    state += RunTest([&testClass]() { testClass->IdentifierPointerToMemberOfPointer(); });

    return state;
}
