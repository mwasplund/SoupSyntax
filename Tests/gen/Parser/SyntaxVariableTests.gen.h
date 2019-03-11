#pragma once
#include "SyntaxVariableTests.h"
#include "../RunTest.h"

using namespace Soup::Syntax;

TestState RunSyntaxVariableTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::SyntaxVariableTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running SyntaxVariableTests:" << std::endl;

    std::wcout << L"Running GlobalVariableDeclaration:" << std::endl;
    //state += RunTest([&testClass]() { testClass->GlobalVariableDeclaration(); });

    std::wcout << L"Running GlobalVariableDeclarationInitializer:" << std::endl;
    state += RunTest([&testClass]() { testClass->GlobalVariableDeclarationInitializer(); });

    std::wcout << L"Running GlobalPrimitiveVariable:" << std::endl;
    state += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("char", PrimitiveDataType::Char, SyntaxTokenType::Char); });
    state += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("char16_t", PrimitiveDataType::Char16, SyntaxTokenType::Char16); });
    state += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("char32_t", PrimitiveDataType::Char32, SyntaxTokenType::Char32); });
    state += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("wchar_t", PrimitiveDataType::WChar, SyntaxTokenType::WChar); });
    state += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("bool", PrimitiveDataType::Bool, SyntaxTokenType::Bool); });
    state += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("short", PrimitiveDataType::Short, SyntaxTokenType::Short); });
    state += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("int", PrimitiveDataType::Int, SyntaxTokenType::Int); });
    state += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("long", PrimitiveDataType::Long, SyntaxTokenType::Long); });
    state += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("signed", PrimitiveDataType::Signed, SyntaxTokenType::Signed); });
    state += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("unsigned", PrimitiveDataType::Unsigned, SyntaxTokenType::Unsigned); });
    state += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("float", PrimitiveDataType::Float, SyntaxTokenType::Float); });
    state += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("double", PrimitiveDataType::Double, SyntaxTokenType::Double); });
    state += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("void", PrimitiveDataType::Void, SyntaxTokenType::Void); });
    state += RunTest([&testClass]() { testClass->GlobalPrimitiveVariable("auto", PrimitiveDataType::Auto, SyntaxTokenType::Auto); });

    std::wcout << L"Running GlobalTwoVariableDeclarationInitializer:" << std::endl;
    state += RunTest([&testClass]() { testClass->GlobalTwoVariableDeclarationInitializer(); });

    return state;
}
