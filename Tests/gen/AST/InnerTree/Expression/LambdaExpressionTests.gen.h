#pragma once
#include "AST/InnerTree/Expression/LambdaExpressionTests.h"
#include "RunTest.h"

TestState RunInnerTreeLambdaExpressionTests()
{
    std::string className = "InnerTree::LambdaExpressionTests";
    auto testClass = std::make_unique<Soup::Syntax::InnerTree::UnitTests::InnerTreeLambdaExpressionTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "InitializeSimple",
        [&testClass]() { testClass->InitializeSimple(); });
    state += RunTest(
        className,
        "InitializeComplex",
        [&testClass]() { testClass->InitializeComplex(); });
    state += RunTest(
        className,
        "OperatorEqualSimple",
        [&testClass]() { testClass->OperatorEqualSimple(); });
    state += RunTest(
        className,
        "OperatorEqualComplex",
        [&testClass]() { testClass->OperatorEqualComplex(); });
    state += RunTest(
        className,
        "OperatorNotEqualOpenBracketToken",
        [&testClass]() { testClass->OperatorNotEqualOpenBracketToken(); });
    state += RunTest(
        className,
        "OperatorNotEqualCloseBracketToken",
        [&testClass]() { testClass->OperatorNotEqualCloseBracketToken(); });
    state += RunTest(
        className,
        "OperatorNotEqualNoParameterList",
        [&testClass]() { testClass->OperatorNotEqualNoParameterList(); });
    state += RunTest(
        className,
        "OperatorNotEqualParameterList",
        [&testClass]() { testClass->OperatorNotEqualParameterList(); });
    state += RunTest(
        className,
        "OperatorNotEqualBody",
        [&testClass]() { testClass->OperatorNotEqualBody(); });

    return state;
}