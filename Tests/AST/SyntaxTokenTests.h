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
            auto uut = SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Nullptr);

            Assert::AreEqual(SyntaxTokenType::Nullptr, uut->GetType(), L"Verify type matches.");
            Assert::AreEqual(std::wstring(L"nullptr"), uut->GetValue(), L"Verify value matches.");
            Assert::IsTrue(uut->GetLeadingTrivia().empty(), L"Verify no leading trivia.");
            Assert::IsTrue(uut->GetTrailingTrivia().empty(), L"Verify no trailing trivia.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Nullptr);

            Assert::AreEqual(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Nullptr),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualType()
        {
            auto uut = SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Nullptr);

            Assert::AreNotEqual(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"nullptr"),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualValue()
        {
            auto uut = SyntaxFactory::CreateUniqueToken(
                SyntaxTokenType::Identifier,
                L"a");

            Assert::AreNotEqual(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b"),
                uut,
                L"Verify do not match.");
        }
    };
}
