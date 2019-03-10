#pragma once
#include "../../TestUtils.h"
#include "../../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class ParseNameExpressionTests
    {
    public:
        // [Fact]
        void SingleSimpleNameExpression()
        {
            auto sourceCode = std::string("Name");
            auto expression = std::dynamic_pointer_cast<const SimpleNameExpression>(
                ParseNameExpression(sourceCode));

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
                ParseNameExpression(sourceCode));

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

        std::shared_ptr<const NameExpression> ParseNameExpression(std::string& sourceCode)
        {
            auto uut = TestUtils::BuildParser(sourceCode);
            auto context = uut.Parser->primaryExpression();

            // Convert the the abstract syntax tree
            auto node = uut.Visitor->visit(context)
                .as<std::shared_ptr<const SyntaxNode>>();

            return std::dynamic_pointer_cast<const NameExpression>(node);
        }
    };
}
