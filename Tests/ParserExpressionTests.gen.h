#pragma once
#include "ParserExpressionTests.h"
#include "RunTest.h"

int RunParserExpressionTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParserExpressionTests>();
    int failedCount = 0;

    std::wcout << L"Running ParserExpressionTests:" << std::endl;

    std::wcout << L"SingleRule_PrimaryExpressions" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleRule_PrimaryExpressions("1"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_PrimaryExpressions("cout"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_PrimaryExpressions("std::string::npos"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_PrimaryExpressions("[]() { return 1; }]"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_PrimaryExpressions("all(true, true, true, false)"); });

    std::wcout << L"SingleRule_UnqualifiedIdentifier" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleRule_UnqualifiedIdentifier("cout"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_UnqualifiedIdentifier("operator new"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_UnqualifiedIdentifier("operator bool"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_UnqualifiedIdentifier("operator \"\" _km"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_UnqualifiedIdentifier("MyTemplate<int>"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_UnqualifiedIdentifier("~MyClass"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_UnqualifiedIdentifier("~decltype(str)"); });

    std::wcout << L"SingleRule_QualifiedIdentifier" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleRule_QualifiedIdentifier("std::string::npos"); });
    //failedCount += RunTest([&testClass]() { testClass->SingleRule_QualifiedIdentifier("::tolower"); });
    //failedCount += RunTest([&testClass]() { testClass->SingleRule_QualifiedIdentifier("::std::count"); });

    std::wcout << L"SingleRule_LambdaExpression" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleRule_LambdaExpression("[]{}"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_LambdaExpression("[](){}"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_LambdaExpression("[]()->int{return 1;}"); });
    //failedCount += RunTest([&testClass]() { testClass->SingleRule_LambdaExpression("[](auto a, auto&& b) { return a < b; }"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_LambdaExpression("[=] { printer(ts...); }"); });
    //failedCount += RunTest([&testClass]() { testClass->SingleRule_LambdaExpression("[]<class T>(T a, auto&& b) { return a < b; }"); });
    //failedCount += RunTest([&testClass]() { testClass->SingleRule_LambdaExpression("[](auto* a)->auto& { return *a; }"); });
    //failedCount += RunTest([&testClass]() { testClass->SingleRule_LambdaExpression("[](int i = 6) { return i + 4; }"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_LambdaExpression("[&]{ use(i, x); }"); });

    std::wcout << L"SingleRule_AssignmentOperator" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AssignmentOperator("="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AssignmentOperator("+="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AssignmentOperator("-="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AssignmentOperator("*="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AssignmentOperator("/="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AssignmentOperator("%="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AssignmentOperator("^="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AssignmentOperator("&="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AssignmentOperator("|="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AssignmentOperator(">>="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AssignmentOperator("<<="); });

    std::wcout << L"SingleRule_UnaryOperator" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleRule_UnaryOperator("+"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_UnaryOperator("-"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_UnaryOperator("&"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_UnaryOperator("|"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_UnaryOperator("~"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_UnaryOperator("!"); });

    std::wcout << L"SingleRule_AnyOperator" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("new"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("delete"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("new[]"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("delete[]"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("+"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("-"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("*"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("/"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("%"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("^"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("&"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("|"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("~"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("!"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("<"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator(">"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("+="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("-="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("*="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("/="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("%="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("^="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("&="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("|="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("<<"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator(">>"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator(">>="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("<<="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("=="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("!="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("<="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator(">="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("&&"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("||"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("++"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("--"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator(","); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("->*"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("->"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("()"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AnyOperator("[]"); });

    std::wcout << L"SingleRule_OperatorFunctionIdentifier" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator new"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator delete"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator new[]"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator delete[]"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator+"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator-"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator*"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator/"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator%"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator^"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator&"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator|"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator~"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator!"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator<"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator>"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator+="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator-="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator*="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator/="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator%="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator^="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator&="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator |="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator <<"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator >>"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator >>="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator <<="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator =="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator !="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator <="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator >="); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator &&"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator||"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator++"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator--"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator,"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator->*"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator->"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator()"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator[]"); });

    std::wcout << L"SingleRule_AttributeSpecifier" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AttributeSpecifier("[[noreturn]]"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AttributeSpecifier("[[carries_dependency]]"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AttributeSpecifier("[[deprecated]]"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AttributeSpecifier("[[deprecated(\"reason\"); });]"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AttributeSpecifier("[[fallthrough]]"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AttributeSpecifier("[[nodiscard]]"); });
    failedCount += RunTest([&testClass]() { testClass->SingleRule_AttributeSpecifier("[[maybe_unused]]"); });

    std::wcout << L"SingleRule_FunctionDefinition" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleRule_FunctionDefinition("void DoIt(){}"); });

    return failedCount;
}
