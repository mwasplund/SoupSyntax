#pragma once
#include "ParserExpressionTests.h"
#include "../RunTest.h"

TestState RunParserExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParserExpressionTests>();
    TestState state = { 0, 0 };

    std::cout << "Running ParserExpressionTests:" << std::endl;

    std::cout << "SingleRule_PrimaryExpressions" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleRule_PrimaryExpressions("1"); });
    state += RunTest([&testClass]() { testClass->SingleRule_PrimaryExpressions("cout"); });
    state += RunTest([&testClass]() { testClass->SingleRule_PrimaryExpressions("std::string::npos"); });
    state += RunTest([&testClass]() { testClass->SingleRule_PrimaryExpressions("[]() { return 1; }]"); });
    state += RunTest([&testClass]() { testClass->SingleRule_PrimaryExpressions("all(true, true, true, false)"); });

    std::cout << "SingleRule_UnqualifiedIdentifier" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleRule_UnqualifiedIdentifier("cout"); });
    state += RunTest([&testClass]() { testClass->SingleRule_UnqualifiedIdentifier("operator new"); });
    state += RunTest([&testClass]() { testClass->SingleRule_UnqualifiedIdentifier("operator bool"); });
    state += RunTest([&testClass]() { testClass->SingleRule_UnqualifiedIdentifier("operator \"\" _km"); });
    state += RunTest([&testClass]() { testClass->SingleRule_UnqualifiedIdentifier("MyTemplate<int>"); });
    // TODO state += RunTest([&testClass]() { testClass->SingleRule_UnqualifiedIdentifier("~MyClass"); });
    state += RunTest([&testClass]() { testClass->SingleRule_UnqualifiedIdentifier("~decltype(str)"); });

    std::cout << "SingleRule_QualifiedIdentifier" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleRule_QualifiedIdentifier("std::string::npos"); });
    //state += RunTest([&testClass]() { testClass->SingleRule_QualifiedIdentifier("::tolower"); });
    //state += RunTest([&testClass]() { testClass->SingleRule_QualifiedIdentifier("::std::count"); });

    std::cout << "SingleRule_LambdaExpression" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleRule_LambdaExpression("[]{}"); });
    state += RunTest([&testClass]() { testClass->SingleRule_LambdaExpression("[](){}"); });
    state += RunTest([&testClass]() { testClass->SingleRule_LambdaExpression("[]()->int{return 1;}"); });
    //state += RunTest([&testClass]() { testClass->SingleRule_LambdaExpression("[](auto a, auto&& b) { return a < b; }"); });
    //state += RunTest([&testClass]() { testClass->SingleRule_LambdaExpression("[=] { printer(ts...); }"); });
    //state += RunTest([&testClass]() { testClass->SingleRule_LambdaExpression("[]<class T>(T a, auto&& b) { return a < b; }"); });
    //state += RunTest([&testClass]() { testClass->SingleRule_LambdaExpression("[](auto* a)->auto& { return *a; }"); });
    //state += RunTest([&testClass]() { testClass->SingleRule_LambdaExpression("[](int i = 6) { return i + 4; }"); });
    //state += RunTest([&testClass]() { testClass->SingleRule_LambdaExpression("[&]{ use(i, x); }"); });

    std::cout << "SingleRule_AssignmentOperator" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleRule_AssignmentOperator("="); });
    state += RunTest([&testClass]() { testClass->SingleRule_AssignmentOperator("+="); });
    state += RunTest([&testClass]() { testClass->SingleRule_AssignmentOperator("-="); });
    state += RunTest([&testClass]() { testClass->SingleRule_AssignmentOperator("*="); });
    state += RunTest([&testClass]() { testClass->SingleRule_AssignmentOperator("/="); });
    state += RunTest([&testClass]() { testClass->SingleRule_AssignmentOperator("%="); });
    state += RunTest([&testClass]() { testClass->SingleRule_AssignmentOperator("^="); });
    state += RunTest([&testClass]() { testClass->SingleRule_AssignmentOperator("&="); });
    state += RunTest([&testClass]() { testClass->SingleRule_AssignmentOperator("|="); });
    state += RunTest([&testClass]() { testClass->SingleRule_AssignmentOperator(">>="); });
    state += RunTest([&testClass]() { testClass->SingleRule_AssignmentOperator("<<="); });

    std::cout << "SingleRule_UnaryOperator" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleRule_UnaryOperator("+"); });
    state += RunTest([&testClass]() { testClass->SingleRule_UnaryOperator("-"); });
    state += RunTest([&testClass]() { testClass->SingleRule_UnaryOperator("&"); });
    state += RunTest([&testClass]() { testClass->SingleRule_UnaryOperator("|"); });
    state += RunTest([&testClass]() { testClass->SingleRule_UnaryOperator("~"); });
    state += RunTest([&testClass]() { testClass->SingleRule_UnaryOperator("!"); });

    std::cout << "SingleRule_AnyOperator" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("new"); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("delete"); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("new[]"); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("delete[]"); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("+"); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("-"); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("*"); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("/"); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("%"); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("^"); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("&"); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("|"); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("~"); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("!"); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("="); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("<"); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator(">"); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("+="); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("-="); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("*="); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("/="); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("%="); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("^="); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("&="); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("|="); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("<<"); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator(">>"); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator(">>="); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("<<="); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("=="); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("!="); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("<="); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator(">="); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("&&"); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("||"); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("++"); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("--"); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator(","); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("->*"); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("->"); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("()"); });
    state += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("[]"); });

    std::cout << "SingleRule_OperatorFunctionIdentifier" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator new"); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator delete"); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator new[]"); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator delete[]"); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator+"); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator-"); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator*"); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator/"); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator%"); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator^"); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator&"); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator|"); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator~"); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator!"); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator="); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator<"); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator>"); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator+="); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator-="); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator*="); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator/="); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator%="); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator^="); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator&="); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator |="); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator <<"); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator >>"); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator >>="); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator <<="); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator =="); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator !="); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator <="); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator >="); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator &&"); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator||"); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator++"); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator--"); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator,"); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator->*"); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator->"); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator()"); });
    state += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator[]"); });

    std::cout << "SingleRule_AttributeSpecifier" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleRule_AttributeSpecifier("[[noreturn]]"); });
    state += RunTest([&testClass]() { testClass->SingleRule_AttributeSpecifier("[[carries_dependency]]"); });
    state += RunTest([&testClass]() { testClass->SingleRule_AttributeSpecifier("[[deprecated]]"); });
    state += RunTest([&testClass]() { testClass->SingleRule_AttributeSpecifier("[[deprecated(\"reason\")]]"); });
    state += RunTest([&testClass]() { testClass->SingleRule_AttributeSpecifier("[[fallthrough]]"); });
    state += RunTest([&testClass]() { testClass->SingleRule_AttributeSpecifier("[[nodiscard]]"); });
    state += RunTest([&testClass]() { testClass->SingleRule_AttributeSpecifier("[[maybe_unused]]"); });

    std::cout << "SingleRule_FunctionDefinition" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleRule_FunctionDefinition("void DoIt(){}"); });

    return state;
}
