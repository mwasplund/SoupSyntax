#pragma once

namespace Soup::Syntax::InnerTree::UnitTests
{
    class OuterTreeThisExpressionTests
    {
    public:
        [[Fact]]
        void InitializeSimple()
        {
            auto uut = SyntaxFactory::CreateThisExpression(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::This))->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::ThisExpression,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(SyntaxNodeType::ThisExpression, uut->GetType(), "Verify type matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::This),
                uut->GetToken(),
                "Verify token matches.");
        }

        [[Fact]]
        void GetChildren()
        {
            auto uut = SyntaxFactory::CreateThisExpression(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::This))->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>({
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::This)),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateThisExpression(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::This))->CreateOuter(nullptr);

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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::This))->CreateOuter(nullptr);

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
