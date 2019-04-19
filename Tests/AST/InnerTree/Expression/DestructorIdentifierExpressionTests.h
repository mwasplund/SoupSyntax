#pragma once
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class InnerTreeDestructorIdentifierExpressionTests
    {
    public:
        [[Fact]]
        void Initialize()
        {
            auto uut = SyntaxFactory::CreateDestructorIdentifierExpression(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Tilde),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"));

            Assert::AreEqual(
                SyntaxNodeType::DestructorIdentifierExpression,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Tilde),
                uut->GetTildeToken(),
                "Verify tilde token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"),
                uut->GetIdentifierToken(),
                "Verify identifier matches.");
        }

        [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateDestructorIdentifierExpression(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Tilde),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"));

            TestUtils::AreEqual(
                SyntaxFactory::CreateDestructorIdentifierExpression(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Tilde),
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass")),
                uut,
                "Verify matches.");
        }

        [[Fact]]
        void OperatorNotEqualTildeToken()
        {
            auto uut = SyntaxFactory::CreateDestructorIdentifierExpression(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Tilde),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"));

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

        [[Fact]]
        void OperatorNotEqualIdentifier()
        {
            auto uut = SyntaxFactory::CreateDestructorIdentifierExpression(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Tilde),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateDestructorIdentifierExpression(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Tilde),
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass2")),
                uut,
                "Verify do not match.");
        }
    };
}
