#pragma once
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class SyntaxTokenTests
    {
    public:
        // [[Fact]]
        void InitializeSimple()
        {
            auto uut = std::make_shared<SyntaxToken>(
                SyntaxTokenType::Nullptr,
                "nullptr");

            Assert::AreEqual(SyntaxTokenType::Nullptr, uut->GetType(), "Verify type matches.");
            Assert::AreEqual(std::string("nullptr"), uut->GetValue(), "Verify value matches.");
            Assert::IsTrue(uut->GetLeadingTrivia().empty(), "Verify no leading trivia.");
            Assert::IsTrue(uut->GetTrailingTrivia().empty(), "Verify no trailing trivia.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            auto uut = std::make_shared<SyntaxToken>(
                SyntaxTokenType::Nullptr,
                "nullptr");

            Assert::AreEqual(
                SyntaxToken(SyntaxTokenType::Nullptr, "nullptr"),
                *uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualType()
        {
            auto uut = std::make_shared<SyntaxToken>(
                SyntaxTokenType::Nullptr,
                "nullptr");

            Assert::AreNotEqual(
                SyntaxToken(SyntaxTokenType::Identifier, "nullptr"),
                *uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualValue()
        {
            auto uut = std::make_shared<SyntaxToken>(
                SyntaxTokenType::Nullptr,
                "nullptr");

            Assert::AreNotEqual(
                SyntaxToken(SyntaxTokenType::Nullptr, "null"),
                *uut,
                "Verify do not match.");
        }
    };
}
