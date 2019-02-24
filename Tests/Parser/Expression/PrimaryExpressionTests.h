#pragma once
#include "../../TestUtils.h"
#include "../../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class PrimaryExpressionTests
    {
    public:
        // [Theory]
        // [InlineData("0")]
        // [InlineData("1")]
        void SingleIntegerLiteralType(std::string sourceCode)
        {
            auto expression = std::dynamic_pointer_cast<const LiteralExpression>(
                ParsePrimaryExpression(sourceCode));

            Assert::NotNull(expression, "Verify cast.");
            Assert::AreEqual(LiteralType::Integer, expression->GetType(), "Verify type matches expected.");
            Assert::AreEqual(
                SyntaxToken(SyntaxTokenType::IntegerLiteral, sourceCode),
                expression->GetToken(),
                "Verify value matches entire source.");
        }

        // [Theory]
        // [[InlineData("0.0f")]]
        void SingleFloatingLiteralType(std::string sourceCode)
        {
            auto expression = std::dynamic_pointer_cast<const LiteralExpression>(
                ParsePrimaryExpression(sourceCode));

            Assert::NotNull(expression, "Verify cast.");
            Assert::AreEqual(LiteralType::Floating, expression->GetType(), "Verify type matches expected.");
            Assert::AreEqual(
                SyntaxToken(SyntaxTokenType::FloatingPointLiteral, sourceCode),
                expression->GetToken(),
                "Verify value matches entire source.");
        }

        // [Theory]
        // [[InlineData("'1'")]]
        void SingleCharacterLiteralType(std::string sourceCode)
        {
            auto expression = std::dynamic_pointer_cast<const LiteralExpression>(
                ParsePrimaryExpression(sourceCode));

            Assert::NotNull(expression, "Verify cast.");
            Assert::AreEqual(LiteralType::Character, expression->GetType(), "Verify type matches expected.");
            Assert::AreEqual(
                SyntaxToken(SyntaxTokenType::CharacterLiteral, sourceCode),
                expression->GetToken(),
                "Verify value matches entire source.");
        }

        // [Theory]
        // [[InlineData("nullptr")]]
        void SinglePointerLiteralType(std::string sourceCode)
        {
            auto expression = std::dynamic_pointer_cast<const LiteralExpression>(
                ParsePrimaryExpression(sourceCode));

            Assert::NotNull(expression, "Verify cast.");
            Assert::AreEqual(LiteralType::Pointer, expression->GetType(), "Verify type matches expected.");
            Assert::AreEqual(
                SyntaxToken(SyntaxTokenType::Nullptr, sourceCode),
                expression->GetToken(),
                "Verify value matches entire source.");
        }

        // [Theory]
        // [[InlineData("\" \"")]]
        void SingleStringLiteralType(std::string sourceCode)
        {
            auto expression = std::dynamic_pointer_cast<const LiteralExpression>(
                ParsePrimaryExpression(sourceCode));

            Assert::NotNull(expression, "Verify cast.");
            Assert::AreEqual(LiteralType::String, expression->GetType(), "Verify type matches expected.");
            Assert::AreEqual(
                SyntaxToken(SyntaxTokenType::StringLiteral, sourceCode),
                expression->GetToken(),
                "Verify value matches entire source.");
        }

        // [Theory]
        // [[InlineData("true", SyntaxTokenType::True)]]
        // [[InlineData("false", SyntaxTokenType::False)]]
        void SingleBooleanLiteralType(std::string sourceCode, SyntaxTokenType type)
        {
            auto expression = std::dynamic_pointer_cast<const LiteralExpression>(
                ParsePrimaryExpression(sourceCode));

            Assert::NotNull(expression, "Verify cast.");
            Assert::AreEqual(LiteralType::Boolean, expression->GetType(), "Verify type matches expected.");
            Assert::AreEqual(
                SyntaxToken(type, sourceCode),
                expression->GetToken(),
                "Verify value matches entire source.");
        }

        // [Theory]
        // [[InlineData("2h")]]
        void SingleUserDefinedLiteralType(std::string sourceCode)
        {
            auto expression = std::dynamic_pointer_cast<const LiteralExpression>(
                ParsePrimaryExpression(sourceCode));

            Assert::NotNull(expression, "Verify cast.");
            Assert::AreEqual(LiteralType::UserDefined, expression->GetType(), "Verify type matches expected.");
            Assert::AreEqual(
                SyntaxToken(SyntaxTokenType::UserDefinedLiteral, sourceCode),
                expression->GetToken(),
                "Verify value matches entire source.");
        }

        // [Fact]
        void SingleThisExpression()
        {
            auto sourceCode = std::string("this");
            auto expression = std::dynamic_pointer_cast<const ThisExpression>(
                ParsePrimaryExpression(sourceCode));

            Assert::NotNull(expression, "Verify cast.");
        }

        // [Fact]
        void SingleSimpleNameExpression()
        {
            auto sourceCode = std::string("Name");
            auto expression = std::dynamic_pointer_cast<const SimpleNameExpression>(
                ParsePrimaryExpression(sourceCode));

            Assert::NotNull(expression, "Verify cast.");
            Assert::AreEqual(
                SyntaxToken(SyntaxTokenType::Identifier, sourceCode),
                expression->GetIdentifier(),
                "Verify identifier matches expected.");
        }

        // [Fact]
        void SingleQualifiedNameExpression()
        {
            auto sourceCode = std::string("NameLeft::NameRight");
            auto expression = std::dynamic_pointer_cast<const QualifiedNameExpression>(
                ParsePrimaryExpression(sourceCode));

            Assert::NotNull(expression, "Verify cast.");

            auto left = dynamic_cast<const SimpleNameExpression&>(expression->GetLeft());
            auto right = expression->GetRight();

            Assert::AreEqual(
                SyntaxToken(SyntaxTokenType::Identifier, "NameLeft"),
                left.GetIdentifier(),
                "Verify left identifier matches expected.");
            Assert::AreEqual(
                SyntaxToken(SyntaxTokenType::DoubleColon, "::"),
                expression->GetScopeResolutionToken(),
                "Verify double colon token matches expected.");
            Assert::AreEqual(
                SyntaxToken(SyntaxTokenType::Identifier, "NameRight"),
                right.GetIdentifier(),
                "Verify right identifier matches expected.");
        }

    private:
        std::shared_ptr<const SyntaxNode> ParsePrimaryExpression(std::string& sourceCode)
        {
            auto uut = TestUtils::BuildParser(sourceCode);
            auto context = uut.Parser->primaryExpression();

            // Convert the the abstract syntax tree
            auto visitor = ASTVisitor();
            auto node = visitor.visit(context)
                .as<std::shared_ptr<const SyntaxNode>>();

            return node;
        }
    };
}
