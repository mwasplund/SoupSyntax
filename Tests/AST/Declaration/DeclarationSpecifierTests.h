#pragma once
#include "TestUtils.h"
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class DeclarationSpecifierTests
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
            Assert::IsTrue(
                uut->GetLeadingModifiers().empty(),
                "Verify leading modifier tokens match.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                uut->GetTypeSpecifier(),
                "Verify type specifier matches.");
            Assert::IsTrue(
                uut->GetTrailingModifiers().empty(),
                "Verify trailing modifier tokens match.");
        }

        // [[Fact]]
        void InitializeSimpleWithModifiers()
        {
            // static thread_local int friend mutable
            auto uut = SyntaxFactory::CreateDeclarationSpecifier(
                {
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal),
                },
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                {
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Friend),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
                });

            Assert::AreEqual(
                SyntaxNodeType::DeclarationSpecifier,
                uut->GetType(),
                "Verify has correct type.");
            TestUtils::AreEqual(
                std::vector<std::shared_ptr<const SyntaxToken>>({
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
            TestUtils::AreEqual(
                std::vector<std::shared_ptr<const SyntaxToken>>({
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Friend),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
                }),
                uut->GetTrailingModifiers(),
                "Verify trailing modifier tokens match.");
        }

        // [[Fact]]
        void GetChildrenNoModifiers()
        {
            // int
            auto uut = SyntaxFactory::CreateDeclarationSpecifier(
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(
                        SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                            PrimitiveDataType::Int,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void GetChildrenWithModifiers()
        {
            // static thread_local int friend mutable
            auto uut = SyntaxFactory::CreateDeclarationSpecifier(
                {
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal),
                },
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                {
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Friend),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
                });

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static)),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal)),
                    SyntaxNodeChild(
                        SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                            PrimitiveDataType::Int,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Friend)),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable)),
                }),
                uut->GetChildren(),
                "Verify children match.");
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
                {
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal),
                },
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                {
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Friend),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
                });

            TestUtils::AreEqual(
                SyntaxFactory::CreateDeclarationSpecifier(
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal),
                    },
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Friend),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
                    }),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualNoLeadingModifiers()
        {
            // static thread_local int friend mutable
            auto uut = SyntaxFactory::CreateDeclarationSpecifier(
                {
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal),
                },
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                {
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Friend),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
                });

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateDeclarationSpecifier(
                    {},
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Friend),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
                    }),
                uut,
                "Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualLeadingModifiers()
        {
            // static thread_local int friend mutable
            auto uut = SyntaxFactory::CreateDeclarationSpecifier(
                {
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal),
                },
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                {
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Friend),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
                });

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateDeclarationSpecifier(
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Inline),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal),
                    },
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Friend),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
                    }),
                uut,
                "Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualTypeSpecifier()
        {
            // static thread_local int friend mutable
            auto uut = SyntaxFactory::CreateDeclarationSpecifier(
                {
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal),
                },
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                {
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Friend),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
                });

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateDeclarationSpecifier(
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal),
                    },
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Long,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Long)),
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Friend),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
                    }),
                uut,
                "Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualNoTrailingModifiers()
        {
            // static thread_local int friend mutable
            auto uut = SyntaxFactory::CreateDeclarationSpecifier(
                {
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal),
                },
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                {
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Friend),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
                });

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateDeclarationSpecifier(
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal),
                    },
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                    {}),
                uut,
                "Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualTrailingModifiers()
        {
            // static thread_local int friend mutable
            auto uut = SyntaxFactory::CreateDeclarationSpecifier(
                {
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal),
                },
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                {
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Friend),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
                });

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateDeclarationSpecifier(
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal),
                    },
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Inline),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
                    }),
                uut,
                "Verify does not match.");
        }
    };
}
