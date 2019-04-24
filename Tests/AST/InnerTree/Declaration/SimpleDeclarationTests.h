#pragma once
#include "TestUtils.h"
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class InnerTreeSimpleDeclarationTests
    {
    public:
        [[Fact]]
        void InitializeSimple()
        {
            // int i;
            auto uut = SyntaxFactory::CreateSimpleDeclaration(
                SyntaxFactory::CreateDeclarationSpecifierSequence(
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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            Assert::AreEqual(
                SyntaxNodeType::SimpleDeclaration,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateDeclarationSpecifierSequence(
                    SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                uut->GetDeclarationSpecifierSequence(),
                "Verify declaration specifier matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateInitializerDeclaratorList(
                    SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
                        {
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleIdentifier(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
                                nullptr),
                        },
                        {})),
                uut->GetInitializerDeclaratorList(),
                "Verify initializer declarator list matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon),
                uut->GetSemicolonToken(),
                "Verify semicolon token matches.");
        }

        [[Fact]]
        void OperatorEqual()
        {
            // int i;
            auto uut = SyntaxFactory::CreateSimpleDeclaration(
                SyntaxFactory::CreateDeclarationSpecifierSequence(
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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(
                SyntaxFactory::CreateSimpleDeclaration(
                    SyntaxFactory::CreateDeclarationSpecifierSequence(
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
                uut,
                "Verify matches.");
        }

        [[Fact]]
        void OperatorNotEqualDeclarationSpecifierSequence()
        {
            // int i;
            auto uut = SyntaxFactory::CreateSimpleDeclaration(
                SyntaxFactory::CreateDeclarationSpecifierSequence(
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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateSimpleDeclaration(
                    SyntaxFactory::CreateDeclarationSpecifierSequence(
                        SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                            PrimitiveDataType::Long,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Long))),
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
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void OperatorNotEqualInitializerDeclaratorList()
        {
            // int i;
            auto uut = SyntaxFactory::CreateSimpleDeclaration(
                SyntaxFactory::CreateDeclarationSpecifierSequence(
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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateSimpleDeclaration(
                    SyntaxFactory::CreateDeclarationSpecifierSequence(
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
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void OperatorNotEqualSemicolonToken()
        {
            // int i;
            auto uut = SyntaxFactory::CreateSimpleDeclaration(
                SyntaxFactory::CreateDeclarationSpecifierSequence(
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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateSimpleDeclaration(
                    SyntaxFactory::CreateDeclarationSpecifierSequence(
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
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Semicolon,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {})),
                uut,
                "Verify do not match.");
        }
    };
}
