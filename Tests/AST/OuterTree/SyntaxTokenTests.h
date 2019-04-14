#pragma once
#include "SoupAssert.h"

namespace Soup::Syntax::OuterTree::UnitTests
{
    class SyntaxTokenTests
    {
    public:
        [[Fact]]
        void InitializeSimple()
        {
            auto uut = SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Nullptr);

            Assert::AreEqual(SyntaxTokenType::Nullptr, uut->GetType(), "Verify type matches.");
            Assert::AreEqual(std::string("nullptr"), uut->GetValue(), "Verify value matches.");
            Assert::IsTrue(uut->GetLeadingTrivia().empty(), "Verify no leading trivia.");
            Assert::IsTrue(uut->GetTrailingTrivia().empty(), "Verify no trailing trivia.");
        }

        [ [Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Nullptr);

            Assert::AreEqual(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Nullptr),
                uut,
                "Verify matches.");
        }

        [[Fact]]
        void OperatorNotEqualType()
        {
            auto uut = SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Nullptr);

            Assert::AreNotEqual(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "nullptr"),
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void OperatorNotEqualValue()
        {
            auto uut = SyntaxFactory::CreateUniqueToken(
                SyntaxTokenType::Identifier,
                "a");

            Assert::AreNotEqual(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"),
                uut,
                "Verify do not match.");
        }
    };
}
