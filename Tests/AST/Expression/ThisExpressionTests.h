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
                SyntaxFactory::CreateToken(SyntaxTokenType::This, L"this"));

            Assert::AreEqual(SyntaxNodeType::ThisExpression, uut->GetType(), L"Verify type matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::This, L"this"),
                uut->GetToken(),
                L"Verify token matches.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateThisExpression(
                SyntaxFactory::CreateToken(SyntaxTokenType::This, L"this"));

            TestUtils::AreEqual(
                SyntaxFactory::CreateThisExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::This, L"this")),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualToken()
        {
            auto uut = SyntaxFactory::CreateThisExpression(
                SyntaxFactory::CreateToken(SyntaxTokenType::This, L"this"));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateThisExpression(
                    SyntaxFactory::CreateToken(
                        SyntaxTokenType::This,
                        L"this",
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan())
                        },
                        {})),
                uut,
                L"Verify do not match.");
        }
    };
}
