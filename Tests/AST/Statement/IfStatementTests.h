#pragma once
#include "TestUtils.h"
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class IfStatementTests
    {
    public:
        // [[Fact]]
        void InitializeNoElseClause()
        {
            auto uut = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"value")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                nullptr);

            Assert::AreEqual(
                SyntaxNodeType::IfStatement,
                uut->GetType(),
                L"Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                uut->GetIfToken(),
                L"Verify if token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                uut->GetLeftParenthesisToken(),
                L"Verify left parenthesis token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"value")),
                uut->GetConditionExpression(),
                L"Verify condition expression matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis),
                uut->GetRightParenthesisToken(),
                L"Verify right parenthesis token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateEmptyStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                uut->GetStatement(),
                L"Verify statement matches.");
            Assert::IsFalse(
                uut->HasElseClause(),
                L"Verify has no else clause.");
        }

        // [[Fact]]
        void InitializeWithElseClause()
        {
            auto uut = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"value")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                SyntaxFactory::CreateElseClause(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Else),
                    SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))));

            Assert::AreEqual(
                SyntaxNodeType::IfStatement,
                uut->GetType(),
                L"Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                uut->GetIfToken(),
                L"Verify if token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                uut->GetLeftParenthesisToken(),
                L"Verify left parenthesis token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"value")),
                uut->GetConditionExpression(),
                L"Verify condition expression matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis),
                uut->GetRightParenthesisToken(),
                L"Verify right parenthesis token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateEmptyStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                uut->GetStatement(),
                L"Verify statement matches.");
            Assert::IsTrue(
                uut->HasElseClause(),
                L"Verify has else clause.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateElseClause(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Else),
                    SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
                uut->GetElseClause(),
                L"Verify else clause matches.");
        }

        // [[Fact]]
        void GetChildrenNoElseClause()
        {
            auto uut = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"value")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                nullptr);

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If)),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis)),
                    SyntaxNodeChild(SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"value"))),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis)),
                    SyntaxNodeChild(SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void GetChildrenWithElseClause()
        {
            auto uut = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"value")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                SyntaxFactory::CreateElseClause(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Else),
                    SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If)),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis)),
                    SyntaxNodeChild(SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"value"))),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis)),
                    SyntaxNodeChild(SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
                    SyntaxNodeChild(SyntaxFactory::CreateElseClause(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Else),
                        SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)))),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void OperatorEqualNoElseClause()
        {
            auto uut = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"value")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                nullptr);

            TestUtils::AreEqual(
                SyntaxFactory::CreateIfStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"value")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis),
                    SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    nullptr),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorEqualWithElseClause()
        {
            auto uut = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"value")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                SyntaxFactory::CreateElseClause(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Else),
                    SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))));

            TestUtils::AreEqual(
                SyntaxFactory::CreateIfStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"value")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis),
                    SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    SyntaxFactory::CreateElseClause(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Else),
                        SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)))),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualIfToken()
        {
            auto uut = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"value")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateIfStatement(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::If,
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 1)),
                        },
                        {
                        }),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"value")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis),
                    SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    nullptr),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualLeftParenthesisToken()
        {
            auto uut = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"value")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateIfStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::LeftParenthesis,
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 1)),
                        },
                        {
                        }),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"value")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis),
                    SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    nullptr),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualConditionExpression()
        {
            auto uut = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"value")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateIfStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"value2")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis),
                    SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    nullptr),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualRightParenthesisToken()
        {
            auto uut = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"value")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateIfStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"value")),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::RightParenthesis,
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 1)),
                        },
                        {
                        }),
                    SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    nullptr),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualStatement()
        {
            auto uut = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"value")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateIfStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"value")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis),
                    SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateKeywordToken(
                                SyntaxTokenType::Semicolon,
                                {
                                    SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 1)),
                                },
                                {
                                })),
                    nullptr),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualNoElseClause()
        {
            auto uut = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"value")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateIfStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"value")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis),
                    SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    SyntaxFactory::CreateElseClause(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Else),
                        SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)))),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualWithElseClause()
        {
            auto uut = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"value")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                SyntaxFactory::CreateElseClause(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Else),
                    SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateIfStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"value")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis),
                    SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    SyntaxFactory::CreateElseClause(
                        SyntaxFactory::CreateKeywordToken(
                            SyntaxTokenType::Else,
                            {
                                SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 1)),
                            },
                            {
                            }),
                        SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)))),
                uut,
                L"Verify do not match.");
        }
    };
}
