#pragma once
#include "TestUtils.h"
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class AccessorSpecifierTests
    {
    public:
        // [[Fact]]
        void Initialize()
        {
            auto uut = SyntaxFactory::CreateAccessorSpecifier(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Public),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon));

            Assert::AreEqual(
                SyntaxNodeType::AccessorSpecifier,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Public),
                uut->GetAccessorToken(),
                "Verify accessor token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon),
                uut->GetColonToken(),
                "Verify colon token matches.");
        }

        // [[Fact]]
        void GetChildren()
        {
            auto uut = SyntaxFactory::CreateAccessorSpecifier(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Public),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Public)),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon)),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateAccessorSpecifier(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Public),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon));

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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateAccessorSpecifier(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Public,
                        {
                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateAccessorSpecifier(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Public),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Colon,
                        {
                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                        },
                        {})),
                uut,
                "Verify do not match.");
        }
    };
}
