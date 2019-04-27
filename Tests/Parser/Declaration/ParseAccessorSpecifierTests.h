#pragma once
#include "TestUtils.h"
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class ParseAccessorSpecifierTests
    {
    public:
        [[Fact]]
        void SimplePublic()
        {
            auto sourceCode = std::string("public:");
            auto actual = ParseAccessorSpecifier(sourceCode);

            auto expected = SyntaxFactory::CreateAccessorSpecifier(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Public),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon));

            TestUtils::AreEqual(
                expected,
                actual,
                "Verify matches expected.");
        }

        [[Fact]]
        void SimplePrivate()
        {
            auto sourceCode = std::string("private:");
            auto actual = ParseAccessorSpecifier(sourceCode);

            auto expected = SyntaxFactory::CreateAccessorSpecifier(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Private),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon));

            TestUtils::AreEqual(
                expected,
                actual,
                "Verify matches expected.");
        }

        [[Fact]]
        void SimpleProtected()
        {
            auto sourceCode = std::string("protected:");
            auto actual = ParseAccessorSpecifier(sourceCode);

            auto expected = SyntaxFactory::CreateAccessorSpecifier(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Protected),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon));

            TestUtils::AreEqual(
                expected,
                actual,
                "Verify matches expected.");
        }

    private:
        std::shared_ptr<const Declaration> ParseAccessorSpecifier(const std::string& sourceCode)
        {
            auto uut = TestUtils::BuildParser(sourceCode);
            auto context = uut.Parser->memberSpecification();

            // Convert the the abstract syntax tree
            auto nodes = uut.Visitor->visit(context)
                .as<std::vector<std::shared_ptr<const Declaration>>>();

            Assert::IsTrue(nodes.size() == 1, "Verify exactly one node.");

            return nodes.at(0);
        }
    };
}
