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
                SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"name"));

            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"name"),
                uut->GetIdentifier(),
                L"Verify identifier matches.");
        }

        // [[Fact]]
        void InitializeGlobalQualifiedNameExpression()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                nullptr,
                SyntaxFactory::CreateToken(SyntaxTokenType::DoubleColon, L"::"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Right")));

            Assert::IsFalse(uut->HasLeft(), L"Verify no left identifier.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::DoubleColon, L"::"),
                uut->GetScopeResolutionToken(),
                L"Verify double colon token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Right"),
                uut->GetRight().GetIdentifier(),
                L"Verify right identifier matches.");
        }

        // [[Fact]]
        void InitializeSingleQualifiedNameExpression()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Left")),
                SyntaxFactory::CreateToken(SyntaxTokenType::DoubleColon, L"::"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Right")));

            Assert::IsTrue(uut->HasLeft(), L"Verify has left identifier.");
            auto left = dynamic_cast<const SimpleNameExpression&>(uut->GetLeft());
            auto right = uut->GetRight();

            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Left"),
                left.GetIdentifier(),
                L"Verify left identifier matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::DoubleColon, L"::"),
                uut->GetScopeResolutionToken(),
                L"Verify double colon token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Right"),
                right.GetIdentifier(),
                L"Verify right identifier matches.");
        }

        // [[Fact]]
        void InitializeGlobalDoubleQualifiedNameExpression()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                SyntaxFactory::CreateQualifiedNameExpression(
                    nullptr,
                    SyntaxFactory::CreateToken(SyntaxTokenType::DoubleColon, L"::"),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Left"))),
                SyntaxFactory::CreateToken(SyntaxTokenType::DoubleColon, L"::"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Right")));

            Assert::IsTrue(uut->HasLeft(), L"Verify has left identifier.");
            auto left = dynamic_cast<const QualifiedNameExpression&>(uut->GetLeft());
            auto right = uut->GetRight();

            Assert::IsFalse(left.HasLeft(), L"Verify no double left identifier.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Left"),
                left.GetRight().GetIdentifier(),
                L"Verify left identifier matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::DoubleColon, L"::"),
                uut->GetScopeResolutionToken(),
                L"Verify double colon token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Right"),
                right.GetIdentifier(),
                L"Verify right identifier matches.");
        }

        // [[Fact]]
        void SimpleNameExpressionGetChildren()
        {
            auto uut = SyntaxFactory::CreateSimpleNameExpression(
                SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"name"));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"name")),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void SimpleNameExpressionOperatorEqual()
        {
            auto uut = SyntaxFactory::CreateSimpleNameExpression(
                SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"name"));

            TestUtils::AreEqual(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"name")),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void SimpleNameExpressionOperatorNotEqualIdentifier()
        {
            auto uut = SyntaxFactory::CreateSimpleNameExpression(
                SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"name"));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"name2")),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void GlobalQualifiedNameExpressionGetChildren()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                nullptr,
                SyntaxFactory::CreateToken(SyntaxTokenType::DoubleColon, L"::"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Right")));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(SyntaxFactory::CreateToken(SyntaxTokenType::DoubleColon, L"::")),
                    SyntaxNodeChild(
                        SyntaxFactory::CreateSimpleNameExpression(
                            SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Right"))),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void GlobalQualifiedNameExpressionEqual()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                nullptr,
                SyntaxFactory::CreateToken(SyntaxTokenType::DoubleColon, L"::"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Right")));

            TestUtils::AreEqual(
                SyntaxFactory::CreateQualifiedNameExpression(
                    nullptr,
                    SyntaxFactory::CreateToken(SyntaxTokenType::DoubleColon, L"::"),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Right"))),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void GlobalQualifiedNameExpressionNotEqualLeft()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                nullptr,
                SyntaxFactory::CreateToken(SyntaxTokenType::DoubleColon, L"::"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Right")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateQualifiedNameExpression(
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Left")),
                    SyntaxFactory::CreateToken(SyntaxTokenType::DoubleColon, L"::"),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Right"))),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void GlobalQualifiedNameExpressionNotEqualDoubleColonToken()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                nullptr,
                SyntaxFactory::CreateToken(SyntaxTokenType::DoubleColon, L"::"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Right")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateQualifiedNameExpression(
                    nullptr,
                    SyntaxFactory::CreateToken(SyntaxTokenType::DoubleColon, L":"),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Right"))),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void GlobalQualifiedNameExpressionNotEqualRight()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                nullptr,
                SyntaxFactory::CreateToken(SyntaxTokenType::DoubleColon, L"::"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Right")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateQualifiedNameExpression(
                    nullptr,
                    SyntaxFactory::CreateToken(SyntaxTokenType::DoubleColon, L"::"),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Right2"))),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void SingleQualifiedNameExpressionGetChildren()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Left")),
                SyntaxFactory::CreateToken(SyntaxTokenType::DoubleColon, L"::"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Right")));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(
                        SyntaxFactory::CreateSimpleNameExpression(
                            SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Left"))),
                    SyntaxNodeChild(SyntaxFactory::CreateToken(SyntaxTokenType::DoubleColon, L"::")),
                    SyntaxNodeChild(
                        SyntaxFactory::CreateSimpleNameExpression(
                            SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Right"))),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void SingleQualifiedNameExpressionEqual()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Left")),
                SyntaxFactory::CreateToken(SyntaxTokenType::DoubleColon, L"::"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Right")));

            TestUtils::AreEqual(
                SyntaxFactory::CreateQualifiedNameExpression(
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Left")),
                    SyntaxFactory::CreateToken(SyntaxTokenType::DoubleColon, L"::"),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Right"))),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void SingleQualifiedNameExpressionNotEqualLeft()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Left")),
                SyntaxFactory::CreateToken(SyntaxTokenType::DoubleColon, L"::"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Right")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateQualifiedNameExpression(
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Left1")),
                    SyntaxFactory::CreateToken(SyntaxTokenType::DoubleColon, L"::"),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Right"))),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void SingleQualifiedNameExpressionNotEqualLeftGlobal()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Left")),
                SyntaxFactory::CreateToken(SyntaxTokenType::DoubleColon, L"::"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Right")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateQualifiedNameExpression(
                    nullptr,
                    SyntaxFactory::CreateToken(SyntaxTokenType::DoubleColon, L"::"),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Right"))),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void SingleQualifiedNameExpressionNotEqualDoubleColonToken()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Left")),
                SyntaxFactory::CreateToken(SyntaxTokenType::DoubleColon, L"::"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Right")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateQualifiedNameExpression(
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Left")),
                    SyntaxFactory::CreateToken(SyntaxTokenType::DoubleColon, L":"),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Right"))),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void SingleQualifiedNameExpressionNotEqualRight()
        {
            auto uut = SyntaxFactory::CreateQualifiedNameExpression(
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Left")),
                SyntaxFactory::CreateToken(SyntaxTokenType::DoubleColon, L"::"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Right")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateQualifiedNameExpression(
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Left")),
                    SyntaxFactory::CreateToken(SyntaxTokenType::DoubleColon, L"::"),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Right2"))),
                uut,
                L"Verify do not match.");
        }
    };
}
