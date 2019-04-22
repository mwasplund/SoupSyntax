#pragma once
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class OuterTreeSubscriptExpressionTests
    {
    public:
        [[Fact]]
        void InitializeSimple()
        {
            // a[2]
            auto uut = SyntaxFactory::CreateSubscriptExpression(
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket))->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::SubscriptExpression,
                uut->GetType(),
                "Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
                uut->GetLeft(),
                "Verify left expression matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                uut->GetOpenBracket(),
                "Verify left bracket token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer, 
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
                uut->GetRight(),
                "Verify right expression matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                uut->GetCloseBracket(),
                "Verify right bracket token matches.");
        }

        [[Fact]]
        void GetChildren()
        {
            // a[2]
            auto uut = SyntaxFactory::CreateSubscriptExpression(
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket))->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>({
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateIdentifierExpression(
                            SyntaxFactory::CreateSimpleIdentifier(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")))),
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket)),
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateLiteralExpression(
                            LiteralType::Integer,
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2"))),
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket)),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        [[Fact]]
        void OperatorEqual()
        {
            // a[2]
            auto uut = SyntaxFactory::CreateSubscriptExpression(
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket))->CreateOuter(nullptr);

            TestUtils::AreEqual(
                SyntaxFactory::CreateSubscriptExpression(
                    SyntaxFactory::CreateIdentifierExpression(
                        SyntaxFactory::CreateSimpleIdentifier(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket)),
                uut,
                "Verify matches.");
        }

        [[Fact]]
        void OperatorNotEqualLeft()
        {
            // a[2]
            auto uut = SyntaxFactory::CreateSubscriptExpression(
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateSubscriptExpression(
                    SyntaxFactory::CreateIdentifierExpression(
                        SyntaxFactory::CreateSimpleIdentifier(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket)),
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void OperatorNotEqualOpenBracket()
        {
            // a[2]
            auto uut = SyntaxFactory::CreateSubscriptExpression(
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateSubscriptExpression(
                    SyntaxFactory::CreateIdentifierExpression(
                        SyntaxFactory::CreateSimpleIdentifier(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::OpenBracket,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {}),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket)),
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void OperatorNotEqualRight()
        {
            // a[2]
            auto uut = SyntaxFactory::CreateSubscriptExpression(
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateSubscriptExpression(
                    SyntaxFactory::CreateIdentifierExpression(
                        SyntaxFactory::CreateSimpleIdentifier(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "3")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket)),
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void OperatorNotEqualCloseBracket()
        {
            // a[2]
            auto uut = SyntaxFactory::CreateSubscriptExpression(
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateSubscriptExpression(
                    SyntaxFactory::CreateIdentifierExpression(
                        SyntaxFactory::CreateSimpleIdentifier(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::CloseBracket,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {})),
                uut,
                "Verify do not match.");
        }
    };
}
