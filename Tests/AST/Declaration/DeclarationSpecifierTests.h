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
                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")));

            Assert::AreEqual(
                SyntaxNodeType::DeclarationSpecifier,
                uut->GetType(),
                L"Verify has correct type.");
            Assert::IsTrue(
                uut->GetLeadingModifiers().empty(),
                L"Verify leading modifier tokens match.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                uut->GetTypeSpecifier(),
                L"Verify type specifier matches.");
            Assert::IsTrue(
                uut->GetTrailingModifiers().empty(),
                L"Verify trailing modifier tokens match.");
        }

        // [[Fact]]
        void InitializeSimpleWithModifiers()
        {
            // static thread_local int friend mutable
            auto uut = SyntaxFactory::CreateDeclarationSpecifier(
                {
                    SyntaxFactory::CreateToken(SyntaxTokenType::Static, L"static"),
                    SyntaxFactory::CreateToken(SyntaxTokenType::ThreadLocal, L"thread_local"),
                },
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                {
                    SyntaxFactory::CreateToken(SyntaxTokenType::Friend, L"friend"),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Mutable, L"mutable"),
                });

            Assert::AreEqual(
                SyntaxNodeType::DeclarationSpecifier,
                uut->GetType(),
                L"Verify has correct type.");
            TestUtils::AreEqual(
                std::vector<std::shared_ptr<const SyntaxToken>>({
                    SyntaxFactory::CreateToken(SyntaxTokenType::Static, L"static"),
                    SyntaxFactory::CreateToken(SyntaxTokenType::ThreadLocal, L"thread_local"),
                }),
                uut->GetLeadingModifiers(),
                L"Verify leading modifier tokens match.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                uut->GetTypeSpecifier(),
                L"Verify type specifier matches.");
            TestUtils::AreEqual(
                std::vector<std::shared_ptr<const SyntaxToken>>({
                    SyntaxFactory::CreateToken(SyntaxTokenType::Friend, L"friend"),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Mutable, L"mutable"),
                }),
                uut->GetTrailingModifiers(),
                L"Verify trailing modifier tokens match.");
        }

        // [[Fact]]
        void GetChildrenNoModifiers()
        {
            // int
            auto uut = SyntaxFactory::CreateDeclarationSpecifier(
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(
                        SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                            PrimitiveDataType::Int,
                            SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int"))),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void GetChildrenWithModifiers()
        {
            // static thread_local int friend mutable
            auto uut = SyntaxFactory::CreateDeclarationSpecifier(
                {
                    SyntaxFactory::CreateToken(SyntaxTokenType::Static, L"static"),
                    SyntaxFactory::CreateToken(SyntaxTokenType::ThreadLocal, L"thread_local"),
                },
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                {
                    SyntaxFactory::CreateToken(SyntaxTokenType::Friend, L"friend"),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Mutable, L"mutable"),
                });

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(SyntaxFactory::CreateToken(SyntaxTokenType::Static, L"static")),
                    SyntaxNodeChild(SyntaxFactory::CreateToken(SyntaxTokenType::ThreadLocal, L"thread_local")),
                    SyntaxNodeChild(
                        SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                            PrimitiveDataType::Int,
                            SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int"))),
                    SyntaxNodeChild(SyntaxFactory::CreateToken(SyntaxTokenType::Friend, L"friend")),
                    SyntaxNodeChild(SyntaxFactory::CreateToken(SyntaxTokenType::Mutable, L"mutable")),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void OperatorEqualNoModifiers()
        {
            // int
            auto uut = SyntaxFactory::CreateDeclarationSpecifier(
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")));

            TestUtils::AreEqual(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int"))),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorEqualWithModifiers()
        {
            // static thread_local int friend mutable
            auto uut = SyntaxFactory::CreateDeclarationSpecifier(
                {
                    SyntaxFactory::CreateToken(SyntaxTokenType::Static, L"static"),
                    SyntaxFactory::CreateToken(SyntaxTokenType::ThreadLocal, L"thread_local"),
                },
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                {
                    SyntaxFactory::CreateToken(SyntaxTokenType::Friend, L"friend"),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Mutable, L"mutable"),
                });

            TestUtils::AreEqual(
                SyntaxFactory::CreateDeclarationSpecifier(
                    {
                        SyntaxFactory::CreateToken(SyntaxTokenType::Static, L"static"),
                        SyntaxFactory::CreateToken(SyntaxTokenType::ThreadLocal, L"thread_local"),
                    },
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                    {
                        SyntaxFactory::CreateToken(SyntaxTokenType::Friend, L"friend"),
                        SyntaxFactory::CreateToken(SyntaxTokenType::Mutable, L"mutable"),
                    }),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualNoLeadingModifiers()
        {
            // static thread_local int friend mutable
            auto uut = SyntaxFactory::CreateDeclarationSpecifier(
                {
                    SyntaxFactory::CreateToken(SyntaxTokenType::Static, L"static"),
                    SyntaxFactory::CreateToken(SyntaxTokenType::ThreadLocal, L"thread_local"),
                },
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                {
                    SyntaxFactory::CreateToken(SyntaxTokenType::Friend, L"friend"),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Mutable, L"mutable"),
                });

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateDeclarationSpecifier(
                    {},
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                    {
                        SyntaxFactory::CreateToken(SyntaxTokenType::Friend, L"friend"),
                        SyntaxFactory::CreateToken(SyntaxTokenType::Mutable, L"mutable"),
                    }),
                uut,
                L"Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualLeadingModifiers()
        {
            // static thread_local int friend mutable
            auto uut = SyntaxFactory::CreateDeclarationSpecifier(
                {
                    SyntaxFactory::CreateToken(SyntaxTokenType::Static, L"static"),
                    SyntaxFactory::CreateToken(SyntaxTokenType::ThreadLocal, L"thread_local"),
                },
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                {
                    SyntaxFactory::CreateToken(SyntaxTokenType::Friend, L"friend"),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Mutable, L"mutable"),
                });

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateDeclarationSpecifier(
                    {
                        SyntaxFactory::CreateToken(SyntaxTokenType::Inline, L"inline"),
                        SyntaxFactory::CreateToken(SyntaxTokenType::ThreadLocal, L"thread_local"),
                    },
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                    {
                        SyntaxFactory::CreateToken(SyntaxTokenType::Friend, L"friend"),
                        SyntaxFactory::CreateToken(SyntaxTokenType::Mutable, L"mutable"),
                    }),
                uut,
                L"Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualTypeSpecifier()
        {
            // static thread_local int friend mutable
            auto uut = SyntaxFactory::CreateDeclarationSpecifier(
                {
                    SyntaxFactory::CreateToken(SyntaxTokenType::Static, L"static"),
                    SyntaxFactory::CreateToken(SyntaxTokenType::ThreadLocal, L"thread_local"),
                },
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                {
                    SyntaxFactory::CreateToken(SyntaxTokenType::Friend, L"friend"),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Mutable, L"mutable"),
                });

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateDeclarationSpecifier(
                    {
                        SyntaxFactory::CreateToken(SyntaxTokenType::Static, L"static"),
                        SyntaxFactory::CreateToken(SyntaxTokenType::ThreadLocal, L"thread_local"),
                    },
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Long,
                        SyntaxFactory::CreateToken(SyntaxTokenType::Long, L"long")),
                    {
                        SyntaxFactory::CreateToken(SyntaxTokenType::Friend, L"friend"),
                        SyntaxFactory::CreateToken(SyntaxTokenType::Mutable, L"mutable"),
                    }),
                uut,
                L"Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualNoTrailingModifiers()
        {
            // static thread_local int friend mutable
            auto uut = SyntaxFactory::CreateDeclarationSpecifier(
                {
                    SyntaxFactory::CreateToken(SyntaxTokenType::Static, L"static"),
                    SyntaxFactory::CreateToken(SyntaxTokenType::ThreadLocal, L"thread_local"),
                },
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                {
                    SyntaxFactory::CreateToken(SyntaxTokenType::Friend, L"friend"),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Mutable, L"mutable"),
                });

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateDeclarationSpecifier(
                    {
                        SyntaxFactory::CreateToken(SyntaxTokenType::Static, L"static"),
                        SyntaxFactory::CreateToken(SyntaxTokenType::ThreadLocal, L"thread_local"),
                    },
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                    {}),
                uut,
                L"Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualTrailingModifiers()
        {
            // static thread_local int friend mutable
            auto uut = SyntaxFactory::CreateDeclarationSpecifier(
                {
                    SyntaxFactory::CreateToken(SyntaxTokenType::Static, L"static"),
                    SyntaxFactory::CreateToken(SyntaxTokenType::ThreadLocal, L"thread_local"),
                },
                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                    PrimitiveDataType::Int,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                {
                    SyntaxFactory::CreateToken(SyntaxTokenType::Friend, L"friend"),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Mutable, L"mutable"),
                });

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateDeclarationSpecifier(
                    {
                        SyntaxFactory::CreateToken(SyntaxTokenType::Static, L"static"),
                        SyntaxFactory::CreateToken(SyntaxTokenType::ThreadLocal, L"thread_local"),
                    },
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                    {
                        SyntaxFactory::CreateToken(SyntaxTokenType::Inline, L"inline"),
                        SyntaxFactory::CreateToken(SyntaxTokenType::Mutable, L"mutable"),
                    }),
                uut,
                L"Verify does not match.");
        }
    };
}
