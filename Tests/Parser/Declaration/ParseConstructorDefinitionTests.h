#pragma once
#include "TestUtils.h"
#include "SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class ParseConstructorDefinitionTests
    {
    public:
        // [Fact]
        void SimpleRegular()
        {
            auto source = std::string(
                "MyClass() \n {\n}");

            auto expected = SyntaxFactory::CreateConstructorDefinition(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass")),
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
                nullptr,
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

            auto actual = ParseConstructorDefinition(source);

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void SimpleDefault()
        {
            auto source = std::string(
                "MyClass() = default;");

            auto expected = SyntaxFactory::CreateConstructorDefinition(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass")),
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    std::make_shared<SyntaxSeparatorList<Parameter>>(
                        std::vector<std::shared_ptr<const Parameter>>(),
                        std::vector<std::shared_ptr<const SyntaxToken>>()),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                nullptr,
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

            auto actual = ParseConstructorDefinition(source);

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void SimpleDelete()
        {
            auto source = std::string(
                "MyClass() = delete;");

            auto expected = SyntaxFactory::CreateConstructorDefinition(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass")),
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    std::make_shared<SyntaxSeparatorList<Parameter>>(
                        std::vector<std::shared_ptr<const Parameter>>(),
                        std::vector<std::shared_ptr<const SyntaxToken>>()),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                nullptr,
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

            auto actual = ParseConstructorDefinition(source);

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void ComplexParameterAndInitializer()
        {
            auto source = std::string(
                "MyClass(int parameter) : m_value(parameter) {}");

            auto expected = SyntaxFactory::CreateConstructorDefinition(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass")),
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
                SyntaxFactory::CreateConstructorInitializer(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Colon,
                        {
                            SyntaxFactory::CreateTrivia(" ", TextSpan(0, 0)),
                        },
                        {}),
                    SyntaxFactory::CreateSyntaxSeparatorList<MemberInitializer>(
                        std::vector<std::shared_ptr<const MemberInitializer>>({
                            SyntaxFactory::CreateMemberInitializer(
                                SyntaxFactory::CreateUniqueToken(
                                    SyntaxTokenType::Identifier,
                                    "m_value",
                                    {
                                        SyntaxFactory::CreateTrivia(" ", TextSpan(0, 0)),
                                    },
                                    {}),
                                SyntaxFactory::CreateInitializerList(
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                                    SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                                        std::vector<std::shared_ptr<const Expression>>({
                                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "parameter")),
                                        }),
                                        std::vector<std::shared_ptr<const SyntaxToken>>()),
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))), 
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>())),
                std::make_shared<RegularFunctionBody>(
                    SyntaxFactory::CreateCompoundStatement(
                        SyntaxFactory::CreateKeywordToken(
                            SyntaxTokenType::OpenBrace,
                            {
                                SyntaxFactory::CreateTrivia(" ", TextSpan(0, 0)),
                            },
                            {}),
                        {},
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))));

            auto actual = ParseConstructorDefinition(source);

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

    private:
        std::shared_ptr<const SyntaxNode> ParseConstructorDefinition(std::string& sourceCode)
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
