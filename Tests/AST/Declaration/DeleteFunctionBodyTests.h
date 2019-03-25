#pragma once
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class DeleteFunctionBodyTests
    {
    public:
        // [[Fact]]
        void InitializeSimple()
        {
            auto uut = SyntaxFactory::CreateDeleteFunctionBody(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            Assert::AreEqual(
                SyntaxNodeType::DeleteFunctionBody,
                uut->GetType(),
                L"Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                uut->GetEqualToken(),
                L"Verify equal token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                uut->GetDeleteToken(),
                L"Verify delete token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon),
                uut->GetSemicolonToken(),
                L"Verify semicolon token matches.");
        }

        // [[Fact]]
        void GetChildren()
        {
            auto uut = SyntaxFactory::CreateDeleteFunctionBody(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal)),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete)),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateDeleteFunctionBody(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualEqualToken()
        {
            auto uut = SyntaxFactory::CreateDeleteFunctionBody(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Equal,
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 1)),
                        },
                        {
                        }),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualDeleteToken()
        {
            auto uut = SyntaxFactory::CreateDeleteFunctionBody(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Delete,
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 1)),
                        },
                        {
                        }),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualSemicolonToken()
        {
            auto uut = SyntaxFactory::CreateDeleteFunctionBody(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Semicolon,
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 1)),
                        },
                        {
                        })),
                uut,
                L"Verify do not match.");
        }
    };
}
