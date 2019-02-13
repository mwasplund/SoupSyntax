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
            auto uut = std::make_shared<SimpleNameExpression>(
                std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "name"));

            Assert::AreEqual(SyntaxToken(SyntaxTokenType::Identifier, "name"), uut->GetIdentifier(), "Verify identifier matches.");
        }

        // [[Fact]]
        void InitializeGlobalQualifiedNameExpression()
        {
            auto uut = std::make_shared<QualifiedNameExpression>(
                nullptr,
                std::make_shared<SyntaxToken>(SyntaxTokenType::DoubleColon, "::"),
                std::make_shared<SimpleNameExpression>(
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "Right")));

            Assert::IsFalse(uut->HasLeft(), "Verify no left identifier.");
            Assert::AreEqual(SyntaxToken(SyntaxTokenType::DoubleColon, "::"), uut->GetDoubleColonToken(), "Verify double colon token matches.");
            Assert::AreEqual(SyntaxToken(SyntaxTokenType::Identifier, "Right"), uut->GetRight().GetIdentifier(), "Verify right identifier matches.");
        }

        // [[Fact]]
        void InitializeSingleQualifiedNameExpression()
        {
            auto uut = std::make_shared<QualifiedNameExpression>(
                std::make_shared<SimpleNameExpression>(
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "Left")),
                std::make_shared<SyntaxToken>(SyntaxTokenType::DoubleColon, "::"),
                std::make_shared<SimpleNameExpression>(
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "Right")));

            Assert::IsTrue(uut->HasLeft(), "Verify has left identifier.");
            auto left = dynamic_cast<const SimpleNameExpression&>(uut->GetLeft());
            auto right = uut->GetRight();

            Assert::AreEqual(SyntaxToken(SyntaxTokenType::Identifier, "Left"), left.GetIdentifier(), "Verify left identifier matches.");
            Assert::AreEqual(SyntaxToken(SyntaxTokenType::DoubleColon, "::"), uut->GetDoubleColonToken(), "Verify double colon token matches.");
            Assert::AreEqual(SyntaxToken(SyntaxTokenType::Identifier, "Right"), right.GetIdentifier(), "Verify right identifier matches.");
        }

        // [[Fact]]
        void InitializeGlobalDoubleQualifiedNameExpression()
        {
            auto uut = std::make_shared<QualifiedNameExpression>(
                std::make_shared<QualifiedNameExpression>(
                    nullptr,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::DoubleColon, "::"),
                    std::make_shared<SimpleNameExpression>(
                        std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "Left"))),
                std::make_shared<SyntaxToken>(SyntaxTokenType::DoubleColon, "::"),
                std::make_shared<SimpleNameExpression>(
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "Right")));

            Assert::IsTrue(uut->HasLeft(), "Verify has left identifier.");
            auto left = dynamic_cast<const QualifiedNameExpression&>(uut->GetLeft());
            auto right = uut->GetRight();

            Assert::IsFalse(left.HasLeft(), "Verify no double left identifier.");
            Assert::AreEqual(SyntaxToken(SyntaxTokenType::Identifier, "Left"), left.GetRight().GetIdentifier(), "Verify left identifier matches.");
            Assert::AreEqual(SyntaxToken(SyntaxTokenType::DoubleColon, "::"), uut->GetDoubleColonToken(), "Verify double colon token matches.");
            Assert::AreEqual(SyntaxToken(SyntaxTokenType::Identifier, "Right"), right.GetIdentifier(), "Verify right identifier matches.");
        }

        // [[Fact]]
        void SimpleNameExpressionOperatorEqual()
        {
            auto uut = std::make_shared<SimpleNameExpression>(
                std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "name"));

            Assert::AreEqual(
                SimpleNameExpression(
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "name")),
                *uut,
                "Verify matches.");
        }

        // [[Fact]]
        void SimpleNameExpressionOperatorNotEqualIdentifier()
        {
            auto uut = std::make_shared<SimpleNameExpression>(
                std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "name"));

            Assert::AreNotEqual(
                SimpleNameExpression(
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "name2")),
                *uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void GlobalQualifiedNameExpressionEqual()
        {
            auto uut = std::make_shared<QualifiedNameExpression>(
                nullptr,
                std::make_shared<SyntaxToken>(SyntaxTokenType::DoubleColon, "::"),
                std::make_shared<SimpleNameExpression>(
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "Right")));

            Assert::AreEqual(
                QualifiedNameExpression(
                    nullptr,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::DoubleColon, "::"),
                    std::make_shared<SimpleNameExpression>(
                        std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "Right"))),
                *uut,
                "Verify matches.");
        }

        // [[Fact]]
        void GlobalQualifiedNameExpressionNotEqualLeft()
        {
            auto uut = std::make_shared<QualifiedNameExpression>(
                nullptr,
                std::make_shared<SyntaxToken>(SyntaxTokenType::DoubleColon, "::"),
                std::make_shared<SimpleNameExpression>(
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "Right")));

            Assert::AreNotEqual(
                QualifiedNameExpression(
                    std::make_shared<SimpleNameExpression>(
                        std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "Left")),
                    std::make_shared<SyntaxToken>(SyntaxTokenType::DoubleColon, "::"),
                    std::make_shared<SimpleNameExpression>(
                        std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "Right"))),
                *uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void GlobalQualifiedNameExpressionNotEqualDoubleColonToken()
        {
            auto uut = std::make_shared<QualifiedNameExpression>(
                nullptr,
                std::make_shared<SyntaxToken>(SyntaxTokenType::DoubleColon, "::"),
                std::make_shared<SimpleNameExpression>(
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "Right")));

            Assert::AreNotEqual(
                QualifiedNameExpression(
                    nullptr,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::DoubleColon, ":"),
                    std::make_shared<SimpleNameExpression>(
                        std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "Right"))),
                *uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void GlobalQualifiedNameExpressionNotEqualRight()
        {
            auto uut = std::make_shared<QualifiedNameExpression>(
                nullptr,
                std::make_shared<SyntaxToken>(SyntaxTokenType::DoubleColon, "::"),
                std::make_shared<SimpleNameExpression>(
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "Right")));

            Assert::AreNotEqual(
                QualifiedNameExpression(
                    nullptr,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::DoubleColon, "::"),
                    std::make_shared<SimpleNameExpression>(
                        std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "Right2"))),
                *uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void SingleQualifiedNameExpressionEqual()
        {
            auto uut = std::make_shared<QualifiedNameExpression>(
                std::make_shared<SimpleNameExpression>(
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "Left")),
                std::make_shared<SyntaxToken>(SyntaxTokenType::DoubleColon, "::"),
                std::make_shared<SimpleNameExpression>(
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "Right")));

            Assert::AreEqual(
                QualifiedNameExpression(
                    std::make_shared<SimpleNameExpression>(
                        std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "Left")),
                    std::make_shared<SyntaxToken>(SyntaxTokenType::DoubleColon, "::"),
                    std::make_shared<SimpleNameExpression>(
                        std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "Right"))),
                *uut,
                "Verify matches.");
        }

        // [[Fact]]
        void SingleQualifiedNameExpressionNotEqualLeft()
        {
            auto uut = std::make_shared<QualifiedNameExpression>(
                std::make_shared<SimpleNameExpression>(
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "Left")),
                std::make_shared<SyntaxToken>(SyntaxTokenType::DoubleColon, "::"),
                std::make_shared<SimpleNameExpression>(
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "Right")));

            Assert::AreNotEqual(
                QualifiedNameExpression(
                    std::make_shared<SimpleNameExpression>(
                        std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "Left1")),
                    std::make_shared<SyntaxToken>(SyntaxTokenType::DoubleColon, "::"),
                    std::make_shared<SimpleNameExpression>(
                        std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "Right"))),
                *uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void SingleQualifiedNameExpressionNotEqualLeftGlobal()
        {
            auto uut = std::make_shared<QualifiedNameExpression>(
                std::make_shared<SimpleNameExpression>(
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "Left")),
                std::make_shared<SyntaxToken>(SyntaxTokenType::DoubleColon, "::"),
                std::make_shared<SimpleNameExpression>(
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "Right")));

            Assert::AreNotEqual(
                QualifiedNameExpression(
                    nullptr,
                    std::make_shared<SyntaxToken>(SyntaxTokenType::DoubleColon, "::"),
                    std::make_shared<SimpleNameExpression>(
                        std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "Right"))),
                *uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void SingleQualifiedNameExpressionNotEqualDoubleColonToken()
        {
            auto uut = std::make_shared<QualifiedNameExpression>(
                std::make_shared<SimpleNameExpression>(
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "Left")),
                std::make_shared<SyntaxToken>(SyntaxTokenType::DoubleColon, "::"),
                std::make_shared<SimpleNameExpression>(
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "Right")));

            Assert::AreNotEqual(
                QualifiedNameExpression(
                    std::make_shared<SimpleNameExpression>(
                        std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "Left")),
                    std::make_shared<SyntaxToken>(SyntaxTokenType::DoubleColon, ":"),
                    std::make_shared<SimpleNameExpression>(
                        std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "Right"))),
                *uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void SingleQualifiedNameExpressionNotEqualRight()
        {
            auto uut = std::make_shared<QualifiedNameExpression>(
                std::make_shared<SimpleNameExpression>(
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "Left")),
                std::make_shared<SyntaxToken>(SyntaxTokenType::DoubleColon, "::"),
                std::make_shared<SimpleNameExpression>(
                    std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "Right")));

            Assert::AreNotEqual(
                QualifiedNameExpression(
                    std::make_shared<SimpleNameExpression>(
                        std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "Left")),
                    std::make_shared<SyntaxToken>(SyntaxTokenType::DoubleColon, "::"),
                    std::make_shared<SimpleNameExpression>(
                        std::make_shared<SyntaxToken>(SyntaxTokenType::Identifier, "Right2"))),
                *uut,
                "Verify do not match.");
        }
    };
}
