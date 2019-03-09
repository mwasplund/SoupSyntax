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
                SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int"));

            Assert::AreEqual(
                PrimitiveDataType::Int,
                uut->GetPrimitiveType(),
                L"Verify primitive type matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int"),
                uut->GetToken(),
                L"Verify token matches.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                PrimitiveDataType::Int,
                SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int"));

            TestUtils::AreEqual(
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualPrimitiveType()
        {
            auto uut = SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                PrimitiveDataType::Int,
                SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int"));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Double,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                uut,
                L"Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualToken()
        {
            auto uut = SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                PrimitiveDataType::Int,
                SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int"));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateToken(
                        SyntaxTokenType::Int,
                        L"int",
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan())
                        },
                        {})),
                uut,
                L"Verify does not match.");
        }
    };
}
