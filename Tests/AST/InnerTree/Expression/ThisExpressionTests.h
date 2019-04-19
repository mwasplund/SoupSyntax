#pragma once
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class InnerTreeThisExpressionTests
    {
    public:
        [[Fact]]
        void InitializeSimple()
        {
            auto uut = SyntaxFactory::CreateThisExpression(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::This));

            Assert::AreEqual(
                SyntaxNodeType::ThisExpression,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(SyntaxNodeType::ThisExpression, uut->GetType(), "Verify type matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::This),
                uut->GetToken(),
                "Verify token matches.");
        }

        [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateThisExpression(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::This));

            TestUtils::AreEqual(
                SyntaxFactory::CreateThisExpression(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::This)),
                uut,
                "Verify matches.");
        }

        [[Fact]]
        void OperatorNotEqualToken()
        {
            auto uut = SyntaxFactory::CreateThisExpression(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::This));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateThisExpression(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::This,
                        {
                            SyntaxFactory::CreateTrivia(" ")
                        },
                        {})),
                uut,
                "Verify do not match.");
        }
    };
}
