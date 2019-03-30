#pragma once
#include "../../TestUtils.h"
#include "../../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class ParseSimpleDeclarationStatementTests
    {
    public:
        // [Fact]
        void SingleIntVariable()
        {
            auto sourceCode = std::string("int i;");
            auto actual = ParseSimpleDeclarationStatement(sourceCode);

            auto expected = SyntaxFactory::CreateSimpleDeclarationStatement(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                SyntaxFactory::CreateInitializerDeclaratorList(
                    std::make_shared<const SyntaxSeparatorList<InitializerDeclarator>>(
                        std::vector<std::shared_ptr<const InitializerDeclarator>>(
                        {
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleNameExpression(
                                    SyntaxFactory::CreateUniqueToken(
                                        SyntaxTokenType::Identifier,
                                        "i",
                                        {
                                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                                        },
                                        {})),
                                nullptr),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>())),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void SingleIntVariableWithInitializer()
        {
            auto sourceCode = std::string("int i = 0;");
            auto actual = ParseSimpleDeclarationStatement(sourceCode);

            auto expected = SyntaxFactory::CreateSimpleDeclarationStatement(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                SyntaxFactory::CreateInitializerDeclaratorList(
                    std::make_shared<const SyntaxSeparatorList<InitializerDeclarator>>(
                        std::vector<std::shared_ptr<const InitializerDeclarator>>(
                        {
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleNameExpression(
                                    SyntaxFactory::CreateUniqueToken(
                                        SyntaxTokenType::Identifier,
                                        "i",
                                        {
                                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                                        },
                                        {})),
                                SyntaxFactory::CreateValueEqualInitializer(
                                    SyntaxFactory::CreateKeywordToken(
                                        SyntaxTokenType::Equal,
                                        {
                                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                                        },
                                        {}),
                                    SyntaxFactory::CreateLiteralExpression(
                                        LiteralType::Integer,
                                        SyntaxFactory::CreateUniqueToken(
                                            SyntaxTokenType::IntegerLiteral,
                                            "0",
                                            {
                                                SyntaxFactory::CreateTrivia(" ", TextSpan()),
                                            },
                                            {})))),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>())),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void DoubleIntVariable()
        {
            auto sourceCode = std::string("int i, j;");
            auto actual = ParseSimpleDeclarationStatement(sourceCode);

            auto expected = SyntaxFactory::CreateSimpleDeclarationStatement(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                SyntaxFactory::CreateInitializerDeclaratorList(
                    std::make_shared<const SyntaxSeparatorList<InitializerDeclarator>>(
                        std::vector<std::shared_ptr<const InitializerDeclarator>>(
                        {
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleNameExpression(
                                    SyntaxFactory::CreateUniqueToken(
                                        SyntaxTokenType::Identifier,
                                        "i",
                                        {
                                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                                        },
                                        {})),
                                nullptr),
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleNameExpression(
                                    SyntaxFactory::CreateUniqueToken(
                                        SyntaxTokenType::Identifier,
                                        "j",
                                        {
                                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                                        },
                                        {})),
                                nullptr),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>())),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void DoubleIntVariableSingleWithInitializer()
        {
            auto sourceCode = std::string("int i = 0, j;");
            auto actual = ParseSimpleDeclarationStatement(sourceCode);

            auto expected = SyntaxFactory::CreateSimpleDeclarationStatement(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                SyntaxFactory::CreateInitializerDeclaratorList(
                    std::make_shared<const SyntaxSeparatorList<InitializerDeclarator>>(
                        std::vector<std::shared_ptr<const InitializerDeclarator>>(
                        {
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleNameExpression(
                                    SyntaxFactory::CreateUniqueToken(
                                        SyntaxTokenType::Identifier,
                                        "i",
                                        {
                                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                                        },
                                        {})),
                                SyntaxFactory::CreateValueEqualInitializer(
                                    SyntaxFactory::CreateKeywordToken(
                                        SyntaxTokenType::Equal,
                                        {
                                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                                        },
                                        {}),
                                    SyntaxFactory::CreateLiteralExpression(
                                        LiteralType::Integer,
                                        SyntaxFactory::CreateUniqueToken(
                                            SyntaxTokenType::IntegerLiteral,
                                            "0",
                                            {
                                                SyntaxFactory::CreateTrivia(" ", TextSpan()),
                                            },
                                            {})))),
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleNameExpression(
                                    SyntaxFactory::CreateUniqueToken(
                                        SyntaxTokenType::Identifier,
                                        "j",
                                        {
                                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                                        },
                                        {})),
                                nullptr),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>())),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void DoubleIntVariableBothWithInitializer()
        {
            auto sourceCode = std::string("int i = 0, j = 1;");
            auto actual = ParseSimpleDeclarationStatement(sourceCode);

            auto expected = SyntaxFactory::CreateSimpleDeclarationStatement(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                SyntaxFactory::CreateInitializerDeclaratorList(
                    std::make_shared<const SyntaxSeparatorList<InitializerDeclarator>>(
                        std::vector<std::shared_ptr<const InitializerDeclarator>>(
                        {
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleNameExpression(
                                    SyntaxFactory::CreateUniqueToken(
                                        SyntaxTokenType::Identifier,
                                        "i",
                                        {
                                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                                        },
                                        {})),
                                SyntaxFactory::CreateValueEqualInitializer(
                                    SyntaxFactory::CreateKeywordToken(
                                        SyntaxTokenType::Equal,
                                        {
                                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                                        },
                                        {}),
                                    SyntaxFactory::CreateLiteralExpression(
                                        LiteralType::Integer,
                                        SyntaxFactory::CreateUniqueToken(
                                            SyntaxTokenType::IntegerLiteral,
                                            "0",
                                            {
                                                SyntaxFactory::CreateTrivia(" ", TextSpan()),
                                            },
                                            {})))),
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleNameExpression(
                                    SyntaxFactory::CreateUniqueToken(
                                        SyntaxTokenType::Identifier,
                                        "j",
                                        {
                                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                                        },
                                        {})),
                                SyntaxFactory::CreateValueEqualInitializer(
                                    SyntaxFactory::CreateKeywordToken(
                                        SyntaxTokenType::Equal,
                                        {
                                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                                        },
                                        {}),
                                    SyntaxFactory::CreateLiteralExpression(
                                        LiteralType::Integer,
                                        SyntaxFactory::CreateUniqueToken(
                                            SyntaxTokenType::IntegerLiteral,
                                            "1",
                                            {
                                                SyntaxFactory::CreateTrivia(" ", TextSpan()),
                                            },
                                            {})))),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>())),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void SingleIntLeadingAndTrailingModifierVariable()
        {
            auto sourceCode = std::string("static int constexpr i;");
            auto actual = ParseSimpleDeclarationStatement(sourceCode);

            auto expected = SyntaxFactory::CreateSimpleDeclarationStatement(
                SyntaxFactory::CreateDeclarationSpecifier(
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
                    },
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(
                            SyntaxTokenType::Int,
                            {
                                SyntaxFactory::CreateTrivia(" ", TextSpan()),
                            },
                            {})),
                    {
                        SyntaxFactory::CreateKeywordToken(
                            SyntaxTokenType::ConstExpr,
                            {
                                SyntaxFactory::CreateTrivia(" ", TextSpan()),
                            },
                            {}),
                    }),
                SyntaxFactory::CreateInitializerDeclaratorList(
                    std::make_shared<const SyntaxSeparatorList<InitializerDeclarator>>(
                        std::vector<std::shared_ptr<const InitializerDeclarator>>(
                        {
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleNameExpression(
                                    SyntaxFactory::CreateUniqueToken(
                                        SyntaxTokenType::Identifier,
                                        "i",
                                        {
                                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                                        },
                                        {})),
                                nullptr),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>())),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

    private:
        std::shared_ptr<const SimpleDeclarationStatement> ParseSimpleDeclarationStatement(std::string& sourceCode)
        {
            auto uut = TestUtils::BuildParser(sourceCode);
            auto context = uut.Parser->simpleDeclaration();

            // Convert the the abstract syntax tree
            auto node = uut.Visitor->visit(context)
                .as<std::shared_ptr<const SyntaxNode>>();

            return std::dynamic_pointer_cast<const SimpleDeclarationStatement>(node);
        }
    };
}
