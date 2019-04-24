#pragma once
#include "TestUtils.h"
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class ParseConstructorDefinitionTests
    {
    public:
        [[Fact]]
        void SimpleRegular()
        {
            auto source = std::string(
                "MyClass() \n {\n}");

            auto expected = SyntaxFactory::CreateConstructorDefinition(
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"))),
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<Parameter>({}, {}),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::CloseParenthesis,
                        {},
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        })),
                nullptr,
                SyntaxFactory::CreateRegularFunctionBody(
                    SyntaxFactory::CreateCompoundStatement(
                        SyntaxFactory::CreateKeywordToken(
                            SyntaxTokenType::OpenBrace,
                            {
                                SyntaxFactory::CreateTrivia("\n"),
                                SyntaxFactory::CreateTrivia(" "),
                            },
                            {}),
                        SyntaxFactory::CreateSyntaxList<Statement>({}),
                        SyntaxFactory::CreateKeywordToken(
                            SyntaxTokenType::CloseBrace,
                            {
                                SyntaxFactory::CreateTrivia("\n"),
                            },
                            {}))));

            auto actual = ParseConstructorDefinition(source);

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        [[Fact]]
        void SimpleDefault()
        {
            auto source = std::string(
                "MyClass() = default;");

            auto expected = SyntaxFactory::CreateConstructorDefinition(
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"))),
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<Parameter>({}, {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                nullptr,
                SyntaxFactory::CreateDefaultFunctionBody(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Equal,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Default,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)));

            auto actual = ParseConstructorDefinition(source);

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        [[Fact]]
        void SimpleDelete()
        {
            auto source = std::string(
                "MyClass() = delete;");

            auto expected = SyntaxFactory::CreateConstructorDefinition(
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"))),
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<Parameter>({}, {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                nullptr,
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Equal,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Delete,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)));

            auto actual = ParseConstructorDefinition(source);

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        [[Fact]]
        void ComplexParameterAndInitializer()
        {
            auto source = std::string(
                "MyClass(int parameter) : m_value(parameter) {}");

            auto expected = SyntaxFactory::CreateConstructorDefinition(
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"))),
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
                        {
                            SyntaxFactory::CreateParameter(
                                SyntaxFactory::CreateDeclarationSpecifierSequence(
                                    SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                                        PrimitiveDataType::Int,
                                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                                SyntaxFactory::CreateIdentifierExpression(
                                    SyntaxFactory::CreateSimpleIdentifier(
                                        SyntaxFactory::CreateUniqueToken(
                                            SyntaxTokenType::Identifier,
                                            "parameter",
                                            {
                                                SyntaxFactory::CreateTrivia(" "),
                                            },
                                            {})))),
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                SyntaxFactory::CreateConstructorInitializer(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Colon,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {}),
                    SyntaxFactory::CreateSyntaxSeparatorList<MemberInitializer>(
                        {
                            SyntaxFactory::CreateMemberInitializer(
                                SyntaxFactory::CreateUniqueToken(
                                    SyntaxTokenType::Identifier,
                                    "m_value",
                                    {
                                        SyntaxFactory::CreateTrivia(" "),
                                    },
                                    {}),
                                SyntaxFactory::CreateInitializerList(
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                                    SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                                        {
                                            SyntaxFactory::CreateIdentifierExpression(
                                                SyntaxFactory::CreateSimpleIdentifier(
                                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "parameter"))),
                                        },
                                        {}),
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))), 
                        },
                        {})),
                SyntaxFactory::CreateRegularFunctionBody(
                    SyntaxFactory::CreateCompoundStatement(
                        SyntaxFactory::CreateKeywordToken(
                            SyntaxTokenType::OpenBrace,
                            {
                                SyntaxFactory::CreateTrivia(" "),
                            },
                            {}),
                        SyntaxFactory::CreateSyntaxList<Statement>({}),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))));

            auto actual = ParseConstructorDefinition(source);

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

    private:
        std::shared_ptr<const SyntaxNode> ParseConstructorDefinition(const std::string& sourceCode)
        {
            auto uut = TestUtils::BuildParser(sourceCode);
            auto context = uut.Parser->functionDefinition();

            // Convert the the abstract syntax tree
            auto node = uut.Visitor->visit(context)
                .as<std::shared_ptr<const SyntaxNode>>();

            return node;
        }
    };
}
