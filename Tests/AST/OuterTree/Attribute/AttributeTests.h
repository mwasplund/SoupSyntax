#pragma once
#include "SoupAssert.h"
#include "../TestUtils.h"

namespace Soup::Syntax::OuterTree::UnitTests
{
    class AttributeTests
    {
    public:
        // [[Fact]]
        void Initialize()
        {
            auto innerNode = SyntaxFactory::CreateAttribute(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"));
            auto uut = innerNode->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::Attribute,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name")->CreateOuter(nullptr),
                uut->GetIdentifierToken(),
                "Verify identifier matches.");
        }

        // [[Fact]]
        void GetChildren()
        {
            auto innerNode = SyntaxFactory::CreateAttribute(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"));
            auto uut = innerNode->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name")->CreateOuter(nullptr)),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            auto innerNode = SyntaxFactory::CreateAttribute(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"));
            auto uut = innerNode->CreateOuter(nullptr);

            TestUtils::AreEqual(
                SyntaxFactory::CreateAttribute(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"))->CreateOuter(nullptr),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualIdentifier()
        {
            auto innerNode = SyntaxFactory::CreateAttribute(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"));
            auto uut = innerNode->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateAttribute(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name2"))->CreateOuter(nullptr),
                uut,
                "Verify do not match.");
        }
    };
}
