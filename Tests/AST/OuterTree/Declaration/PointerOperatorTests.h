#pragma once

namespace Soup::Syntax::InnerTree::UnitTests
{
    class OuterTreePointerOperatorTests
    {
    public:
        [[Fact]]
        void Initialize()
        {
            auto uut = SyntaxFactory::CreatePointerOperator(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand))->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::PointerOperator,
                uut->GetType(),
                "Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand),
                uut->GetOperatorToken(),
                "Verify operator token matches.");
        }

        [[Fact]]
        void GetChildren()
        {
            auto uut = SyntaxFactory::CreatePointerOperator(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand))->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>({
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand)),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreatePointerOperator(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand))->CreateOuter(nullptr);

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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreatePointerOperator(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Asterisk)),
                uut,
                "Verify do not match.");
        }
    };
}
