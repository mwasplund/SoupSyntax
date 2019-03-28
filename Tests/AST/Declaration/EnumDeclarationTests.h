#pragma once
#include "TestUtils.h"
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class EnumDeclarationTests
    {
    public:
        // [[Fact]]
        void InitializeNoClassOrIdentifier()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                nullptr,
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<EnumeratorDefinition>>(
                    std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                    {}),
                    std::vector<std::shared_ptr<const SyntaxToken>>(
                    {})),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            Assert::AreEqual(
                SyntaxNodeType::EnumDeclaration,
                uut->GetType(),
                L"Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                uut->GetEnumToken(),
                L"Verify enum token matches.");
            Assert::IsFalse(
                uut->HasClassToken(),
                L"Verify has no class token.");
            Assert::IsFalse(
                uut->HasIdentifierToken(),
                L"Verify has no identifier token.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                uut->GetOpenBraceToken(),
                L"Verify left brace token matches.");
            Assert::AreEqual(
                *std::make_shared<const SyntaxList<EnumeratorDefinition>>(
                    std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                    {}),
                    std::vector<std::shared_ptr<const SyntaxToken>>(
                    {})),
                uut->GetEnumeratorList(),
                L"Verify enumerator list matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace),
                uut->GetCloseBraceToken(),
                L"Verify right brace token matches.");
        }

        // [[Fact]]
        void InitializeWithClassAndIdentifier()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"MyEnum"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<EnumeratorDefinition>>(
                    std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                    {
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value1")),
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value2")),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>(
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            Assert::AreEqual(
                SyntaxNodeType::EnumDeclaration,
                uut->GetType(),
                L"Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                uut->GetEnumToken(),
                L"Verify enum token matches.");
            Assert::IsTrue(
                uut->HasClassToken(),
                L"Verify has class token.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                uut->GetClassToken(),
                L"Verify class token matches.");
            Assert::IsTrue(
                uut->HasIdentifierToken(),
                L"Verify has identifier token.");
            Assert::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"MyEnum"),
                uut->GetIdentifierToken(),
                L"Verify identifier token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                uut->GetOpenBraceToken(),
                L"Verify left brace token matches.");
            Assert::AreEqual(
                *std::make_shared<const SyntaxList<EnumeratorDefinition>>(
                    std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                    {
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value1")),
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value2")),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>(
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    })),
                uut->GetEnumeratorList(),
                L"Verify enumerator list matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace),
                uut->GetCloseBraceToken(),
                L"Verify right brace token matches.");
        }

        // [[Fact]]
        void GetChildrenNoClassOrIdentifier()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                nullptr,
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<EnumeratorDefinition>>(
                    std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                    {}),
                    std::vector<std::shared_ptr<const SyntaxToken>>(
                    {})),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum)),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace)),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void GetChildrenWithClassAndIdentifier()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"MyEnum"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<EnumeratorDefinition>>(
                    std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                    {
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value1")),
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value2")),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>(
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum)),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class)),
                    SyntaxNodeChild(SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"MyEnum")),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace)),
                    SyntaxNodeChild(
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value1"))),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)),
                    SyntaxNodeChild(
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value2"))),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void OperatorEqualNoClassOrIdentifier()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                nullptr,
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<EnumeratorDefinition>>(
                    std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                    {}),
                    std::vector<std::shared_ptr<const SyntaxToken>>(
                    {})),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreEqual(
                SyntaxFactory::CreateEnumDeclaration(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                    nullptr,
                    nullptr,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    std::make_shared<const SyntaxList<EnumeratorDefinition>>(
                        std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                        {}),
                        std::vector<std::shared_ptr<const SyntaxToken>>(
                        {})),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorEqualWithClassAndIdentifier()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"MyEnum"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<EnumeratorDefinition>>(
                    std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                    {
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value1")),
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value2")),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>(
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreEqual(
                SyntaxFactory::CreateEnumDeclaration(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"MyEnum"),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    std::make_shared<const SyntaxList<EnumeratorDefinition>>(
                        std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                        {
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value1")),
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value2")),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>(
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualEnumToken()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"MyEnum"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<EnumeratorDefinition>>(
                    std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                    {
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value1")),
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value2")),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>(
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateEnumDeclaration(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Enum,
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan()),
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"MyEnum"),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    std::make_shared<const SyntaxList<EnumeratorDefinition>>(
                        std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                        {
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value1")),
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value2")),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>(
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualNoClass()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"MyEnum"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<EnumeratorDefinition>>(
                    std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                    {
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value1")),
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value2")),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>(
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateEnumDeclaration(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                    nullptr,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"MyEnum"),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    std::make_shared<const SyntaxList<EnumeratorDefinition>>(
                        std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                        {
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value1")),
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value2")),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>(
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualWithClass()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"MyEnum"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<EnumeratorDefinition>>(
                    std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                    {
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value1")),
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value2")),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>(
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateEnumDeclaration(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Class,
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan()),
                        },
                        {}),
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"MyEnum"),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    std::make_shared<const SyntaxList<EnumeratorDefinition>>(
                        std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                        {
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value1")),
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value2")),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>(
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualNoIdentifier()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"MyEnum"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<EnumeratorDefinition>>(
                    std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                    {
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value1")),
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value2")),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>(
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateEnumDeclaration(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                    nullptr,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    std::make_shared<const SyntaxList<EnumeratorDefinition>>(
                        std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                        {
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value1")),
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value2")),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>(
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualWithIdentifier()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"MyEnum"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<EnumeratorDefinition>>(
                    std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                    {
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value1")),
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value2")),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>(
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateEnumDeclaration(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"MyEnum2"),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    std::make_shared<const SyntaxList<EnumeratorDefinition>>(
                        std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                        {
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value1")),
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value2")),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>(
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualOpenBraceToken()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"MyEnum"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<EnumeratorDefinition>>(
                    std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                    {
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value1")),
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value2")),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>(
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateEnumDeclaration(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"MyEnum"),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::OpenBrace,
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan()),
                        },
                        {}),
                    std::make_shared<const SyntaxList<EnumeratorDefinition>>(
                        std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                        {
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value1")),
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value2")),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>(
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualEnumeratorList()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"MyEnum"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<EnumeratorDefinition>>(
                    std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                    {
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value1")),
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value2")),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>(
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateEnumDeclaration(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"MyEnum"),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::OpenBrace,
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan()),
                        },
                        {}),
                    std::make_shared<const SyntaxList<EnumeratorDefinition>>(
                        std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                        {
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value1"))
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>(
                        {})),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualCloseBraceToken()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"MyEnum"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<EnumeratorDefinition>>(
                    std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                    {
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value1")),
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value2")),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>(
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateEnumDeclaration(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"MyEnum"),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    std::make_shared<const SyntaxList<EnumeratorDefinition>>(
                        std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                        {
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value1")),
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Value2")),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>(
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        })),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::CloseBrace,
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 1)),
                        },
                        {})),
                uut,
                L"Verify do not match.");
        }
    };
}
