#pragma once
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class OuterTreeQualifiedIdentifierExpressionTests
    {
    public:
        [[Fact]]
        void InitializeGlobalQualifiedIdentifierExpression()
        {
            auto uut = SyntaxFactory::CreateQualifiedIdentifierExpression(
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right")))->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::QualifiedIdentifierExpression,
                uut->GetType(),
                "Verify has correct type.");
            Assert::IsFalse(uut->HasLeft(), "Verify no left identifier.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                uut->GetScopeResolutionToken(),
                "Verify double colon token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right")),
                uut->GetRight(),
                "Verify right matches.");
        }

        [[Fact]]
        void InitializeSingleQualifiedIdentifierExpression()
        {
            auto uut = SyntaxFactory::CreateQualifiedIdentifierExpression(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right")))->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::QualifiedIdentifierExpression,
                uut->GetType(),
                "Verify has correct type.");
            Assert::IsTrue(uut->HasLeft(), "Verify has left identifier.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left")),
                uut->GetLeft(),
                "Verify left matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                uut->GetScopeResolutionToken(),
                "Verify double colon token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right")),
                uut->GetRight(),
                "Verify right matches.");
        }

        [[Fact]]
        void InitializeGlobalDoubleQualifiedIdentifierExpression()
        {
            auto uut = SyntaxFactory::CreateQualifiedIdentifierExpression(
                SyntaxFactory::CreateQualifiedIdentifierExpression(
                    nullptr,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left"))),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right")))->CreateOuter(nullptr);

            Assert::IsTrue(uut->HasLeft(), "Verify has left identifier.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateQualifiedIdentifierExpression(
                    nullptr,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left"))),
                uut->GetLeft(),
                "Verify left matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                uut->GetScopeResolutionToken(),
                "Verify double colon token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right")),
                uut->GetRight(),
                "Verify right matches.");
        }

        [[Fact]]
        void GlobalQualifiedIdentifierExpressionGetChildren()
        {
            auto uut = SyntaxFactory::CreateQualifiedIdentifierExpression(
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right")))->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>({
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon)),
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right"))),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        [[Fact]]
        void GlobalQualifiedIdentifierExpressionEqual()
        {
            auto uut = SyntaxFactory::CreateQualifiedIdentifierExpression(
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right")))->CreateOuter(nullptr);

            TestUtils::AreEqual(
                SyntaxFactory::CreateQualifiedIdentifierExpression(
                    nullptr,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right"))),
                uut,
                "Verify matches.");
        }

        [[Fact]]
        void GlobalQualifiedIdentifierExpressionNotEqualLeft()
        {
            auto uut = SyntaxFactory::CreateQualifiedIdentifierExpression(
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right")))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateQualifiedIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right"))),
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void GlobalQualifiedIdentifierExpressionNotEqualDoubleColonToken()
        {
            auto uut = SyntaxFactory::CreateQualifiedIdentifierExpression(
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right")))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateQualifiedIdentifierExpression(
                    nullptr,
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::DoubleColon,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {}),
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right"))),
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void GlobalQualifiedIdentifierExpressionNotEqualRight()
        {
            auto uut = SyntaxFactory::CreateQualifiedIdentifierExpression(
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right")))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateQualifiedIdentifierExpression(
                    nullptr,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right2"))),
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void SingleQualifiedIdentifierExpressionGetChildren()
        {
            auto uut = SyntaxFactory::CreateQualifiedIdentifierExpression(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right")))->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>({
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left"))),
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon)),
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right"))),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        [[Fact]]
        void SingleQualifiedIdentifierExpressionEqual()
        {
            auto uut = SyntaxFactory::CreateQualifiedIdentifierExpression(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right")))->CreateOuter(nullptr);

            TestUtils::AreEqual(
                SyntaxFactory::CreateQualifiedIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right"))),
                uut,
                "Verify matches.");
        }

        [[Fact]]
        void SingleQualifiedIdentifierExpressionNotEqualLeft()
        {
            auto uut = SyntaxFactory::CreateQualifiedIdentifierExpression(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right")))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateQualifiedIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left1")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right"))),
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void SingleQualifiedIdentifierExpressionNotEqualLeftGlobal()
        {
            auto uut = SyntaxFactory::CreateQualifiedIdentifierExpression(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right")))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateQualifiedIdentifierExpression(
                    nullptr,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right"))),
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void SingleQualifiedIdentifierExpressionNotEqualDoubleColonToken()
        {
            auto uut = SyntaxFactory::CreateQualifiedIdentifierExpression(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right")))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateQualifiedIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left")),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::DoubleColon,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {}),
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right"))),
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void SingleQualifiedIdentifierExpressionNotEqualRight()
        {
            auto uut = SyntaxFactory::CreateQualifiedIdentifierExpression(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right")))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateQualifiedIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right2"))),
                uut,
                "Verify do not match.");
        }
    };
}
