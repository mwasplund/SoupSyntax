#pragma once
#include "../../TestUtils.h"
#include "../../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class ParseLiteralExpressionTests
    {
    public:
        // [Theory]
        // [InlineData("0")]
        // [InlineData("1")]
        void SingleIntegerLiteralType(std::string sourceCode)
        {
            auto expression = ParseLiteralExpression(sourceCode);

            Assert::NotNull(expression, L"Verify cast.");
            Assert::AreEqual(LiteralType::Integer, expression->GetLiteralType(), L"Verify type matches expected.");
            Assert::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, Convert(sourceCode)),
                expression->GetToken(),
                L"Verify value matches entire source.");
        }

        // [Theory]
        // [[InlineData("0.0f")]]
        void SingleFloatingLiteralType(std::string sourceCode)
        {
            auto expression = ParseLiteralExpression(sourceCode);

            Assert::NotNull(expression, L"Verify cast.");
            Assert::AreEqual(LiteralType::Floating, expression->GetLiteralType(), L"Verify type matches expected.");
            Assert::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::FloatingPointLiteral, Convert(sourceCode)),
                expression->GetToken(),
                L"Verify value matches entire source.");
        }

        // [Theory]
        // [[InlineData("'1'")]]
        void SingleCharacterLiteralType(std::string sourceCode)
        {
            auto expression = ParseLiteralExpression(sourceCode);

            Assert::NotNull(expression, L"Verify cast.");
            Assert::AreEqual(LiteralType::Character, expression->GetLiteralType(), L"Verify type matches expected.");
            Assert::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::CharacterLiteral, Convert(sourceCode)),
                expression->GetToken(),
                L"Verify value matches entire source.");
        }

        // [Theory]
        // [[InlineData("nullptr")]]
        void SinglePointerLiteralType(std::string sourceCode)
        {
            auto expression = ParseLiteralExpression(sourceCode);

            Assert::NotNull(expression, L"Verify cast.");
            Assert::AreEqual(LiteralType::Pointer, expression->GetLiteralType(), L"Verify type matches expected.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Nullptr),
                expression->GetToken(),
                L"Verify value matches entire source.");
        }

        // [Theory]
        // [[InlineData("\" \"")]]
        void SingleStringLiteralType(std::string sourceCode)
        {
            auto expression = ParseLiteralExpression(sourceCode);

            Assert::NotNull(expression, L"Verify cast.");
            Assert::AreEqual(LiteralType::String, expression->GetLiteralType(), L"Verify type matches expected.");
            Assert::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::StringLiteral, Convert(sourceCode)),
                expression->GetToken(),
                L"Verify value matches entire source.");
        }

        // [Theory]
        // [[InlineData("true", SyntaxTokenType::True)]]
        // [[InlineData("false", SyntaxTokenType::False)]]
        void SingleBooleanLiteralType(std::string sourceCode, SyntaxTokenType type)
        {
            auto expression = ParseLiteralExpression(sourceCode);

            Assert::NotNull(expression, L"Verify cast.");
            Assert::AreEqual(LiteralType::Boolean, expression->GetLiteralType(), L"Verify type matches expected.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(type),
                expression->GetToken(),
                L"Verify value matches entire source.");
        }

        // [Theory]
        // [[InlineData("2h")]]
        void SingleUserDefinedLiteralType(std::string sourceCode)
        {
            auto expression = ParseLiteralExpression(sourceCode);

            Assert::NotNull(expression, L"Verify cast.");
            Assert::AreEqual(LiteralType::UserDefined, expression->GetLiteralType(), L"Verify type matches expected.");
            Assert::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::UserDefinedLiteral, Convert(sourceCode)),
                expression->GetToken(),
                L"Verify value matches entire source.");
        }

    private:
        std::wstring Convert(const std::string& value)
        {
            // Convert the token text to wide characters
            std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
            return converter.from_bytes(value);
        }

        std::shared_ptr<const LiteralExpression> ParseLiteralExpression(std::string& sourceCode)
        {
            auto uut = TestUtils::BuildParser(sourceCode);
            auto context = uut.Parser->primaryExpression();

            // Convert the the abstract syntax tree
            auto node = uut.Visitor->visit(context)
                .as<std::shared_ptr<const SyntaxNode>>();

            return std::dynamic_pointer_cast<const LiteralExpression>(node);
        }
    };
}
