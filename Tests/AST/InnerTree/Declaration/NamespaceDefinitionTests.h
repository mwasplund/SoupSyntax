#pragma once
#include "TestUtils.h"
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class InnerTreeNamespaceDefinitionTests
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
                *SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                    std::vector<std::shared_ptr<const SyntaxToken>>(),
                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                uut->GetNameIdentifierList(),
                "Verify name identifier list matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                uut->GetOpenBraceToken(),
                "Verify left brace token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateSyntaxList<Declaration>(
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
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                uut->GetOpenBraceToken(),
                "Verify left brace token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateSyntaxList<Declaration>(
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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

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
