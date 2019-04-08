#pragma once
#include "TestUtils.h"
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class NamespaceDefinitionTests
    {
    public:
        // [[Fact]]
        void InitializeNoIdentifier()
        {
            auto uut = SyntaxFactory::CreateNamespaceDefinition(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
                std::make_shared<const SyntaxSeparatorList<SyntaxToken>>(
                    std::vector<std::shared_ptr<const SyntaxToken>>(),
                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>()),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            Assert::AreEqual(
                SyntaxNodeType::NamespaceDefinition,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
                uut->GetNamespaceToken(),
                "Verify namespace token matches.");
            Assert::AreEqual(
                *std::make_shared<const SyntaxSeparatorList<SyntaxToken>>(
                    std::vector<std::shared_ptr<const SyntaxToken>>(),
                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                uut->GetNameIdentifierList(),
                "Verify name identifier list matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                uut->GetOpenBraceToken(),
                "Verify left brace token matches.");
            Assert::AreEqual(
                *std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>()),
                uut->GetBody(),
                "Verify the body matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace),
                uut->GetCloseBraceToken(),
                "Verify right brace token matches.");
        }

        // [[Fact]]
        void InitializeWithIdentifier()
        {
            auto uut = SyntaxFactory::CreateNamespaceDefinition(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
                std::make_shared<const SyntaxSeparatorList<SyntaxToken>>(
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            Assert::AreEqual(
                SyntaxNodeType::NamespaceDefinition,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
                uut->GetNamespaceToken(),
                "Verify namespace token matches.");
            Assert::AreEqual(
                *std::make_shared<const SyntaxSeparatorList<SyntaxToken>>(
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    })),
                uut->GetNameIdentifierList(),
                "Verify name identifier list matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                uut->GetOpenBraceToken(),
                "Verify left brace token matches.");
            Assert::AreEqual(
                *std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                uut->GetBody(),
                "Verify the body matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace),
                uut->GetCloseBraceToken(),
                "Verify right brace token matches.");
        }

        // [[Fact]]
        void GetChildrenNoIdentifier()
        {
            auto uut = SyntaxFactory::CreateNamespaceDefinition(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
                std::make_shared<const SyntaxSeparatorList<SyntaxToken>>(
                    std::vector<std::shared_ptr<const SyntaxToken>>(),
                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>({})),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace)),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace)),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void GetChildrenWithIdentifier()
        {
            auto uut = SyntaxFactory::CreateNamespaceDefinition(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
                std::make_shared<const SyntaxSeparatorList<SyntaxToken>>(
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace)),
                    SyntaxNodeChild(SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace")),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon)),
                    SyntaxNodeChild(SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace")),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace)),
                    SyntaxNodeChild(
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void OperatorEqualNoIdentifier()
        {
            auto uut = SyntaxFactory::CreateNamespaceDefinition(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
                std::make_shared<const SyntaxSeparatorList<SyntaxToken>>(
                    std::vector<std::shared_ptr<const SyntaxToken>>(),
                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreEqual(
                SyntaxFactory::CreateNamespaceDefinition(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
                    std::make_shared<const SyntaxSeparatorList<SyntaxToken>>(
                        std::vector<std::shared_ptr<const SyntaxToken>>(),
                        std::vector<std::shared_ptr<const SyntaxToken>>()),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    std::make_shared<const SyntaxList<Declaration>>(
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
                std::make_shared<const SyntaxSeparatorList<SyntaxToken>>(
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreEqual(
                SyntaxFactory::CreateNamespaceDefinition(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
                    std::make_shared<const SyntaxSeparatorList<SyntaxToken>>(
                        std::vector<std::shared_ptr<const SyntaxToken>>({
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>({
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    std::make_shared<const SyntaxList<Declaration>>(
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
                std::make_shared<const SyntaxSeparatorList<SyntaxToken>>(
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateNamespaceDefinition(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Namespace,
                        {
                            SyntaxFactory::CreateTrivia(" ", TextSpan(0, 1)),
                        },
                        {}),
                    std::make_shared<const SyntaxSeparatorList<SyntaxToken>>(
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    std::make_shared<const SyntaxList<Declaration>>(
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
                std::make_shared<const SyntaxSeparatorList<SyntaxToken>>(
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateNamespaceDefinition(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
                    std::make_shared<const SyntaxSeparatorList<SyntaxToken>>(
                        std::vector<std::shared_ptr<const SyntaxToken>>(),
                        std::vector<std::shared_ptr<const SyntaxToken>>()),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    std::make_shared<const SyntaxList<Declaration>>(
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
                std::make_shared<const SyntaxSeparatorList<SyntaxToken>>(
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateNamespaceDefinition(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
                    std::make_shared<const SyntaxSeparatorList<SyntaxToken>>(
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace2"),
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    std::make_shared<const SyntaxList<Declaration>>(
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
                std::make_shared<const SyntaxSeparatorList<SyntaxToken>>(
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateNamespaceDefinition(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
                    std::make_shared<const SyntaxSeparatorList<SyntaxToken>>(
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
                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                        },
                        {}),
                    std::make_shared<const SyntaxList<Declaration>>(
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
                std::make_shared<const SyntaxSeparatorList<SyntaxToken>>(
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateNamespaceDefinition(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
                    std::make_shared<const SyntaxSeparatorList<SyntaxToken>>(
                        std::vector<std::shared_ptr<const SyntaxToken>>({
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>({
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    std::make_shared<const SyntaxList<Declaration>>(
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
                std::make_shared<const SyntaxSeparatorList<SyntaxToken>>(
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateNamespaceDefinition(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
                    std::make_shared<const SyntaxSeparatorList<SyntaxToken>>(
                        std::vector<std::shared_ptr<const SyntaxToken>>({
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "BaseNamespace"),
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>({
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    std::make_shared<const SyntaxList<Declaration>>(
                        std::vector<std::shared_ptr<const Declaration>>(
                        {
                            SyntaxFactory::CreateEmptyDeclaration(
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                        })),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::CloseBrace,
                        {
                            SyntaxFactory::CreateTrivia(" ", TextSpan(0, 1)),
                        },
                        {})),
                uut,
                "Verify do not match.");
        }
    };
}
