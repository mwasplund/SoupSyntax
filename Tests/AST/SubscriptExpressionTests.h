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
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftBracket, L"["),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"2")),
                SyntaxFactory::CreateToken(SyntaxTokenType::RightBracket, L"]"));

            Assert::AreEqual<Expression>(
                *SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                uut->GetLeft(),
                L"Verify left expression matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::LeftBracket, L"["),
                uut->GetLeftBracket(),
                L"Verify left bracket token matches.");
            Assert::AreEqual<Expression>(
                *SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer, 
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"2")),
                uut->GetRight(),
                L"Verify right expression matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::RightBracket, L"]"),
                uut->GetRightBracket(),
                L"Verify right bracket token matches.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateSubscriptExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftBracket, L"["),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"2")),
                SyntaxFactory::CreateToken(SyntaxTokenType::RightBracket, L"]"));

            Assert::AreEqual(
                SyntaxFactory::CreateSubscriptExpression(
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                    SyntaxFactory::CreateToken(SyntaxTokenType::LeftBracket, L"["),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"2")),
                    SyntaxFactory::CreateToken(SyntaxTokenType::RightBracket, L"]")),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualLeft()
        {
            auto uut = SyntaxFactory::CreateSubscriptExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftBracket, L"["),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"2")),
                SyntaxFactory::CreateToken(SyntaxTokenType::RightBracket, L"]"));

            Assert::AreNotEqual(
                SyntaxFactory::CreateSubscriptExpression(
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"b")),
                    SyntaxFactory::CreateToken(SyntaxTokenType::LeftBracket, L"["),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"2")),
                    SyntaxFactory::CreateToken(SyntaxTokenType::RightBracket, L"]")),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualLeftBracket()
        {
            auto uut = SyntaxFactory::CreateSubscriptExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftBracket, L"["),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"2")),
                SyntaxFactory::CreateToken(SyntaxTokenType::RightBracket, L"]"));

            Assert::AreNotEqual(
                SyntaxFactory::CreateSubscriptExpression(
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                    SyntaxFactory::CreateToken(SyntaxTokenType::LeftBracket, L"[ L"),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"2")),
                    SyntaxFactory::CreateToken(SyntaxTokenType::RightBracket, L"]")),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualRight()
        {
            auto uut = SyntaxFactory::CreateSubscriptExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftBracket, L"["),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"2")),
                SyntaxFactory::CreateToken(SyntaxTokenType::RightBracket, L"]"));

            Assert::AreNotEqual(
                SyntaxFactory::CreateSubscriptExpression(
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                    SyntaxFactory::CreateToken(SyntaxTokenType::LeftBracket, L"["),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"3")),
                    SyntaxFactory::CreateToken(SyntaxTokenType::RightBracket, L"]")),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualRightBracket()
        {
            auto uut = SyntaxFactory::CreateSubscriptExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftBracket, L"["),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"2")),
                SyntaxFactory::CreateToken(SyntaxTokenType::RightBracket, L"]"));

            Assert::AreNotEqual(
                SyntaxFactory::CreateSubscriptExpression(
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                    SyntaxFactory::CreateToken(SyntaxTokenType::LeftBracket, L"["),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"2")),
                    SyntaxFactory::CreateToken(SyntaxTokenType::RightBracket, L" ]")),
                uut,
                L"Verify do not match.");
        }
    };
}
