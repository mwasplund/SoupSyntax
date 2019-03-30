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

            Assert::NotNull(expression, "Verify cast.");
            Assert::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, sourceCode),
                expression->GetIdentifier(),
                "Verify identifier matches expected.");
        }

        // [Fact]
        void SingleQualifiedNameExpression()
        {
            auto sourceCode = std::string("NameLeft::NameRight");
            auto expression = std::dynamic_pointer_cast<const QualifiedNameExpression>(
                ParseNameExpression(sourceCode));

            Assert::NotNull(expression, "Verify cast.");

            auto left = dynamic_cast<const SimpleNameExpression&>(expression->GetLeft());
            auto right = expression->GetRight();

            Assert::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "NameLeft"),
                left.GetIdentifier(),
                "Verify left identifier matches expected.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                expression->GetScopeResolutionToken(),
                "Verify double colon token matches expected.");
            Assert::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "NameRight"),
                right.GetIdentifier(),
                "Verify right identifier matches expected.");
        }

    private:
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
