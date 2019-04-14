#pragma once
#include "TestUtils.h"
#include "SoupAssert.h"

namespace Soup::Syntax::OuterTree::UnitTests
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
                SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                    std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                    {}),
                    std::vector<std::shared_ptr<const SyntaxToken>>(
                    {})),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            Assert::AreEqual(
                SyntaxNodeType::EnumDeclaration,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                uut->GetEnumToken(),
                "Verify enum token matches.");
            Assert::IsFalse(
                uut->HasClassToken(),
                "Verify has no class token.");
            Assert::IsFalse(
                uut->HasIdentifierToken(),
                "Verify has no identifier token.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                uut->GetOpenBraceToken(),
                "Verify left brace token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                    std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                    {}),
                    std::vector<std::shared_ptr<const SyntaxToken>>(
                    {})),
                uut->GetEnumeratorList(),
                "Verify enumerator list matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace),
                uut->GetCloseBraceToken(),
                "Verify right brace token matches.");
        }

        // [[Fact]]
        void InitializeWithClassAndIdentifier()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyEnum"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                    std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                    {
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>(
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            Assert::AreEqual(
                SyntaxNodeType::EnumDeclaration,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                uut->GetEnumToken(),
                "Verify enum token matches.");
            Assert::IsTrue(
                uut->HasClassToken(),
                "Verify has class token.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                uut->GetClassToken(),
                "Verify class token matches.");
            Assert::IsTrue(
                uut->HasIdentifierToken(),
                "Verify has identifier token.");
            Assert::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyEnum"),
                uut->GetIdentifierToken(),
                "Verify identifier token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                uut->GetOpenBraceToken(),
                "Verify left brace token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                    std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                    {
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>(
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    })),
                uut->GetEnumeratorList(),
                "Verify enumerator list matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace),
                uut->GetCloseBraceToken(),
                "Verify right brace token matches.");
        }

        // [[Fact]]
        void GetChildrenNoClassOrIdentifier()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                nullptr,
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
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
                "Verify children match.");
        }

        // [[Fact]]
        void GetChildrenWithClassAndIdentifier()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyEnum"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                    std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                    {
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
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
                    SyntaxNodeChild(SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyEnum")),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace)),
                    SyntaxNodeChild(
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1"))),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)),
                    SyntaxNodeChild(
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2"))),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void OperatorEqualNoClassOrIdentifier()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                nullptr,
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
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
                    SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                        std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                        {}),
                        std::vector<std::shared_ptr<const SyntaxToken>>(
                        {})),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorEqualWithClassAndIdentifier()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyEnum"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                    std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                    {
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
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
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyEnum"),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                        std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                        {
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>(
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualEnumToken()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyEnum"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                    std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                    {
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
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
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyEnum"),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                        std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                        {
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>(
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualNoClass()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyEnum"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                    std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                    {
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
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
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyEnum"),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                        std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                        {
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>(
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualWithClass()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyEnum"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                    std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                    {
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
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
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {}),
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyEnum"),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                        std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                        {
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>(
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualNoIdentifier()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyEnum"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                    std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                    {
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
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
                    SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                        std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                        {
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>(
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualWithIdentifier()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyEnum"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                    std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                    {
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
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
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyEnum2"),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                        std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                        {
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>(
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualOpenBraceToken()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyEnum"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                    std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                    {
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
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
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyEnum"),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::OpenBrace,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {}),
                    SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                        std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                        {
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>(
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualEnumeratorList()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyEnum"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                    std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                    {
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
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
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyEnum"),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::OpenBrace,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {}),
                    SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                        std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                        {
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1"))
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>(
                        {})),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualCloseBraceToken()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyEnum"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                    std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                    {
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
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
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyEnum"),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                        std::vector<std::shared_ptr<const EnumeratorDefinition>>(
                        {
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>(
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        })),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::CloseBrace,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {})),
                uut,
                "Verify do not match.");
        }
    };
}
