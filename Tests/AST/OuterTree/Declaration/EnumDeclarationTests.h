#pragma once
#include "TestUtils.h"
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class OuterTreeEnumDeclarationTests
    {
    public:
        [[Fact]]
        void InitializeNoClassOrIdentifier()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                nullptr,
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>({}, {}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::EnumDeclaration,
                uut->GetType(),
                "Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                uut->GetEnumToken(),
                "Verify enum token matches.");
            Assert::IsFalse(
                uut->HasClassToken(),
                "Verify has no class token.");
            Assert::IsFalse(
                uut->HasIdentifierToken(),
                "Verify has no identifier token.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                uut->GetOpenBraceToken(),
                "Verify left brace token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>({}, {}),
                uut->GetEnumeratorList(),
                "Verify enumerator list matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace),
                uut->GetCloseBraceToken(),
                "Verify right brace token matches.");
        }

        [[Fact]]
        void InitializeWithClassAndIdentifier()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyEnum"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                    {
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
                    },
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::EnumDeclaration,
                uut->GetType(),
                "Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                uut->GetEnumToken(),
                "Verify enum token matches.");
            Assert::IsTrue(
                uut->HasClassToken(),
                "Verify has class token.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                uut->GetClassToken(),
                "Verify class token matches.");
            Assert::IsTrue(
                uut->HasIdentifierToken(),
                "Verify has identifier token.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyEnum"),
                uut->GetIdentifierToken(),
                "Verify identifier token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                uut->GetOpenBraceToken(),
                "Verify left brace token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                    {
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
                    },
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    }),
                uut->GetEnumeratorList(),
                "Verify enumerator list matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace),
                uut->GetCloseBraceToken(),
                "Verify right brace token matches.");
        }

        [[Fact]]
        void GetChildrenNoClassOrIdentifier()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                nullptr,
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>({}, {}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>(
                {
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum)),
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace)),
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        [[Fact]]
        void GetChildrenWithClassAndIdentifier()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyEnum"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                    {
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
                    },
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>(
                {
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum)),
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class)),
                    TestUtils::CreateChild(SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyEnum")),
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace)),
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1"))),
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)),
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2"))),
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        [[Fact]]
        void OperatorEqualNoClassOrIdentifier()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                nullptr,
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>({}, {}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

            TestUtils::AreEqual(
                SyntaxFactory::CreateEnumDeclaration(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                    nullptr,
                    nullptr,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>({}, {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify matches.");
        }

        [[Fact]]
        void OperatorEqualWithClassAndIdentifier()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyEnum"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                    {
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
                    },
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

            TestUtils::AreEqual(
                SyntaxFactory::CreateEnumDeclaration(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyEnum"),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                        {
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
                        },
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        }),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify matches.");
        }

        [[Fact]]
        void OperatorNotEqualEnumToken()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyEnum"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                    {
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
                    },
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

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
                        {
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
                        },
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        }),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void OperatorNotEqualNoClass()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyEnum"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                    {
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
                    },
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateEnumDeclaration(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                    nullptr,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyEnum"),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                        {
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
                        },
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        }),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void OperatorNotEqualWithClass()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyEnum"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                    {
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
                    },
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

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
                        {
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
                        },
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        }),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void OperatorNotEqualNoIdentifier()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyEnum"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                    {
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
                    },
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateEnumDeclaration(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                    nullptr,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                        {
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
                        },
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        }),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void OperatorNotEqualWithIdentifier()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyEnum"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                    {
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
                    },
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateEnumDeclaration(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyEnum2"),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                        {
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
                        },
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        }),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void OperatorNotEqualOpenBraceToken()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyEnum"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                    {
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
                    },
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

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
                        {
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
                        },
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        }),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void OperatorNotEqualEnumeratorList()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyEnum"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                    {
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
                    },
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

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
                        {
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1"))
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void OperatorNotEqualCloseBraceToken()
        {
            auto uut = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyEnum"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                    {
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
                    },
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateEnumDeclaration(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyEnum"),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                        {
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                            SyntaxFactory::CreateEnumeratorDefinition(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value2")),
                        },
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        }),
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
