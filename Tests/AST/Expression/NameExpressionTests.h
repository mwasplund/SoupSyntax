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
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"name"));

            Assert::AreEqual(
                SyntaxNodeType::SimpleNameExpression,
                uut->GetType(),
                L"Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"name"),
                uut->GetIdentifier(),
                L"Verify identifier matches.");
        }

        // [[Fact]]
        void InitializeGlobalQualifiedNameExpression()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Right")));

            Assert::AreEqual(
                SyntaxNodeType::QualifiedNameExpression,
                uut->GetType(),
                L"Verify has correct type.");
            Assert::IsFalse(uut->HasLeft(), L"Verify no left identifier.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                uut->GetScopeResolutionToken(),
                L"Verify double colon token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Right"),
                uut->GetRight().GetIdentifier(),
                L"Verify right identifier matches.");
        }

        // [[Fact]]
        void InitializeSingleQualifiedNameExpression()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Left")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Right")));

            Assert::IsTrue(uut->HasLeft(), L"Verify has left identifier.");
            auto left = dynamic_cast<const SimpleNameExpression&>(uut->GetLeft());
            auto right = uut->GetRight();

            Assert::AreEqual(
                SyntaxNodeType::QualifiedNameExpression,
                uut->GetType(),
                L"Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Left"),
                left.GetIdentifier(),
                L"Verify left identifier matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                uut->GetScopeResolutionToken(),
                L"Verify double colon token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Right"),
                right.GetIdentifier(),
                L"Verify right identifier matches.");
        }

        // [[Fact]]
        void InitializeGlobalDoubleQualifiedNameExpression()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                SyntaxFactory::CreateQualifiedNameExpression(
                    nullptr,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Left"))),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Right")));

            Assert::IsTrue(uut->HasLeft(), L"Verify has left identifier.");
            auto left = dynamic_cast<const QualifiedNameExpression&>(uut->GetLeft());
            auto right = uut->GetRight();

            Assert::IsFalse(left.HasLeft(), L"Verify no double left identifier.");
            Assert::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Left"),
                left.GetRight().GetIdentifier(),
                L"Verify left identifier matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                uut->GetScopeResolutionToken(),
                L"Verify double colon token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Right"),
                right.GetIdentifier(),
                L"Verify right identifier matches.");
        }

        // [[Fact]]
        void SimpleNameExpressionGetChildren()
        {
            auto uut = SyntaxFactory::CreateSimpleNameExpression(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"name"));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"name")),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void SimpleNameExpressionOperatorEqual()
        {
            auto uut = SyntaxFactory::CreateSimpleNameExpression(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"name"));

            TestUtils::AreEqual(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"name")),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void SimpleNameExpressionOperatorNotEqualIdentifier()
        {
            auto uut = SyntaxFactory::CreateSimpleNameExpression(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"name"));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"name2")),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void GlobalQualifiedNameExpressionGetChildren()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Right")));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon)),
                    SyntaxNodeChild(
                        SyntaxFactory::CreateSimpleNameExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Right"))),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void GlobalQualifiedNameExpressionEqual()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Right")));

            TestUtils::AreEqual(
                SyntaxFactory::CreateQualifiedNameExpression(
                    nullptr,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Right"))),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void GlobalQualifiedNameExpressionNotEqualLeft()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Right")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateQualifiedNameExpression(
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Left")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Right"))),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void GlobalQualifiedNameExpressionNotEqualDoubleColonToken()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Right")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateQualifiedNameExpression(
                    nullptr,
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::DoubleColon,
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan()),
                        },
                        {}),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Right"))),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void GlobalQualifiedNameExpressionNotEqualRight()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Right")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateQualifiedNameExpression(
                    nullptr,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Right2"))),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void SingleQualifiedNameExpressionGetChildren()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Left")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Right")));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(
                        SyntaxFactory::CreateSimpleNameExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Left"))),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon)),
                    SyntaxNodeChild(
                        SyntaxFactory::CreateSimpleNameExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Right"))),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void SingleQualifiedNameExpressionEqual()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Left")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Right")));

            TestUtils::AreEqual(
                SyntaxFactory::CreateQualifiedNameExpression(
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Left")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Right"))),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void SingleQualifiedNameExpressionNotEqualLeft()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Left")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Right")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateQualifiedNameExpression(
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Left1")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Right"))),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void SingleQualifiedNameExpressionNotEqualLeftGlobal()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Left")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Right")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateQualifiedNameExpression(
                    nullptr,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Right"))),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void SingleQualifiedNameExpressionNotEqualDoubleColonToken()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Left")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Right")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateQualifiedNameExpression(
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Left")),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::DoubleColon,
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan()),
                        },
                        {}),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Right"))),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void SingleQualifiedNameExpressionNotEqualRight()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Left")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Right")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateQualifiedNameExpression(
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Left")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Right2"))),
                uut,
                L"Verify do not match.");
        }
    };
}
