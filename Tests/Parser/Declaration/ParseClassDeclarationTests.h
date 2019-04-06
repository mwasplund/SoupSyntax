#pragma once
#include "../../TestUtils.h"
#include "../../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class ParseClassDeclarationTests
    {
    public:
        // [Fact]
        void Simple()
        {
            auto sourceCode = std::string("class{}");
            auto expression = ParseClassDeclaration(sourceCode);

            auto expected = SyntaxFactory::CreateClassDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
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
        void SingleDeclaration()
        {
            auto sourceCode = std::string("class MyClass { ; }");
            auto expression = ParseClassDeclaration(sourceCode);

            auto expected = SyntaxFactory::CreateClassDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(
                    SyntaxTokenType::Identifier,
                    "MyClass",
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

        // [Fact]
        void MultipleDeclarations()
        {
            auto sourceCode = std::string("class MyClass { public: ; }");
            auto expression = ParseClassDeclaration(sourceCode);

            auto expected = SyntaxFactory::CreateClassDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
                SyntaxFactory::CreateUniqueToken(
                    SyntaxTokenType::Identifier,
                    "MyClass",
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
                        SyntaxFactory::CreateAccessorSpecifier(
                            SyntaxFactory::CreateKeywordToken(
                                SyntaxTokenType::Public,
                                {
                                    SyntaxFactory::CreateTrivia(" ", TextSpan(0, 0))
                                },
                                {}),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon)),
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
        std::shared_ptr<const ClassDeclaration> ParseClassDeclaration(std::string& sourceCode)
        {
            auto uut = TestUtils::BuildParser(sourceCode);
            auto context = uut.Parser->classSpecifier();

            // Convert the the abstract syntax tree
            auto node = uut.Visitor->visit(context)
                .as<std::shared_ptr<const SyntaxNode>>();

            return std::dynamic_pointer_cast<const ClassDeclaration>(node);
        }
    };
}
