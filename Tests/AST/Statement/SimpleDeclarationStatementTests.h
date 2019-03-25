#pragma once
#include "TestUtils.h"
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class SimpleDeclarationStatementTests
    {
    public:
        // [[Fact]]
        void InitializeSimple()
        {
            // int i;
            auto uut = SyntaxFactory::CreateSimpleDeclarationStatement(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int"))),
                SyntaxFactory::CreateInitializerDeclaratorList(
                    std::make_shared<const SyntaxList<InitializerDeclarator>>(
                        std::vector<std::shared_ptr<const InitializerDeclarator>>(
                        {
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleNameExpression(
                                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"i")),
                                nullptr),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>())),
                SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"));

            Assert::AreEqual(
                SyntaxNodeType::SimpleDeclarationStatement,
                uut->GetType(),
                L"Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int"))),
                uut->GetDeclarationSpecifier(),
                L"Verify declaration specifier matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateInitializerDeclaratorList(
                    std::make_shared<const SyntaxList<InitializerDeclarator>>(
                        std::vector<std::shared_ptr<const InitializerDeclarator>>(
                        {
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleNameExpression(
                                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"i")),
                                nullptr),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>())),
                uut->GetInitializerDeclaratorList(),
                L"Verify initializer declarator list matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"),
                uut->GetSemicolonToken(),
                L"Verify semicolon token matches.");
        }

        // [[Fact]]
        void GetChildren()
        {
            // int i;
            auto uut = SyntaxFactory::CreateSimpleDeclarationStatement(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int"))),
                SyntaxFactory::CreateInitializerDeclaratorList(
                    std::make_shared<const SyntaxList<InitializerDeclarator>>(
                        std::vector<std::shared_ptr<const InitializerDeclarator>>(
                        {
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleNameExpression(
                                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"i")),
                                nullptr),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>())),
                SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(
                        SyntaxFactory::CreateDeclarationSpecifier(
                            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")))),
                    SyntaxNodeChild(
                        SyntaxFactory::CreateInitializerDeclaratorList(
                            std::make_shared<const SyntaxList<InitializerDeclarator>>(
                                std::vector<std::shared_ptr<const InitializerDeclarator>>(
                                {
                                    SyntaxFactory::CreateInitializerDeclarator(
                                        SyntaxFactory::CreateSimpleNameExpression(
                                            SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"i")),
                                        nullptr),
                                }),
                                std::vector<std::shared_ptr<const SyntaxToken>>()))),
                    SyntaxNodeChild(SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            // int i;
            auto uut = SyntaxFactory::CreateSimpleDeclarationStatement(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int"))),
                SyntaxFactory::CreateInitializerDeclaratorList(
                    std::make_shared<const SyntaxList<InitializerDeclarator>>(
                        std::vector<std::shared_ptr<const InitializerDeclarator>>(
                        {
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleNameExpression(
                                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"i")),
                                nullptr),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>())),
                SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"));

            TestUtils::AreEqual(
                SyntaxFactory::CreateSimpleDeclarationStatement(
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                            PrimitiveDataType::Int,
                            SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int"))),
                    SyntaxFactory::CreateInitializerDeclaratorList(
                        std::make_shared<const SyntaxList<InitializerDeclarator>>(
                            std::vector<std::shared_ptr<const InitializerDeclarator>>(
                            {
                                SyntaxFactory::CreateInitializerDeclarator(
                                    SyntaxFactory::CreateSimpleNameExpression(
                                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"i")),
                                    nullptr),
                            }),
                            std::vector<std::shared_ptr<const SyntaxToken>>())),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualDeclarationSpecifier()
        {
            // int i;
            auto uut = SyntaxFactory::CreateSimpleDeclarationStatement(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int"))),
                SyntaxFactory::CreateInitializerDeclaratorList(
                    std::make_shared<const SyntaxList<InitializerDeclarator>>(
                        std::vector<std::shared_ptr<const InitializerDeclarator>>(
                        {
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleNameExpression(
                                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"i")),
                                nullptr),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>())),
                SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateSimpleDeclarationStatement(
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                            PrimitiveDataType::Long,
                            SyntaxFactory::CreateToken(SyntaxTokenType::Long, L"long"))),
                    SyntaxFactory::CreateInitializerDeclaratorList(
                        std::make_shared<const SyntaxList<InitializerDeclarator>>(
                            std::vector<std::shared_ptr<const InitializerDeclarator>>(
                            {
                                SyntaxFactory::CreateInitializerDeclarator(
                                    SyntaxFactory::CreateSimpleNameExpression(
                                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"i")),
                                    nullptr),
                            }),
                            std::vector<std::shared_ptr<const SyntaxToken>>())),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualInitializerDeclaratorList()
        {
            // int i;
            auto uut = SyntaxFactory::CreateSimpleDeclarationStatement(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int"))),
                SyntaxFactory::CreateInitializerDeclaratorList(
                    std::make_shared<const SyntaxList<InitializerDeclarator>>(
                        std::vector<std::shared_ptr<const InitializerDeclarator>>(
                        {
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleNameExpression(
                                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"i")),
                                nullptr),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>())),
                SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateSimpleDeclarationStatement(
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                            PrimitiveDataType::Int,
                            SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int"))),
                    SyntaxFactory::CreateInitializerDeclaratorList(
                        std::make_shared<const SyntaxList<InitializerDeclarator>>(
                            std::vector<std::shared_ptr<const InitializerDeclarator>>(
                            {
                                SyntaxFactory::CreateInitializerDeclarator(
                                    SyntaxFactory::CreateSimpleNameExpression(
                                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"i2")),
                                    nullptr),
                            }),
                            std::vector<std::shared_ptr<const SyntaxToken>>())),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualSemicolonToken()
        {
            // int i;
            auto uut = SyntaxFactory::CreateSimpleDeclarationStatement(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int"))),
                SyntaxFactory::CreateInitializerDeclaratorList(
                    std::make_shared<const SyntaxList<InitializerDeclarator>>(
                        std::vector<std::shared_ptr<const InitializerDeclarator>>(
                        {
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleNameExpression(
                                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"i")),
                                nullptr),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>())),
                SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateSimpleDeclarationStatement(
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                            PrimitiveDataType::Int,
                            SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int"))),
                    SyntaxFactory::CreateInitializerDeclaratorList(
                        std::make_shared<const SyntaxList<InitializerDeclarator>>(
                            std::vector<std::shared_ptr<const InitializerDeclarator>>(
                            {
                                SyntaxFactory::CreateInitializerDeclarator(
                                    SyntaxFactory::CreateSimpleNameExpression(
                                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"i")),
                                    nullptr),
                            }),
                            std::vector<std::shared_ptr<const SyntaxToken>>())),
                    SyntaxFactory::CreateToken(
                        SyntaxTokenType::Semicolon,
                        L";",
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 1)),
                        },
                        {})),
                uut,
                L"Verify do not match.");
        }
    };
}
