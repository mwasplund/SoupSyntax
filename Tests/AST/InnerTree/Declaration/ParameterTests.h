#pragma once
#include "TestUtils.h"
#include "../SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
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
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)));

            Assert::AreEqual(
                SyntaxNodeType::Parameter,
                uut->GetType(),
                "Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                uut->GetDeclarationSpecifier(),
                "Verify declaration specifier sequence matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                uut->GetDeclarator(),
                "Verify declarator matches.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            // int parameter
            auto uut = SyntaxFactory::CreateParameter(
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)));

            TestUtils::AreEqual(
                SyntaxFactory::CreateParameter(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualDeclarationSpecifier()
        {
            // int parameter
            auto uut = SyntaxFactory::CreateParameter(
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateParameter(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Double,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Double)),
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                uut,
                "Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualDeclarator()
        {
            // int parameter
            auto uut = SyntaxFactory::CreateParameter(
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateParameter(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Double,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Double))),
                uut,
                "Verify does not match.");
        }
    };
}
