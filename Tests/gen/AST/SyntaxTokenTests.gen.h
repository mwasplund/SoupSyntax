#pragma once
#include "SyntaxTokenTests.h"
#include "../RunTest.h"

TestState RunSyntaxTokenTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::SyntaxTokenTests>();
    TestState state = { 0, 0 };

    std::wcout << L"Running SyntaxTokenTests:" << std::endl;

    std::wcout << L"InitializeSimple" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimple(); });

    std::wcout << L"OperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::wcout << L"OperatorNotEqualType" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualType(); });

    std::wcout << L"OperatorNotEqualValue" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualValue(); });

    return state;
}