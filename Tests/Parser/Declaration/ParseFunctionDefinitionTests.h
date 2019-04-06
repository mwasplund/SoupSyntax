#pragma once
#include "../../TestUtils.h"
#include "../../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class ParseFunctionDefinitionTests
    {
    public:
        // [Fact]
        void SimpleFunctionRegular()
        {
            auto source = std::string(
                "void Function() \n {\n}");

            auto expected = SyntaxFactory::CreateFunctionDefinition(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Void,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(
                        SyntaxTokenType::Identifier,
                        "Function",
                        {
                            SyntaxFactory::CreateTrivia(" ", TextSpan(0, 0)),
                        },
                        {})),
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    std::make_shared<SyntaxSeparatorList<Parameter>>(
                        std::vector<std::shared_ptr<const Parameter>>(),
                        std::vector<std::shared_ptr<const SyntaxToken>>()),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::CloseParenthesis,
                        {},
                        {
                            SyntaxFactory::CreateTrivia(" ", TextSpan(0, 0)),
                        })),
                std::make_shared<RegularFunctionBody>(
                    SyntaxFactory::CreateCompoundStatement(
                        SyntaxFactory::CreateKeywordToken(
                            SyntaxTokenType::OpenBrace,
                            {
                                SyntaxFactory::CreateTrivia("\n", TextSpan(0, 0)),
                                SyntaxFactory::CreateTrivia(" ", TextSpan(0, 0)),
                            },
                            {}),
                        {},
                        SyntaxFactory::CreateKeywordToken(
                            SyntaxTokenType::CloseBrace,
                            {
                                SyntaxFactory::CreateTrivia("\n", TextSpan(0, 0)),
                            },
                            {}))));

            auto actual = ParseFunctionDefinition(source);

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void SimpleFunctionDefault()
        {
            auto source = std::string(
                "void Function() = default;");

            auto expected = SyntaxFactory::CreateFunctionDefinition(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Void,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(
                        SyntaxTokenType::Identifier,
                        "Function",
                        {
                            SyntaxFactory::CreateTrivia(" ", TextSpan(0, 0)),
                        },
                        {})),
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    std::make_shared<SyntaxSeparatorList<Parameter>>(
                        std::vector<std::shared_ptr<const Parameter>>(),
                        std::vector<std::shared_ptr<const SyntaxToken>>()),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                SyntaxFactory::CreateDefaultFunctionBody(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Equal,
                        {
                            SyntaxFactory::CreateTrivia(" ", TextSpan(0, 0)),
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Default,
                        {
                            SyntaxFactory::CreateTrivia(" ", TextSpan(0, 0)),
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)));

            auto actual = ParseFunctionDefinition(source);

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void SimpleFunctionDelete()
        {
            auto source = std::string(
                "void Function() = delete;");

            auto expected = SyntaxFactory::CreateFunctionDefinition(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Void,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(
                        SyntaxTokenType::Identifier,
                        "Function",
                        {
                            SyntaxFactory::CreateTrivia(" ", TextSpan(0, 0)),
                        },
                        {})),
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    std::make_shared<SyntaxSeparatorList<Parameter>>(
                        std::vector<std::shared_ptr<const Parameter>>(),
                        std::vector<std::shared_ptr<const SyntaxToken>>()),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Equal,
                        {
                            SyntaxFactory::CreateTrivia(" ", TextSpan(0, 0)),
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Delete,
                        {
                            SyntaxFactory::CreateTrivia(" ", TextSpan(0, 0)),
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)));

            auto actual = ParseFunctionDefinition(source);

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void SimpleFunctionParameter()
        {
            auto source = std::string(
                "void Function(int parameter) = delete;");

            auto expected = SyntaxFactory::CreateFunctionDefinition(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Void,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(
                        SyntaxTokenType::Identifier,
                        "Function",
                        {
                            SyntaxFactory::CreateTrivia(" ", TextSpan(0, 0)),
                        },
                        {})),
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    std::make_shared<SyntaxSeparatorList<Parameter>>(
                        std::vector<std::shared_ptr<const Parameter>>({
                            SyntaxFactory::CreateParameter(
                                SyntaxFactory::CreateDeclarationSpecifier(
                                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                        PrimitiveDataType::Int,
                                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(
                                        SyntaxTokenType::Identifier,
                                        "parameter",
                                        {
                                            SyntaxFactory::CreateTrivia(" ", TextSpan(0, 0)),
                                        },
                                        {}))),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>()),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Equal,
                        {
                            SyntaxFactory::CreateTrivia(" ", TextSpan(0, 0)),
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Delete,
                        {
                            SyntaxFactory::CreateTrivia(" ", TextSpan(0, 0)),
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)));

            auto actual = ParseFunctionDefinition(source);

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

    private:
        std::shared_ptr<const FunctionDefinition> ParseFunctionDefinition(std::string& sourceCode)
        {
            auto uut = TestUtils::BuildParser(sourceCode);
            auto context = uut.Parser->functionDefinition();

            // Convert the the abstract syntax tree
            auto node = uut.Visitor->visit(context)
                .as<std::shared_ptr<const SyntaxNode>>();

            return std::dynamic_pointer_cast<const FunctionDefinition>(node);
        }
    };
}
