#pragma once
#include "PrimaryExpressionTests.h"
#include "../../RunTest.h"

int RunPrimaryExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::PrimaryExpressionTests>();
    int failedCount = 0;

    std::wcout << L"Running PrimaryExpressionTests:" << std::endl;

    std::wcout << L"SingleIntegerLiteralType" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleIntegerLiteralType("0"); });
    failedCount += RunTest([&testClass]() { testClass->SingleIntegerLiteralType("1"); });

    std::wcout << L"SingleFloatingLiteralType" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleFloatingLiteralType("0.0f"); });

    std::wcout << L"SingleCharacterLiteralType" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleCharacterLiteralType("'1'"); });

    std::wcout << L"SinglePointerLiteralType" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SinglePointerLiteralType("nullptr"); });

    std::wcout << L"SingleStringLiteralType" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleStringLiteralType("\" \""); });

    std::wcout << L"SingleBooleanLiteralType" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleBooleanLiteralType("true", SyntaxTokenType::True); });
    failedCount += RunTest([&testClass]() { testClass->SingleBooleanLiteralType("false", SyntaxTokenType::False); });

    std::wcout << L"SingleUserDefinedLiteralType" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleUserDefinedLiteralType("2h"); });

    std::wcout << L"SingleThisExpression" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleThisExpression(); });

    std::wcout << L"SingleSimpleNameExpression" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleSimpleNameExpression(); });
    
    std::wcout << L"SingleQualifiedNameExpression" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleQualifiedNameExpression(); });

    return failedCount;
}
