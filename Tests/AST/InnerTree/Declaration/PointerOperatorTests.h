#pragma once
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class InnerTreePointerOperatorTests
    {
    public:
        [[Fact]]
        void Initialize()
        {
            auto uut = SyntaxFactory::CreatePointerOperator(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand));

            Assert::AreEqual(
                SyntaxNodeType::PointerOperator,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand),
                uut->GetOperatorToken(),
                "Verify operator token matches.");
        }

        [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreatePointerOperator(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand));

            TestUtils::AreEqual(
                SyntaxFactory::CreatePointerOperator(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand)),
                uut,
                "Verify matches.");
        }

        [[Fact]]
        void OperatorNotEqualOperatorToken()
        {
            auto uut = SyntaxFactory::CreatePointerOperator(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreatePointerOperator(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Asterisk)),
                uut,
                "Verify do not match.");
        }
    };
}
