#pragma once
#include "SoupAssert.h"
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class OuterTreeAttributeTests
    {
    public:
        [[Fact]]
        void Initialize()
        {
            auto uut = SyntaxFactory::CreateAttribute(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"))->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::Attribute,
                uut->GetType(),
                "Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                uut->GetIdentifierToken(),
                "Verify identifier matches.");
        }

        [[Fact]]
        void GetChildren()
        {
            auto uut = SyntaxFactory::CreateAttribute(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"))->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>({
                    TestUtils::CreateChild(SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name")),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateAttribute(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"))->CreateOuter(nullptr);

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
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateAttribute(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name2")),
                uut,
                "Verify do not match.");
        }
    };
}
