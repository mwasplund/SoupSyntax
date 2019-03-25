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
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                            PrimitiveDataType::Void,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(
                            SyntaxTokenType::Identifier,
                            L"Function",
                            {
                                SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0)),
                            },
                            {})),
                    SyntaxFactory::CreateParameterList(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                        std::make_shared<SyntaxList<Parameter>>(
                            std::vector<std::shared_ptr<const Parameter>>(),
                            std::vector<std::shared_ptr<const SyntaxToken>>()),
                        SyntaxFactory::CreateKeywordToken(
                            SyntaxTokenType::RightParenthesis,
                            {},
                            {
                                SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0)),
                            })),
                    std::make_shared<RegularFunctionBody>(
                        SyntaxFactory::CreateCompoundStatement(
                            SyntaxFactory::CreateKeywordToken(
                                SyntaxTokenType::LeftBrace,
                                {
                                    SyntaxFactory::CreateTrivia(L"\n", TextSpan(0, 0)),
                                    SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0)),
                                },
                                {}),
                            {},
                            SyntaxFactory::CreateKeywordToken(
                                SyntaxTokenType::RightBrace,
                                {
                                    SyntaxFactory::CreateTrivia(L"\n", TextSpan(0, 0)),
                                },
                                {})))));

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
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                            PrimitiveDataType::Void,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(
                            SyntaxTokenType::Identifier,
                            L"Function",
                            {
                                SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0)),
                            },
                            {})),
                    SyntaxFactory::CreateParameterList(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                        std::make_shared<SyntaxList<Parameter>>(
                            std::vector<std::shared_ptr<const Parameter>>(),
                            std::vector<std::shared_ptr<const SyntaxToken>>()),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis)),
                    SyntaxFactory::CreateDefaultFunctionBody(
                        SyntaxFactory::CreateKeywordToken(
                            SyntaxTokenType::Equal,
                            {
                                SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0)),
                            },
                            {}),
                        SyntaxFactory::CreateKeywordToken(
                            SyntaxTokenType::Default,
                            {
                                SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0)),
                            },
                            {}),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))));

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
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                            PrimitiveDataType::Void,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(
                            SyntaxTokenType::Identifier,
                            L"Function",
                            {
                                SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0)),
                            },
                            {})),
                    SyntaxFactory::CreateParameterList(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                        std::make_shared<SyntaxList<Parameter>>(
                            std::vector<std::shared_ptr<const Parameter>>(),
                            std::vector<std::shared_ptr<const SyntaxToken>>()),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis)),
                    SyntaxFactory::CreateDeleteFunctionBody(
                        SyntaxFactory::CreateKeywordToken(
                            SyntaxTokenType::Equal,
                            {
                                SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0)),
                            },
                            {}),
                        SyntaxFactory::CreateKeywordToken(
                            SyntaxTokenType::Delete,
                            {
                                SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0)),
                            },
                            {}),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))));

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
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                            PrimitiveDataType::Void,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(
                            SyntaxTokenType::Identifier,
                            L"Function",
                            {
                                SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0)),
                            },
                            {})),
                    SyntaxFactory::CreateParameterList(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                        std::make_shared<SyntaxList<Parameter>>(
                            std::vector<std::shared_ptr<const Parameter>>(),
                            std::vector<std::shared_ptr<const SyntaxToken>>()),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis)),
                    SyntaxFactory::CreateDeleteFunctionBody(
                        SyntaxFactory::CreateKeywordToken(
                            SyntaxTokenType::Equal,
                            {
                                SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0)),
                            },
                            {}),
                        SyntaxFactory::CreateKeywordToken(
                            SyntaxTokenType::Delete,
                            {
                                SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 0)),
                            },
                            {}),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))));

            auto actual = TestUtils::GenerateAST(source);

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }
    };
}
