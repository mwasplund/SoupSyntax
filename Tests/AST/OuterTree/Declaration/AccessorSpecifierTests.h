#pragma once
#include "TestUtils.h"
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class OuterTreeAccessorSpecifierTests
    {
    public:
        // [[Fact]]
        void Initialize()
        {
            auto uut = SyntaxFactory::CreateAccessorSpecifier(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Public),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon))->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::AccessorSpecifier,
                uut->GetType(),
                "Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Public),
                uut->GetAccessorToken(),
                "Verify accessor token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon),
                uut->GetColonToken(),
                "Verify colon token matches.");
        }

        // [[Fact]]
        void GetChildren()
        {
            auto uut = SyntaxFactory::CreateAccessorSpecifier(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Public),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon))->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>(
                {
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Public)),
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon)),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateAccessorSpecifier(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Public),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon))->CreateOuter(nullptr);

            TestUtils::AreEqual(
                SyntaxFactory::CreateAccessorSpecifier(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Public),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon)),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualAccessorToken()
        {
            auto uut = SyntaxFactory::CreateAccessorSpecifier(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Public),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateAccessorSpecifier(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Public,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon)),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualColonToken()
        {
            auto uut = SyntaxFactory::CreateAccessorSpecifier(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Public),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateAccessorSpecifier(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Public),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Colon,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {})),
                uut,
                "Verify do not match.");
        }
    };
}
