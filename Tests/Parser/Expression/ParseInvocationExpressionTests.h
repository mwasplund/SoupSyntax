#pragma once
#include "TestUtils.h"
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class ParseInvocationExpressionTests
    {
    public:
        [[Fact]]
        void SimpleInvocation()
        {
            auto sourceCode = std::string("a();");

            auto actual = ParseInvocationExpression(sourceCode);

            auto expected = SyntaxFactory::CreateExpressionStatement(
                SyntaxFactory::CreateInvocationExpression(
                    SyntaxFactory::CreateIdentifierExpression(
                        SyntaxFactory::CreateSimpleIdentifier(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>({}, {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        [[Fact]]
        void ComplexInvocation()
        {
            auto sourceCode = std::string("a(b, c);");

            auto actual = ParseInvocationExpression(sourceCode);

            auto expected = SyntaxFactory::CreateExpressionStatement(
                SyntaxFactory::CreateInvocationExpression(
                    SyntaxFactory::CreateIdentifierExpression(
                        SyntaxFactory::CreateSimpleIdentifier(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                        {
                            SyntaxFactory::CreateIdentifierExpression(
                                SyntaxFactory::CreateSimpleIdentifier(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))),
                            SyntaxFactory::CreateIdentifierExpression(
                                SyntaxFactory::CreateSimpleIdentifier(
                                    SyntaxFactory::CreateUniqueToken(
                                        SyntaxTokenType::Identifier,
                                        "c",
                                        {
                                            SyntaxFactory::CreateTrivia(" "),
                                        },
                                        {})))
                        },
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                        }),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        [[Fact]]
        void BracedInitializerParameter()
        {
            auto sourceCode = std::string("a({1,});");

            auto actual = ParseInvocationExpression(sourceCode);

            auto expected = SyntaxFactory::CreateExpressionStatement(
                SyntaxFactory::CreateInvocationExpression(
                    SyntaxFactory::CreateIdentifierExpression(
                        SyntaxFactory::CreateSimpleIdentifier(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))) ,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                        {
                            SyntaxFactory::CreateInitializerList(
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                                    {
                                        SyntaxFactory::CreateLiteralExpression(
                                            LiteralType::Integer,
                                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")),
                                    },
                                    {
                                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                                    }),
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        [[Fact]]
        void EnumValueParameter()
        {
            auto sourceCode = std::string("Run(MyEnum::Value);");

            auto actual = ParseInvocationExpression(sourceCode);

            auto expected = SyntaxFactory::CreateExpressionStatement(
                SyntaxFactory::CreateInvocationExpression(
                    SyntaxFactory::CreateIdentifierExpression(
                        SyntaxFactory::CreateSimpleIdentifier(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Run"))) ,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                        {
                            SyntaxFactory::CreateIdentifierExpression(
                                SyntaxFactory::CreateNestedNameSpecifier(
                                    SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                                        {
                                            SyntaxFactory::CreateSimpleIdentifier(
                                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyEnum")),
                                        },
                                        {
                                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                                        })),
                                SyntaxFactory::CreateSimpleIdentifier(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value"))),
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // TODO: Ambiguous [[Fact]]
        void TemplateSpecification()
        {
            auto sourceCode = std::string("DoStuff<Other>(1);");

            auto actual = ParseInvocationExpression(sourceCode);

            auto expected = SyntaxFactory::CreateExpressionStatement(
                SyntaxFactory::CreateInvocationExpression(
                    SyntaxFactory::CreateIdentifierExpression(
                        SyntaxFactory::CreateSimpleTemplateIdentifier(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "DoStuff"),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
                            SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                                {
                                    SyntaxFactory::CreateTypeSpecifierSequence(
                                        SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                                            PrimitiveDataType::Int,
                                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                                },
                                {}),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan))),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                        {
                            SyntaxFactory::CreateLiteralExpression(
                                LiteralType::Integer,
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")),
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        [[Fact]]
        void QualifiedTemplateSpecification()
        {
            auto sourceCode = std::string("std::istreambuf_iterator<char>(sourceFile);");

            auto actual = ParseInvocationExpression(sourceCode);

            auto expected = SyntaxFactory::CreateExpressionStatement(
                SyntaxFactory::CreateInvocationExpression(
                    SyntaxFactory::CreateIdentifierExpression(
                        SyntaxFactory::CreateNestedNameSpecifier(
                             SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                                {
                                    SyntaxFactory::CreateSimpleIdentifier(
                                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "std")),
                                },
                                {
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                                })),
                        SyntaxFactory::CreateSimpleTemplateIdentifier(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "istreambuf_iterator"),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
                            SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                                {
                                    SyntaxFactory::CreateTypeSpecifierSequence(
                                        SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                                            PrimitiveDataType::Char,
                                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Char))),
                                },
                                {}),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan))),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                        {
                            SyntaxFactory::CreateIdentifierExpression(
                                SyntaxFactory::CreateSimpleIdentifier(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "sourceFile"))),
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

    private:
        std::shared_ptr<const SyntaxNode> ParseInvocationExpression(const std::string& sourceCode)
        {
            auto uut = TestUtils::BuildParser(sourceCode);

            // Parse the expression as a statement to ensure all tokens are consumed
            auto context = uut.Parser->expressionStatement();

            // Convert the the abstract syntax tree
            auto node = uut.Visitor->visit(context)
                .as<std::shared_ptr<const SyntaxNode>>();

            return node;
        }
    };
}
