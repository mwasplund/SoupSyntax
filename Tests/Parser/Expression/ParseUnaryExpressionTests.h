#pragma once
#include "../../TestUtils.h"
#include "../../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class ParseUnaryExpressionTests
    {
    public:
        // [Fact]
        void SingleIdentifierPlus()
        {
            auto sourceCode = std::string("+a");
            auto actual = ParseUnaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::Plus,
                SyntaxFactory::CreateToken(SyntaxTokenType::Plus, L"+"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void SingleIdentifierMinus()
        {
            auto sourceCode = std::string("-a");
            auto actual = ParseUnaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::Minus,
                SyntaxFactory::CreateToken(SyntaxTokenType::Minus, L"-"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void SingleIdentifierBitwiseNot()
        {
            auto sourceCode = std::string("~a");
            auto actual = ParseUnaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::BitwiseNot,
                SyntaxFactory::CreateToken(SyntaxTokenType::Tilde, L"~"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void SingleIdentifierPreIncrement()
        {
            auto sourceCode = std::string("++a");
            auto actual = ParseUnaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PreIncrement,
                SyntaxFactory::CreateToken(SyntaxTokenType::DoublePlus, L"++"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void SingleIdentifierPreDecrement()
        {
            auto sourceCode = std::string("--a");
            auto actual = ParseUnaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PreDecrement,
                SyntaxFactory::CreateToken(SyntaxTokenType::DoubleMinus, L"--"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void SingleIdentifierPostIncrement()
        {
            auto sourceCode = std::string("a++");
            auto actual = ParseUnaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PostIncrement,
                SyntaxFactory::CreateToken(SyntaxTokenType::DoublePlus, L"++"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void SingleIdentifierPostDecrement()
        {
            auto sourceCode = std::string("a--");
            auto actual = ParseUnaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PostDecrement,
                SyntaxFactory::CreateToken(SyntaxTokenType::DoubleMinus, L"--"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void SingleIdentifierLogicalNot()
        {
            auto sourceCode = std::string("!a");
            auto actual = ParseUnaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::LogicalNot,
                SyntaxFactory::CreateToken(SyntaxTokenType::ExclamationMark, L"!"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void SingleIdentifierIndirection()
        {
            auto sourceCode = std::string("*a");
            auto actual = ParseUnaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::Indirection,
                SyntaxFactory::CreateToken(SyntaxTokenType::Asterisk, L"*"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void SingleIdentifierAddressOf()
        {
            auto sourceCode = std::string("&a");
            auto actual = ParseUnaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::AddressOf,
                SyntaxFactory::CreateToken(SyntaxTokenType::Ampersand, L"&"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

    private:
        std::shared_ptr<const UnaryExpression> ParseUnaryExpression(std::string& sourceCode)
        {
            auto uut = TestUtils::BuildParser(sourceCode);
            auto context = uut.Parser->unaryExpression();

            // Convert the the abstract syntax tree
            auto node = uut.Visitor->visit(context)
                .as<std::shared_ptr<const SyntaxNode>>();

            return std::dynamic_pointer_cast<const UnaryExpression>(node);
        }
    };
}
