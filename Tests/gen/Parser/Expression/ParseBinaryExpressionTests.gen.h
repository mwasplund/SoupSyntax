#pragma once
#include "ParseBinaryExpressionTests.h"
#include "../../RunTest.h"

int RunParseBinaryExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseBinaryExpressionTests>();
    int failedCount = 0;

    std::wcout << L"Running ParseBinaryExpressionTests:" << std::endl;

    std::wcout << L"IdentifierAddition" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->IdentifierAddition(); });

    std::wcout << L"IdentifierSubtraction" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->IdentifierSubtraction(); });

    std::wcout << L"IdentifierMultiplication" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->IdentifierMultiplication(); });

    std::wcout << L"IdentifierDivision" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->IdentifierDivision(); });

    std::wcout << L"IdentifierModulo" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->IdentifierModulo(); });

    std::wcout << L"IdentifierBitwiseAnd" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->IdentifierBitwiseAnd(); });

    std::wcout << L"IdentifierBitwiseOr" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->IdentifierBitwiseOr(); });

    std::wcout << L"IdentifierBitwiseExclusiveOr" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->IdentifierBitwiseExclusiveOr(); });

    std::wcout << L"IdentifierBitwiseLeftShift" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->IdentifierBitwiseLeftShift(); });

    std::wcout << L"IdentifierBitwiseRightShift" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->IdentifierBitwiseRightShift(); });

    std::wcout << L"IdentifierSimpleAssignment" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->IdentifierSimpleAssignment(); });

    std::wcout << L"IdentifierAdditionAssignment" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->IdentifierAdditionAssignment(); });

    std::wcout << L"IdentifierSubtractionAssignment" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->IdentifierSubtractionAssignment(); });

    std::wcout << L"IdentifierMultiplicationAssignment" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->IdentifierMultiplicationAssignment(); });

    std::wcout << L"IdentifierDivisionAssignment" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->IdentifierDivisionAssignment(); });

    std::wcout << L"IdentifierModuloAssignment" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->IdentifierModuloAssignment(); });

    std::wcout << L"IdentifierBitwiseExclusiveOrAssignment" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->IdentifierBitwiseExclusiveOrAssignment(); });

    std::wcout << L"IdentifierBitwiseAndAssignment" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->IdentifierBitwiseAndAssignment(); });

    std::wcout << L"IdentifierBitwiseOrAssignment" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->IdentifierBitwiseOrAssignment(); });

    std::wcout << L"IdentifierBitwiseLeftShiftAssignment" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->IdentifierBitwiseLeftShiftAssignment(); });

    std::wcout << L"IdentifierBitwiseRightShiftAssignment" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->IdentifierBitwiseRightShiftAssignment(); });

    std::wcout << L"IdentifierEquals" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->IdentifierEquals(); });

    std::wcout << L"IdentifierNotEquals" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->IdentifierNotEquals(); });

    std::wcout << L"IdentifierLessThan" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->IdentifierLessThan(); });

    std::wcout << L"IdentifierGreaterThan" << std::endl;
    // TODO : Not consuming all tokens... failedCount += RunTest([&testClass]() { testClass->IdentifierGreaterThan(); });

    std::wcout << L"IdentifierLessThanOrEqual" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->IdentifierLessThanOrEqual(); });

    std::wcout << L"IdentifierGreaterThanOrEqual" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->IdentifierGreaterThanOrEqual(); });

    std::wcout << L"IdentifierThreeWayComparison" << std::endl;
    // TODO failedCount += RunTest([&testClass]() { testClass->IdentifierThreeWayComparison(); });

    std::wcout << L"IdentifierLogicalAnd" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->IdentifierLogicalAnd(); });

    std::wcout << L"IdentifierLogicalOr" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->IdentifierLogicalOr(); });

    std::wcout << L"IdentifierMemberOfObject" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->IdentifierMemberOfObject(); });

    std::wcout << L"IdentifierMemberOfPointer" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->IdentifierMemberOfPointer(); });

    std::wcout << L"IdentifierPointerToMemberOfObject" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->IdentifierPointerToMemberOfObject(); });

    std::wcout << L"IdentifierPointerToMemberOfPointer" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->IdentifierPointerToMemberOfPointer(); });

    return failedCount;
}
