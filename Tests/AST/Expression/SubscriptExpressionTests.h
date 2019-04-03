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
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket));

            Assert::AreEqual(
                SyntaxNodeType::SubscriptExpression,
                uut->GetType(),
                "Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                uut->GetLeft(),
                "Verify left expression matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                uut->GetOpenBracket(),
                "Verify left bracket token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer, 
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
                uut->GetRight(),
                "Verify right expression matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                uut->GetCloseBracket(),
                "Verify right bracket token matches.");
        }

        // [[Fact]]
        void GetChildren()
        {
            auto uut = SyntaxFactory::CreateSubscriptExpression(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket)),
                    SyntaxNodeChild(
                        SyntaxFactory::CreateLiteralExpression(
                            LiteralType::Integer,
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2"))),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket)),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateSubscriptExpression(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket));

            Assert::AreEqual(
                SyntaxFactory::CreateSubscriptExpression(
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket)),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualLeft()
        {
            auto uut = SyntaxFactory::CreateSubscriptExpression(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateSubscriptExpression(
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket)),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualOpenBracket()
        {
            auto uut = SyntaxFactory::CreateSubscriptExpression(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateSubscriptExpression(
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::OpenBracket,
                        {
                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                        },
                        {}),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket)),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualRight()
        {
            auto uut = SyntaxFactory::CreateSubscriptExpression(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateSubscriptExpression(
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "3")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket)),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualCloseBracket()
        {
            auto uut = SyntaxFactory::CreateSubscriptExpression(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateSubscriptExpression(
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::CloseBracket,
                        {
                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                        },
                        {})),
                uut,
                "Verify do not match.");
        }
    };
}
