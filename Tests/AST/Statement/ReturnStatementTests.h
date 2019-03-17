#pragma once
#include "TestUtils.h"
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class ReturnStatementTests
    {
    public:
        // [[Fact]]
        void InitializeNoExpression()
        {
            auto uut = SyntaxFactory::CreateReturnStatement(
                SyntaxFactory::CreateToken(SyntaxTokenType::Return, L"return"),
                nullptr,
                SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"));

            Assert::AreEqual(
                SyntaxNodeType::ReturnStatement,
                uut->GetType(),
                L"Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::Return, L"return"),
                uut->GetReturnToken(),
                L"Verify return token matches.");
            Assert::IsFalse(
                uut->HasExpression(),
                L"Verify has no expression.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"),
                uut->GetSemicolonToken(),
                L"Verify semicolon token matches.");
        }

        // [[Fact]]
        void InitializeWithExpression()
        {
            auto uut = SyntaxFactory::CreateReturnStatement(
                SyntaxFactory::CreateToken(SyntaxTokenType::Return, L"return"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"value")),
                SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"));

            Assert::AreEqual(
                SyntaxNodeType::ReturnStatement,
                uut->GetType(),
                L"Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::Return, L"return"),
                uut->GetReturnToken(),
                L"Verify return token matches.");
            Assert::IsTrue(
                uut->HasExpression(),
                L"Verify has expression.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"value")),
                uut->GetExpression(),
                L"Verify expression matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"),
                uut->GetSemicolonToken(),
                L"Verify semicolon token matches.");
        }

        // [[Fact]]
        void GetChildrenNoExpression()
        {
            auto uut = SyntaxFactory::CreateReturnStatement(
                SyntaxFactory::CreateToken(SyntaxTokenType::Return, L"return"),
                nullptr,
                SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(SyntaxFactory::CreateToken(SyntaxTokenType::Return, L"return")),
                    SyntaxNodeChild(SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void GetChildrenWithExpression()
        {
            auto uut = SyntaxFactory::CreateReturnStatement(
                SyntaxFactory::CreateToken(SyntaxTokenType::Return, L"return"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"value")),
                SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(SyntaxFactory::CreateToken(SyntaxTokenType::Return, L"return")),
                    SyntaxNodeChild(SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"value"))),
                    SyntaxNodeChild(SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void OperatorEqualNoExpression()
        {
            auto uut = SyntaxFactory::CreateReturnStatement(
                SyntaxFactory::CreateToken(SyntaxTokenType::Return, L"return"),
                nullptr,
                SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"));

            TestUtils::AreEqual(
                SyntaxFactory::CreateReturnStatement(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Return, L"return"),
                    nullptr,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorEqualWithExpression()
        {
            auto uut = SyntaxFactory::CreateReturnStatement(
                SyntaxFactory::CreateToken(SyntaxTokenType::Return, L"return"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"value")),
                SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"));

            TestUtils::AreEqual(
                SyntaxFactory::CreateReturnStatement(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Return, L"return"),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"value")),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualReturnToken()
        {
            auto uut = SyntaxFactory::CreateReturnStatement(
                SyntaxFactory::CreateToken(SyntaxTokenType::Return, L"return"),
                nullptr,
                SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateReturnStatement(
                    SyntaxFactory::CreateToken(
                        SyntaxTokenType::Return,
                        L"return",
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 1)),
                        },
                        {
                        }),
                    nullptr,
                    SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualNoExpression()
        {
            auto uut = SyntaxFactory::CreateReturnStatement(
                SyntaxFactory::CreateToken(SyntaxTokenType::Return, L"return"),
                nullptr,
                SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateReturnStatement(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Return, L"return"),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"value")),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualWithExpression()
        {
            auto uut = SyntaxFactory::CreateReturnStatement(
                SyntaxFactory::CreateToken(SyntaxTokenType::Return, L"return"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"value")),
                SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateReturnStatement(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Return, L"return"),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"value2")),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualSemicolonToken()
        {
            auto uut = SyntaxFactory::CreateReturnStatement(
                SyntaxFactory::CreateToken(SyntaxTokenType::Return, L"return"),
                nullptr,
                SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateReturnStatement(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Return, L"return"),
                    nullptr,
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
