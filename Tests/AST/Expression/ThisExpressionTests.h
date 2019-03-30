#pragma once
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class ThisExpressionTests
    {
    public:
        // [[Fact]]
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

        // [[Fact]]
        void GetChildren()
        {
            auto uut = SyntaxFactory::CreateThisExpression(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::This));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::This)),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
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

        // [[Fact]]
        void OperatorNotEqualToken()
        {
            auto uut = SyntaxFactory::CreateThisExpression(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::This));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateThisExpression(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::This,
                        {
                            SyntaxFactory::CreateTrivia(" ", TextSpan())
                        },
                        {})),
                uut,
                "Verify do not match.");
        }
    };
}
