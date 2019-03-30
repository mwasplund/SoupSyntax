#pragma once
#include "ParseLiteralExpressionTests.h"
#include "../../RunTest.h"

TestState RunParseLiteralExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseLiteralExpressionTests>();
    TestState state = { 0, 0 };

    std::cout << "Running ParseLiteralExpressionTests:" << std::endl;

    std::cout << "SingleIntegerLiteralType" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleIntegerLiteralType("0"); });
    state += RunTest([&testClass]() { testClass->SingleIntegerLiteralType("1"); });

    std::cout << "SingleFloatingLiteralType" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleFloatingLiteralType("0.0f"); });

    std::cout << "SingleCharacterLiteralType" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleCharacterLiteralType("'1'"); });

    std::cout << "SinglePointerLiteralType" << std::endl;
    state += RunTest([&testClass]() { testClass->SinglePointerLiteralType("nullptr"); });

    std::cout << "SingleStringLiteralType" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleStringLiteralType("\" \""); });

    std::cout << "SingleBooleanLiteralType" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleBooleanLiteralType("true", Soup::Syntax::SyntaxTokenType::True); });
    state += RunTest([&testClass]() { testClass->SingleBooleanLiteralType("false", Soup::Syntax::SyntaxTokenType::False); });

    std::cout << "SingleUserDefinedLiteralType" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleUserDefinedLiteralType("2h"); });

    return state;
}
