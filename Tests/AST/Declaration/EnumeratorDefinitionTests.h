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
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"EnumValue"));

            Assert::AreEqual(
                SyntaxNodeType::EnumeratorDefinition,
                uut->GetType(),
                L"Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"EnumValue"),
                uut->GetIdentifierToken(),
                L"Verify enum token matches.");
        }

        // [[Fact]]
        void GetChildren()
        {
            auto uut = SyntaxFactory::CreateEnumeratorDefinition(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"EnumValue"));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"EnumValue")),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateEnumeratorDefinition(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"EnumValue"));

            TestUtils::AreEqual(
                SyntaxFactory::CreateEnumeratorDefinition(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"EnumValue")),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualIdentifierToken()
        {
            auto uut = SyntaxFactory::CreateEnumeratorDefinition(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"EnumValue"));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateEnumeratorDefinition(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"EnumValue2")),
                uut,
                L"Verify do not match.");
        }
    };
}
