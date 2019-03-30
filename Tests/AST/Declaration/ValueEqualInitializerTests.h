#pragma once
#include "TestUtils.h"
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class ValueEqualInitializerTests
    {
    public:
        // [[Fact]]
        void InitializeSimple()
        {
            // = 1
            auto uut = SyntaxFactory::CreateValueEqualInitializer(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")));

            Assert::AreEqual(
                SyntaxNodeType::ValueEqualInitializer,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                uut->GetEqualToken(),
                "Verify equal token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")),
                uut->GetExpression(),
                "Verify expression matches.");
        }

        // [[Fact]]
        void GetChildren()
        {
            // = 1
            auto uut = SyntaxFactory::CreateValueEqualInitializer(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal)),
                    SyntaxNodeChild(
                        SyntaxFactory::CreateLiteralExpression(
                            LiteralType::Integer,
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1"))),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            // = 1
            auto uut = SyntaxFactory::CreateValueEqualInitializer(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")));

            TestUtils::AreEqual(
                SyntaxFactory::CreateValueEqualInitializer(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1"))),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualEqualToken()
        {
            // = 1
            auto uut = SyntaxFactory::CreateValueEqualInitializer(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateValueEqualInitializer(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Equal,
                        {
                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                        },
                        {}),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1"))),
                uut,
                "Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualExpression()
        {
            // = 1
            auto uut = SyntaxFactory::CreateValueEqualInitializer(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateValueEqualInitializer(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2"))),
                uut,
                "Verify does not match.");
        }
    };
}
