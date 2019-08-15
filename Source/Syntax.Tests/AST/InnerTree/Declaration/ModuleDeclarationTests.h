#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class InnerTreeModuleDeclarationTests
    {
    public:
        [[Fact]]
        void InitializeNoExport()
        {
            auto uut = SyntaxFactory::CreateModuleDeclaration(
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Module),
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                    {
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule"),
                    },
                    {}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            Assert::AreEqual(
                SyntaxNodeType::ModuleDeclaration,
                uut->GetType(),
                "Verify has correct type.");
            Assert::IsFalse(
                uut->HasExportToken(),
                "Verify has no export token.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Module),
                uut->GetModuleToken(),
                "Verify module token matches.");
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
        void InitializeWithExport()
        {
            auto uut = SyntaxFactory::CreateModuleDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Export),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Module),
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                    {
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Base"),
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule"),
                    },
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Period),
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            Assert::AreEqual(
                SyntaxNodeType::ModuleDeclaration,
                uut->GetType(),
                "Verify has correct type.");
            Assert::IsTrue(
                uut->HasExportToken(),
                "Verify has export token.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Export),
                uut->GetExportToken(),
                "Verify export token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Module),
                uut->GetModuleToken(),
                "Verify module token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                    {
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Base"),
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule"),
                    },
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Period),
                    }),
                uut->GetNameIdentifierList(),
                "Verify name identifier list matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon),
                uut->GetSemicolonToken(),
                "Verify semicolon token matches.");
        }

        [[Fact]]
        void OperatorEqualNoExport()
        {
            auto uut = SyntaxFactory::CreateModuleDeclaration(
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Module),
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                    {
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule"),
                    },
                    {}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(
                SyntaxFactory::CreateModuleDeclaration(
                    nullptr,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Module),
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
        void OperatorEqualWithExport()
        {
            auto uut = SyntaxFactory::CreateModuleDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Export),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Module),
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                    {
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Base"),
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule"),
                    },
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Period),
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(
                SyntaxFactory::CreateModuleDeclaration(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Export),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Module),
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
                "Verify matches.");
        }

        [[Fact]]
        void OperatorNotEqualNoExport()
        {
            auto uut = SyntaxFactory::CreateModuleDeclaration(
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Module),
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
                SyntaxFactory::CreateModuleDeclaration(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Export),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Module),
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
        void OperatorNotEqualWithExport()
        {
            auto uut = SyntaxFactory::CreateModuleDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Export),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Module),
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
                SyntaxFactory::CreateModuleDeclaration(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Export,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Module),
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
        void OperatorNotEqualModule()
        {
            auto uut = SyntaxFactory::CreateModuleDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Export),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Module),
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
                SyntaxFactory::CreateModuleDeclaration(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Export),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Module,
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
            auto uut = SyntaxFactory::CreateModuleDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Export),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Module),
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
                SyntaxFactory::CreateModuleDeclaration(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Export),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Module),
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
            auto uut = SyntaxFactory::CreateModuleDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Export),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Module),
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
                SyntaxFactory::CreateModuleDeclaration(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Export),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Module),
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
