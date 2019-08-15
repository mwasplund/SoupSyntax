#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class InnerTreeModuleImportDeclarationTests
    {
    public:
        [[Fact]]
        void Initialize()
        {
            auto uut = SyntaxFactory::CreateModuleImportDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Import),
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                    {
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule"),
                    },
                    {}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            Assert::AreEqual(
                SyntaxNodeType::ModuleImportDeclaration,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Import),
                uut->GetImportToken(),
                "Verify import token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                    {
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule"),
                    },
                    {}),
                uut->GetNameIdentifierList(),
                "Verify name identifier list matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon),
                uut->GetSemicolonToken(),
                "Verify semicolon token matches.");
        }

        [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateModuleImportDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Import),
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                    {
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule"),
                    },
                    {}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(
                SyntaxFactory::CreateModuleImportDeclaration(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Import),
                    SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                        {
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule"),
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                uut,
                "Verify matches.");
        }

        [[Fact]]
        void OperatorNotEqualImport()
        {
            auto uut = SyntaxFactory::CreateModuleImportDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Import),
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                    {
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Base"),
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule"),
                    },
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Period),
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateModuleImportDeclaration(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Import,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {}),
                    SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                        {
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Base"),
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule"),
                        },
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Period),
                        }),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void OperatorNotEqualName()
        {
            auto uut = SyntaxFactory::CreateModuleImportDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Import),
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                    {
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Base"),
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule"),
                    },
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Period),
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateModuleImportDeclaration(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Import),
                    SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                        {
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule"),
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void OperatorNotEqualSemicolon()
        {
            auto uut = SyntaxFactory::CreateModuleImportDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Import),
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                    {
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Base"),
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule"),
                    },
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Period),
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateModuleImportDeclaration(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Import),
                    SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                        {
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Base"),
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule"),
                        },
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Period),
                        }),
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
