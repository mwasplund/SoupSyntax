#pragma once
#include "TestUtils.h"
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class OuterTreePrimitiveDataTypeSpecifierTests
    {
    public:
        [[Fact]]
        void InitializeSimple()
        {
            auto uut = SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                PrimitiveDataType::Int,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::PrimitiveDataTypeSpecifier,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                PrimitiveDataType::Int,
                uut->GetPrimitiveType(),
                "Verify primitive type matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int),
                uut->GetToken(),
                "Verify token matches.");
        }

        [[Fact]]
        void GetChildren()
        {
            auto uut = SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                PrimitiveDataType::Int,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>({
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                PrimitiveDataType::Int,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))->CreateOuter(nullptr);

            TestUtils::AreEqual(
                SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                uut,
                "Verify matches.");
        }

        [[Fact]]
        void OperatorNotEqualPrimitiveType()
        {
            auto uut = SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                PrimitiveDataType::Int,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                    PrimitiveDataType::Double,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                uut,
                "Verify does not match.");
        }

        [[Fact]]
        void OperatorNotEqualToken()
        {
            auto uut = SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                PrimitiveDataType::Int,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Int,
                        {
                            SyntaxFactory::CreateTrivia(" ")
                        },
                        {})),
                uut,
                "Verify does not match.");
        }
    };
}
