#pragma once
#include "TestUtils.h"
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class OuterTreeInitializerDeclaratorTests
    {
    public:
        // [[Fact]]
        void InitializeSimpleNoInitializer()
        {
            // a
            auto uut = SyntaxFactory::CreateInitializerDeclarator(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                nullptr)->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::InitializerDeclarator,
                uut->GetType(),
                "Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                uut->GetDeclarator(),
                "Verify declarator matches.");
            Assert::IsFalse(
                uut->HasInitializer(),
                "Verify has no initializer.");
        }

        // [[Fact]]
        void InitializeSimpleWithInitializer()
        {
            // a = 2
            auto uut = SyntaxFactory::CreateInitializerDeclarator(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateValueEqualInitializer(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2"))))->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::InitializerDeclarator,
                uut->GetType(),
                "Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                uut->GetDeclarator(),
                "Verify declarator matches.");
            Assert::IsTrue(
                uut->HasInitializer(),
                "Verify has initializer.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateValueEqualInitializer(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2"))),
                uut->GetInitializer(),
                "Verify initializer matches.");
        }

        // [[Fact]]
        void GetChildrenNoInitializer()
        {
            // a
            auto uut = SyntaxFactory::CreateInitializerDeclarator(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                nullptr)->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>({
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void GetChildrenWithInitializer()
        {
            // a = 2
            auto uut = SyntaxFactory::CreateInitializerDeclarator(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateValueEqualInitializer(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2"))))->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>({
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
                    TestUtils::CreateChild(SyntaxFactory::CreateValueEqualInitializer(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                        SyntaxFactory::CreateLiteralExpression(
                            LiteralType::Integer,
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")))),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void OperatorEqualNoInitializer()
        {
            // a
            auto uut = SyntaxFactory::CreateInitializerDeclarator(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                nullptr)->CreateOuter(nullptr);

            TestUtils::AreEqual(
                SyntaxFactory::CreateInitializerDeclarator(
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                    nullptr),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorEqualWithInitializer()
        {
            // a = 2
            auto uut = SyntaxFactory::CreateInitializerDeclarator(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateValueEqualInitializer(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2"))))->CreateOuter(nullptr);

            TestUtils::AreEqual(
                SyntaxFactory::CreateInitializerDeclarator(
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                    SyntaxFactory::CreateValueEqualInitializer(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                        SyntaxFactory::CreateLiteralExpression(
                            LiteralType::Integer,
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")))),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualDeclarator()
        {
            // a = 2
            auto uut = SyntaxFactory::CreateInitializerDeclarator(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateValueEqualInitializer(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2"))))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateInitializerDeclarator(
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                    SyntaxFactory::CreateValueEqualInitializer(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                        SyntaxFactory::CreateLiteralExpression(
                            LiteralType::Integer,
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")))),
                uut,
                "Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualNoInitializer()
        {
            // a = 2
            auto uut = SyntaxFactory::CreateInitializerDeclarator(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateValueEqualInitializer(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2"))))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateInitializerDeclarator(
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                    nullptr),
                uut,
                "Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualWithInitializer()
        {
            // a = 2
            auto uut = SyntaxFactory::CreateInitializerDeclarator(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateValueEqualInitializer(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2"))))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateInitializerDeclarator(
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                    SyntaxFactory::CreateValueEqualInitializer(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                        SyntaxFactory::CreateLiteralExpression(
                            LiteralType::Integer,
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "3")))),
                uut,
                "Verify does not match.");
        }
    };
}
