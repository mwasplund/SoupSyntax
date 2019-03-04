#pragma once
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class SyntaxFunctionTests
    {
    public:
        // [Fact]
        void SimpleFunctionRegular()
        {
            auto source = std::string(
                "void Function() \n {\n}");

            auto expected = TestUtils::CreateSingleDeclaration(
                SyntaxFactory::CreateFunctionDefinition(
                    std::make_shared<DeclarationSpecifierSequence>(
                        std::vector<std::shared_ptr<const SyntaxNode>>
                        {
                            std::make_shared<PrimitiveDataTypeNode>(
                                PrimitiveDataType::Void,
                                SyntaxFactory::CreateToken(SyntaxTokenType::Void, L"void")),
                        }),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(
                            SyntaxTokenType::Identifier,
                            L"Function",
                            {
                                SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0)),
                            },
                            {})),
                    std::make_shared<ParameterList>(
                        SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                        std::make_shared<SyntaxList<Parameter>>(
                            std::vector<std::shared_ptr<const Parameter>>(),
                            std::vector<std::shared_ptr<const SyntaxToken>>()),
                        SyntaxFactory::CreateToken(
                            SyntaxTokenType::RightParenthesis,
                            L")",
                            {},
                            {
                                SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0)),
                            })),
                    std::make_shared<RegularFunctionBody>(
                        std::make_shared<CompoundStatement>(
                            std::vector<std::shared_ptr<const Statement>>
                            {
                            }))));

            auto actual = TestUtils::GenerateAST(source);

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void SimpleFunctionDefault()
        {
            auto source = std::string(
                "void Function() = default;");

            auto expected = TestUtils::CreateSingleDeclaration(
                SyntaxFactory::CreateFunctionDefinition(
                    std::make_shared<DeclarationSpecifierSequence>(
                        std::vector<std::shared_ptr<const SyntaxNode>>
                        {
                            std::make_shared<PrimitiveDataTypeNode>(
                                PrimitiveDataType::Void,
                                SyntaxFactory::CreateToken(SyntaxTokenType::Void, L"void")),
                        }),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(
                            SyntaxTokenType::Identifier,
                            L"Function",
                            {
                                SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0)),
                            },
                            {})),
                    std::make_shared<ParameterList>(
                        SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                        std::make_shared<SyntaxList<Parameter>>(
                            std::vector<std::shared_ptr<const Parameter>>(),
                            std::vector<std::shared_ptr<const SyntaxToken>>()),
                        SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")")),
                    SyntaxFactory::CreateDefaultFunctionBody(
                        SyntaxFactory::CreateToken(
                            SyntaxTokenType::Equal,
                            L"=",
                            {
                                SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0)),
                            },
                            {}),
                        SyntaxFactory::CreateToken(
                            SyntaxTokenType::Default,
                            L"default",
                            {
                                SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0)),
                            },
                            {}),
                        SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"))));

            auto actual = TestUtils::GenerateAST(source);

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void SimpleFunctionDelete()
        {
            auto source = std::string(
                "void Function() = delete;");

            auto expected = TestUtils::CreateSingleDeclaration(
                SyntaxFactory::CreateFunctionDefinition(
                    std::make_shared<DeclarationSpecifierSequence>(
                        std::vector<std::shared_ptr<const SyntaxNode>>
                        {
                            std::make_shared<PrimitiveDataTypeNode>(
                                PrimitiveDataType::Void,
                                SyntaxFactory::CreateToken(SyntaxTokenType::Void, L"void")),
                        }),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(
                            SyntaxTokenType::Identifier,
                            L"Function",
                            {
                                SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0)),
                            },
                            {})),
                    std::make_shared<ParameterList>(
                        SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                        std::make_shared<SyntaxList<Parameter>>(
                            std::vector<std::shared_ptr<const Parameter>>(),
                            std::vector<std::shared_ptr<const SyntaxToken>>()),
                        SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")")),
                    SyntaxFactory::CreateDeleteFunctionBody(
                        SyntaxFactory::CreateToken(
                            SyntaxTokenType::Equal,
                            L"=",
                            {
                                SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0)),
                            },
                            {}),
                        SyntaxFactory::CreateToken(
                            SyntaxTokenType::Delete,
                            L"delete",
                            {
                                SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0)),
                            },
                            {}),
                        SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"))));

            auto actual = TestUtils::GenerateAST(source);

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void SimpleFunctionParameter()
        {
            auto source = std::string(
                "void Function(int parameter) = delete;");

            auto expected = TestUtils::CreateSingleDeclaration(
                SyntaxFactory::CreateFunctionDefinition(
                    std::make_shared<DeclarationSpecifierSequence>(
                        std::vector<std::shared_ptr<const SyntaxNode>>
                        {
                            std::make_shared<PrimitiveDataTypeNode>(
                                PrimitiveDataType::Void,
                                SyntaxFactory::CreateToken(SyntaxTokenType::Void, L"void")),
                        }),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(
                            SyntaxTokenType::Identifier,
                            L"Function",
                            {
                                SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0)),
                            },
                            {})),
                    std::make_shared<ParameterList>(
                        SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                        std::make_shared<SyntaxList<Parameter>>(
                            std::vector<std::shared_ptr<const Parameter>>(),
                            std::vector<std::shared_ptr<const SyntaxToken>>()),
                        SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis,L")")),
                    SyntaxFactory::CreateDeleteFunctionBody(
                        SyntaxFactory::CreateToken(
                            SyntaxTokenType::Equal,
                            L"=",
                            {
                                SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0)),
                            },
                            {}),
                        SyntaxFactory::CreateToken(
                            SyntaxTokenType::Delete,
                            L"delete",
                            {
                                SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0)),
                            },
                            {}),
                        SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"))));

            auto actual = TestUtils::GenerateAST(source);

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }
    };
}
