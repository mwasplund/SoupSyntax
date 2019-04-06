#pragma once
#include "TestUtils.h"
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class ClassDeclarationTests
    {
    public:
        // [[Fact]]
        void InitializeNoIdentifier()
        {
            auto uut = SyntaxFactory::CreateClassDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {})),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            Assert::AreEqual(
                SyntaxNodeType::ClassDeclaration,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                uut->GetClassToken(),
                "Verify class token matches.");
            Assert::IsFalse(
                uut->HasIdentifierToken(),
                "Verify has no identifier token.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                uut->GetOpenBraceToken(),
                "Verify left brace token matches.");
            Assert::AreEqual(
                *std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {})),
                uut->GetMemberDeclarations(),
                "Verify member declarations list matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace),
                uut->GetCloseBraceToken(),
                "Verify right brace token matches.");
        }

        // [[Fact]]
        void InitializeWithIdentifier()
        {
            auto uut = SyntaxFactory::CreateClassDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {
                        SyntaxFactory::CreateAccessorSpecifier(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Public),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon)),
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            Assert::AreEqual(
                SyntaxNodeType::ClassDeclaration,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                uut->GetClassToken(),
                "Verify class token matches.");
            Assert::IsTrue(
                uut->HasIdentifierToken(),
                "Verify has identifier token.");
            Assert::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"),
                uut->GetIdentifierToken(),
                "Verify identifier token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                uut->GetOpenBraceToken(),
                "Verify left brace token matches.");
            Assert::AreEqual(
                *std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {
                        SyntaxFactory::CreateAccessorSpecifier(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Public),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon)),
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                uut->GetMemberDeclarations(),
                "Verify member declarations list matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace),
                uut->GetCloseBraceToken(),
                "Verify right brace token matches.");
        }

        // [[Fact]]
        void GetChildrenNoIdentifier()
        {
            auto uut = SyntaxFactory::CreateClassDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {})),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class)),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace)),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void GetChildrenWithIdentifier()
        {
            auto uut = SyntaxFactory::CreateClassDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {
                        SyntaxFactory::CreateAccessorSpecifier(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Public),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon)),
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class)),
                    SyntaxNodeChild(SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass")),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace)),
                    SyntaxNodeChild(
                        SyntaxFactory::CreateAccessorSpecifier(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Public),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon))),
                    SyntaxNodeChild(
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void OperatorEqualNoIdentifier()
        {
            auto uut = SyntaxFactory::CreateClassDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {})),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreEqual(
                SyntaxFactory::CreateClassDeclaration(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                    nullptr,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    std::make_shared<const SyntaxList<Declaration>>(
                        std::vector<std::shared_ptr<const Declaration>>(
                        {})),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorEqualWithIdentifier()
        {
            auto uut = SyntaxFactory::CreateClassDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {
                        SyntaxFactory::CreateAccessorSpecifier(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Public),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon)),
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreEqual(
                SyntaxFactory::CreateClassDeclaration(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    std::make_shared<const SyntaxList<Declaration>>(
                        std::vector<std::shared_ptr<const Declaration>>(
                        {
                            SyntaxFactory::CreateAccessorSpecifier(
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Public),
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon)),
                            SyntaxFactory::CreateEmptyDeclaration(
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualClassToken()
        {
            auto uut = SyntaxFactory::CreateClassDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {
                        SyntaxFactory::CreateAccessorSpecifier(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Public),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon)),
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateClassDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Struct),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {
                        SyntaxFactory::CreateAccessorSpecifier(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Public),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon)),
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualNoIdentifier()
        {
            auto uut = SyntaxFactory::CreateClassDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateClassDeclaration(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                    nullptr,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    std::make_shared<const SyntaxList<Declaration>>(
                        std::vector<std::shared_ptr<const Declaration>>(
                        {
                            SyntaxFactory::CreateEmptyDeclaration(
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualWithIdentifier()
        {
            auto uut = SyntaxFactory::CreateClassDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateClassDeclaration(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass2"),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    std::make_shared<const SyntaxList<Declaration>>(
                        std::vector<std::shared_ptr<const Declaration>>(
                        {
                            SyntaxFactory::CreateEmptyDeclaration(
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualOpenBraceToken()
        {
            auto uut = SyntaxFactory::CreateClassDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateClassDeclaration(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::OpenBrace,
                        {
                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                        },
                        {}),
                    std::make_shared<const SyntaxList<Declaration>>(
                        std::vector<std::shared_ptr<const Declaration>>(
                        {
                            SyntaxFactory::CreateEmptyDeclaration(
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualMemberDeclarations()
        {
            auto uut = SyntaxFactory::CreateClassDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateClassDeclaration(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    std::make_shared<const SyntaxList<Declaration>>(
                        std::vector<std::shared_ptr<const Declaration>>(
                        {})),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualCloseBraceToken()
        {
            auto uut = SyntaxFactory::CreateClassDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateClassDeclaration(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    std::make_shared<const SyntaxList<Declaration>>(
                        std::vector<std::shared_ptr<const Declaration>>(
                        {
                            SyntaxFactory::CreateEmptyDeclaration(
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                        })),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::CloseBrace,
                        {
                            SyntaxFactory::CreateTrivia(" ", TextSpan(0, 1)),
                        },
                        {})),
                uut,
                "Verify do not match.");
        }
    };
}
