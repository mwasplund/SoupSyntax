#pragma once
#include "ParseLiteralExpressionTests.h"
#include "../../RunTest.h"

TestState RunParseLiteralExpressionTests()
{
    std::string className = "ParseLiteralExpressionTests";
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseLiteralExpressionTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "SingleIntegerLiteralType[0]",
        [&testClass]() { testClass->SingleIntegerLiteralType("0"); });
    state += RunTest(
        className,
        "SingleIntegerLiteralType[1]",
        [&testClass]() { testClass->SingleIntegerLiteralType("1"); });
    state += RunTest(
        className,
        "SingleFloatingLiteralType[0.0f]",
        [&testClass]() { testClass->SingleFloatingLiteralType("0.0f"); });
    state += RunTest(
        className,
        "SingleCharacterLiteralType['1']",
        [&testClass]() { testClass->SingleCharacterLiteralType("'1'"); });
    state += RunTest(
        className,
        "SinglePointerLiteralType[nullptr]",
        [&testClass]() { testClass->SinglePointerLiteralType("nullptr"); });
    state += RunTest(
        className,
        "SingleStringLiteralType[\" \"]",
        [&testClass]() { testClass->SingleStringLiteralType("\" \""); });
    state += RunTest(
        className,
        "SingleBooleanLiteralType[true]",
        [&testClass]() { testClass->SingleBooleanLiteralType("true", Soup::Syntax::SyntaxTokenType::True); });
    state += RunTest(
        className,
        "SingleBooleanLiteralType[false]",
        [&testClass]() { testClass->SingleBooleanLiteralType("false", Soup::Syntax::SyntaxTokenType::False); });
    state += RunTest(
        className,
        "SingleUserDefinedLiteralType[2h]",
        [&testClass]() { testClass->SingleUserDefinedLiteralType("2h"); });

    return state;
}
