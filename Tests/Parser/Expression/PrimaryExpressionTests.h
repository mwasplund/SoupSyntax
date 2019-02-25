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

            Assert::NotNull(expression, L"Verify cast.");
            Assert::AreEqual(LiteralType::Integer, expression->GetType(), L"Verify type matches expected.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::IntegerLiteral, Convert(sourceCode)),
                expression->GetToken(),
                L"Verify value matches entire source.");
        }

        // [Theory]
        // [[InlineData("0.0f")]]
        void SingleFloatingLiteralType(std::string sourceCode)
        {
            auto expression = std::dynamic_pointer_cast<const LiteralExpression>(
                ParsePrimaryExpression(sourceCode));

            Assert::NotNull(expression, L"Verify cast.");
            Assert::AreEqual(LiteralType::Floating, expression->GetType(), L"Verify type matches expected.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::FloatingPointLiteral, Convert(sourceCode)),
                expression->GetToken(),
                L"Verify value matches entire source.");
        }

        // [Theory]
        // [[InlineData("'1'")]]
        void SingleCharacterLiteralType(std::string sourceCode)
        {
            auto expression = std::dynamic_pointer_cast<const LiteralExpression>(
                ParsePrimaryExpression(sourceCode));

            Assert::NotNull(expression, L"Verify cast.");
            Assert::AreEqual(LiteralType::Character, expression->GetType(), L"Verify type matches expected.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::CharacterLiteral, Convert(sourceCode)),
                expression->GetToken(),
                L"Verify value matches entire source.");
        }

        // [Theory]
        // [[InlineData("nullptr")]]
        void SinglePointerLiteralType(std::string sourceCode)
        {
            auto expression = std::dynamic_pointer_cast<const LiteralExpression>(
                ParsePrimaryExpression(sourceCode));

            Assert::NotNull(expression, L"Verify cast.");
            Assert::AreEqual(LiteralType::Pointer, expression->GetType(), L"Verify type matches expected.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::Nullptr, Convert(sourceCode)),
                expression->GetToken(),
                L"Verify value matches entire source.");
        }

        // [Theory]
        // [[InlineData("\" \"")]]
        void SingleStringLiteralType(std::string sourceCode)
        {
            auto expression = std::dynamic_pointer_cast<const LiteralExpression>(
                ParsePrimaryExpression(sourceCode));

            Assert::NotNull(expression, L"Verify cast.");
            Assert::AreEqual(LiteralType::String, expression->GetType(), L"Verify type matches expected.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::StringLiteral, Convert(sourceCode)),
                expression->GetToken(),
                L"Verify value matches entire source.");
        }

        // [Theory]
        // [[InlineData("true", SyntaxTokenType::True)]]
        // [[InlineData("false", SyntaxTokenType::False)]]
        void SingleBooleanLiteralType(std::string sourceCode, SyntaxTokenType type)
        {
            auto expression = std::dynamic_pointer_cast<const LiteralExpression>(
                ParsePrimaryExpression(sourceCode));

            Assert::NotNull(expression, L"Verify cast.");
            Assert::AreEqual(LiteralType::Boolean, expression->GetType(), L"Verify type matches expected.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(type, Convert(sourceCode)),
                expression->GetToken(),
                L"Verify value matches entire source.");
        }

        // [Theory]
        // [[InlineData("2h")]]
        void SingleUserDefinedLiteralType(std::string sourceCode)
        {
            auto expression = std::dynamic_pointer_cast<const LiteralExpression>(
                ParsePrimaryExpression(sourceCode));

            Assert::NotNull(expression, L"Verify cast.");
            Assert::AreEqual(LiteralType::UserDefined, expression->GetType(), L"Verify type matches expected.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::UserDefinedLiteral, Convert(sourceCode)),
                expression->GetToken(),
                L"Verify value matches entire source.");
        }

        // [Fact]
        void SingleThisExpression()
        {
            auto sourceCode = std::string("this");
            auto expression = std::dynamic_pointer_cast<const ThisExpression>(
                ParsePrimaryExpression(sourceCode));

            Assert::NotNull(expression, L"Verify cast.");
        }

        // [Fact]
        void SingleSimpleNameExpression()
        {
            auto sourceCode = std::string("Name");
            auto expression = std::dynamic_pointer_cast<const SimpleNameExpression>(
                ParsePrimaryExpression(sourceCode));

            Assert::NotNull(expression, L"Verify cast.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, Convert(sourceCode)),
                expression->GetIdentifier(),
                L"Verify identifier matches expected.");
        }

        // [Fact]
        void SingleQualifiedNameExpression()
        {
            auto sourceCode = std::string("NameLeft::NameRight");
            auto expression = std::dynamic_pointer_cast<const QualifiedNameExpression>(
                ParsePrimaryExpression(sourceCode));

            Assert::NotNull(expression, L"Verify cast.");

            auto left = dynamic_cast<const SimpleNameExpression&>(expression->GetLeft());
            auto right = expression->GetRight();

            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"NameLeft"),
                left.GetIdentifier(),
                L"Verify left identifier matches expected.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::DoubleColon, L"::"),
                expression->GetScopeResolutionToken(),
                L"Verify double colon token matches expected.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"NameRight"),
                right.GetIdentifier(),
                L"Verify right identifier matches expected.");
        }

    private:
        std::wstring Convert(const std::string& value)
        {
            // Convert the token text to wide characters
            std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
            return converter.from_bytes(value);
        }

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
