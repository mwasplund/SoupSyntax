#pragma once
#include "TestUtils.h"
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class OuterTreeAttributeSpecifierTests
    {
    public:
        // [[Fact]]
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
                    {}))->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::AttributeSpecifier,
                uut->GetType(),
                "Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                uut->GetOuterOpenBracketToken(),
                "Verify outer open bracket token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(
                    SyntaxTokenType::OpenBracket,
                    {
                        SyntaxFactory::CreateTrivia(" "),
                    },
                    {}),
                uut->GetInnerOpenBracketToken(),
                "Verify inner open bracket token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSyntaxSeparatorList<Attribute>({}, {}),
                uut->GetAttributes(),
                "Verify attributes match.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                uut->GetInnerCloseBracketToken(),
                "Verify inner close bracket token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(
                    SyntaxTokenType::CloseBracket,
                    {
                        SyntaxFactory::CreateTrivia(" "),
                    },
                    {}),
                uut->GetOuterCloseBracketToken(),
                "Verify outer close bracket token matches.");
        }

        // [[Fact]]
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
                    std::vector<std::shared_ptr<const Attribute>>({
                        SyntaxFactory::CreateAttribute(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                        SyntaxFactory::CreateAttribute(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                SyntaxFactory::CreateKeywordToken(
                    SyntaxTokenType::CloseBracket,
                    {
                        SyntaxFactory::CreateTrivia(" "),
                    },
                    {}))->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::AttributeSpecifier,
                uut->GetType(),
                "Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                uut->GetOuterOpenBracketToken(),
                "Verify outer open bracket token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(
                    SyntaxTokenType::OpenBracket,
                    {
                        SyntaxFactory::CreateTrivia(" "),
                    },
                    {}),
                uut->GetInnerOpenBracketToken(),
                "Verify inner open bracket token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSyntaxSeparatorList<Attribute>(
                    std::vector<std::shared_ptr<const Attribute>>({
                        SyntaxFactory::CreateAttribute(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                        SyntaxFactory::CreateAttribute(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    })),
                uut->GetAttributes(),
                "Verify attributes match.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                uut->GetInnerCloseBracketToken(),
                "Verify inner close bracket token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(
                    SyntaxTokenType::CloseBracket,
                    {
                        SyntaxFactory::CreateTrivia(" "),
                    },
                    {}),
                uut->GetOuterCloseBracketToken(),
                "Verify outer close bracket token matches.");
        }

        // [[Fact]]
        void GetChildrenSimple()
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
                    {}))->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>({
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket)),
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateKeywordToken(
                            SyntaxTokenType::OpenBracket,
                            {
                                SyntaxFactory::CreateTrivia(" "),
                            },
                            {})),
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket)),
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateKeywordToken(
                            SyntaxTokenType::CloseBracket,
                            {
                                SyntaxFactory::CreateTrivia(" "),
                            },
                            {})),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void GetChildrenComplex()
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
                    std::vector<std::shared_ptr<const Attribute>>({
                        SyntaxFactory::CreateAttribute(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                        SyntaxFactory::CreateAttribute(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                SyntaxFactory::CreateKeywordToken(
                    SyntaxTokenType::CloseBracket,
                    {
                        SyntaxFactory::CreateTrivia(" "),
                    },
                    {}))->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>({
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket)),
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateKeywordToken(
                            SyntaxTokenType::OpenBracket,
                            {
                                SyntaxFactory::CreateTrivia(" "),
                            },
                            {})),
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateAttribute(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)),
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateAttribute(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))),
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket)),
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateKeywordToken(
                            SyntaxTokenType::CloseBracket,
                            {
                                SyntaxFactory::CreateTrivia(" "),
                            },
                            {})),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
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
                    std::vector<std::shared_ptr<const Attribute>>({
                        SyntaxFactory::CreateAttribute(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                        SyntaxFactory::CreateAttribute(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                SyntaxFactory::CreateKeywordToken(
                    SyntaxTokenType::CloseBracket,
                    {
                        SyntaxFactory::CreateTrivia(" "),
                    },
                    {}))->CreateOuter(nullptr);

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
                        std::vector<std::shared_ptr<const Attribute>>({
                            SyntaxFactory::CreateAttribute(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                            SyntaxFactory::CreateAttribute(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>({
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        })),
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

        // [[Fact]]
        void OperatorNotEqualOuterOpenBracketToken()
        {
            // [[a]]
            auto uut = SyntaxFactory::CreateAttributeSpecifier(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateSyntaxSeparatorList<Attribute>(
                    std::vector<std::shared_ptr<const Attribute>>({
                        SyntaxFactory::CreateAttribute(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                    }),
                    {}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket))->CreateOuter(nullptr);

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
                        std::vector<std::shared_ptr<const Attribute>>({
                            SyntaxFactory::CreateAttribute(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                        }),
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket)),
                uut,
                "Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualInnerOpenBracketToken()
        {
            // [[a]]
            auto uut = SyntaxFactory::CreateAttributeSpecifier(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateSyntaxSeparatorList<Attribute>(
                    std::vector<std::shared_ptr<const Attribute>>({
                        SyntaxFactory::CreateAttribute(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                    }),
                    {}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket))->CreateOuter(nullptr);

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
                        std::vector<std::shared_ptr<const Attribute>>({
                            SyntaxFactory::CreateAttribute(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                        }),
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket)),
                uut,
                "Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualAttributes()
        {
            // [[a]]
            auto uut = SyntaxFactory::CreateAttributeSpecifier(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateSyntaxSeparatorList<Attribute>(
                    std::vector<std::shared_ptr<const Attribute>>({
                        SyntaxFactory::CreateAttribute(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                    }),
                    {}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateAttributeSpecifier(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                    SyntaxFactory::CreateSyntaxSeparatorList<Attribute>(
                        std::vector<std::shared_ptr<const Attribute>>({
                            SyntaxFactory::CreateAttribute(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                        }),
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket)),
                uut,
                "Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualInnerCloseBracketToken()
        {
            // [[a]]
            auto uut = SyntaxFactory::CreateAttributeSpecifier(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateSyntaxSeparatorList<Attribute>(
                    std::vector<std::shared_ptr<const Attribute>>({
                        SyntaxFactory::CreateAttribute(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                    }),
                    {}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateAttributeSpecifier(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                    SyntaxFactory::CreateSyntaxSeparatorList<Attribute>(
                        std::vector<std::shared_ptr<const Attribute>>({
                            SyntaxFactory::CreateAttribute(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                        }),
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

        // [[Fact]]
        void OperatorNotEqualOuterCloseBracketToken()
        {
            // [[a]]
            auto uut = SyntaxFactory::CreateAttributeSpecifier(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateSyntaxSeparatorList<Attribute>(
                    std::vector<std::shared_ptr<const Attribute>>({
                        SyntaxFactory::CreateAttribute(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                    }),
                    {}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateAttributeSpecifier(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                    SyntaxFactory::CreateSyntaxSeparatorList<Attribute>(
                        std::vector<std::shared_ptr<const Attribute>>({
                            SyntaxFactory::CreateAttribute(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                        }),
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
