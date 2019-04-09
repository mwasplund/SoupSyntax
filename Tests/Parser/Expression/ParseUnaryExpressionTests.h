#pragma once
#include "TestUtils.h"
#include "SoupAssert.h"

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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Plus),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void SingleIdentifierMinus()
        {
            auto sourceCode = std::string("-a");
            auto actual = ParseUnaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::Minus,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Minus),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void SingleIdentifierBitwiseNot()
        {
            auto sourceCode = std::string("~a");
            auto actual = ParseUnaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::BitwiseNot,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Tilde),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void SingleIdentifierPreIncrement()
        {
            auto sourceCode = std::string("++a");
            auto actual = ParseUnaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PreIncrement,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoublePlus),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void SingleIdentifierPreDecrement()
        {
            auto sourceCode = std::string("--a");
            auto actual = ParseUnaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PreDecrement,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleMinus),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void SingleIdentifierPostIncrement()
        {
            auto sourceCode = std::string("a++");
            auto actual = ParseUnaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PostIncrement,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoublePlus),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void SingleIdentifierPostDecrement()
        {
            auto sourceCode = std::string("a--");
            auto actual = ParseUnaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PostDecrement,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleMinus),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void SingleIdentifierLogicalNot()
        {
            auto sourceCode = std::string("!a");
            auto actual = ParseUnaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::LogicalNot,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ExclamationMark),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void SingleIdentifierIndirection()
        {
            auto sourceCode = std::string("*a");
            auto actual = ParseUnaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::Indirection,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Asterisk),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void SingleIdentifierAddressOf()
        {
            auto sourceCode = std::string("&a");
            auto actual = ParseUnaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::AddressOf,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

    private:
        std::shared_ptr<const SyntaxNode> ParseUnaryExpression(std::string& sourceCode)
        {
            auto uut = TestUtils::BuildParser(sourceCode);
            auto context = uut.Parser->unaryExpression();

            // Convert the the abstract syntax tree
            auto node = uut.Visitor->visit(context)
                .as<std::shared_ptr<const SyntaxNode>>();

            return node;
        }
    };
}
