#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class OuterTreeModuleImportDeclarationTests
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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::ModuleImportDeclaration,
                uut->GetType(),
                "Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Import),
                uut->GetImportToken(),
                "Verify import token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                    {
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule"),
                    },
                    {}),
                uut->GetNameIdentifierList(),
                "Verify name identifier list matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon),
                uut->GetSemicolonToken(),
                "Verify semicolon token matches.");
        }

        [[Fact]]
        void GetChildren()
        {
            auto uut = SyntaxFactory::CreateModuleImportDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Import),
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                    {
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule"),
                    },
                    {}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>({
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Import)),
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule")),
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                }),
                uut->GetChildren(),
                "Verify children match.");
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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))->CreateOuter(nullptr);

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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))->CreateOuter(nullptr);

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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))->CreateOuter(nullptr);

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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))->CreateOuter(nullptr);

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
