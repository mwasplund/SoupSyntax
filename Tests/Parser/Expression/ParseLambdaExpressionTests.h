#pragma once
#include "TestUtils.h"
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class ParseLambdaExpressionTests
    {
    public:
        [[Fact]]
        void Simple()
        {
            auto sourceCode = std::string("[]{}");

            auto actual = ParseLambdaExpression(sourceCode);

            auto expected = SyntaxFactory::CreateLambdaExpression(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                nullptr,
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxList<Statement>({}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        [[Fact]]
        void EmptyParameterList()
        {
            auto sourceCode = std::string("[](){}");

            auto actual = ParseLambdaExpression(sourceCode);

            auto expected = SyntaxFactory::CreateLambdaExpression(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<Parameter>({}, {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxList<Statement>({}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        [[Fact]]
        void SingleCaptureReference()
        {
            auto sourceCode = std::string("[&value](){}");

            auto actual = ParseLambdaExpression(sourceCode);

            auto expected = SyntaxFactory::CreateLambdaExpression(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateSyntaxSeparatorList<LambdaCaptureClause>(
                    {
                        SyntaxFactory::CreateLambdaCaptureClause(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand),
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value")),
                    },
                    {}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<Parameter>({}, {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxList<Statement>({}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        [[Fact]]
        void SingleParameterAndReturnStatement()
        {
            auto sourceCode = std::string("[](int i){ return i; }");

            auto actual = ParseLambdaExpression(sourceCode);

            auto expected = SyntaxFactory::CreateLambdaExpression(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<Parameter>({
                        SyntaxFactory::CreateParameter(
                            SyntaxFactory::CreateDeclarationSpecifierSequence(
                                SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                            SyntaxFactory::CreateIdentifierExpression(
                                SyntaxFactory::CreateSimpleIdentifier(
                                    SyntaxFactory::CreateUniqueToken(
                                        SyntaxTokenType::Identifier,
                                        "i",
                                        {
                                            SyntaxFactory::CreateTrivia(" "),
                                        },
                                        {})))),
                    },
                    {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxList<Statement>({
                        SyntaxFactory::CreateReturnStatement(
                            SyntaxFactory::CreateKeywordToken(
                                SyntaxTokenType::Return,
                                {
                                    SyntaxFactory::CreateTrivia(" ")
                                },
                                {}),
                            SyntaxFactory::CreateIdentifierExpression(
                                SyntaxFactory::CreateSimpleIdentifier(
                                    SyntaxFactory::CreateUniqueToken(
                                        SyntaxTokenType::Identifier,
                                        "i",
                                        {
                                            SyntaxFactory::CreateTrivia(" ")
                                        },
                                        {}))),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    }),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::CloseBrace,
                        {
                            SyntaxFactory::CreateTrivia(" ")
                        },
                        {})));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

    private:
        std::shared_ptr<const SyntaxNode> ParseLambdaExpression(const std::string& sourceCode)
        {
            auto uut = TestUtils::BuildParser(sourceCode);
            auto context = uut.Parser->lambdaExpression();

            // Convert the the abstract syntax tree
            auto node = uut.Visitor->visit(context)
                .as<std::shared_ptr<const SyntaxNode>>();

            return node;
        }
    };
}
