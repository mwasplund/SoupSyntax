#pragma once
#include "TestUtils.h"
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class TranslationUnitTests
    {
    public:
        // [[Fact]]
        void InitializeSimple()
        {
            auto uut = SyntaxFactory::CreateTranslationUnit(
                std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>()),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::EndOfFile));

            Assert::AreEqual(
                SyntaxNodeType::TranslationUnit,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>()),
                uut->GetDeclarations(),
                "Verify declarations matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::EndOfFile),
                uut->GetEndOfFileToken(),
                "Verify end of tile token matches.");
        }

        // [[Fact]]
        void InitializeComplex()
        {
            auto uut = SyntaxFactory::CreateTranslationUnit(
                std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>({
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                        SyntaxFactory::CreateSimpleDeclaration(
                            SyntaxFactory::CreateDeclarationSpecifier(
                                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                            SyntaxFactory::CreateInitializerDeclaratorList(
                                std::make_shared<const SyntaxSeparatorList<InitializerDeclarator>>(
                                    std::vector<std::shared_ptr<const InitializerDeclarator>>(
                                    {
                                        SyntaxFactory::CreateInitializerDeclarator(
                                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
                                            nullptr),
                                    }),
                                    std::vector<std::shared_ptr<const SyntaxToken>>())),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::EndOfFile));

            Assert::AreEqual(
                SyntaxNodeType::TranslationUnit,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>({
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                        SyntaxFactory::CreateSimpleDeclaration(
                            SyntaxFactory::CreateDeclarationSpecifier(
                                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                            SyntaxFactory::CreateInitializerDeclaratorList(
                                std::make_shared<const SyntaxSeparatorList<InitializerDeclarator>>(
                                    std::vector<std::shared_ptr<const InitializerDeclarator>>(
                                    {
                                        SyntaxFactory::CreateInitializerDeclarator(
                                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
                                            nullptr),
                                    }),
                                    std::vector<std::shared_ptr<const SyntaxToken>>())),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                uut->GetDeclarations(),
                "Verify declarations matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::EndOfFile),
                uut->GetEndOfFileToken(),
                "Verify end of tile token matches.");
        }

        // [[Fact]]
        void GetChildrenSimple()
        {
            auto uut = SyntaxFactory::CreateTranslationUnit(
                std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>()),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::EndOfFile));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::EndOfFile)),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void GetChildrenComplex()
        {
            auto uut = SyntaxFactory::CreateTranslationUnit(
                std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>({
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                        SyntaxFactory::CreateSimpleDeclaration(
                            SyntaxFactory::CreateDeclarationSpecifier(
                                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                            SyntaxFactory::CreateInitializerDeclaratorList(
                                std::make_shared<const SyntaxSeparatorList<InitializerDeclarator>>(
                                    std::vector<std::shared_ptr<const InitializerDeclarator>>(
                                    {
                                        SyntaxFactory::CreateInitializerDeclarator(
                                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
                                            nullptr),
                                    }),
                                    std::vector<std::shared_ptr<const SyntaxToken>>())),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::EndOfFile));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
                    SyntaxNodeChild(
                        SyntaxFactory::CreateSimpleDeclaration(
                            SyntaxFactory::CreateDeclarationSpecifier(
                                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                            SyntaxFactory::CreateInitializerDeclaratorList(
                                std::make_shared<const SyntaxSeparatorList<InitializerDeclarator>>(
                                    std::vector<std::shared_ptr<const InitializerDeclarator>>(
                                    {
                                        SyntaxFactory::CreateInitializerDeclarator(
                                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
                                            nullptr),
                                    }),
                                    std::vector<std::shared_ptr<const SyntaxToken>>())),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
                    SyntaxNodeChild(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::EndOfFile)),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateTranslationUnit(
                std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>({
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::EndOfFile));

            TestUtils::AreEqual(
                SyntaxFactory::CreateTranslationUnit(
                    std::make_shared<const SyntaxList<Declaration>>(
                        std::vector<std::shared_ptr<const Declaration>>({
                            SyntaxFactory::CreateEmptyDeclaration(
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::EndOfFile)),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualNoDeclarations()
        {
            auto uut = SyntaxFactory::CreateTranslationUnit(
                std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>({
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::EndOfFile));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateTranslationUnit(
                    std::make_shared<const SyntaxList<Declaration>>(
                        std::vector<std::shared_ptr<const Declaration>>()),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::EndOfFile)),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualWithDelarations()
        {
            auto uut = SyntaxFactory::CreateTranslationUnit(
                std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>({
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::EndOfFile));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateTranslationUnit(
                    std::make_shared<const SyntaxList<Declaration>>(
                        std::vector<std::shared_ptr<const Declaration>>({
                            SyntaxFactory::CreateEmptyDeclaration(
                                SyntaxFactory::CreateKeywordToken(
                                    SyntaxTokenType::Semicolon,
                                    {
                                        SyntaxFactory::CreateTrivia(" ", TextSpan()),
                                    },
                                    {})),
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::EndOfFile)),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualEndOfFileToken()
        {
            auto uut = SyntaxFactory::CreateTranslationUnit(
                std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>({
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::EndOfFile));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateTranslationUnit(
                    std::make_shared<const SyntaxList<Declaration>>(
                        std::vector<std::shared_ptr<const Declaration>>({
                            SyntaxFactory::CreateEmptyDeclaration(
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                        })),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::EndOfFile,
                        {
                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                        },
                        {})),
                uut,
                "Verify do not match.");
        }
    };
}
