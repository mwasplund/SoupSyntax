#pragma once
#include "TestUtils.h"
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class OuterTreeEnumeratorDefinitionTests
    {
    public:
        // [[Fact]]
        void Initialize()
        {
            auto uut = SyntaxFactory::CreateEnumeratorDefinition(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "EnumValue"))->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::EnumeratorDefinition,
                uut->GetType(),
                "Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "EnumValue"),
                uut->GetIdentifierToken(),
                "Verify enum token matches.");
        }

        // [[Fact]]
        void GetChildren()
        {
            auto uut = SyntaxFactory::CreateEnumeratorDefinition(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "EnumValue"))->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>(
                {
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "EnumValue")),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateEnumeratorDefinition(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "EnumValue"))->CreateOuter(nullptr);

            TestUtils::AreEqual(
                SyntaxFactory::CreateEnumeratorDefinition(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "EnumValue")),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualIdentifierToken()
        {
            auto uut = SyntaxFactory::CreateEnumeratorDefinition(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "EnumValue"))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateEnumeratorDefinition(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "EnumValue2")),
                uut,
                "Verify do not match.");
        }
    };
}
