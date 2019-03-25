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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Plus),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void SingleIdentifierMinus()
        {
            auto sourceCode = std::string("-a");
            auto actual = ParseUnaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::Minus,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Minus),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void SingleIdentifierBitwiseNot()
        {
            auto sourceCode = std::string("~a");
            auto actual = ParseUnaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::BitwiseNot,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Tilde),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void SingleIdentifierPreIncrement()
        {
            auto sourceCode = std::string("++a");
            auto actual = ParseUnaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PreIncrement,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoublePlus),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void SingleIdentifierPreDecrement()
        {
            auto sourceCode = std::string("--a");
            auto actual = ParseUnaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PreDecrement,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleMinus),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void SingleIdentifierPostIncrement()
        {
            auto sourceCode = std::string("a++");
            auto actual = ParseUnaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PostIncrement,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoublePlus),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void SingleIdentifierPostDecrement()
        {
            auto sourceCode = std::string("a--");
            auto actual = ParseUnaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::PostDecrement,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleMinus),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void SingleIdentifierLogicalNot()
        {
            auto sourceCode = std::string("!a");
            auto actual = ParseUnaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::LogicalNot,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ExclamationMark),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void SingleIdentifierIndirection()
        {
            auto sourceCode = std::string("*a");
            auto actual = ParseUnaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::Indirection,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Asterisk),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void SingleIdentifierAddressOf()
        {
            auto sourceCode = std::string("&a");
            auto actual = ParseUnaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateUnaryExpression(
                UnaryOperator::AddressOf,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")));

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
