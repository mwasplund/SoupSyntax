#pragma once
#include "TranslationUnitTests.h"
#include "../RunTest.h"

TestState RunTranslationUnitTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::TranslationUnitTests>();
    TestState state = { 0, 0 };

    std::cout << "Running TranslationUnitTests:" << std::endl;

    std::cout << "Initialize" << std::endl;
    state += RunTest([&testClass]() { testClass->Initialize(); });

    std::cout << "GetChildren" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildren(); });

    std::cout << "OperatorEqual" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqual(); });

    std::cout << "OperatorNotEqualNoDeclarations" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualNoDeclarations(); });

    std::cout << "OperatorNotEqualWithDelarations" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualWithDelarations(); });

    std::cout << "OperatorNotEqualEndOfFileToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualEndOfFileToken(); });

    return state;
}