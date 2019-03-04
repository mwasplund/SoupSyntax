#pragma once
#include "SyntaxVariableTests.h"
#include "../RunTest.h"

using namespace Soup::Syntax;

int RunSyntaxVariableTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::SyntaxVariableTests>();
    int failedCount = 0;

    std::wcout << L"Running SyntaxVariableTests:" << std::endl;

    std::wcout << L"Running GlobalVariableDeclaration:" << std::endl;
    //failedCount += RunTest([&testClass]() { testClass->GlobalVariableDeclaration(); });

    std::wcout << L"Running GlobalVariableDeclarationInitializer:" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->GlobalVariableDeclarationInitializer(); });

    std::wcout << L"Running GlobalPrimitiveVariable:" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("char", PrimitiveDataType::Char, SyntaxTokenType::Char); });
    failedCount += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("char16_t", PrimitiveDataType::Char16, SyntaxTokenType::Char16); });
    failedCount += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("char32_t", PrimitiveDataType::Char32, SyntaxTokenType::Char32); });
    failedCount += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("wchar_t", PrimitiveDataType::WChar, SyntaxTokenType::WChar); });
    failedCount += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("bool", PrimitiveDataType::Bool, SyntaxTokenType::Bool); });
    failedCount += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("short", PrimitiveDataType::Short, SyntaxTokenType::Short); });
    failedCount += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("int", PrimitiveDataType::Int, SyntaxTokenType::Int); });
    failedCount += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("long", PrimitiveDataType::Long, SyntaxTokenType::Long); });
    failedCount += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("signed", PrimitiveDataType::Signed, SyntaxTokenType::Signed); });
    failedCount += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("unsigned", PrimitiveDataType::Unsigned, SyntaxTokenType::Unsigned); });
    failedCount += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("float", PrimitiveDataType::Float, SyntaxTokenType::Float); });
    failedCount += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("double", PrimitiveDataType::Double, SyntaxTokenType::Double); });
    failedCount += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("void", PrimitiveDataType::Void, SyntaxTokenType::Void); });
    failedCount += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("auto", PrimitiveDataType::Auto, SyntaxTokenType::Auto); });

    std::wcout << L"Running GlobalTwoVariableDeclarationInitializer:" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->GlobalTwoVariableDeclarationInitializer(); });

    return failedCount;
}
