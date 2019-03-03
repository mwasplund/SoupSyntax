#pragma once
#include "../TestUtils.h"
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class ParserExpressionTests
    {
    public:
        // [Theory]
        // [InlineData("1")] // Literal
        // [InlineData("cout")] // Unqualified Identifier
        // [InlineData("std::string::npos")] // Qualified Identifier
        // [InlineData("[]() { return 1; }]")] // Lambda Expression
        // [InlineData("all(true, true, true, false)")] // Fold Expression
        void SingleRule_PrimaryExpressions(std::string sourceCode)
        {
            auto uut = TestUtils::BuildParser(sourceCode);
            auto context = uut.Parser->primaryExpression();
            Assert::NotNull(context, L"Verify context is not null.");
        }

        // [Theory]
        // [InlineData("cout")] // Identifier
        // [InlineData("operator new")] // Overloaded Operator Name
        // [InlineData("operator bool")] // User defined conversion function
        // [InlineData("operator \"\" _km")] // User defined literla operator
        // [InlineData("MyTemplate<int>")] // Template
        // [InlineData("~MyClass")] // Tilde class name
        // [InlineData("~decltype(str)")] // Tilde decltype
        void SingleRule_UnqualifiedIdentifier(std::string sourceCode)
        {
            auto uut = TestUtils::BuildParser(sourceCode);
            auto context = uut.Parser->unqualifiedIdentifier();
            Assert::NotNull(context, L"Verify context is not null.");
        }

        // [Theory]
        // [InlineData("std::string::npos")]
        // [InlineData("::tolower")]
        // [InlineData("::std::count")]
        void SingleRule_QualifiedIdentifier(std::string sourceCode)
        {
            auto uut = TestUtils::BuildParser(sourceCode);
            auto context = uut.Parser->qualifiedIdentifier();
            Assert::NotNull(context, L"Verify context is not null.");
        }

        // [Theory]
        // [InlineData("[]{}")]
        // [InlineData("[](){}")]
        // [InlineData("[]()->int{return 1;}")]
        //// [InlineData("[](auto a, auto&& b) { return a < b; }")]
        // [InlineData("[=] { printer(ts...); }")]
        //// [InlineData("[]<class T>(T a, auto&& b) { return a < b; }")]
        //// [InlineData("[](auto* a)->auto& { return *a; }")]
        //// [InlineData("[](int i = 6) { return i + 4; }")]
        // [InlineData("[&]{ use(i, x); }")]
        void SingleRule_LambdaExpression(std::string sourceCode)
        {
            auto uut = TestUtils::BuildParser(sourceCode);
            auto context = uut.Parser->lambdaExpression();
            Assert::NotNull(context, L"Verify context is not null.");
        }

        // [Theory]
        // [InlineData("=")]
        // [InlineData("+=")]
        // [InlineData("-=")]
        // [InlineData("*=")]
        // [InlineData("/=")]
        // [InlineData("%=")]
        // [InlineData("^=")]
        // [InlineData("&=")]
        // [InlineData("|=")]
        // [InlineData(">>=")]
        // [InlineData("<<=")]
        void SingleRule_AssignmentOperator(std::string sourceCode)
        {
            auto uut = TestUtils::BuildParser(sourceCode);
            auto context = uut.Parser->assignmentOperator();
            Assert::NotNull(context, L"Verify context is not null.");
        }

        // [Theory]
        // [InlineData("+")]
        // [InlineData("-")]
        // [InlineData("&")]
        // [InlineData("|")]
        // [InlineData("~")]
        // [InlineData("!")]
        void SingleRule_UnaryOperator(std::string sourceCode)
        {
            auto uut = TestUtils::BuildParser(sourceCode);
            auto context = uut.Parser->unaryOperator();
            Assert::NotNull(context, L"Verify context is not null.");
        }

        // [Theory]
        // [InlineData("new")]
        // [InlineData("delete")]
        // [InlineData("new[]")]
        // [InlineData("delete[]")]
        // [InlineData("+")]
        // [InlineData("-")]
        // [InlineData("*")]
        // [InlineData("/")]
        // [InlineData("%")]
        // [InlineData("^")]
        // [InlineData("&")]
        // [InlineData("|")]
        // [InlineData("~")]
        // [InlineData("!")]
        // [InlineData("=")]
        // [InlineData("<")]
        // [InlineData(">")]
        // [InlineData("+=")]
        // [InlineData("-=")]
        // [InlineData("*=")]
        // [InlineData("/=")]
        // [InlineData("%=")]
        // [InlineData("^=")]
        // [InlineData("&=")]
        // [InlineData("|=")]
        // [InlineData("<<")]
        // [InlineData(">>")]
        // [InlineData(">>=")]
        // [InlineData("<<=")]
        // [InlineData("==")]
        // [InlineData("!=")]
        // [InlineData("<=")]
        // [InlineData(">=")]
        // [InlineData("&&")]
        // [InlineData("||")]
        // [InlineData("++")]
        // [InlineData("--")]
        // [InlineData(",")]
        // [InlineData("->*")]
        // [InlineData("->")]
        // [InlineData("()")]
        // [InlineData("[]")]
        void SingleRule_AnyOperator(std::string sourceCode)
        {
            auto uut = TestUtils::BuildParser(sourceCode);
            auto context = uut.Parser->anyOperator();
            Assert::NotNull(context, L"Verify context is not null.");
        }

        // [Theory]
        // [InlineData("operator new")]
        // [InlineData("operator delete")]
        // [InlineData("operator new[]")]
        // [InlineData("operator delete[]")]
        // [InlineData("operator+")]
        // [InlineData("operator-")]
        // [InlineData("operator*")]
        // [InlineData("operator/")]
        // [InlineData("operator%")]
        // [InlineData("operator^")]
        // [InlineData("operator&")]
        // [InlineData("operator|")]
        // [InlineData("operator~")]
        // [InlineData("operator!")]
        // [InlineData("operator=")]
        // [InlineData("operator<")]
        // [InlineData("operator>")]
        // [InlineData("operator+=")]
        // [InlineData("operator-=")]
        // [InlineData("operator*=")]
        // [InlineData("operator/=")]
        // [InlineData("operator%=")]
        // [InlineData("operator^=")]
        // [InlineData("operator&=")]
        // [InlineData("operator |=")]
        // [InlineData("operator <<")]
        // [InlineData("operator >>")]
        // [InlineData("operator >>=")]
        // [InlineData("operator <<=")]
        // [InlineData("operator ==")]
        // [InlineData("operator !=")]
        // [InlineData("operator <=")]
        // [InlineData("operator >=")]
        // [InlineData("operator &&")]
        // [InlineData("operator||")]
        // [InlineData("operator++")]
        // [InlineData("operator--")]
        // [InlineData("operator,")]
        // [InlineData("operator->*")]
        // [InlineData("operator->")]
        // [InlineData("operator()")]
        // [InlineData("operator[]")]
        void SingleRule_OperatorFunctionIdentifier(std::string sourceCode)
        {
            auto uut = TestUtils::BuildParser(sourceCode);
            auto context = uut.Parser->operatorFunctionIdentifier();
            Assert::NotNull(context, L"Verify context is not null.");
        }

        // [Theory]
        // Standard Attributes
        // [InlineData("[[noreturn]]")]
        // [InlineData("[[carries_dependency]]")]
        // [InlineData("[[deprecated]]")]
        // [InlineData("[[deprecated(\"reason\")]]")]
        // [InlineData("[[fallthrough]]")]
        // [InlineData("[[nodiscard]]")]
        // [InlineData("[[maybe_unused]]")]
        void SingleRule_AttributeSpecifier(std::string sourceCode)
        {
            auto uut = TestUtils::BuildParser(sourceCode);
            auto context = uut.Parser->attributeSpecifier();
            Assert::NotNull(context, L"Verify context is not null.");
        }

        // [Theory]
        // [InlineData("void DoIt(){}")]
        void SingleRule_FunctionDefinition(std::string sourceCode)
        {
            auto uut = TestUtils::BuildParser(sourceCode);
            auto context = uut.Parser->functionDefinition();
            Assert::NotNull(context, L"Verify context is not null.");
        }
    };
}
