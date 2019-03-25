#pragma once
#include "TestUtils.h"
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class ParameterTests
    {
    public:
        // [[Fact]]
        void InitializeSimple()
        {
            // int parameter
            auto uut = SyntaxFactory::CreateParameter(
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")));

            Assert::AreEqual(
                SyntaxNodeType::Parameter,
                uut->GetType(),
                L"Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                uut->GetDeclarationSpecifier(),
                L"Verify declaration specifier sequence matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                uut->GetDeclarator(),
                L"Verify declarator matches.");
        }

        // [[Fact]]
        void GetChildren()
        {
            // int parameter
            auto uut = SyntaxFactory::CreateParameter(
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(
                        SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                            PrimitiveDataType::Int,
                            SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int"))),
                    SyntaxNodeChild(
                        SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                            PrimitiveDataType::Int,
                            SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int"))),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            // int parameter
            auto uut = SyntaxFactory::CreateParameter(
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")));

            TestUtils::AreEqual(
                SyntaxFactory::CreateParameter(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int"))),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualDeclarationSpecifier()
        {
            // int parameter
            auto uut = SyntaxFactory::CreateParameter(
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateParameter(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Double,
                        SyntaxFactory::CreateToken(SyntaxTokenType::Double, L"double")),
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int"))),
                uut,
                L"Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualDeclarator()
        {
            // int parameter
            auto uut = SyntaxFactory::CreateParameter(
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateParameter(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Double,
                        SyntaxFactory::CreateToken(SyntaxTokenType::Double, L"double"))),
                uut,
                L"Verify does not match.");
        }
    };
}
