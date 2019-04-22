#pragma once
#include "TestUtils.h"
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class OuterTreeExpressionStatementTests
    {
    public:
        [[Fact]]
        void InitializeSimple()
        {
            // a;
            auto uut = SyntaxFactory::CreateExpressionStatement(
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::ExpressionStatement,
                uut->GetType(),
                "Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
                uut->GetExpression(),
                "Verify expression matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon),
                uut->GetSemicolonToken(),
                "Verify semicolon token matches.");
        }

        [[Fact]]
        void GetChildren()
        {
            // a;
            auto uut = SyntaxFactory::CreateExpressionStatement(
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>({
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateIdentifierExpression(
                            SyntaxFactory::CreateSimpleIdentifier(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")))),
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        [[Fact]]
        void OperatorEqual()
        {
            // a;
            auto uut = SyntaxFactory::CreateExpressionStatement(
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))->CreateOuter(nullptr);

            TestUtils::AreEqual(
                SyntaxFactory::CreateExpressionStatement(
                    SyntaxFactory::CreateIdentifierExpression(
                        SyntaxFactory::CreateSimpleIdentifier(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                uut,
                "Verify matches.");
        }

        [[Fact]]
        void OperatorNotEqualExpression()
        {
            // a;
            auto uut = SyntaxFactory::CreateExpressionStatement(
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateExpressionStatement(
                    SyntaxFactory::CreateIdentifierExpression(
                        SyntaxFactory::CreateSimpleIdentifier(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void OperatorNotEqualSemicolonToken()
        {
            // a;
            auto uut = SyntaxFactory::CreateExpressionStatement(
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateExpressionStatement(
                    SyntaxFactory::CreateIdentifierExpression(
                        SyntaxFactory::CreateSimpleIdentifier(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Semicolon,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {
                        })),
                uut,
                "Verify do not match.");
        }
    };
}
