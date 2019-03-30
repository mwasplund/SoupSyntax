#pragma once
#include "DeclarationSpecifierTests.h"
#include "../RunTest.h"

TestState RunDeclarationSpecifierTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::DeclarationSpecifierTests>();
    TestState state = { 0, 0 };

    std::cout << "Running DeclarationSpecifierTests:" << std::endl;

    std::cout << "InitializeSimpleNoModifiers" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimpleNoModifiers(); });

    std::cout << "InitializeSimpleWithModifiers" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeSimpleWithModifiers(); });

    std::cout << "GetChildrenNoModifiers" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildrenNoModifiers(); });

    std::cout << "GetChildrenWithModifiers" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildrenWithModifiers(); });

    std::cout << "OperatorEqualNoModifiers" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqualNoModifiers(); });

    std::cout << "OperatorEqualWithModifiers" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqualWithModifiers(); });

    std::cout << "OperatorNotEqualNoLeadingModifiers" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualNoLeadingModifiers(); });

    std::cout << "OperatorNotEqualLeadingModifiers" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualLeadingModifiers(); });

    std::cout << "OperatorNotEqualTypeSpecifier" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualTypeSpecifier(); });

    std::cout << "OperatorNotEqualNoTrailingModifiers" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualNoTrailingModifiers(); });

    std::cout << "OperatorNotEqualTrailingModifiers" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualTrailingModifiers(); });

    return state;
}