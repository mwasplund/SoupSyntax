#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class InnerTreeAttributeSpecifierTests
    {
    public:
        [[Fact]]
        void InitializeSimple()
        {
            // [ [] ]
            auto uut = SyntaxFactory::CreateAttributeSpecifier(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateKeywordToken(
                    SyntaxTokenType::OpenBracket,
                    {
                        SyntaxFactory::CreateTrivia(" "),
                    },
                    {}),
                SyntaxFactory::CreateSyntaxSeparatorList<Attribute>({}, {}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                SyntaxFactory::CreateKeywordToken(
                    SyntaxTokenType::CloseBracket,
                    {
                        SyntaxFactory::CreateTrivia(" "),
                    },
                    {}));

            Assert::AreEqual(
                SyntaxNodeType::AttributeSpecifier,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                uut->GetOuterOpenBracketToken(),
                "Verify outer open bracket token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(
                    SyntaxTokenType::OpenBracket,
                    {
                        SyntaxFactory::CreateTrivia(" "),
                    },
                    {}),
                uut->GetInnerOpenBracketToken(),
                "Verify inner open bracket token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateSyntaxSeparatorList<Attribute>({}, {}),
                uut->GetAttributes(),
                "Verify attributes match.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                uut->GetInnerCloseBracketToken(),
                "Verify inner close bracket token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(
                    SyntaxTokenType::CloseBracket,
                    {
                        SyntaxFactory::CreateTrivia(" "),
                    },
                    {}),
                uut->GetOuterCloseBracketToken(),
                "Verify outer close bracket token matches.");
        }

        [[Fact]]
        void InitializeComplex()
        {
            // [ [a,b] ]
            auto uut = SyntaxFactory::CreateAttributeSpecifier(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateKeywordToken(
                    SyntaxTokenType::OpenBracket,
                    {
                        SyntaxFactory::CreateTrivia(" "),
                    },
                    {}),
                SyntaxFactory::CreateSyntaxSeparatorList<Attribute>(
                    {
                        SyntaxFactory::CreateAttribute(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                        SyntaxFactory::CreateAttribute(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                    },
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                SyntaxFactory::CreateKeywordToken(
                    SyntaxTokenType::CloseBracket,
                    {
                        SyntaxFactory::CreateTrivia(" "),
                    },
                    {}));

            Assert::AreEqual(
                SyntaxNodeType::AttributeSpecifier,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                uut->GetOuterOpenBracketToken(),
                "Verify outer open bracket token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(
                    SyntaxTokenType::OpenBracket,
                    {
                        SyntaxFactory::CreateTrivia(" "),
                    },
                    {}),
                uut->GetInnerOpenBracketToken(),
                "Verify inner open bracket token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateSyntaxSeparatorList<Attribute>(
                    {
                        SyntaxFactory::CreateAttribute(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                        SyntaxFactory::CreateAttribute(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                    },
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    }),
                uut->GetAttributes(),
                "Verify attributes match.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                uut->GetInnerCloseBracketToken(),
                "Verify inner close bracket token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(
                    SyntaxTokenType::CloseBracket,
                    {
                        SyntaxFactory::CreateTrivia(" "),
                    },
                    {}),
                uut->GetOuterCloseBracketToken(),
                "Verify outer close bracket token matches.");
        }

        [[Fact]]
        void OperatorEqual()
        {
            // [ [a,b] ]
            auto uut = SyntaxFactory::CreateAttributeSpecifier(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateKeywordToken(
                    SyntaxTokenType::OpenBracket,
                    {
                        SyntaxFactory::CreateTrivia(" "),
                    },
                    {}),
                SyntaxFactory::CreateSyntaxSeparatorList<Attribute>(
                    {
                        SyntaxFactory::CreateAttribute(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                        SyntaxFactory::CreateAttribute(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                    },
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                SyntaxFactory::CreateKeywordToken(
                    SyntaxTokenType::CloseBracket,
                    {
                        SyntaxFactory::CreateTrivia(" "),
                    },
                    {}));

            TestUtils::AreEqual(
                SyntaxFactory::CreateAttributeSpecifier(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::OpenBracket,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {}),
                    SyntaxFactory::CreateSyntaxSeparatorList<Attribute>(
                        {
                            SyntaxFactory::CreateAttribute(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                            SyntaxFactory::CreateAttribute(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                        },
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        }),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::CloseBracket,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {})),
                uut,
                "Verify matches.");
        }

        [[Fact]]
        void OperatorNotEqualOuterOpenBracketToken()
        {
            // [[a]]
            auto uut = SyntaxFactory::CreateAttributeSpecifier(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateSyntaxSeparatorList<Attribute>(
                    {
                        SyntaxFactory::CreateAttribute(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                    },
                    {}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateAttributeSpecifier(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::OpenBracket,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                    SyntaxFactory::CreateSyntaxSeparatorList<Attribute>(
                        {
                            SyntaxFactory::CreateAttribute(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket)),
                uut,
                "Verify does not match.");
        }

        [[Fact]]
        void OperatorNotEqualInnerOpenBracketToken()
        {
            // [[a]]
            auto uut = SyntaxFactory::CreateAttributeSpecifier(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateSyntaxSeparatorList<Attribute>(
                    {
                        SyntaxFactory::CreateAttribute(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                    },
                    {}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateAttributeSpecifier(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::OpenBracket,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {}),
                    SyntaxFactory::CreateSyntaxSeparatorList<Attribute>(
                        {
                            SyntaxFactory::CreateAttribute(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket)),
                uut,
                "Verify does not match.");
        }

        [[Fact]]
        void OperatorNotEqualAttributes()
        {
            // [[a]]
            auto uut = SyntaxFactory::CreateAttributeSpecifier(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateSyntaxSeparatorList<Attribute>(
                    {
                        SyntaxFactory::CreateAttribute(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                    },
                    {}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateAttributeSpecifier(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                    SyntaxFactory::CreateSyntaxSeparatorList<Attribute>(
                        {
                            SyntaxFactory::CreateAttribute(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket)),
                uut,
                "Verify does not match.");
        }

        [[Fact]]
        void OperatorNotEqualInnerCloseBracketToken()
        {
            // [[a]]
            auto uut = SyntaxFactory::CreateAttributeSpecifier(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateSyntaxSeparatorList<Attribute>(
                    {
                        SyntaxFactory::CreateAttribute(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                    },
                    {}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateAttributeSpecifier(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                    SyntaxFactory::CreateSyntaxSeparatorList<Attribute>(
                        {
                            SyntaxFactory::CreateAttribute(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::CloseBracket,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket)),
                uut,
                "Verify does not match.");
        }

        [[Fact]]
        void OperatorNotEqualOuterCloseBracketToken()
        {
            // [[a]]
            auto uut = SyntaxFactory::CreateAttributeSpecifier(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateSyntaxSeparatorList<Attribute>(
                    {
                        SyntaxFactory::CreateAttribute(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                    },
                    {}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateAttributeSpecifier(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                    SyntaxFactory::CreateSyntaxSeparatorList<Attribute>(
                        {
                            SyntaxFactory::CreateAttribute(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::CloseBracket,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {})),
                uut,
                "Verify does not match.");
        }
    };
}
