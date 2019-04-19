#pragma once
#include "TestUtils.h"
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class InnerTreeTranslationUnitTests
    {
    public:
        [[Fact]]
        void InitializeSimple()
        {
            auto uut = SyntaxFactory::CreateTranslationUnit(
                SyntaxFactory::CreateSyntaxList<Declaration>({}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::EndOfFile));

            Assert::AreEqual(
                SyntaxNodeType::TranslationUnit,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateSyntaxList<Declaration>({}),
                uut->GetDeclarations(),
                "Verify declarations matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::EndOfFile),
                uut->GetEndOfFileToken(),
                "Verify end of tile token matches.");
        }

        [[Fact]]
        void InitializeComplex()
        {
            auto uut = SyntaxFactory::CreateTranslationUnit(
                SyntaxFactory::CreateSyntaxList<Declaration>(
                    {
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                        SyntaxFactory::CreateSimpleDeclaration(
                            SyntaxFactory::CreateDeclarationSpecifier(
                                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                            SyntaxFactory::CreateInitializerDeclaratorList(
                                SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
                                    {
                                        SyntaxFactory::CreateInitializerDeclarator(
                                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
                                            nullptr),
                                    },
                                    {})),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::EndOfFile));

            Assert::AreEqual(
                SyntaxNodeType::TranslationUnit,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateSyntaxList<Declaration>(
                    {
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                        SyntaxFactory::CreateSimpleDeclaration(
                            SyntaxFactory::CreateDeclarationSpecifier(
                                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                            SyntaxFactory::CreateInitializerDeclaratorList(
                                SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
                                    {
                                        SyntaxFactory::CreateInitializerDeclarator(
                                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
                                            nullptr),
                                    },
                                    {})),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    }),
                uut->GetDeclarations(),
                "Verify declarations matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::EndOfFile),
                uut->GetEndOfFileToken(),
                "Verify end of tile token matches.");
        }

        [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateTranslationUnit(
                SyntaxFactory::CreateSyntaxList<Declaration>(
                    {
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::EndOfFile));

            TestUtils::AreEqual(
                SyntaxFactory::CreateTranslationUnit(
                    SyntaxFactory::CreateSyntaxList<Declaration>(
                        {
                            SyntaxFactory::CreateEmptyDeclaration(
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                        }),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::EndOfFile)),
                uut,
                "Verify matches.");
        }

        [[Fact]]
        void OperatorNotEqualNoDeclarations()
        {
            auto uut = SyntaxFactory::CreateTranslationUnit(
                SyntaxFactory::CreateSyntaxList<Declaration>(
                    {
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::EndOfFile));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateTranslationUnit(
                    SyntaxFactory::CreateSyntaxList<Declaration>({}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::EndOfFile)),
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void OperatorNotEqualWithDelarations()
        {
            auto uut = SyntaxFactory::CreateTranslationUnit(
                SyntaxFactory::CreateSyntaxList<Declaration>(
                    {
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::EndOfFile));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateTranslationUnit(
                    SyntaxFactory::CreateSyntaxList<Declaration>(
                        {
                            SyntaxFactory::CreateEmptyDeclaration(
                                SyntaxFactory::CreateKeywordToken(
                                    SyntaxTokenType::Semicolon,
                                    {
                                        SyntaxFactory::CreateTrivia(" "),
                                    },
                                    {})),
                        }),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::EndOfFile)),
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void OperatorNotEqualEndOfFileToken()
        {
            auto uut = SyntaxFactory::CreateTranslationUnit(
                SyntaxFactory::CreateSyntaxList<Declaration>(
                    {
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::EndOfFile));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateTranslationUnit(
                    SyntaxFactory::CreateSyntaxList<Declaration>(
                        {
                            SyntaxFactory::CreateEmptyDeclaration(
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                        }),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::EndOfFile,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {})),
                uut,
                "Verify do not match.");
        }
    };
}
