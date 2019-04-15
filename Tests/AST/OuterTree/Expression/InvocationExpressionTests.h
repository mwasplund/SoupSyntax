#pragma once
#include "TestUtils.h"
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class OuterTreeInvocationExpressionTests
    {
    public:
        // [[Fact]]
        void InitializeSimple()
        {
            // a()
            auto uut = SyntaxFactory::CreateInvocationExpression(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                    std::vector<std::shared_ptr<const Expression>>(),
                    {}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::InvocationExpression,
                uut->GetType(),
                "Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                uut->GetLeftExpression(),
                "Verify left expression matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                uut->GetOpenParenthesisToken(),
                "Verify open parenthesis token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                    std::vector<std::shared_ptr<const Expression>>(),
                    {}),
                uut->GetParameters(),
                "Verify parameters match.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
                uut->GetCloseParenthesisToken(),
                "Verify close parenthesis token matches.");
        }

        // [[Fact]]
        void InitializeComplex()
        {
            // a(b, c)
            auto uut = SyntaxFactory::CreateInvocationExpression(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                    std::vector<std::shared_ptr<const Expression>>(
                    {
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c"))
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::InvocationExpression,
                uut->GetType(),
                "Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                uut->GetLeftExpression(),
                "Verify left expression matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                uut->GetOpenParenthesisToken(),
                "Verify open parenthesis token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                    std::vector<std::shared_ptr<const Expression>>(
                    {
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c"))
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                    })),
                uut->GetParameters(),
                "Verify parameters match.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
                uut->GetCloseParenthesisToken(),
                "Verify close parenthesis token matches.");
        }

        // [[Fact]]
        void GetChildrenSimple()
        {
            // a()
            auto uut = SyntaxFactory::CreateInvocationExpression(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                    std::vector<std::shared_ptr<const Expression>>(),
                    {}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>({
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis)),
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void GetChildrenComplex()
        {
            // a(b, c)
            auto uut = SyntaxFactory::CreateInvocationExpression(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                    std::vector<std::shared_ptr<const Expression>>(
                    {
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c"))
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>({
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis)),
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))),
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)),
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c"))),
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            // a(b, c)
            auto uut = SyntaxFactory::CreateInvocationExpression(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                    std::vector<std::shared_ptr<const Expression>>(
                    {
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c"))
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))->CreateOuter(nullptr);

            TestUtils::AreEqual(
                SyntaxFactory::CreateInvocationExpression(
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                        std::vector<std::shared_ptr<const Expression>>(
                        {
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c"))
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>({
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualLeftExpression()
        {
            // a(b, c)
            auto uut = SyntaxFactory::CreateInvocationExpression(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                    std::vector<std::shared_ptr<const Expression>>(
                    {
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c"))
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateInvocationExpression(
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a2")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                        std::vector<std::shared_ptr<const Expression>>(
                        {
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c"))
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>({
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                uut,
                "Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualOpenParenthesisToken()
        {
            // a(b, c)
            auto uut = SyntaxFactory::CreateInvocationExpression(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                    std::vector<std::shared_ptr<const Expression>>(
                    {
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c"))
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateInvocationExpression(
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::OpenParenthesis,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {}),
                    SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                        std::vector<std::shared_ptr<const Expression>>(
                        {
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c"))
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>({
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                uut,
                "Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualParameters()
        {
            // a(b, c)
            auto uut = SyntaxFactory::CreateInvocationExpression(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                    std::vector<std::shared_ptr<const Expression>>(
                    {
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c"))
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateInvocationExpression(
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                        std::vector<std::shared_ptr<const Expression>>(
                        {
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b2")),
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c"))
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>({
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                uut,
                "Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualCloseParenthesisToken()
        {
            // a(b, c)
            auto uut = SyntaxFactory::CreateInvocationExpression(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                    std::vector<std::shared_ptr<const Expression>>(
                    {
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c"))
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateInvocationExpression(
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                        std::vector<std::shared_ptr<const Expression>>(
                        {
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c"))
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>({
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                        })),
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
