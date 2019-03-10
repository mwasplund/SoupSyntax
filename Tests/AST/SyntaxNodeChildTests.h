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
                SyntaxFactory::CreateToken(
                    SyntaxTokenType::Void,
                    L"void"));

            Assert::IsFalse(uut.IsNode(), L"Verify is not a node.");
            Assert::IsTrue(uut.IsToken(), L"Verify is a token.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(
                    SyntaxTokenType::Void,
                    L"void"),
                uut.AsToken(),
                L"Verify value matches.");
        }

        // [[Fact]]
        void TokenOperatorEqual()
        {
            auto uut = SyntaxNodeChild(
                SyntaxFactory::CreateToken(
                    SyntaxTokenType::Void,
                    L"void"));

            Assert::AreEqual(
                SyntaxNodeChild(
                    SyntaxFactory::CreateToken(
                        SyntaxTokenType::Void,
                        L"void")),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void TokenOperatorNotEqualToken()
        {
            auto uut = SyntaxNodeChild(
                SyntaxFactory::CreateToken(
                    SyntaxTokenType::Void,
                    L"void"));

            Assert::AreNotEqual(
                SyntaxNodeChild(
                    SyntaxFactory::CreateToken(
                        SyntaxTokenType::Int,
                        L"int")),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void TokenOperatorNotEqualNode()
        {
            auto uut = SyntaxNodeChild(
                SyntaxFactory::CreateToken(
                    SyntaxTokenType::Void,
                    L"void"));

            Assert::AreNotEqual(
                SyntaxNodeChild(
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1"))),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void NodeInitialize()
        {
            auto uut = SyntaxNodeChild(
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1")));

            Assert::IsTrue(uut.IsNode(), L"Verify is a node.");
            Assert::IsFalse(uut.IsToken(), L"Verify is not a token.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1")),
                uut.AsNode(),
                L"Verify value matches.");
        }

        // [[Fact]]
        void NodeOperatorEqual()
        {
            auto uut = SyntaxNodeChild(
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1")));

            Assert::AreEqual(
                SyntaxNodeChild(
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1"))),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void NodeOperatorNotEqualToken()
        {
            auto uut = SyntaxNodeChild(
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1")));

            Assert::AreNotEqual(
                SyntaxNodeChild(
                    SyntaxFactory::CreateToken(
                        SyntaxTokenType::Void,
                        L"void")),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void NodeOperatorNotEqualNode()
        {
            auto uut = SyntaxNodeChild(
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"1")));

            Assert::AreNotEqual(
                SyntaxNodeChild(
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, L"2"))),
                uut,
                L"Verify do not match.");
        }
    };
}
