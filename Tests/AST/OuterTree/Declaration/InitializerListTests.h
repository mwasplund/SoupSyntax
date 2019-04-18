#pragma once
#include "TestUtils.h"
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class OuterTreeInitializerListTests
    {
    public:
        // [[Fact]]
        void InitializeSimple()
        {
            // (a, b)
            auto uut = SyntaxFactory::CreateInitializerList(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                    {
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))
                    },
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::InitializerList,
                uut->GetType(),
                "Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                uut->GetOpenToken(),
                "Verify open token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                    {
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))
                    },
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                    }),
                uut->GetValues(),
                "Verify values match.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
                uut->GetCloseToken(),
                "Verify right token matches.");
        }

        // [[Fact]]
        void GetChildren()
        {
            // (a, b,)
            auto uut = SyntaxFactory::CreateInitializerList(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                    {
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                    },
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>({
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis)),
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)),
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))),
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)),
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            // (a, b)
            auto uut = SyntaxFactory::CreateInitializerList(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                    {
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                    },
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))->CreateOuter(nullptr);

            TestUtils::AreEqual(
                SyntaxFactory::CreateInitializerList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                        {
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                        },
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        }),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualOpenParenthesisToken()
        {
            // (a, b)
            auto uut = SyntaxFactory::CreateInitializerList(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                    {
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                    },
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateInitializerList(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::OpenParenthesis,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {}),
                    SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                        {
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                        },
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        }),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                uut,
                "Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualValues()
        {
            // (a, b)
            auto uut = SyntaxFactory::CreateInitializerList(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                    {
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                    },
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateInitializerList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                        {
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c")),
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                        },
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        }),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                uut,
                "Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualCloseParenthesisToken()
        {
            // (a, b)
            auto uut = SyntaxFactory::CreateInitializerList(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                    {
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                    },
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateInitializerList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                        {
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                        },
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        }),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::CloseParenthesis,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {})),
                uut,
                "Verify does not match.");
        }
    };
}
