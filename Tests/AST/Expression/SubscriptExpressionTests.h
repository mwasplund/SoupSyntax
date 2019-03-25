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
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftBracket),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"2")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightBracket));

            Assert::AreEqual(
                SyntaxNodeType::SubscriptExpression,
                uut->GetType(),
                L"Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                uut->GetLeft(),
                L"Verify left expression matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftBracket),
                uut->GetLeftBracket(),
                L"Verify left bracket token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer, 
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"2")),
                uut->GetRight(),
                L"Verify right expression matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightBracket),
                uut->GetRightBracket(),
                L"Verify right bracket token matches.");
        }

        // [[Fact]]
        void GetChildren()
        {
            auto uut = SyntaxFactory::CreateSubscriptExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftBracket),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"2")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightBracket));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(
                        SyntaxFactory::CreateSimpleNameExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a"))),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftBracket)),
                    SyntaxNodeChild(
                        SyntaxFactory::CreateLiteralExpression(
                            LiteralType::Integer,
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"2"))),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightBracket)),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateSubscriptExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftBracket),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"2")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightBracket));

            Assert::AreEqual(
                SyntaxFactory::CreateSubscriptExpression(
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftBracket),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"2")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightBracket)),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualLeft()
        {
            auto uut = SyntaxFactory::CreateSubscriptExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftBracket),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"2")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightBracket));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateSubscriptExpression(
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftBracket),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"2")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightBracket)),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualLeftBracket()
        {
            auto uut = SyntaxFactory::CreateSubscriptExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftBracket),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"2")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightBracket));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateSubscriptExpression(
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::LeftBracket,
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan()),
                        },
                        {}),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"2")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightBracket)),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualRight()
        {
            auto uut = SyntaxFactory::CreateSubscriptExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftBracket),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"2")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightBracket));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateSubscriptExpression(
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftBracket),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"3")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightBracket)),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualRightBracket()
        {
            auto uut = SyntaxFactory::CreateSubscriptExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftBracket),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"2")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightBracket));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateSubscriptExpression(
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftBracket),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"2")),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::RightBracket,
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan()),
                        },
                        {})),
                uut,
                L"Verify do not match.");
        }
    };
}
