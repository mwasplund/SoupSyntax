#pragma once
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class OuterTreeDestructorIdentifierExpressionTests
    {
    public:
        // [[Fact]]
        void Initialize()
        {
            auto uut = SyntaxFactory::CreateDestructorIdentifierExpression(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Tilde),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"))->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::DestructorIdentifierExpression,
                uut->GetType(),
                "Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Tilde),
                uut->GetTildeToken(),
                "Verify tilde token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"),
                uut->GetIdentifierToken(),
                "Verify identifier matches.");
        }

        // [[Fact]]
        void GetChildren()
        {
            auto uut = SyntaxFactory::CreateDestructorIdentifierExpression(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Tilde),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"))->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>({
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Tilde)),
                    TestUtils::CreateChild(SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass")),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateDestructorIdentifierExpression(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Tilde),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"))->CreateOuter(nullptr);

            TestUtils::AreEqual(
                SyntaxFactory::CreateDestructorIdentifierExpression(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Tilde),
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass")),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualTildeToken()
        {
            auto uut = SyntaxFactory::CreateDestructorIdentifierExpression(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Tilde),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateDestructorIdentifierExpression(
                SyntaxFactory::CreateKeywordToken(
                    SyntaxTokenType::Tilde,
                    {
                        SyntaxFactory::CreateTrivia(" "),
                    },
                    {}),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass")),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualIdentifier()
        {
            auto uut = SyntaxFactory::CreateDestructorIdentifierExpression(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Tilde),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateDestructorIdentifierExpression(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Tilde),
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass2")),
                uut,
                "Verify do not match.");
        }
    };
}
