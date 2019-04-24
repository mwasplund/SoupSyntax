#pragma once
#include "TestUtils.h"
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class OuterTreeParameterTests
    {
    public:
        [[Fact]]
        void InitializeSimple()
        {
            // int parameter
            auto uut = SyntaxFactory::CreateParameter(
                SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)))->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::Parameter,
                uut->GetType(),
                "Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                uut->GetDeclarationSpecifierSequence(),
                "Verify declaration specifier sequence matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                uut->GetDeclarator(),
                "Verify declarator matches.");
        }

        [[Fact]]
        void GetChildren()
        {
            // int parameter
            auto uut = SyntaxFactory::CreateParameter(
                SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)))->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>({
                    TestUtils::CreateChild(
                        SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                            PrimitiveDataType::Int,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                    TestUtils::CreateChild(
                        SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                            PrimitiveDataType::Int,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        [[Fact]]
        void OperatorEqual()
        {
            // int parameter
            auto uut = SyntaxFactory::CreateParameter(
                SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)))->CreateOuter(nullptr);

            TestUtils::AreEqual(
                SyntaxFactory::CreateParameter(
                    SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                    SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                uut,
                "Verify matches.");
        }

        [[Fact]]
        void OperatorNotEqualDeclarationSpecifierSequence()
        {
            // int parameter
            auto uut = SyntaxFactory::CreateParameter(
                SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateParameter(
                    SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                        PrimitiveDataType::Double,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Double)),
                    SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                uut,
                "Verify does not match.");
        }

        [[Fact]]
        void OperatorNotEqualDeclarator()
        {
            // int parameter
            auto uut = SyntaxFactory::CreateParameter(
                SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateParameter(
                    SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                    SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                        PrimitiveDataType::Double,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Double))),
                uut,
                "Verify does not match.");
        }
    };
}
