#pragma once
#include "TestUtils.h"
#include "SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class ParseIdentifierExpressionTests
    {
    public:
        // [Fact]
        void SingleSimpleIdentifierExpression()
        {
            auto sourceCode = std::string("Name");
            auto expression = ParseIdentifierExpression(sourceCode);

            TestUtils::AreEqual(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, sourceCode)),
                expression,
                "Verify matches expected.");
        }

        // [Fact]
        void SingleQualifiedIdentifierExpression()
        {
            auto sourceCode = std::string("NameLeft::NameRight");
            auto expression = ParseIdentifierExpression(sourceCode);

            TestUtils::AreEqual(
                SyntaxFactory::CreateQualifiedIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "NameLeft")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "NameRight"))),
                expression,
                "Verify matches expected.");
        }

        // [Fact]
        void SingleTemplateIdentifierExpression()
        {
            auto sourceCode = std::string("Name<Value1, Value2>");
            auto expression = ParseIdentifierExpression(sourceCode);

            TestUtils::AreEqual(
                SyntaxFactory::CreateSimpleTemplateIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Name"),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
                    SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                        std::vector<std::shared_ptr<const Expression>>({
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")),
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(
                                    SyntaxTokenType::Identifier,
                                    "Value2",
                                    {
                                        SyntaxFactory::CreateTrivia(" "),
                                    },
                                    {})),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>({
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan)),
                expression,
                "Verify matches expected.");
        }

        // [Fact]
        void SingleDestructorIdentifierExpression()
        {
            auto sourceCode = std::string("~MyClass");
            auto expression = ParseIdentifierExpression(sourceCode);

            TestUtils::AreEqual(
                SyntaxFactory::CreateDestructorIdentifierExpression(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Tilde),
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass")),
                expression,
                "Verify matches expected.");
        }

    private:
        std::shared_ptr<const IdentifierExpression> ParseIdentifierExpression(std::string& sourceCode)
        {
            auto uut = TestUtils::BuildParser(sourceCode);
            auto context = uut.Parser->primaryExpression();

            // Convert the the abstract syntax tree
            auto node = uut.Visitor->visit(context)
                .as<std::shared_ptr<const SyntaxNode>>();

            return std::dynamic_pointer_cast<const IdentifierExpression>(node);
        }
    };
}
