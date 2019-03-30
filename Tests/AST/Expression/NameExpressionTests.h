#pragma once
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class NameExpressionTests
    {
    public:
        // [[Fact]]
        void InitializeSimpleNameExpression()
        {
            auto uut = SyntaxFactory::CreateSimpleNameExpression(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"));

            Assert::AreEqual(
                SyntaxNodeType::SimpleNameExpression,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                uut->GetIdentifier(),
                "Verify identifier matches.");
        }

        // [[Fact]]
        void InitializeGlobalQualifiedNameExpression()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right")));

            Assert::AreEqual(
                SyntaxNodeType::QualifiedNameExpression,
                uut->GetType(),
                "Verify has correct type.");
            Assert::IsFalse(uut->HasLeft(), "Verify no left identifier.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                uut->GetScopeResolutionToken(),
                "Verify double colon token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right"),
                uut->GetRight().GetIdentifier(),
                "Verify right identifier matches.");
        }

        // [[Fact]]
        void InitializeSingleQualifiedNameExpression()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right")));

            Assert::IsTrue(uut->HasLeft(), "Verify has left identifier.");
            auto left = dynamic_cast<const SimpleNameExpression&>(uut->GetLeft());
            auto right = uut->GetRight();

            Assert::AreEqual(
                SyntaxNodeType::QualifiedNameExpression,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left"),
                left.GetIdentifier(),
                "Verify left identifier matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                uut->GetScopeResolutionToken(),
                "Verify double colon token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right"),
                right.GetIdentifier(),
                "Verify right identifier matches.");
        }

        // [[Fact]]
        void InitializeGlobalDoubleQualifiedNameExpression()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                SyntaxFactory::CreateQualifiedNameExpression(
                    nullptr,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left"))),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right")));

            Assert::IsTrue(uut->HasLeft(), "Verify has left identifier.");
            auto left = dynamic_cast<const QualifiedNameExpression&>(uut->GetLeft());
            auto right = uut->GetRight();

            Assert::IsFalse(left.HasLeft(), "Verify no double left identifier.");
            Assert::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left"),
                left.GetRight().GetIdentifier(),
                "Verify left identifier matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                uut->GetScopeResolutionToken(),
                "Verify double colon token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right"),
                right.GetIdentifier(),
                "Verify right identifier matches.");
        }

        // [[Fact]]
        void SimpleNameExpressionGetChildren()
        {
            auto uut = SyntaxFactory::CreateSimpleNameExpression(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name")),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void SimpleNameExpressionOperatorEqual()
        {
            auto uut = SyntaxFactory::CreateSimpleNameExpression(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"));

            TestUtils::AreEqual(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name")),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void SimpleNameExpressionOperatorNotEqualIdentifier()
        {
            auto uut = SyntaxFactory::CreateSimpleNameExpression(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name2")),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void GlobalQualifiedNameExpressionGetChildren()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right")));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon)),
                    SyntaxNodeChild(
                        SyntaxFactory::CreateSimpleNameExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right"))),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void GlobalQualifiedNameExpressionEqual()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right")));

            TestUtils::AreEqual(
                SyntaxFactory::CreateQualifiedNameExpression(
                    nullptr,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right"))),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void GlobalQualifiedNameExpressionNotEqualLeft()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateQualifiedNameExpression(
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right"))),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void GlobalQualifiedNameExpressionNotEqualDoubleColonToken()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateQualifiedNameExpression(
                    nullptr,
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::DoubleColon,
                        {
                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                        },
                        {}),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right"))),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void GlobalQualifiedNameExpressionNotEqualRight()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateQualifiedNameExpression(
                    nullptr,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right2"))),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void SingleQualifiedNameExpressionGetChildren()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right")));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(
                        SyntaxFactory::CreateSimpleNameExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left"))),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon)),
                    SyntaxNodeChild(
                        SyntaxFactory::CreateSimpleNameExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right"))),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void SingleQualifiedNameExpressionEqual()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right")));

            TestUtils::AreEqual(
                SyntaxFactory::CreateQualifiedNameExpression(
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right"))),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void SingleQualifiedNameExpressionNotEqualLeft()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateQualifiedNameExpression(
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left1")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right"))),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void SingleQualifiedNameExpressionNotEqualLeftGlobal()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateQualifiedNameExpression(
                    nullptr,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right"))),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void SingleQualifiedNameExpressionNotEqualDoubleColonToken()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateQualifiedNameExpression(
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left")),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::DoubleColon,
                        {
                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                        },
                        {}),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right"))),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void SingleQualifiedNameExpressionNotEqualRight()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateQualifiedNameExpression(
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right2"))),
                uut,
                "Verify do not match.");
        }
    };
}
