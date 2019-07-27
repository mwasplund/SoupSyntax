#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class OuterTreeEmptyDeclarationTests
    {
    public:
        [[Fact]]
        void InitializeSimple()
        {
            auto uut = SyntaxFactory::CreateEmptyDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::EmptyDeclaration,
                uut->GetType(),
                "Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon),
                uut->GetSemicolonToken(),
                "Verify semicolon token matches.");
        }

        [[Fact]]
        void GetChildren()
        {
            auto uut = SyntaxFactory::CreateEmptyDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>({
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateEmptyDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))->CreateOuter(nullptr);

            TestUtils::AreEqual(
                SyntaxFactory::CreateEmptyDeclaration(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                uut,
                "Verify matches.");
        }

        [[Fact]]
        void OperatorNotEqualSemicolonToken()
        {
            auto uut = SyntaxFactory::CreateEmptyDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateEmptyDeclaration(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Semicolon,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {
                        })),
                uut,
                "Verify do not match.");
        }
    };
}
