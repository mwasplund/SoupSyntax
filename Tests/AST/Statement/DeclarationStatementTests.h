#pragma once
#include "TestUtils.h"
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class DeclarationStatementTests
    {
    public:
        // [[Fact]]
        void InitializeSimple()
        {
            auto uut = SyntaxFactory::CreateDeclarationStatement(
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
                                    SyntaxFactory::CreateSimpleNameExpression(
                                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
                                    nullptr),
                            }),
                            std::vector<std::shared_ptr<const SyntaxToken>>())),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)));

            Assert::AreEqual(
                SyntaxNodeType::DeclarationStatement,
                uut->GetType(),
                "Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSimpleDeclaration(
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                            PrimitiveDataType::Int,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                    SyntaxFactory::CreateInitializerDeclaratorList(
                        std::make_shared<const SyntaxSeparatorList<InitializerDeclarator>>(
                            std::vector<std::shared_ptr<const InitializerDeclarator>>(
                            {
                                SyntaxFactory::CreateInitializerDeclarator(
                                    SyntaxFactory::CreateSimpleNameExpression(
                                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
                                    nullptr),
                            }),
                            std::vector<std::shared_ptr<const SyntaxToken>>())),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                uut->GetDeclaration(),
                "Verify declaration matches.");
        }

        // [[Fact]]
        void GetChildren()
        {
            auto uut = SyntaxFactory::CreateDeclarationStatement(
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
                                    SyntaxFactory::CreateSimpleNameExpression(
                                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
                                    nullptr),
                            }),
                            std::vector<std::shared_ptr<const SyntaxToken>>())),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
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
                                            SyntaxFactory::CreateSimpleNameExpression(
                                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
                                            nullptr),
                                    }),
                                    std::vector<std::shared_ptr<const SyntaxToken>>())),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateDeclarationStatement(
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
                                    SyntaxFactory::CreateSimpleNameExpression(
                                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
                                    nullptr),
                            }),
                            std::vector<std::shared_ptr<const SyntaxToken>>())),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)));

            TestUtils::AreEqual(
                SyntaxFactory::CreateDeclarationStatement(
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
                                        SyntaxFactory::CreateSimpleNameExpression(
                                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
                                        nullptr),
                                }),
                                std::vector<std::shared_ptr<const SyntaxToken>>())),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualDeclaration()
        {
            auto uut = SyntaxFactory::CreateDeclarationStatement(
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
                                    SyntaxFactory::CreateSimpleNameExpression(
                                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
                                    nullptr),
                            }),
                            std::vector<std::shared_ptr<const SyntaxToken>>())),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateDeclarationStatement(
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
                                        SyntaxFactory::CreateSimpleNameExpression(
                                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i2")),
                                        nullptr),
                                }),
                                std::vector<std::shared_ptr<const SyntaxToken>>())),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
                uut,
                "Verify do not match.");
        }
    };
}
