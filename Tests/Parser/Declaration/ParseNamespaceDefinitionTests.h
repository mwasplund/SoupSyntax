#pragma once
#include "../../TestUtils.h"
#include "../../SoupAssert.h"

namespace Soup::Syntax::UnitTests
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
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                std::make_shared<const SyntaxList<Declaration>>(
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
                SyntaxFactory::CreateUniqueToken(
                    SyntaxTokenType::Identifier,
                    "MyNamespace",
                    {
                        SyntaxFactory::CreateTrivia(" ", TextSpan(0, 0))
                    },
                    {}),
                SyntaxFactory::CreateKeywordToken(
                    SyntaxTokenType::OpenBrace,
                    {
                        SyntaxFactory::CreateTrivia(" ", TextSpan(0, 0))
                    },
                    {}),
                std::make_shared<const SyntaxList<Declaration>>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(
                                SyntaxTokenType::Semicolon,
                                {
                                    SyntaxFactory::CreateTrivia(" ", TextSpan(0, 0))
                                },
                                {})),
                    })),
                SyntaxFactory::CreateKeywordToken(
                    SyntaxTokenType::CloseBrace,
                    {
                        SyntaxFactory::CreateTrivia(" ", TextSpan(0, 0))
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
