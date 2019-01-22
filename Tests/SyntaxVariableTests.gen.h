#pragma once
#include "SyntaxVariableTests.h"
#include "RunTest.h"

using namespace Soup::Syntax;

int RunSyntaxVariableTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::SyntaxVariableTests>();
    int failedCount = 0;

    std::wcout << L"Running SyntaxVariableTests:" << std::endl;

    std::wcout << L"Running GlobalVariableDeclaration:" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->GlobalVariableDeclaration(); });

    std::wcout << L"Running GlobalVariableDeclarationInitializer:" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->GlobalVariableDeclarationInitializer(); });

    std::wcout << L"Running GlobalPrimitiveVariable:" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("char", PrimitiveDataType::Char); });
    failedCount += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("char16_t", PrimitiveDataType::Char16); });
    failedCount += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("char32_t", PrimitiveDataType::Char32); });
    failedCount += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("wchar_t", PrimitiveDataType::WChar); });
    failedCount += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("bool", PrimitiveDataType::Bool); });
    failedCount += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("short", PrimitiveDataType::Short); });
    failedCount += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("int", PrimitiveDataType::Int); });
    failedCount += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("long", PrimitiveDataType::Long); });
    failedCount += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("signed", PrimitiveDataType::Signed); });
    failedCount += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("unsigned", PrimitiveDataType::Unsigned); });
    failedCount += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("float", PrimitiveDataType::Float); });
    failedCount += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("double", PrimitiveDataType::Double); });
    failedCount += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("void", PrimitiveDataType::Void); });
    failedCount += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("auto", PrimitiveDataType::Auto); });

    std::wcout << L"Running GlobalTwoVariableDeclarationInitializer:" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->GlobalTwoVariableDeclarationInitializer(); });

    return failedCount;
}
