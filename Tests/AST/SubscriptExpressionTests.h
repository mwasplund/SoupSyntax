#pragma once
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class SubscriptExpressionTests
    {
    public:
        // [[Fact]]
        void InitializeSimple()
        {
            auto uut = std::make_shared<SubscriptExpression>(
                std::make_shared<SimpleNameExpression>(
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "a")),
                std::make_shared<SyntaxToken>(SyntaxTokenType::LeftBracket, "["),
                std::make_shared<LiteralExpression>(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2")),
                std::make_shared<SyntaxToken>(SyntaxTokenType::RightBracket, "]"));

            Assert::AreEqual<Expression>(
                SimpleNameExpression(std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "a")),
                uut->GetLeft(),
                "Verify left expression matches.");
            Assert::AreEqual(
                SyntaxToken(SyntaxTokenType::LeftBracket, "["),
                uut->GetLeftBracket(),
                "Verify left bracket token matches.");
            Assert::AreEqual<Expression>(
                LiteralExpression(LiteralType::Integer, std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2")),
                uut->GetRight(),
                "Verify right expression matches.");
            Assert::AreEqual(
                SyntaxToken(SyntaxTokenType::RightBracket, "]"),
                uut->GetRightBracket(),
                "Verify right bracket token matches.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            auto uut = std::make_shared<SubscriptExpression>(
                std::make_shared<SimpleNameExpression>(
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "a")),
                std::make_shared<SyntaxToken>(SyntaxTokenType::LeftBracket, "["),
                std::make_shared<LiteralExpression>(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2")),
                std::make_shared<SyntaxToken>(SyntaxTokenType::RightBracket, "]"));

            Assert::AreEqual(
                SubscriptExpression(
                    std::make_shared<SimpleNameExpression>(
                        std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "a")),
                    std::make_shared<SyntaxToken>(SyntaxTokenType::LeftBracket, "["),
                    std::make_shared<LiteralExpression>(
                        LiteralType::Integer,
                        std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2")),
                    std::make_shared<SyntaxToken>(SyntaxTokenType::RightBracket, "]")),
                *uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualLeft()
        {
            auto uut = std::make_shared<SubscriptExpression>(
                std::make_shared<SimpleNameExpression>(
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "a")),
                std::make_shared<SyntaxToken>(SyntaxTokenType::LeftBracket, "["),
                std::make_shared<LiteralExpression>(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2")),
                std::make_shared<SyntaxToken>(SyntaxTokenType::RightBracket, "]"));

            Assert::AreNotEqual(
                SubscriptExpression(
                    std::make_shared<SimpleNameExpression>(
                        std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "b")),
                    std::make_shared<SyntaxToken>(SyntaxTokenType::LeftBracket, "["),
                    std::make_shared<LiteralExpression>(
                        LiteralType::Integer,
                        std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2")),
                    std::make_shared<SyntaxToken>(SyntaxTokenType::RightBracket, "]")),
                *uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualLeftBracket()
        {
            auto uut = std::make_shared<SubscriptExpression>(
                std::make_shared<SimpleNameExpression>(
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "a")),
                std::make_shared<SyntaxToken>(SyntaxTokenType::LeftBracket, "["),
                std::make_shared<LiteralExpression>(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2")),
                std::make_shared<SyntaxToken>(SyntaxTokenType::RightBracket, "]"));

            Assert::AreNotEqual(
                SubscriptExpression(
                    std::make_shared<SimpleNameExpression>(
                        std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "a")),
                    std::make_shared<SyntaxToken>(SyntaxTokenType::LeftBracket, "[ "),
                    std::make_shared<LiteralExpression>(
                        LiteralType::Integer,
                        std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2")),
                    std::make_shared<SyntaxToken>(SyntaxTokenType::RightBracket, "]")),
                *uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualRight()
        {
            auto uut = std::make_shared<SubscriptExpression>(
                std::make_shared<SimpleNameExpression>(
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "a")),
                std::make_shared<SyntaxToken>(SyntaxTokenType::LeftBracket, "["),
                std::make_shared<LiteralExpression>(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2")),
                std::make_shared<SyntaxToken>(SyntaxTokenType::RightBracket, "]"));

            Assert::AreNotEqual(
                SubscriptExpression(
                    std::make_shared<SimpleNameExpression>(
                        std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "a")),
                    std::make_shared<SyntaxToken>(SyntaxTokenType::LeftBracket, "["),
                    std::make_shared<LiteralExpression>(
                        LiteralType::Integer,
                        std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "3")),
                    std::make_shared<SyntaxToken>(SyntaxTokenType::RightBracket, "]")),
                *uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualRightBracket()
        {
            auto uut = std::make_shared<SubscriptExpression>(
                std::make_shared<SimpleNameExpression>(
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "a")),
                std::make_shared<SyntaxToken>(SyntaxTokenType::LeftBracket, "["),
                std::make_shared<LiteralExpression>(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2")),
                std::make_shared<SyntaxToken>(SyntaxTokenType::RightBracket, "]"));

            Assert::AreNotEqual(
                SubscriptExpression(
                    std::make_shared<SimpleNameExpression>(
                        std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "a")),
                    std::make_shared<SyntaxToken>(SyntaxTokenType::LeftBracket, "["),
                    std::make_shared<LiteralExpression>(
                        LiteralType::Integer,
                        std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2")),
                    std::make_shared<SyntaxToken>(SyntaxTokenType::RightBracket, " ]")),
                *uut,
                "Verify do not match.");
        }
    };
}
