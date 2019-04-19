#pragma once
#include "SoupAssert.h"
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class InnerTreeAttributeTests
    {
    public:
        [[Fact]]
        void Initialize()
        {
            auto uut = SyntaxFactory::CreateAttribute(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"));

            Assert::AreEqual(
                SyntaxNodeType::Attribute,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                uut->GetIdentifierToken(),
                "Verify identifier matches.");
        }

        [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateAttribute(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"));

            TestUtils::AreEqual(
                SyntaxFactory::CreateAttribute(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name")),
                uut,
                "Verify matches.");
        }

        [[Fact]]
        void OperatorNotEqualIdentifier()
        {
            auto uut = SyntaxFactory::CreateAttribute(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateAttribute(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name2")),
                uut,
                "Verify do not match.");
        }
    };
}
