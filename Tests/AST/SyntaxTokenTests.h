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
            auto uut = SyntaxFactory::CreateToken(
                SyntaxTokenType::Nullptr,
                L"nullptr");

            Assert::AreEqual(SyntaxTokenType::Nullptr, uut->GetType(), L"Verify type matches.");
            Assert::AreEqual(std::wstring(L"nullptr"), uut->GetValue(), L"Verify value matches.");
            Assert::IsTrue(uut->GetLeadingTrivia().empty(), L"Verify no leading trivia.");
            Assert::IsTrue(uut->GetTrailingTrivia().empty(), L"Verify no trailing trivia.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateToken(
                SyntaxTokenType::Nullptr,
                L"nullptr");

            Assert::AreEqual(
                SyntaxFactory::CreateToken(SyntaxTokenType::Nullptr, L"nullptr"),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualType()
        {
            auto uut = SyntaxFactory::CreateToken(
                SyntaxTokenType::Nullptr,
                L"nullptr");

            Assert::AreNotEqual(
                SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"nullptr"),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualValue()
        {
            auto uut = SyntaxFactory::CreateToken(
                SyntaxTokenType::Nullptr,
                L"nullptr");

            Assert::AreNotEqual(
                SyntaxFactory::CreateToken(SyntaxTokenType::Nullptr, L"null"),
                uut,
                L"Verify do not match.");
        }
    };
}
