#pragma once
#include "ParserExpressionTests.h"
#include "../RunTest.h"

TestState RunParserExpressionTests()
{
    std::string className = "ParserExpressionTests";
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::ParserExpressionTests>();
    TestState state = { 0, 0 };

    state += RunTest(
        className,
        "SingleRule_PrimaryExpressions[1]",
        [&testClass]() { testClass->SingleRule_PrimaryExpressions("1"); });
    state += RunTest(
        className,
        "SingleRule_PrimaryExpressions[cout]",
        [&testClass]() { testClass->SingleRule_PrimaryExpressions("cout"); });
    state += RunTest(
        className,
        "SingleRule_PrimaryExpressions[std::string::npos]",
        [&testClass]() { testClass->SingleRule_PrimaryExpressions("std::string::npos"); });
    state += RunTest(
        className,
        "SingleRule_PrimaryExpressions[[]() { return 1; }]]",
        [&testClass]() { testClass->SingleRule_PrimaryExpressions("[]() { return 1; }]"); });
    state += RunTest(
        className,
        "SingleRule_PrimaryExpressions[all(true, true, true, false)]",
        [&testClass]() { testClass->SingleRule_PrimaryExpressions("all(true, true, true, false)"); });
    state += RunTest(
        className,
        "SingleRule_UnqualifiedIdentifier[cout]",
        [&testClass]() { testClass->SingleRule_UnqualifiedIdentifier("cout"); });
    state += RunTest(
        className,
        "SingleRule_UnqualifiedIdentifier[operator new]",
        [&testClass]() { testClass->SingleRule_UnqualifiedIdentifier("operator new"); });
    state += RunTest(
        className,
        "SingleRule_UnqualifiedIdentifier[operator bool]",
        [&testClass]() { testClass->SingleRule_UnqualifiedIdentifier("operator bool"); });
    state += RunTest(
        className,
        "SingleRule_UnqualifiedIdentifier[operator \"\" _km]",
        [&testClass]() { testClass->SingleRule_UnqualifiedIdentifier("operator \"\" _km"); });
    state += RunTest(
        className,
        "SingleRule_UnqualifiedIdentifier[MyTemplate<int>]",
        [&testClass]() { testClass->SingleRule_UnqualifiedIdentifier("MyTemplate<int>"); });
    // TODO state += RunTest([&testClass]() { testClass->SingleRule_UnqualifiedIdentifier("~MyClass"); });
    state += RunTest(
        className,
        "SingleRule_UnqualifiedIdentifier[~decltype(str)]",
        [&testClass]() { testClass->SingleRule_UnqualifiedIdentifier("~decltype(str)"); });
    state += RunTest(
        className,
        "SingleRule_QualifiedIdentifier[std::string::npos]",
        [&testClass]() { testClass->SingleRule_QualifiedIdentifier("std::string::npos"); });
    //state += RunTest([&testClass]() { testClass->SingleRule_QualifiedIdentifier("::tolower"); });
    //state += RunTest([&testClass]() { testClass->SingleRule_QualifiedIdentifier("::std::count"); });
    state += RunTest(
        className,
        "SingleRule_LambdaExpression[[]{}]",
        [&testClass]() { testClass->SingleRule_LambdaExpression("[]{}"); });
    state += RunTest(
        className,
        "SingleRule_LambdaExpression[[](){}]",
        [&testClass]() { testClass->SingleRule_LambdaExpression("[](){}"); });
    state += RunTest(
        className,
        "SingleRule_LambdaExpression[[]()->int{return 1;}]",
        [&testClass]() { testClass->SingleRule_LambdaExpression("[]()->int{return 1;}"); });
    //state += RunTest([&testClass]() { testClass->SingleRule_LambdaExpression("[](auto a, auto&& b) { return a < b; }"); });
    //state += RunTest([&testClass]() { testClass->SingleRule_LambdaExpression("[=] { printer(ts...); }"); });
    //state += RunTest([&testClass]() { testClass->SingleRule_LambdaExpression("[]<class T>(T a, auto&& b) { return a < b; }"); });
    //state += RunTest([&testClass]() { testClass->SingleRule_LambdaExpression("[](auto* a)->auto& { return *a; }"); });
    //state += RunTest([&testClass]() { testClass->SingleRule_LambdaExpression("[](int i = 6) { return i + 4; }"); });
    //state += RunTest([&testClass]() { testClass->SingleRule_LambdaExpression("[&]{ use(i, x); }"); });
    state += RunTest(
        className,
        "SingleRule_AssignmentOperator[=]",
        [&testClass]() { testClass->SingleRule_AssignmentOperator("="); });
    state += RunTest(
        className,
        "SingleRule_AssignmentOperator[+=]",
        [&testClass]() { testClass->SingleRule_AssignmentOperator("+="); });
    state += RunTest(
        className,
        "SingleRule_AssignmentOperator[-=]",
        [&testClass]() { testClass->SingleRule_AssignmentOperator("-="); });
    state += RunTest(
        className,
        "SingleRule_AssignmentOperator[*=]",
        [&testClass]() { testClass->SingleRule_AssignmentOperator("*="); });
    state += RunTest(
        className,
        "SingleRule_AssignmentOperator[/=]",
        [&testClass]() { testClass->SingleRule_AssignmentOperator("/="); });
    state += RunTest(
        className,
        "SingleRule_AssignmentOperator[%=]",
        [&testClass]() { testClass->SingleRule_AssignmentOperator("%="); });
    state += RunTest(
        className,
        "SingleRule_AssignmentOperator[^=]",
        [&testClass]() { testClass->SingleRule_AssignmentOperator("^="); });
    state += RunTest(
        className,
        "SingleRule_AssignmentOperator[&=]",
        [&testClass]() { testClass->SingleRule_AssignmentOperator("&="); });
    state += RunTest(
        className,
        "SingleRule_AssignmentOperator[|=]",
        [&testClass]() { testClass->SingleRule_AssignmentOperator("|="); });
    state += RunTest(
        className,
        "SingleRule_AssignmentOperator[>>=]",
        [&testClass]() { testClass->SingleRule_AssignmentOperator(">>="); });
    state += RunTest(
        className,
        "SingleRule_AssignmentOperator[<<=]",
        [&testClass]() { testClass->SingleRule_AssignmentOperator("<<="); });
    state += RunTest(
        className,
        "SingleRule_UnaryOperator[+]",
        [&testClass]() { testClass->SingleRule_UnaryOperator("+"); });
    state += RunTest(
        className,
        "SingleRule_UnaryOperator[-]",
        [&testClass]() { testClass->SingleRule_UnaryOperator("-"); });
    state += RunTest(
        className,
        "SingleRule_UnaryOperator[&]",
        [&testClass]() { testClass->SingleRule_UnaryOperator("&"); });
    state += RunTest(
        className,
        "SingleRule_UnaryOperator[|]",
        [&testClass]() { testClass->SingleRule_UnaryOperator("|"); });
    state += RunTest(
        className,
        "SingleRule_UnaryOperator[~]",
        [&testClass]() { testClass->SingleRule_UnaryOperator("~"); });
    state += RunTest(
        className,
        "SingleRule_UnaryOperator[!]",
        [&testClass]() { testClass->SingleRule_UnaryOperator("!"); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[new]",
        [&testClass]() { testClass->SingleRule_AnyOperator("new"); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[delete]",
        [&testClass]() { testClass->SingleRule_AnyOperator("delete"); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[new[]]",
        [&testClass]() { testClass->SingleRule_AnyOperator("new[]"); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[delete[]]",
        [&testClass]() { testClass->SingleRule_AnyOperator("delete[]"); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[+]",
        [&testClass]() { testClass->SingleRule_AnyOperator("+"); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[]",
        [&testClass]() { testClass->SingleRule_AnyOperator("-"); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[*]",
        [&testClass]() { testClass->SingleRule_AnyOperator("*"); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[/]",
        [&testClass]() { testClass->SingleRule_AnyOperator("/"); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[%]",
        [&testClass]() { testClass->SingleRule_AnyOperator("%"); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[^]",
        [&testClass]() { testClass->SingleRule_AnyOperator("^"); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[&]",
        [&testClass]() { testClass->SingleRule_AnyOperator("&"); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[|]",
        [&testClass]() { testClass->SingleRule_AnyOperator("|"); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[~]",
        [&testClass]() { testClass->SingleRule_AnyOperator("~"); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[!]",
        [&testClass]() { testClass->SingleRule_AnyOperator("!"); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[=]",
        [&testClass]() { testClass->SingleRule_AnyOperator("="); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[<]",
        [&testClass]() { testClass->SingleRule_AnyOperator("<"); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[>]",
        [&testClass]() { testClass->SingleRule_AnyOperator(">"); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[+=]",
        [&testClass]() { testClass->SingleRule_AnyOperator("+="); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[-=]",
        [&testClass]() { testClass->SingleRule_AnyOperator("-="); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[*=]",
        [&testClass]() { testClass->SingleRule_AnyOperator("*="); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[/=]",
        [&testClass]() { testClass->SingleRule_AnyOperator("/="); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[%=]",
        [&testClass]() { testClass->SingleRule_AnyOperator("%="); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[^=]",
        [&testClass]() { testClass->SingleRule_AnyOperator("^="); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[&=]",
        [&testClass]() { testClass->SingleRule_AnyOperator("&="); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[!=]",
        [&testClass]() { testClass->SingleRule_AnyOperator("|="); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[<<]",
        [&testClass]() { testClass->SingleRule_AnyOperator("<<"); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[>>]",
        [&testClass]() { testClass->SingleRule_AnyOperator(">>"); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[>>=]",
        [&testClass]() { testClass->SingleRule_AnyOperator(">>="); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[<<=]",
        [&testClass]() { testClass->SingleRule_AnyOperator("<<="); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[==]",
        [&testClass]() { testClass->SingleRule_AnyOperator("=="); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[!=]",
        [&testClass]() { testClass->SingleRule_AnyOperator("!="); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[<=]",
        [&testClass]() { testClass->SingleRule_AnyOperator("<="); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[>=]",
        [&testClass]() { testClass->SingleRule_AnyOperator(">="); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[&&]",
        [&testClass]() { testClass->SingleRule_AnyOperator("&&"); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[||]",
        [&testClass]() { testClass->SingleRule_AnyOperator("||"); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[++]",
        [&testClass]() { testClass->SingleRule_AnyOperator("++"); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[--]",
        [&testClass]() { testClass->SingleRule_AnyOperator("--"); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[,]",
        [&testClass]() { testClass->SingleRule_AnyOperator(","); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[->*]",
        [&testClass]() { testClass->SingleRule_AnyOperator("->*"); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[->]",
        [&testClass]() { testClass->SingleRule_AnyOperator("->"); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[()]",
        [&testClass]() { testClass->SingleRule_AnyOperator("()"); });
    state += RunTest(
        className,
        "SingleRule_AnyOperator[[]]",
        [&testClass]() { testClass->SingleRule_AnyOperator("[]"); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator new]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator new"); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator delete]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator delete"); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator new[]]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator new[]"); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator delete[]]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator delete[]"); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator+]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator+"); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator-]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator-"); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator*]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator*"); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator/]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator/"); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator%]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator%"); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator^]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator^"); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator&]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator&"); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator|]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator|"); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator~]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator~"); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator!]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator!"); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator=]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator="); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator<]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator<"); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator>]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator>"); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator+=]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator+="); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator-=]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator-="); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator*=]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator*="); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator/=]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator/="); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator%=]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator%="); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator^=]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator^="); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator&=]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator&="); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator |=]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator |="); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator <<]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator <<"); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator >>]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator >>"); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator >>=]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator >>="); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator <<=]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator <<="); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator ==]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator =="); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator !=]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator !="); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator <=]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator <="); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator >=]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator >="); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator &&]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator &&"); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator||]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator||"); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator++]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator++"); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator--]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator--"); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator,]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator,"); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator->*]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator->*"); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator->]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator->"); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator()]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator()"); });
    state += RunTest(
        className,
        "SingleRule_OperatorFunctionIdentifier[operator[]]",
        [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator[]"); });
    state += RunTest(
        className,
        "SingleRule_AttributeSpecifier[[[noreturn]]]",
        [&testClass]() { testClass->SingleRule_AttributeSpecifier("[[noreturn]]"); });
    state += RunTest(
        className,
        "SingleRule_AttributeSpecifier[[[carries_dependency]]]",
        [&testClass]() { testClass->SingleRule_AttributeSpecifier("[[carries_dependency]]"); });
    state += RunTest(
        className,
        "SingleRule_AttributeSpecifier[[[deprecated]]]",
        [&testClass]() { testClass->SingleRule_AttributeSpecifier("[[deprecated]]"); });
    state += RunTest(
        className,
        "SingleRule_AttributeSpecifier[[[deprecated(\"reason\")]]]",
        [&testClass]() { testClass->SingleRule_AttributeSpecifier("[[deprecated(\"reason\")]]"); });
    state += RunTest(
        className,
        "SingleRule_AttributeSpecifier[[[fallthrough]]]",
        [&testClass]() { testClass->SingleRule_AttributeSpecifier("[[fallthrough]]"); });
    state += RunTest(
        className,
        "SingleRule_AttributeSpecifier[[[nodiscard]]]",
        [&testClass]() { testClass->SingleRule_AttributeSpecifier("[[nodiscard]]"); });
    state += RunTest(
        className,
        "SingleRule_AttributeSpecifier[[[maybe_unused]]]",
        [&testClass]() { testClass->SingleRule_AttributeSpecifier("[[maybe_unused]]"); });
    state += RunTest(
        className,
        "SingleRule_FunctionDefinition[void DoIt(){}]",
        [&testClass]() { testClass->SingleRule_FunctionDefinition("void DoIt(){}"); });

    return state;
}
