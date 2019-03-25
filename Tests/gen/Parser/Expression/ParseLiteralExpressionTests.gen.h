#pragma once
#include "ParseLiteralExpressionTests.h"
#include "../../RunTest.h"

TestState RunParseLiteralExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseLiteralExpressionTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running ParseLiteralExpressionTests:" << std::endl;

    std::wcout << L"SingleIntegerLiteralType" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleIntegerLiteralType("0"); });
    state += RunTest([&testClass]() { testClass->SingleIntegerLiteralType("1"); });

    std::wcout << L"SingleFloatingLiteralType" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleFloatingLiteralType("0.0f"); });

    std::wcout << L"SingleCharacterLiteralType" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleCharacterLiteralType("'1'"); });

    std::wcout << L"SinglePointerLiteralType" << std::endl;
    state += RunTest([&testClass]() { testClass->SinglePointerLiteralType("nullptr"); });

    std::wcout << L"SingleStringLiteralType" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleStringLiteralType("\" \""); });

    std::wcout << L"SingleBooleanLiteralType" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleBooleanLiteralType("true", Soup::Syntax::SyntaxTokenType::True); });
    state += RunTest([&testClass]() { testClass->SingleBooleanLiteralType("false", Soup::Syntax::SyntaxTokenType::False); });

    std::wcout << L"SingleUserDefinedLiteralType" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleUserDefinedLiteralType("2h"); });

    return state;
}
