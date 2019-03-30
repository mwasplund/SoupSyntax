#pragma once
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class SyntaxNodeChildTests
    {
    public:
        // [[Fact]]
        void TokenInitialize()
        {
            auto uut = SyntaxNodeChild(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void));

            Assert::IsFalse(uut.IsNode(), "Verify is not a node.");
            Assert::IsTrue(uut.IsToken(), "Verify is a token.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void),
                uut.AsToken(),
                "Verify value matches.");
        }

        // [[Fact]]
        void TokenOperatorEqual()
        {
            auto uut = SyntaxNodeChild(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void));

            Assert::AreEqual(
                SyntaxNodeChild(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void)),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void TokenOperatorNotEqualToken()
        {
            auto uut = SyntaxNodeChild(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void));

            Assert::AreNotEqual(
                SyntaxNodeChild(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void TokenOperatorNotEqualNode()
        {
            auto uut = SyntaxNodeChild(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void));

            Assert::AreNotEqual(
                SyntaxNodeChild(
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1"))),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void NodeInitialize()
        {
            auto uut = SyntaxNodeChild(
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")));

            Assert::IsTrue(uut.IsNode(), "Verify is a node.");
            Assert::IsFalse(uut.IsToken(), "Verify is not a token.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")),
                uut.AsNode(),
                "Verify value matches.");
        }

        // [[Fact]]
        void NodeOperatorEqual()
        {
            auto uut = SyntaxNodeChild(
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")));

            Assert::AreEqual(
                SyntaxNodeChild(
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1"))),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void NodeOperatorNotEqualToken()
        {
            auto uut = SyntaxNodeChild(
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")));

            Assert::AreNotEqual(
                SyntaxNodeChild(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void)),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void NodeOperatorNotEqualNode()
        {
            auto uut = SyntaxNodeChild(
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")));

            Assert::AreNotEqual(
                SyntaxNodeChild(
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2"))),
                uut,
                "Verify do not match.");
        }
    };
}
