#pragma once
#include "ParseClassDeclarationTests.h"
#include "../../RunTest.h"

TestState RunParseClassDeclarationTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParseClassDeclarationTests>();
    TestState state = { 0, 0 };

    std::cout << "Running ParseClassDeclarationTests:" << std::endl;

    std::cout << "SingleSimpleClassDeclaration" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleSimpleClassDeclaration(); });

    std::cout << "SingleClassDeclaration" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleClassDeclaration(); });

    return state;
}
