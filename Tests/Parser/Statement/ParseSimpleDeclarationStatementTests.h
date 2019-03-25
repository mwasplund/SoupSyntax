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
                        SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int"))),
                SyntaxFactory::CreateInitializerDeclaratorList(
                    std::make_shared<const SyntaxList<InitializerDeclarator>>(
                        std::vector<std::shared_ptr<const InitializerDeclarator>>(
                        {
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleNameExpression(
                                    SyntaxFactory::CreateToken(
                                        SyntaxTokenType::Identifier,
                                        L"i",
                                        {
                                            SyntaxFactory::CreateTrivia(L" ", TextSpan()),
                                        },
                                        {})),
                                nullptr),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>())),
                SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
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
                        SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int"))),
                SyntaxFactory::CreateInitializerDeclaratorList(
                    std::make_shared<const SyntaxList<InitializerDeclarator>>(
                        std::vector<std::shared_ptr<const InitializerDeclarator>>(
                        {
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleNameExpression(
                                    SyntaxFactory::CreateToken(
                                        SyntaxTokenType::Identifier,
                                        L"i",
                                        {
                                            SyntaxFactory::CreateTrivia(L" ", TextSpan()),
                                        },
                                        {})),
                                SyntaxFactory::CreateLiteralExpression(
                                    LiteralType::Integer,
                                    SyntaxFactory::CreateToken(
                                        SyntaxTokenType::IntegerLiteral,
                                        L"0",
                                        {
                                            SyntaxFactory::CreateTrivia(L" ", TextSpan()),
                                        },
                                        {}))),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>())),
                SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
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
                        SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int"))),
                SyntaxFactory::CreateInitializerDeclaratorList(
                    std::make_shared<const SyntaxList<InitializerDeclarator>>(
                        std::vector<std::shared_ptr<const InitializerDeclarator>>(
                        {
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleNameExpression(
                                    SyntaxFactory::CreateToken(
                                        SyntaxTokenType::Identifier,
                                        L"i",
                                        {
                                            SyntaxFactory::CreateTrivia(L" ", TextSpan()),
                                        },
                                        {})),
                                nullptr),
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleNameExpression(
                                    SyntaxFactory::CreateToken(
                                        SyntaxTokenType::Identifier,
                                        L"j",
                                        {
                                            SyntaxFactory::CreateTrivia(L" ", TextSpan()),
                                        },
                                        {})),
                                nullptr),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>())),
                SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
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
                        SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int"))),
                SyntaxFactory::CreateInitializerDeclaratorList(
                    std::make_shared<const SyntaxList<InitializerDeclarator>>(
                        std::vector<std::shared_ptr<const InitializerDeclarator>>(
                        {
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleNameExpression(
                                    SyntaxFactory::CreateToken(
                                        SyntaxTokenType::Identifier,
                                        L"i",
                                        {
                                            SyntaxFactory::CreateTrivia(L" ", TextSpan()),
                                        },
                                        {})),
                                SyntaxFactory::CreateLiteralExpression(
                                    LiteralType::Integer,
                                    SyntaxFactory::CreateToken(
                                        SyntaxTokenType::IntegerLiteral,
                                        L"0",
                                        {
                                            SyntaxFactory::CreateTrivia(L" ", TextSpan()),
                                        },
                                        {}))),
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleNameExpression(
                                    SyntaxFactory::CreateToken(
                                        SyntaxTokenType::Identifier,
                                        L"j",
                                        {
                                            SyntaxFactory::CreateTrivia(L" ", TextSpan()),
                                        },
                                        {})),
                                nullptr),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>())),
                SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
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
                        SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int"))),
                SyntaxFactory::CreateInitializerDeclaratorList(
                    std::make_shared<const SyntaxList<InitializerDeclarator>>(
                        std::vector<std::shared_ptr<const InitializerDeclarator>>(
                        {
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleNameExpression(
                                    SyntaxFactory::CreateToken(
                                        SyntaxTokenType::Identifier,
                                        L"i",
                                        {
                                            SyntaxFactory::CreateTrivia(L" ", TextSpan()),
                                        },
                                        {})),
                                SyntaxFactory::CreateLiteralExpression(
                                    LiteralType::Integer,
                                    SyntaxFactory::CreateToken(
                                        SyntaxTokenType::IntegerLiteral,
                                        L"0",
                                        {
                                            SyntaxFactory::CreateTrivia(L" ", TextSpan()),
                                        },
                                        {}))),
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleNameExpression(
                                    SyntaxFactory::CreateToken(
                                        SyntaxTokenType::Identifier,
                                        L"j",
                                        {
                                            SyntaxFactory::CreateTrivia(L" ", TextSpan()),
                                        },
                                        {})),
                                SyntaxFactory::CreateLiteralExpression(
                                    LiteralType::Integer,
                                    SyntaxFactory::CreateToken(
                                        SyntaxTokenType::IntegerLiteral,
                                        L"1",
                                        {
                                            SyntaxFactory::CreateTrivia(L" ", TextSpan()),
                                        },
                                        {}))),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>())),
                SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void SingleIntLeadingAndTrailingModifierVariable()
        {
            auto sourceCode = std::string("static int constexpr i;");
            auto actual = ParseSimpleDeclarationStatement(sourceCode);

            auto expected = SyntaxFactory::CreateSimpleDeclarationStatement(
                SyntaxFactory::CreateDeclarationSpecifier(
                    {
                        SyntaxFactory::CreateToken(SyntaxTokenType::Static, L"static"),
                    },
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateToken(
                            SyntaxTokenType::Int,
                            L"int",
                            {
                                SyntaxFactory::CreateTrivia(L" ", TextSpan()),
                            },
                            {})),
                    {
                        SyntaxFactory::CreateToken(
                            SyntaxTokenType::ConstExpr,
                            L"constexpr",
                            {
                                SyntaxFactory::CreateTrivia(L" ", TextSpan()),
                            },
                            {}),
                    }),
                SyntaxFactory::CreateInitializerDeclaratorList(
                    std::make_shared<const SyntaxList<InitializerDeclarator>>(
                        std::vector<std::shared_ptr<const InitializerDeclarator>>(
                        {
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleNameExpression(
                                    SyntaxFactory::CreateToken(
                                        SyntaxTokenType::Identifier,
                                        L"i",
                                        {
                                            SyntaxFactory::CreateTrivia(L" ", TextSpan()),
                                        },
                                        {})),
                                nullptr),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>())),
                SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
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
