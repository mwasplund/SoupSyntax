#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class InnerTreeAttributeArgumentClauseTests
    {
    public:
        [[Fact]]
        void InitializeSimple()
        {
            // a()
            auto uut = SyntaxFactory::CreateAttributeArgumentClause(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateSyntaxList<SyntaxToken>({}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis));

            Assert::AreEqual(
                SyntaxNodeType::AttributeArgumentClause,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                uut->GetOpenParenthesisToken(),
                "Verify open parenthesis token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateSyntaxList<SyntaxToken>({}),
                uut->GetTokens(),
                "Verify tokens match.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
                uut->GetCloseParenthesisToken(),
                "Verify close parenthesis token matches.");
        }

        [[Fact]]
        void InitializeComplex()
        {
            // a(b, c)
            auto uut = SyntaxFactory::CreateAttributeArgumentClause(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateSyntaxList<SyntaxToken>(
                    {
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c"),
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis));

            Assert::AreEqual(
                SyntaxNodeType::AttributeArgumentClause,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                uut->GetOpenParenthesisToken(),
                "Verify open parenthesis token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateSyntaxList<SyntaxToken>(
                    {
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c"),
                    }),
                uut->GetTokens(),
                "Verify tokens match.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
                uut->GetCloseParenthesisToken(),
                "Verify close parenthesis token matches.");
        }

        [[Fact]]
        void OperatorEqual()
        {
            // a(b, c)
            auto uut = SyntaxFactory::CreateAttributeArgumentClause(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateSyntaxList<SyntaxToken>(
                    {
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c"),
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis));

            TestUtils::AreEqual(
                SyntaxFactory::CreateAttributeArgumentClause(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxList<SyntaxToken>(
                        {
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c"),
                        }),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                uut,
                "Verify matches.");
        }

        [[Fact]]
        void OperatorNotEqualOpenParenthesisToken()
        {
            // a(b, c)
            auto uut = SyntaxFactory::CreateAttributeArgumentClause(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateSyntaxList<SyntaxToken>(
                    {
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c"),
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateAttributeArgumentClause(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::OpenParenthesis,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {}),
                    SyntaxFactory::CreateSyntaxList<SyntaxToken>(
                        {
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c"),
                        }),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                uut,
                "Verify does not match.");
        }

        [[Fact]]
        void OperatorNotEqualParameters()
        {
            // a(b, c)
            auto uut = SyntaxFactory::CreateAttributeArgumentClause(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateSyntaxList<SyntaxToken>(
                    {
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c"),
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateAttributeArgumentClause(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxList<SyntaxToken>(
                        {
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b2"),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c"),
                        }),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                uut,
                "Verify does not match.");
        }

        [[Fact]]
        void OperatorNotEqualCloseParenthesisToken()
        {
            // a(b, c)
            auto uut = SyntaxFactory::CreateAttributeArgumentClause(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateSyntaxList<SyntaxToken>(
                    {
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c"),
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateAttributeArgumentClause(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxList<SyntaxToken>(
                        {
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c"),
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
