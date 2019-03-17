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
                SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                SyntaxFactory::CreateToken(SyntaxTokenType::Delete, L"delete"),
                SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"));

            Assert::AreEqual(
                SyntaxNodeType::DeleteFunctionBody,
                uut->GetType(),
                L"Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                uut->GetEqualToken(),
                L"Verify equal token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::Delete, L"delete"),
                uut->GetDeleteToken(),
                L"Verify delete token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"),
                uut->GetSemicolonToken(),
                L"Verify semicolon token matches.");
        }

        // [[Fact]]
        void GetChildren()
        {
            auto uut = SyntaxFactory::CreateDeleteFunctionBody(
                SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                SyntaxFactory::CreateToken(SyntaxTokenType::Delete, L"delete"),
                SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"=")),
                    SyntaxNodeChild(SyntaxFactory::CreateToken(SyntaxTokenType::Delete, L"delete")),
                    SyntaxNodeChild(SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateDeleteFunctionBody(
                SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                SyntaxFactory::CreateToken(SyntaxTokenType::Delete, L"delete"),
                SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"));

            TestUtils::AreEqual(
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Delete, L"delete"),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualEqualToken()
        {
            auto uut = SyntaxFactory::CreateDeleteFunctionBody(
                SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                SyntaxFactory::CreateToken(SyntaxTokenType::Delete, L"delete"),
                SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateToken(
                        SyntaxTokenType::Equal,
                        L"=",
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 1)),
                        },
                        {
                        }),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Delete, L"delete"),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualDeleteToken()
        {
            auto uut = SyntaxFactory::CreateDeleteFunctionBody(
                SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                SyntaxFactory::CreateToken(SyntaxTokenType::Delete, L"delete"),
                SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                    SyntaxFactory::CreateToken(
                        SyntaxTokenType::Delete,
                        L"delete",
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 1)),
                        },
                        {
                        }),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualSemicolonToken()
        {
            auto uut = SyntaxFactory::CreateDeleteFunctionBody(
                SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                SyntaxFactory::CreateToken(SyntaxTokenType::Delete, L"delete"),
                SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Delete, L"delete"),
                    SyntaxFactory::CreateToken(
                        SyntaxTokenType::Semicolon,
                        L";",
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
