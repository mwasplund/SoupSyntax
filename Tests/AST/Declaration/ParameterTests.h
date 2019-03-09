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
                std::make_shared<const PrimitiveDataTypeNode>(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                std::make_shared<const PrimitiveDataTypeNode>(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")));

            TestUtils::AreEqual(
                *std::make_shared<const PrimitiveDataTypeNode>(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                uut->GetDeclarationSpecifierSequence(),
                L"Verify declaration specifier sequence matches.");
            TestUtils::AreEqual(
                *std::make_shared<const PrimitiveDataTypeNode>(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                uut->GetDeclarator(),
                L"Verify declarator matches.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            // int parameter
            auto uut = SyntaxFactory::CreateParameter(
                std::make_shared<const PrimitiveDataTypeNode>(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                std::make_shared<const PrimitiveDataTypeNode>(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")));

            TestUtils::AreEqual(
                SyntaxFactory::CreateParameter(
                    std::make_shared<const PrimitiveDataTypeNode>(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                    std::make_shared<const PrimitiveDataTypeNode>(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int"))),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualDeclarationSpecifierSequence()
        {
            // int parameter
            auto uut = SyntaxFactory::CreateParameter(
                std::make_shared<const PrimitiveDataTypeNode>(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                std::make_shared<const PrimitiveDataTypeNode>(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateParameter(
                    std::make_shared<const PrimitiveDataTypeNode>(
                        PrimitiveDataType::Double,
                        SyntaxFactory::CreateToken(SyntaxTokenType::Double, L"double")),
                    std::make_shared<const PrimitiveDataTypeNode>(
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
                std::make_shared<const PrimitiveDataTypeNode>(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                std::make_shared<const PrimitiveDataTypeNode>(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateParameter(
                    std::make_shared<const PrimitiveDataTypeNode>(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                    std::make_shared<const PrimitiveDataTypeNode>(
                        PrimitiveDataType::Double,
                        SyntaxFactory::CreateToken(SyntaxTokenType::Double, L"double"))),
                uut,
                L"Verify does not match.");
        }
    };
}
