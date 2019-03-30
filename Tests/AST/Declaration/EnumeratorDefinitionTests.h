#pragma once
#include "TestUtils.h"
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class EnumeratorDefinitionTests
    {
    public:
        // [[Fact]]
        void Initialize()
        {
            auto uut = SyntaxFactory::CreateEnumeratorDefinition(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "EnumValue"));

            Assert::AreEqual(
                SyntaxNodeType::EnumeratorDefinition,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "EnumValue"),
                uut->GetIdentifierToken(),
                "Verify enum token matches.");
        }

        // [[Fact]]
        void GetChildren()
        {
            auto uut = SyntaxFactory::CreateEnumeratorDefinition(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "EnumValue"));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "EnumValue")),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateEnumeratorDefinition(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "EnumValue"));

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
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "EnumValue"));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateEnumeratorDefinition(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "EnumValue2")),
                uut,
                "Verify do not match.");
        }
    };
}
