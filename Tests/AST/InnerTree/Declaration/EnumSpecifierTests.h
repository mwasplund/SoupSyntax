#pragma once
#include "TestUtils.h"
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class InnerTreeEnumSpecifierTests
    {
    public:
        [[Fact]]
        void InitializeNoClassOrIdentifier()
        {
            auto uut = SyntaxFactory::CreateEnumSpecifier(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                nullptr,
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>({}, {}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            Assert::AreEqual(
                SyntaxNodeType::EnumSpecifier,
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
                *SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>({}, {}),
                uut->GetEnumeratorList(),
                "Verify enumerator list matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace),
                uut->GetCloseBraceToken(),
                "Verify right brace token matches.");
        }

        [[Fact]]
        void InitializeWithClassAndIdentifier()
        {
            auto uut = SyntaxFactory::CreateEnumSpecifier(
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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            Assert::AreEqual(
                SyntaxNodeType::EnumSpecifier,
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
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace),
                uut->GetCloseBraceToken(),
                "Verify right brace token matches.");
        }

        [[Fact]]
        void OperatorEqualNoClassOrIdentifier()
        {
            auto uut = SyntaxFactory::CreateEnumSpecifier(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                nullptr,
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>({}, {}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreEqual(
                SyntaxFactory::CreateEnumSpecifier(
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
            auto uut = SyntaxFactory::CreateEnumSpecifier(
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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreEqual(
                SyntaxFactory::CreateEnumSpecifier(
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
            auto uut = SyntaxFactory::CreateEnumSpecifier(
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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateEnumSpecifier(
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
            auto uut = SyntaxFactory::CreateEnumSpecifier(
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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateEnumSpecifier(
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
            auto uut = SyntaxFactory::CreateEnumSpecifier(
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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateEnumSpecifier(
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
            auto uut = SyntaxFactory::CreateEnumSpecifier(
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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateEnumSpecifier(
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
            auto uut = SyntaxFactory::CreateEnumSpecifier(
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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateEnumSpecifier(
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
            auto uut = SyntaxFactory::CreateEnumSpecifier(
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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateEnumSpecifier(
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
            auto uut = SyntaxFactory::CreateEnumSpecifier(
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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateEnumSpecifier(
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
            auto uut = SyntaxFactory::CreateEnumSpecifier(
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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateEnumSpecifier(
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
