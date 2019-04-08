#pragma once
#include "TestUtils.h"
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class MemberDeclarationTests
    {
    public:
        // [[Fact]]
        void InitializeSimple()
        {
            // int i;
            auto uut = SyntaxFactory::CreateMemberDeclaration(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                SyntaxFactory::CreateMemberDeclaratorList(
                    std::make_shared<const SyntaxSeparatorList<MemberDeclarator>>(
                        std::vector<std::shared_ptr<const MemberDeclarator>>(
                        {
                            SyntaxFactory::CreateMemberDeclarator(
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
                                nullptr),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>())),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            Assert::AreEqual(
                SyntaxNodeType::MemberDeclaration,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                uut->GetDeclarationSpecifier(),
                "Verify declaration specifier matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateMemberDeclaratorList(
                    std::make_shared<const SyntaxSeparatorList<MemberDeclarator>>(
                        std::vector<std::shared_ptr<const MemberDeclarator>>(
                        {
                            SyntaxFactory::CreateMemberDeclarator(
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
                                nullptr),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>())),
                uut->GetMemberDeclaratorList(),
                "Verify initializer declarator list matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon),
                uut->GetSemicolonToken(),
                "Verify semicolon token matches.");
        }

        // [[Fact]]
        void GetChildren()
        {
            // int i;
            auto uut = SyntaxFactory::CreateMemberDeclaration(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                SyntaxFactory::CreateMemberDeclaratorList(
                    std::make_shared<const SyntaxSeparatorList<MemberDeclarator>>(
                        std::vector<std::shared_ptr<const MemberDeclarator>>(
                        {
                            SyntaxFactory::CreateMemberDeclarator(
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
                                nullptr),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>())),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(
                        SyntaxFactory::CreateDeclarationSpecifier(
                            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)))),
                    SyntaxNodeChild(
                        SyntaxFactory::CreateMemberDeclaratorList(
                            std::make_shared<const SyntaxSeparatorList<MemberDeclarator>>(
                                std::vector<std::shared_ptr<const MemberDeclarator>>(
                                {
                                    SyntaxFactory::CreateMemberDeclarator(
                                        SyntaxFactory::CreateSimpleIdentifierExpression(
                                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
                                        nullptr),
                                }),
                                std::vector<std::shared_ptr<const SyntaxToken>>()))),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            // int i;
            auto uut = SyntaxFactory::CreateMemberDeclaration(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                SyntaxFactory::CreateMemberDeclaratorList(
                    std::make_shared<const SyntaxSeparatorList<MemberDeclarator>>(
                        std::vector<std::shared_ptr<const MemberDeclarator>>(
                        {
                            SyntaxFactory::CreateMemberDeclarator(
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
                                nullptr),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>())),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(
                SyntaxFactory::CreateMemberDeclaration(
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                            PrimitiveDataType::Int,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                    SyntaxFactory::CreateMemberDeclaratorList(
                        std::make_shared<const SyntaxSeparatorList<MemberDeclarator>>(
                            std::vector<std::shared_ptr<const MemberDeclarator>>(
                            {
                                SyntaxFactory::CreateMemberDeclarator(
                                    SyntaxFactory::CreateSimpleIdentifierExpression(
                                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
                                    nullptr),
                            }),
                            std::vector<std::shared_ptr<const SyntaxToken>>())),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualDeclarationSpecifier()
        {
            // int i;
            auto uut = SyntaxFactory::CreateMemberDeclaration(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                SyntaxFactory::CreateMemberDeclaratorList(
                    std::make_shared<const SyntaxSeparatorList<MemberDeclarator>>(
                        std::vector<std::shared_ptr<const MemberDeclarator>>(
                        {
                            SyntaxFactory::CreateMemberDeclarator(
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
                                nullptr),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>())),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateMemberDeclaration(
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                            PrimitiveDataType::Long,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Long))),
                    SyntaxFactory::CreateMemberDeclaratorList(
                        std::make_shared<const SyntaxSeparatorList<MemberDeclarator>>(
                            std::vector<std::shared_ptr<const MemberDeclarator>>(
                            {
                                SyntaxFactory::CreateMemberDeclarator(
                                    SyntaxFactory::CreateSimpleIdentifierExpression(
                                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
                                    nullptr),
                            }),
                            std::vector<std::shared_ptr<const SyntaxToken>>())),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualMemberDeclaratorList()
        {
            // int i;
            auto uut = SyntaxFactory::CreateMemberDeclaration(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                SyntaxFactory::CreateMemberDeclaratorList(
                    std::make_shared<const SyntaxSeparatorList<MemberDeclarator>>(
                        std::vector<std::shared_ptr<const MemberDeclarator>>(
                        {
                            SyntaxFactory::CreateMemberDeclarator(
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
                                nullptr),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>())),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateMemberDeclaration(
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                            PrimitiveDataType::Int,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                    SyntaxFactory::CreateMemberDeclaratorList(
                        std::make_shared<const SyntaxSeparatorList<MemberDeclarator>>(
                            std::vector<std::shared_ptr<const MemberDeclarator>>(
                            {
                                SyntaxFactory::CreateMemberDeclarator(
                                    SyntaxFactory::CreateSimpleIdentifierExpression(
                                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i2")),
                                    nullptr),
                            }),
                            std::vector<std::shared_ptr<const SyntaxToken>>())),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualSemicolonToken()
        {
            // int i;
            auto uut = SyntaxFactory::CreateMemberDeclaration(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                SyntaxFactory::CreateMemberDeclaratorList(
                    std::make_shared<const SyntaxSeparatorList<MemberDeclarator>>(
                        std::vector<std::shared_ptr<const MemberDeclarator>>(
                        {
                            SyntaxFactory::CreateMemberDeclarator(
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
                                nullptr),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>())),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateMemberDeclaration(
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                            PrimitiveDataType::Int,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                    SyntaxFactory::CreateMemberDeclaratorList(
                        std::make_shared<const SyntaxSeparatorList<MemberDeclarator>>(
                            std::vector<std::shared_ptr<const MemberDeclarator>>(
                            {
                                SyntaxFactory::CreateMemberDeclarator(
                                    SyntaxFactory::CreateSimpleIdentifierExpression(
                                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
                                    nullptr),
                            }),
                            std::vector<std::shared_ptr<const SyntaxToken>>())),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Semicolon,
                        {
                            SyntaxFactory::CreateTrivia(" ", TextSpan(0, 1)),
                        },
                        {})),
                uut,
                "Verify do not match.");
        }
    };
}