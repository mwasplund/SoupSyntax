#pragma once
#include "SoupAssert.h"

namespace Soup::Syntax::OuterTree::UnitTests
{
    class SimpleIdentifierExpressionTests
    {
    public:
        // [[Fact]]
        void Initialize()
        {
            auto uut = SyntaxFactory::CreateSimpleIdentifierExpression(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"));

            Assert::AreEqual(
                SyntaxNodeType::SimpleIdentifierExpression,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                uut->GetIdentifierToken(),
                "Verify identifier matches.");
        }

        // [[Fact]]
        void GetChildren()
        {
            auto uut = SyntaxFactory::CreateSimpleIdentifierExpression(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name")),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateSimpleIdentifierExpression(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"));

            TestUtils::AreEqual(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name")),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualIdentifier()
        {
            auto uut = SyntaxFactory::CreateSimpleIdentifierExpression(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name2")),
                uut,
                "Verify do not match.");
        }
    };
}
