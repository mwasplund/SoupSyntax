#pragma once
#include "TestUtils.h"
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class OuterTreeDeclarationStatementTests
    {
    public:
        [[Fact]]
        void InitializeSimple()
        {
            auto uut = SyntaxFactory::CreateDeclarationStatement(
                SyntaxFactory::CreateSimpleDeclaration(
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                            PrimitiveDataType::Int,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                    SyntaxFactory::CreateInitializerDeclaratorList(
                        SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
                            {
                                SyntaxFactory::CreateInitializerDeclarator(
                                    SyntaxFactory::CreateSimpleIdentifier(
                                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
                                    nullptr),
                            },
                            {})),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)))->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::DeclarationStatement,
                uut->GetType(),
                "Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSimpleDeclaration(
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                            PrimitiveDataType::Int,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                    SyntaxFactory::CreateInitializerDeclaratorList(
                        SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
                            {
                                SyntaxFactory::CreateInitializerDeclarator(
                                    SyntaxFactory::CreateSimpleIdentifier(
                                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
                                    nullptr),
                            },
                            {})),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                uut->GetDeclaration(),
                "Verify declaration matches.");
        }

        [[Fact]]
        void GetChildren()
        {
            auto uut = SyntaxFactory::CreateDeclarationStatement(
                SyntaxFactory::CreateSimpleDeclaration(
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                            PrimitiveDataType::Int,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                    SyntaxFactory::CreateInitializerDeclaratorList(
                        SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
                            {
                                SyntaxFactory::CreateInitializerDeclarator(
                                    SyntaxFactory::CreateSimpleIdentifier(
                                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
                                    nullptr),
                            },
                            {})),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)))->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>({
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateSimpleDeclaration(
                            SyntaxFactory::CreateDeclarationSpecifier(
                                SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                            SyntaxFactory::CreateInitializerDeclaratorList(
                                SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
                                    {
                                        SyntaxFactory::CreateInitializerDeclarator(
                                            SyntaxFactory::CreateSimpleIdentifier(
                                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
                                            nullptr),
                                    },
                                    {})),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateDeclarationStatement(
                SyntaxFactory::CreateSimpleDeclaration(
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                            PrimitiveDataType::Int,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                    SyntaxFactory::CreateInitializerDeclaratorList(
                        SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
                            {
                                SyntaxFactory::CreateInitializerDeclarator(
                                    SyntaxFactory::CreateSimpleIdentifier(
                                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
                                    nullptr),
                            },
                            {})),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)))->CreateOuter(nullptr);

            TestUtils::AreEqual(
                SyntaxFactory::CreateDeclarationStatement(
                    SyntaxFactory::CreateSimpleDeclaration(
                        SyntaxFactory::CreateDeclarationSpecifier(
                            SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                        SyntaxFactory::CreateInitializerDeclaratorList(
                            SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
                                {
                                    SyntaxFactory::CreateInitializerDeclarator(
                                        SyntaxFactory::CreateSimpleIdentifier(
                                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
                                        nullptr),
                                },
                                {})),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
                uut,
                "Verify matches.");
        }

        [[Fact]]
        void OperatorNotEqualDeclaration()
        {
            auto uut = SyntaxFactory::CreateDeclarationStatement(
                SyntaxFactory::CreateSimpleDeclaration(
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                            PrimitiveDataType::Int,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                    SyntaxFactory::CreateInitializerDeclaratorList(
                        SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
                            {
                                SyntaxFactory::CreateInitializerDeclarator(
                                    SyntaxFactory::CreateSimpleIdentifier(
                                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
                                    nullptr),
                            },
                            {})),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateDeclarationStatement(
                    SyntaxFactory::CreateSimpleDeclaration(
                        SyntaxFactory::CreateDeclarationSpecifier(
                            SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                        SyntaxFactory::CreateInitializerDeclaratorList(
                            SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
                                {
                                    SyntaxFactory::CreateInitializerDeclarator(
                                        SyntaxFactory::CreateSimpleIdentifier(
                                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i2")),
                                        nullptr),
                                },
                                {})),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
                uut,
                "Verify do not match.");
        }
    };
}
