#pragma once
#include "TestUtils.h"
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class OuterTreeNamespaceDefinitionTests
    {
    public:
        // [[Fact]]
        void InitializeNoIdentifier()
        {
            auto uut = SyntaxFactory::CreateNamespaceDefinition(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                    std::vector<std::shared_ptr<const SyntaxToken>>(),
                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxList<Declaration>(
                    std::vector<std::shared_ptr<const Declaration>>()),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::NamespaceDefinition,
                uut->GetType(),
                "Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
                uut->GetNamespaceToken(),
                "Verify namespace token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                    std::vector<std::shared_ptr<const SyntaxToken>>(),
                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                uut->GetNameIdentifierList(),
                "Verify name identifier list matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                uut->GetOpenBraceToken(),
                "Verify left brace token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSyntaxList<Declaration>(
                    std::vector<std::shared_ptr<const Declaration>>()),
                uut->GetBody(),
                "Verify the body matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace),
                uut->GetCloseBraceToken(),
                "Verify right brace token matches.");
        }

        // [[Fact]]
        void InitializeWithIdentifier()
        {
            auto uut = SyntaxFactory::CreateNamespaceDefinition(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxList<Declaration>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::NamespaceDefinition,
                uut->GetType(),
                "Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
                uut->GetNamespaceToken(),
                "Verify namespace token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    })),
                uut->GetNameIdentifierList(),
                "Verify name identifier list matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                uut->GetOpenBraceToken(),
                "Verify left brace token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSyntaxList<Declaration>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                uut->GetBody(),
                "Verify the body matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace),
                uut->GetCloseBraceToken(),
                "Verify right brace token matches.");
        }

        // [[Fact]]
        void GetChildrenNoIdentifier()
        {
            auto uut = SyntaxFactory::CreateNamespaceDefinition(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                    std::vector<std::shared_ptr<const SyntaxToken>>(),
                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxList<Declaration>(
                    std::vector<std::shared_ptr<const Declaration>>({})),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>(
                {
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace)),
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace)),
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void GetChildrenWithIdentifier()
        {
            auto uut = SyntaxFactory::CreateNamespaceDefinition(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxList<Declaration>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>(
                {
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace)),
                    TestUtils::CreateChild(SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace")),
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon)),
                    TestUtils::CreateChild(SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace")),
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace)),
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void OperatorEqualNoIdentifier()
        {
            auto uut = SyntaxFactory::CreateNamespaceDefinition(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                    std::vector<std::shared_ptr<const SyntaxToken>>(),
                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxList<Declaration>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

            TestUtils::AreEqual(
                SyntaxFactory::CreateNamespaceDefinition(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
                    SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                        std::vector<std::shared_ptr<const SyntaxToken>>(),
                        std::vector<std::shared_ptr<const SyntaxToken>>()),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxList<Declaration>(
                        std::vector<std::shared_ptr<const Declaration>>(
                        {
                            SyntaxFactory::CreateEmptyDeclaration(
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorEqualWithIdentifier()
        {
            auto uut = SyntaxFactory::CreateNamespaceDefinition(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxList<Declaration>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

            TestUtils::AreEqual(
                SyntaxFactory::CreateNamespaceDefinition(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
                    SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                        std::vector<std::shared_ptr<const SyntaxToken>>({
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>({
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxList<Declaration>(
                        std::vector<std::shared_ptr<const Declaration>>(
                        {
                            SyntaxFactory::CreateEmptyDeclaration(
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualNamespaceToken()
        {
            auto uut = SyntaxFactory::CreateNamespaceDefinition(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxList<Declaration>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateNamespaceDefinition(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Namespace,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {}),
                    SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxList<Declaration>(
                        std::vector<std::shared_ptr<const Declaration>>(
                        {
                            SyntaxFactory::CreateEmptyDeclaration(
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualNoIdentifier()
        {
            auto uut = SyntaxFactory::CreateNamespaceDefinition(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxList<Declaration>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateNamespaceDefinition(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
                    SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                        std::vector<std::shared_ptr<const SyntaxToken>>(),
                        std::vector<std::shared_ptr<const SyntaxToken>>()),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxList<Declaration>(
                        std::vector<std::shared_ptr<const Declaration>>(
                        {
                            SyntaxFactory::CreateEmptyDeclaration(
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualWithIdentifier()
        {
            auto uut = SyntaxFactory::CreateNamespaceDefinition(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxList<Declaration>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateNamespaceDefinition(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
                    SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace2"),
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxList<Declaration>(
                        std::vector<std::shared_ptr<const Declaration>>(
                        {
                            SyntaxFactory::CreateEmptyDeclaration(
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualOpenBraceToken()
        {
            auto uut = SyntaxFactory::CreateNamespaceDefinition(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxList<Declaration>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateNamespaceDefinition(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
                    SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                        std::vector<std::shared_ptr<const SyntaxToken>>({
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>({
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                        })),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::OpenBrace,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {}),
                    SyntaxFactory::CreateSyntaxList<Declaration>(
                        std::vector<std::shared_ptr<const Declaration>>(
                        {
                            SyntaxFactory::CreateEmptyDeclaration(
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualBody()
        {
            auto uut = SyntaxFactory::CreateNamespaceDefinition(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxList<Declaration>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateNamespaceDefinition(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
                    SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                        std::vector<std::shared_ptr<const SyntaxToken>>({
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>({
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxList<Declaration>(
                        std::vector<std::shared_ptr<const Declaration>>()),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualCloseBraceToken()
        {
            auto uut = SyntaxFactory::CreateNamespaceDefinition(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxList<Declaration>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateNamespaceDefinition(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
                    SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                        std::vector<std::shared_ptr<const SyntaxToken>>({
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>({
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxList<Declaration>(
                        std::vector<std::shared_ptr<const Declaration>>(
                        {
                            SyntaxFactory::CreateEmptyDeclaration(
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                        })),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::CloseBrace,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {})),
                uut,
                "Verify do not match.");
        }
    };
}
