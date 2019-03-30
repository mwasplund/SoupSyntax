#pragma once
#include "IfStatementTests.h"
#include "../RunTest.h"

TestState RunIfStatementTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::IfStatementTests>();
    TestState state = { 0, 0 };

    std::cout << "Running IfStatementTests:" << std::endl;

    std::cout << "InitializeNoElseClause" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeNoElseClause(); });

    std::cout << "InitializeWithElseClause" << std::endl;
    state += RunTest([&testClass]() { testClass->InitializeWithElseClause(); });

    std::cout << "GetChildrenNoElseClause" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildrenNoElseClause(); });

    std::cout << "GetChildrenWithElseClause" << std::endl;
    state += RunTest([&testClass]() { testClass->GetChildrenWithElseClause(); });

    std::cout << "OperatorEqualNoElseClause" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqualNoElseClause(); });

    std::cout << "OperatorEqualWithElseClause" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorEqualWithElseClause(); });

    std::cout << "OperatorNotEqualIfToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualIfToken(); });

    std::cout << "OperatorNotEqualOpenParenthesisToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualOpenParenthesisToken(); });

    std::cout << "OperatorNotEqualConditionExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualConditionExpression(); });

    std::cout << "OperatorNotEqualCloseParenthesisToken" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualCloseParenthesisToken(); });

    std::cout << "OperatorNotEqualStatement" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualStatement(); });

    std::cout << "OperatorNotEqualNoElseClause" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualNoElseClause(); });

    std::cout << "OperatorNotEqualWithElseClause" << std::endl;
    state += RunTest([&testClass]() { testClass->OperatorNotEqualWithElseClause(); });

    return state;
}