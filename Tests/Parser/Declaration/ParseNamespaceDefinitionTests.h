#pragma once
#include "TestUtils.h"
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class ParseNamespaceDefinitionTests
    {
    public:
        // [Fact]
        void SimpleAnonymous()
        {
            auto sourceCode = std::string("namespace{}");
            auto expression = ParseNamespaceDefinition(sourceCode);

            auto expected = SyntaxFactory::CreateNamespaceDefinition(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                    {},
                    {}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxList<Declaration>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {})),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreEqual(
                expected,
                expression,
                "Verify identifier matches expected.");
        }

        // [Fact]
        void SimpleNamed()
        {
            auto sourceCode = std::string("namespace Namespace{}");
            auto expression = ParseNamespaceDefinition(sourceCode);

            auto expected = SyntaxFactory::CreateNamespaceDefinition(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateUniqueToken(
                            SyntaxTokenType::Identifier,
                            "Namespace",
                            {
                                SyntaxFactory::CreateTrivia(" ")
                            },
                            {}),
                    }),
                    {}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxList<Declaration>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {})),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreEqual(
                expected,
                expression,
                "Verify identifier matches expected.");
        }

        // [Fact]
        void NestedName()
        {
            auto sourceCode = std::string("namespace RootNamespace::SubNamespace{}");
            auto expression = ParseNamespaceDefinition(sourceCode);

            auto expected = SyntaxFactory::CreateNamespaceDefinition(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateUniqueToken(
                            SyntaxTokenType::Identifier,
                            "RootNamespace",
                            {
                                SyntaxFactory::CreateTrivia(" ")
                            },
                            {}),
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "SubNamespace"),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxList<Declaration>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {})),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreEqual(
                expected,
                expression,
                "Verify identifier matches expected.");
        }

        // [Fact]
        void SimpleNamedNamespaceSingleDeclaration()
        {
            auto sourceCode = std::string("namespace MyNamespace { ; }");
            auto expression = ParseNamespaceDefinition(sourceCode);

            auto expected = SyntaxFactory::CreateNamespaceDefinition(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateUniqueToken(
                            SyntaxTokenType::Identifier,
                            "MyNamespace",
                            {
                                SyntaxFactory::CreateTrivia(" ")
                            },
                            {}),
                    }),
                    {}),
                SyntaxFactory::CreateKeywordToken(
                    SyntaxTokenType::OpenBrace,
                    {
                        SyntaxFactory::CreateTrivia(" ")
                    },
                    {}),
                SyntaxFactory::CreateSyntaxList<Declaration>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(
                                SyntaxTokenType::Semicolon,
                                {
                                    SyntaxFactory::CreateTrivia(" ")
                                },
                                {})),
                    })),
                SyntaxFactory::CreateKeywordToken(
                    SyntaxTokenType::CloseBrace,
                    {
                        SyntaxFactory::CreateTrivia(" ")
                    },
                    {}));

            TestUtils::AreEqual(
                expected,
                expression,
                "Verify identifier matches expected.");
        }

    private:
        std::shared_ptr<const NamespaceDefinition> ParseNamespaceDefinition(std::string& sourceCode)
        {
            auto uut = TestUtils::BuildParser(sourceCode);
            auto context = uut.Parser->namespaceDefinition();

            // Convert the the abstract syntax tree
            auto node = uut.Visitor->visit(context)
                .as<std::shared_ptr<const SyntaxNode>>();

            return std::dynamic_pointer_cast<const NamespaceDefinition>(node);
        }
    };
}
