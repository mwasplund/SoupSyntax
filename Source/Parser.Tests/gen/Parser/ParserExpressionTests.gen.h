#pragma once
#include "/Parser/ParserExpressionTests.h"

TestState RunParserExpressionTests() 
 {
	auto className = "ParserExpressionTests";
	auto testClass = std::make_shared<Soup::Syntax::InnerTree::UnitTests::ParserExpressionTests>();
	TestState state = { 0, 0 };
	state += SoupTest::RunTest(className, "SingleRule_PrimaryExpressions(\"1\")", [&testClass]() { testClass->SingleRule_PrimaryExpressions("1"); });
	state += SoupTest::RunTest(className, "SingleRule_PrimaryExpressions(\"cout\")", [&testClass]() { testClass->SingleRule_PrimaryExpressions("cout"); });
	state += SoupTest::RunTest(className, "SingleRule_PrimaryExpressions(\"std::string::npos\")", [&testClass]() { testClass->SingleRule_PrimaryExpressions("std::string::npos"); });
	state += SoupTest::RunTest(className, "SingleRule_PrimaryExpressions(\"[]() { return 1; }]\")", [&testClass]() { testClass->SingleRule_PrimaryExpressions("[]() { return 1; }]"); });
	state += SoupTest::RunTest(className, "SingleRule_PrimaryExpressions(\"all(true, true, true, false)\")", [&testClass]() { testClass->SingleRule_PrimaryExpressions("all(true, true, true, false)"); });
	state += SoupTest::RunTest(className, "SingleRule_UnqualifiedIdentifier(\"cout\")", [&testClass]() { testClass->SingleRule_UnqualifiedIdentifier("cout"); });
	state += SoupTest::RunTest(className, "SingleRule_UnqualifiedIdentifier(\"operator new\")", [&testClass]() { testClass->SingleRule_UnqualifiedIdentifier("operator new"); });
	state += SoupTest::RunTest(className, "SingleRule_UnqualifiedIdentifier(\"operator bool\")", [&testClass]() { testClass->SingleRule_UnqualifiedIdentifier("operator bool"); });
	state += SoupTest::RunTest(className, "SingleRule_UnqualifiedIdentifier(\"operator \"\" _km\")", [&testClass]() { testClass->SingleRule_UnqualifiedIdentifier("operator \"\" _km"); });
	state += SoupTest::RunTest(className, "SingleRule_UnqualifiedIdentifier(\"MyTemplate<int>\")", [&testClass]() { testClass->SingleRule_UnqualifiedIdentifier("MyTemplate<int>"); });
	state += SoupTest::RunTest(className, "SingleRule_UnqualifiedIdentifier(\"~MyClass\")", [&testClass]() { testClass->SingleRule_UnqualifiedIdentifier("~MyClass"); });
	state += SoupTest::RunTest(className, "SingleRule_UnqualifiedIdentifier(\"~decltype(str)\")", [&testClass]() { testClass->SingleRule_UnqualifiedIdentifier("~decltype(str)"); });
	state += SoupTest::RunTest(className, "SingleRule_QualifiedIdentifier(\"std::string::npos\")", [&testClass]() { testClass->SingleRule_QualifiedIdentifier("std::string::npos"); });
	state += SoupTest::RunTest(className, "SingleRule_QualifiedIdentifier(\"::tolower\")", [&testClass]() { testClass->SingleRule_QualifiedIdentifier("::tolower"); });
	state += SoupTest::RunTest(className, "SingleRule_QualifiedIdentifier(\"::std::count\")", [&testClass]() { testClass->SingleRule_QualifiedIdentifier("::std::count"); });
	state += SoupTest::RunTest(className, "SingleRule_LambdaExpression(\"[]{}\")", [&testClass]() { testClass->SingleRule_LambdaExpression("[]{}"); });
	state += SoupTest::RunTest(className, "SingleRule_LambdaExpression(\"[](){}\")", [&testClass]() { testClass->SingleRule_LambdaExpression("[](){}"); });
	state += SoupTest::RunTest(className, "SingleRule_LambdaExpression(\"[]()->int{return 1;}\")", [&testClass]() { testClass->SingleRule_LambdaExpression("[]()->int{return 1;}"); });
	state += SoupTest::RunTest(className, "SingleRule_LambdaExpression(\"[=] { printer(ts...); }\")", [&testClass]() { testClass->SingleRule_LambdaExpression("[=] { printer(ts...); }"); });
	state += SoupTest::RunTest(className, "SingleRule_LambdaExpression(\"[&]{ use(i, x); }\")", [&testClass]() { testClass->SingleRule_LambdaExpression("[&]{ use(i, x); }"); });
	state += SoupTest::RunTest(className, "SingleRule_AssignmentOperator(\"=\")", [&testClass]() { testClass->SingleRule_AssignmentOperator("="); });
	state += SoupTest::RunTest(className, "SingleRule_AssignmentOperator(\"+=\")", [&testClass]() { testClass->SingleRule_AssignmentOperator("+="); });
	state += SoupTest::RunTest(className, "SingleRule_AssignmentOperator(\"-=\")", [&testClass]() { testClass->SingleRule_AssignmentOperator("-="); });
	state += SoupTest::RunTest(className, "SingleRule_AssignmentOperator(\"*=\")", [&testClass]() { testClass->SingleRule_AssignmentOperator("*="); });
	state += SoupTest::RunTest(className, "SingleRule_AssignmentOperator(\"/=\")", [&testClass]() { testClass->SingleRule_AssignmentOperator("/="); });
	state += SoupTest::RunTest(className, "SingleRule_AssignmentOperator(\"%=\")", [&testClass]() { testClass->SingleRule_AssignmentOperator("%="); });
	state += SoupTest::RunTest(className, "SingleRule_AssignmentOperator(\"^=\")", [&testClass]() { testClass->SingleRule_AssignmentOperator("^="); });
	state += SoupTest::RunTest(className, "SingleRule_AssignmentOperator(\"&=\")", [&testClass]() { testClass->SingleRule_AssignmentOperator("&="); });
	state += SoupTest::RunTest(className, "SingleRule_AssignmentOperator(\"|=\")", [&testClass]() { testClass->SingleRule_AssignmentOperator("|="); });
	state += SoupTest::RunTest(className, "SingleRule_AssignmentOperator(\">>=\")", [&testClass]() { testClass->SingleRule_AssignmentOperator(">>="); });
	state += SoupTest::RunTest(className, "SingleRule_AssignmentOperator(\"<<=\")", [&testClass]() { testClass->SingleRule_AssignmentOperator("<<="); });
	state += SoupTest::RunTest(className, "SingleRule_UnaryOperator(\"+\")", [&testClass]() { testClass->SingleRule_UnaryOperator("+"); });
	state += SoupTest::RunTest(className, "SingleRule_UnaryOperator(\"-\")", [&testClass]() { testClass->SingleRule_UnaryOperator("-"); });
	state += SoupTest::RunTest(className, "SingleRule_UnaryOperator(\"&\")", [&testClass]() { testClass->SingleRule_UnaryOperator("&"); });
	state += SoupTest::RunTest(className, "SingleRule_UnaryOperator(\"|\")", [&testClass]() { testClass->SingleRule_UnaryOperator("|"); });
	state += SoupTest::RunTest(className, "SingleRule_UnaryOperator(\"~\")", [&testClass]() { testClass->SingleRule_UnaryOperator("~"); });
	state += SoupTest::RunTest(className, "SingleRule_UnaryOperator(\"!\")", [&testClass]() { testClass->SingleRule_UnaryOperator("!"); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\"new\")", [&testClass]() { testClass->SingleRule_AnyOperator("new"); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\"delete\")", [&testClass]() { testClass->SingleRule_AnyOperator("delete"); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\"new[]\")", [&testClass]() { testClass->SingleRule_AnyOperator("new[]"); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\"delete[]\")", [&testClass]() { testClass->SingleRule_AnyOperator("delete[]"); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\"+\")", [&testClass]() { testClass->SingleRule_AnyOperator("+"); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\"-\")", [&testClass]() { testClass->SingleRule_AnyOperator("-"); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\"*\")", [&testClass]() { testClass->SingleRule_AnyOperator("*"); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\"/\")", [&testClass]() { testClass->SingleRule_AnyOperator("/"); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\"%\")", [&testClass]() { testClass->SingleRule_AnyOperator("%"); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\"^\")", [&testClass]() { testClass->SingleRule_AnyOperator("^"); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\"&\")", [&testClass]() { testClass->SingleRule_AnyOperator("&"); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\"|\")", [&testClass]() { testClass->SingleRule_AnyOperator("|"); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\"~\")", [&testClass]() { testClass->SingleRule_AnyOperator("~"); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\"!\")", [&testClass]() { testClass->SingleRule_AnyOperator("!"); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\"=\")", [&testClass]() { testClass->SingleRule_AnyOperator("="); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\"<\")", [&testClass]() { testClass->SingleRule_AnyOperator("<"); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\">\")", [&testClass]() { testClass->SingleRule_AnyOperator(">"); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\"+=\")", [&testClass]() { testClass->SingleRule_AnyOperator("+="); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\"-=\")", [&testClass]() { testClass->SingleRule_AnyOperator("-="); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\"*=\")", [&testClass]() { testClass->SingleRule_AnyOperator("*="); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\"/=\")", [&testClass]() { testClass->SingleRule_AnyOperator("/="); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\"%=\")", [&testClass]() { testClass->SingleRule_AnyOperator("%="); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\"^=\")", [&testClass]() { testClass->SingleRule_AnyOperator("^="); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\"&=\")", [&testClass]() { testClass->SingleRule_AnyOperator("&="); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\"|=\")", [&testClass]() { testClass->SingleRule_AnyOperator("|="); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\"<<\")", [&testClass]() { testClass->SingleRule_AnyOperator("<<"); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\">>\")", [&testClass]() { testClass->SingleRule_AnyOperator(">>"); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\">>=\")", [&testClass]() { testClass->SingleRule_AnyOperator(">>="); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\"<<=\")", [&testClass]() { testClass->SingleRule_AnyOperator("<<="); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\"==\")", [&testClass]() { testClass->SingleRule_AnyOperator("=="); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\"!=\")", [&testClass]() { testClass->SingleRule_AnyOperator("!="); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\"<=\")", [&testClass]() { testClass->SingleRule_AnyOperator("<="); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\">=\")", [&testClass]() { testClass->SingleRule_AnyOperator(">="); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\"&&\")", [&testClass]() { testClass->SingleRule_AnyOperator("&&"); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\"||\")", [&testClass]() { testClass->SingleRule_AnyOperator("||"); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\"++\")", [&testClass]() { testClass->SingleRule_AnyOperator("++"); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\"--\")", [&testClass]() { testClass->SingleRule_AnyOperator("--"); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\",\")", [&testClass]() { testClass->SingleRule_AnyOperator(","); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\"->*\")", [&testClass]() { testClass->SingleRule_AnyOperator("->*"); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\"->\")", [&testClass]() { testClass->SingleRule_AnyOperator("->"); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\"()\")", [&testClass]() { testClass->SingleRule_AnyOperator("()"); });
	state += SoupTest::RunTest(className, "SingleRule_AnyOperator(\"[]\")", [&testClass]() { testClass->SingleRule_AnyOperator("[]"); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator new\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator new"); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator delete\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator delete"); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator new[]\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator new[]"); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator delete[]\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator delete[]"); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator+\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator+"); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator-\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator-"); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator*\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator*"); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator/\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator/"); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator%\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator%"); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator^\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator^"); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator&\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator&"); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator|\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator|"); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator~\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator~"); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator!\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator!"); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator=\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator="); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator<\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator<"); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator>\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator>"); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator+=\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator+="); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator-=\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator-="); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator*=\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator*="); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator/=\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator/="); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator%=\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator%="); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator^=\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator^="); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator&=\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator&="); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator |=\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator |="); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator <<\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator <<"); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator >>\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator >>"); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator >>=\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator >>="); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator <<=\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator <<="); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator ==\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator =="); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator !=\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator !="); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator <=\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator <="); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator >=\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator >="); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator &&\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator &&"); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator||\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator||"); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator++\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator++"); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator--\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator--"); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator,\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator,"); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator->*\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator->*"); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator->\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator->"); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator()\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator()"); });
	state += SoupTest::RunTest(className, "SingleRule_OperatorFunctionIdentifier(\"operator[]\")", [&testClass]() { testClass->SingleRule_OperatorFunctionIdentifier("operator[]"); });
	state += SoupTest::RunTest(className, "SingleRule_AttributeSpecifier(\"[[noreturn]]\")", [&testClass]() { testClass->SingleRule_AttributeSpecifier("[[noreturn]]"); });
	state += SoupTest::RunTest(className, "SingleRule_AttributeSpecifier(\"[[carries_dependency]]\")", [&testClass]() { testClass->SingleRule_AttributeSpecifier("[[carries_dependency]]"); });
	state += SoupTest::RunTest(className, "SingleRule_AttributeSpecifier(\"[[deprecated]]\")", [&testClass]() { testClass->SingleRule_AttributeSpecifier("[[deprecated]]"); });
	state += SoupTest::RunTest(className, "SingleRule_AttributeSpecifier(\"[[deprecated(\"reason\")]]\")", [&testClass]() { testClass->SingleRule_AttributeSpecifier("[[deprecated(\"reason\")]]"); });
	state += SoupTest::RunTest(className, "SingleRule_AttributeSpecifier(\"[[fallthrough]]\")", [&testClass]() { testClass->SingleRule_AttributeSpecifier("[[fallthrough]]"); });
	state += SoupTest::RunTest(className, "SingleRule_AttributeSpecifier(\"[[nodiscard]]\")", [&testClass]() { testClass->SingleRule_AttributeSpecifier("[[nodiscard]]"); });
	state += SoupTest::RunTest(className, "SingleRule_AttributeSpecifier(\"[[maybe_unused]]\")", [&testClass]() { testClass->SingleRule_AttributeSpecifier("[[maybe_unused]]"); });
	state += SoupTest::RunTest(className, "SingleRule_FunctionDefinition(\"void DoIt(){}\")", [&testClass]() { testClass->SingleRule_FunctionDefinition("void DoIt(){}"); });

	return state;
}