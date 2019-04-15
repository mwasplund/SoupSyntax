#pragma once
#include "TestUtils.h"
#include "SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class ParseTranslationUnitTests
    {
    public:
        // [Fact]
        void EmptyFile()
        {
            auto sourceCode = std::string("\0");
            auto actual = ParseTranslationUnit(sourceCode);

            auto expected = SyntaxFactory::CreateTranslationUnit(
                SyntaxFactory::CreateSyntaxList<Declaration>(
                    std::vector<std::shared_ptr<const Declaration>>()),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::EndOfFile));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void OnlyTrivia()
        {
            auto sourceCode = std::string(" \0");
            auto actual = ParseTranslationUnit(sourceCode);

            auto expected = SyntaxFactory::CreateTranslationUnit(
                SyntaxFactory::CreateSyntaxList<Declaration>(
                    std::vector<std::shared_ptr<const Declaration>>()),
                SyntaxFactory::CreateKeywordToken(
                    SyntaxTokenType::EndOfFile,
                    {
                        SyntaxFactory::CreateTrivia(" "),
                    },
                    {}));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void OnlyComments()
        {
            auto sourceCode = std::string("//COMMENT\n//OTHER\0");
            auto actual = ParseTranslationUnit(sourceCode);

            auto expected = SyntaxFactory::CreateTranslationUnit(
                SyntaxFactory::CreateSyntaxList<Declaration>(
                    std::vector<std::shared_ptr<const Declaration>>()),
                SyntaxFactory::CreateKeywordToken(
                    SyntaxTokenType::EndOfFile,
                    {
                        SyntaxFactory::CreateTrivia("//COMMENT"),
                        SyntaxFactory::CreateTrivia("\n"),
                        SyntaxFactory::CreateTrivia("//OTHER"),
                    },
                    {}));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void SingleEmptyDeclaration()
        {
            auto sourceCode = std::string(" ; \0");
            auto actual = ParseTranslationUnit(sourceCode);

            auto expected = SyntaxFactory::CreateTranslationUnit(
                SyntaxFactory::CreateSyntaxList<Declaration>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(
                                SyntaxTokenType::Semicolon,
                                {
                                    SyntaxFactory::CreateTrivia(" "),
                                },
                                {})),
                    })),
                SyntaxFactory::CreateKeywordToken(
                    SyntaxTokenType::EndOfFile,
                    {
                        SyntaxFactory::CreateTrivia(" "),
                    },
                    {}));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void MultipleDeclarations()
        {
            auto sourceCode = std::string(";\nint i;\0");
            auto actual = ParseTranslationUnit(sourceCode);

            auto expected = SyntaxFactory::CreateTranslationUnit(
                SyntaxFactory::CreateSyntaxList<Declaration>(
                    std::vector<std::shared_ptr<const Declaration>>(
                    {
                        SyntaxFactory::CreateEmptyDeclaration(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                        SyntaxFactory::CreateSimpleDeclaration(
                            SyntaxFactory::CreateDeclarationSpecifier(
                                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateKeywordToken(
                                        SyntaxTokenType::Int,
                                        {
                                            SyntaxFactory::CreateTrivia("\n"),
                                        },
                                        {}))),
                            SyntaxFactory::CreateInitializerDeclaratorList(
                                SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
                                    std::vector<std::shared_ptr<const InitializerDeclarator>>(
                                    {
                                        SyntaxFactory::CreateInitializerDeclarator(
                                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                                SyntaxFactory::CreateUniqueToken(
                                                    SyntaxTokenType::Identifier,
                                                    "i",
                                                    {
                                                        SyntaxFactory::CreateTrivia(" "),
                                                    },
                                                    {})),
                                            nullptr),
                                    }),
                                    std::vector<std::shared_ptr<const SyntaxToken>>())),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::EndOfFile));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

    private:
        std::shared_ptr<const TranslationUnit> ParseTranslationUnit(std::string& sourceCode)
        {
            auto uut = TestUtils::BuildParser(sourceCode);
            auto context = uut.Parser->translationUnit();

            // Convert the the abstract syntax tree
            auto node = uut.Visitor->visit(context)
                .as<std::shared_ptr<const TranslationUnit>>();

            return node;
        }
    };
}
