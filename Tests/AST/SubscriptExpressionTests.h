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
            auto uut = SyntaxFactory::CreateSubscriptExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "a")),
                std::make_shared<SyntaxToken>(SyntaxTokenType::LeftBracket, "["),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2")),
                std::make_shared<SyntaxToken>(SyntaxTokenType::RightBracket, "]"));

            Assert::AreEqual<Expression>(
                *SyntaxFactory::CreateSimpleNameExpression(std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "a")),
                uut->GetLeft(),
                "Verify left expression matches.");
            Assert::AreEqual(
                SyntaxToken(SyntaxTokenType::LeftBracket, "["),
                uut->GetLeftBracket(),
                "Verify left bracket token matches.");
            Assert::AreEqual<Expression>(
                *SyntaxFactory::CreateLiteralExpression(LiteralType::Integer, std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2")),
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
            auto uut = SyntaxFactory::CreateSubscriptExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "a")),
                std::make_shared<SyntaxToken>(SyntaxTokenType::LeftBracket, "["),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2")),
                std::make_shared<SyntaxToken>(SyntaxTokenType::RightBracket, "]"));

            Assert::AreEqual(
                SyntaxFactory::CreateSubscriptExpression(
                    SyntaxFactory::CreateSimpleNameExpression(
                        std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "a")),
                    std::make_shared<SyntaxToken>(SyntaxTokenType::LeftBracket, "["),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2")),
                    std::make_shared<SyntaxToken>(SyntaxTokenType::RightBracket, "]")),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualLeft()
        {
            auto uut = SyntaxFactory::CreateSubscriptExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "a")),
                std::make_shared<SyntaxToken>(SyntaxTokenType::LeftBracket, "["),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2")),
                std::make_shared<SyntaxToken>(SyntaxTokenType::RightBracket, "]"));

            Assert::AreNotEqual(
                SyntaxFactory::CreateSubscriptExpression(
                    SyntaxFactory::CreateSimpleNameExpression(
                        std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "b")),
                    std::make_shared<SyntaxToken>(SyntaxTokenType::LeftBracket, "["),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2")),
                    std::make_shared<SyntaxToken>(SyntaxTokenType::RightBracket, "]")),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualLeftBracket()
        {
            auto uut = SyntaxFactory::CreateSubscriptExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "a")),
                std::make_shared<SyntaxToken>(SyntaxTokenType::LeftBracket, "["),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2")),
                std::make_shared<SyntaxToken>(SyntaxTokenType::RightBracket, "]"));

            Assert::AreNotEqual(
                SyntaxFactory::CreateSubscriptExpression(
                    SyntaxFactory::CreateSimpleNameExpression(
                        std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "a")),
                    std::make_shared<SyntaxToken>(SyntaxTokenType::LeftBracket, "[ "),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2")),
                    std::make_shared<SyntaxToken>(SyntaxTokenType::RightBracket, "]")),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualRight()
        {
            auto uut = SyntaxFactory::CreateSubscriptExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "a")),
                std::make_shared<SyntaxToken>(SyntaxTokenType::LeftBracket, "["),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2")),
                std::make_shared<SyntaxToken>(SyntaxTokenType::RightBracket, "]"));

            Assert::AreNotEqual(
                SyntaxFactory::CreateSubscriptExpression(
                    SyntaxFactory::CreateSimpleNameExpression(
                        std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "a")),
                    std::make_shared<SyntaxToken>(SyntaxTokenType::LeftBracket, "["),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "3")),
                    std::make_shared<SyntaxToken>(SyntaxTokenType::RightBracket, "]")),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualRightBracket()
        {
            auto uut = SyntaxFactory::CreateSubscriptExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "a")),
                std::make_shared<SyntaxToken>(SyntaxTokenType::LeftBracket, "["),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2")),
                std::make_shared<SyntaxToken>(SyntaxTokenType::RightBracket, "]"));

            Assert::AreNotEqual(
                SyntaxFactory::CreateSubscriptExpression(
                    SyntaxFactory::CreateSimpleNameExpression(
                        std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "a")),
                    std::make_shared<SyntaxToken>(SyntaxTokenType::LeftBracket, "["),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        std::make_shared<SyntaxToken>(SyntaxTokenType::IntegerLiteral, "2")),
                    std::make_shared<SyntaxToken>(SyntaxTokenType::RightBracket, " ]")),
                uut,
                "Verify do not match.");
        }
    };
}
