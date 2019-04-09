#pragma once
#include "TestUtils.h"
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class AttributeSpecifierTests
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
                        SyntaxFactory::CreateTrivia(" ", TextSpan()),
                    },
                    {}),
                std::make_shared<const SyntaxSeparatorList<Attribute>>(
                    std::vector<std::shared_ptr<const Attribute>>(),
                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                SyntaxFactory::CreateKeywordToken(
                    SyntaxTokenType::CloseBracket,
                    {
                        SyntaxFactory::CreateTrivia(" ", TextSpan()),
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
                        SyntaxFactory::CreateTrivia(" ", TextSpan()),
                    },
                    {}),
                uut->GetInnerOpenBracketToken(),
                "Verify inner open bracket token matches.");
            Assert::AreEqual(
                *std::make_shared<const SyntaxSeparatorList<Attribute>>(
                    std::vector<std::shared_ptr<const Attribute>>(),
                    std::vector<std::shared_ptr<const SyntaxToken>>()),
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
                        SyntaxFactory::CreateTrivia(" ", TextSpan()),
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
                        SyntaxFactory::CreateTrivia(" ", TextSpan()),
                    },
                    {}),
                std::make_shared<const SyntaxSeparatorList<Attribute>>(
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
                        SyntaxFactory::CreateTrivia(" ", TextSpan()),
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
                        SyntaxFactory::CreateTrivia(" ", TextSpan()),
                    },
                    {}),
                uut->GetInnerOpenBracketToken(),
                "Verify inner open bracket token matches.");
            Assert::AreEqual(
                *std::make_shared<const SyntaxSeparatorList<Attribute>>(
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
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                uut->GetInnerCloseBracketToken(),
                "Verify inner close bracket token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(
                    SyntaxTokenType::CloseBracket,
                    {
                        SyntaxFactory::CreateTrivia(" ", TextSpan()),
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
                        SyntaxFactory::CreateTrivia(" ", TextSpan()),
                    },
                    {}),
                std::make_shared<const SyntaxSeparatorList<Attribute>>(
                    std::vector<std::shared_ptr<const Attribute>>(),
                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                SyntaxFactory::CreateKeywordToken(
                    SyntaxTokenType::CloseBracket,
                    {
                        SyntaxFactory::CreateTrivia(" ", TextSpan()),
                    },
                    {}));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket)),
                    SyntaxNodeChild(
                        SyntaxFactory::CreateKeywordToken(
                            SyntaxTokenType::OpenBracket,
                            {
                                SyntaxFactory::CreateTrivia(" ", TextSpan()),
                            },
                            {})),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket)),
                    SyntaxNodeChild(
                        SyntaxFactory::CreateKeywordToken(
                            SyntaxTokenType::CloseBracket,
                            {
                                SyntaxFactory::CreateTrivia(" ", TextSpan()),
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
                        SyntaxFactory::CreateTrivia(" ", TextSpan()),
                    },
                    {}),
                std::make_shared<const SyntaxSeparatorList<Attribute>>(
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
                        SyntaxFactory::CreateTrivia(" ", TextSpan()),
                    },
                    {}));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket)),
                    SyntaxNodeChild(
                        SyntaxFactory::CreateKeywordToken(
                            SyntaxTokenType::OpenBracket,
                            {
                                SyntaxFactory::CreateTrivia(" ", TextSpan()),
                            },
                            {})),
                    SyntaxNodeChild(
                        SyntaxFactory::CreateAttribute(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)),
                    SyntaxNodeChild(
                        SyntaxFactory::CreateAttribute(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket)),
                    SyntaxNodeChild(
                        SyntaxFactory::CreateKeywordToken(
                            SyntaxTokenType::CloseBracket,
                            {
                                SyntaxFactory::CreateTrivia(" ", TextSpan()),
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
                        SyntaxFactory::CreateTrivia(" ", TextSpan()),
                    },
                    {}),
                std::make_shared<const SyntaxSeparatorList<Attribute>>(
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
                        SyntaxFactory::CreateTrivia(" ", TextSpan()),
                    },
                    {}));

            TestUtils::AreEqual(
                SyntaxFactory::CreateAttributeSpecifier(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::OpenBracket,
                        {
                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                        },
                        {}),
                    std::make_shared<const SyntaxSeparatorList<Attribute>>(
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
                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
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
                std::make_shared<const SyntaxSeparatorList<Attribute>>(
                    std::vector<std::shared_ptr<const Attribute>>({
                        SyntaxFactory::CreateAttribute(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateAttributeSpecifier(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::OpenBracket,
                        {
                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                    std::make_shared<const SyntaxSeparatorList<Attribute>>(
                        std::vector<std::shared_ptr<const Attribute>>({
                            SyntaxFactory::CreateAttribute(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>()),
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
                std::make_shared<const SyntaxSeparatorList<Attribute>>(
                    std::vector<std::shared_ptr<const Attribute>>({
                        SyntaxFactory::CreateAttribute(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateAttributeSpecifier(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::OpenBracket,
                        {
                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                        },
                        {}),
                    std::make_shared<const SyntaxSeparatorList<Attribute>>(
                        std::vector<std::shared_ptr<const Attribute>>({
                            SyntaxFactory::CreateAttribute(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>()),
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
                std::make_shared<const SyntaxSeparatorList<Attribute>>(
                    std::vector<std::shared_ptr<const Attribute>>({
                        SyntaxFactory::CreateAttribute(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateAttributeSpecifier(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                    std::make_shared<const SyntaxSeparatorList<Attribute>>(
                        std::vector<std::shared_ptr<const Attribute>>({
                            SyntaxFactory::CreateAttribute(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>()),
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
                std::make_shared<const SyntaxSeparatorList<Attribute>>(
                    std::vector<std::shared_ptr<const Attribute>>({
                        SyntaxFactory::CreateAttribute(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateAttributeSpecifier(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                    std::make_shared<const SyntaxSeparatorList<Attribute>>(
                        std::vector<std::shared_ptr<const Attribute>>({
                            SyntaxFactory::CreateAttribute(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>()),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::CloseBracket,
                        {
                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
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
                std::make_shared<const SyntaxSeparatorList<Attribute>>(
                    std::vector<std::shared_ptr<const Attribute>>({
                        SyntaxFactory::CreateAttribute(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateAttributeSpecifier(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                    std::make_shared<const SyntaxSeparatorList<Attribute>>(
                        std::vector<std::shared_ptr<const Attribute>>({
                            SyntaxFactory::CreateAttribute(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>()),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::CloseBracket,
                        {
                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                        },
                        {})),
                uut,
                "Verify does not match.");
        }
    };
}
