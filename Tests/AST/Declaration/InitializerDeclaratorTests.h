#pragma once
#include "TestUtils.h"
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class InitializerDeclaratorTests
    {
    public:
        // [[Fact]]
        void InitializeSimpleNoInitializer()
        {
            // a
            auto uut = SyntaxFactory::CreateInitializerDeclarator(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                nullptr);

            Assert::AreEqual(
                SyntaxNodeType::InitializerDeclarator,
                uut->GetType(),
                L"Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                uut->GetDeclarator(),
                L"Verify declarator matches.");
            Assert::IsFalse(
                uut->HasInitializer(),
                L"Verify has no initializer.");
        }

        // [[Fact]]
        void InitializeSimpleWithInitializer()
        {
            // a = 2
            auto uut = SyntaxFactory::CreateInitializerDeclarator(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateValueEqualInitializer(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"2"))));

            Assert::AreEqual(
                SyntaxNodeType::InitializerDeclarator,
                uut->GetType(),
                L"Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                uut->GetDeclarator(),
                L"Verify declarator matches.");
            Assert::IsTrue(
                uut->HasInitializer(),
                L"Verify has initializer.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateValueEqualInitializer(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"2"))),
                uut->GetInitializer(),
                L"Verify initializer matches.");
        }

        // [[Fact]]
        void GetChildrenNoInitializer()
        {
            // a
            auto uut = SyntaxFactory::CreateInitializerDeclarator(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                nullptr);

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(
                        SyntaxFactory::CreateSimpleNameExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a"))),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void GetChildrenWithInitializer()
        {
            // a = 2
            auto uut = SyntaxFactory::CreateInitializerDeclarator(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateValueEqualInitializer(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"2"))));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(
                        SyntaxFactory::CreateSimpleNameExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a"))),
                    SyntaxNodeChild(SyntaxFactory::CreateValueEqualInitializer(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                        SyntaxFactory::CreateLiteralExpression(
                            LiteralType::Integer,
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"2")))),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void OperatorEqualNoInitializer()
        {
            // a
            auto uut = SyntaxFactory::CreateInitializerDeclarator(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                nullptr);

            TestUtils::AreEqual(
                SyntaxFactory::CreateInitializerDeclarator(
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                    nullptr),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorEqualWithInitializer()
        {
            // a = 2
            auto uut = SyntaxFactory::CreateInitializerDeclarator(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateValueEqualInitializer(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"2"))));

            TestUtils::AreEqual(
                SyntaxFactory::CreateInitializerDeclarator(
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                    SyntaxFactory::CreateValueEqualInitializer(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                        SyntaxFactory::CreateLiteralExpression(
                            LiteralType::Integer,
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"2")))),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualDeclarator()
        {
            // a = 2
            auto uut = SyntaxFactory::CreateInitializerDeclarator(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateValueEqualInitializer(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"2"))));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateInitializerDeclarator(
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")),
                    SyntaxFactory::CreateValueEqualInitializer(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                        SyntaxFactory::CreateLiteralExpression(
                            LiteralType::Integer,
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"2")))),
                uut,
                L"Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualNoInitializer()
        {
            // a = 2
            auto uut = SyntaxFactory::CreateInitializerDeclarator(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateValueEqualInitializer(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"2"))));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateInitializerDeclarator(
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                    nullptr),
                uut,
                L"Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualWithInitializer()
        {
            // a = 2
            auto uut = SyntaxFactory::CreateInitializerDeclarator(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateValueEqualInitializer(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"2"))));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateInitializerDeclarator(
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                    SyntaxFactory::CreateValueEqualInitializer(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                        SyntaxFactory::CreateLiteralExpression(
                            LiteralType::Integer,
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, L"3")))),
                uut,
                L"Verify does not match.");
        }
    };
}
