#pragma once
#include "TestUtils.h"
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class PrimitiveDataTypeDeclarationTests
    {
    public:
        // [[Fact]]
        void InitializeSimple()
        {
            auto uut = SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                PrimitiveDataType::Int,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int));

            Assert::AreEqual(
                SyntaxNodeType::PrimitiveDataTypeDeclaration,
                uut->GetType(),
                L"Verify has correct type.");
            Assert::AreEqual(
                PrimitiveDataType::Int,
                uut->GetPrimitiveType(),
                L"Verify primitive type matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int),
                uut->GetToken(),
                L"Verify token matches.");
        }

        // [[Fact]]
        void GetChildren()
        {
            auto uut = SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                PrimitiveDataType::Int,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                PrimitiveDataType::Int,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int));

            TestUtils::AreEqual(
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualPrimitiveType()
        {
            auto uut = SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                PrimitiveDataType::Int,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Double,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                uut,
                L"Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualToken()
        {
            auto uut = SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                PrimitiveDataType::Int,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Int,
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan())
                        },
                        {})),
                uut,
                L"Verify does not match.");
        }
    };
}
