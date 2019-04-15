#pragma once
#include "TestUtils.h"
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class InnerTreeDeclarationSpecifierTests
    {
    public:
        // [[Fact]]
        void InitializeSimpleNoModifiers()
        {
            // int
            auto uut = SyntaxFactory::CreateDeclarationSpecifier(
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)));

            Assert::AreEqual(
                SyntaxNodeType::DeclarationSpecifier,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>({}),
                uut->GetLeadingModifiers(),
                "Verify leading modifier tokens match.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                uut->GetTypeSpecifier(),
                "Verify type specifier matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>({}),
                uut->GetTrailingModifiers(),
                "Verify trailing modifier tokens match.");
        }

        // [[Fact]]
        void InitializeSimpleWithModifiers()
        {
            // static thread_local int friend mutable
            auto uut = SyntaxFactory::CreateDeclarationSpecifier(
                SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
                {
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal),
                }),
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
                {
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Friend),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
                }));

            Assert::AreEqual(
                SyntaxNodeType::DeclarationSpecifier,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
                {
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal),
                }),
                uut->GetLeadingModifiers(),
                "Verify leading modifier tokens match.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                uut->GetTypeSpecifier(),
                "Verify type specifier matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
                {
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Friend),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
                }),
                uut->GetTrailingModifiers(),
                "Verify trailing modifier tokens match.");
        }

        // [[Fact]]
        void OperatorEqualNoModifiers()
        {
            // int
            auto uut = SyntaxFactory::CreateDeclarationSpecifier(
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)));

            TestUtils::AreEqual(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorEqualWithModifiers()
        {
            // static thread_local int friend mutable
            auto uut = SyntaxFactory::CreateDeclarationSpecifier(
                SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
                {
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal),
                }),
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
                {
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Friend),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
                }));

            TestUtils::AreEqual(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal),
                    }),
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                    SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Friend),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
                    })),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualNoLeadingModifiers()
        {
            // static thread_local int friend mutable
            auto uut = SyntaxFactory::CreateDeclarationSpecifier(
                SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
                {
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal),
                }),
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
                {
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Friend),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
                }));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>({}),
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                    SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Friend),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
                    })),
                uut,
                "Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualLeadingModifiers()
        {
            // static thread_local int friend mutable
            auto uut = SyntaxFactory::CreateDeclarationSpecifier(
                SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
                {
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal),
                }),
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
                {
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Friend),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
                }));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Inline),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal),
                    }),
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                    SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Friend),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
                    })),
                uut,
                "Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualTypeSpecifier()
        {
            // static thread_local int friend mutable
            auto uut = SyntaxFactory::CreateDeclarationSpecifier(
                SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
                {
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal),
                }),
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
                {
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Friend),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
                }));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal),
                    }),
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Long,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Long)),
                    SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Friend),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
                    })),
                uut,
                "Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualNoTrailingModifiers()
        {
            // static thread_local int friend mutable
            auto uut = SyntaxFactory::CreateDeclarationSpecifier(
                SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
                {
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal),
                }),
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
                {
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Friend),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
                }));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal),
                    }),
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                    SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>({})),
                uut,
                "Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualTrailingModifiers()
        {
            // static thread_local int friend mutable
            auto uut = SyntaxFactory::CreateDeclarationSpecifier(
                SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
                {
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal),
                }),
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
                {
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Friend),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
                }));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal),
                    }),
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                    SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Inline),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
                    })),
                uut,
                "Verify does not match.");
        }
    };
}
