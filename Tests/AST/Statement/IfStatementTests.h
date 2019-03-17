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
                SyntaxFactory::CreateToken(SyntaxTokenType::If, L"if"),
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"value")),
                SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")"),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                nullptr);

            Assert::AreEqual(
                SyntaxNodeType::IfStatement,
                uut->GetType(),
                L"Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::If, L"if"),
                uut->GetIfToken(),
                L"Verify if token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                uut->GetLeftParenthesisToken(),
                L"Verify left parenthesis token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"value")),
                uut->GetConditionExpression(),
                L"Verify condition expression matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")"),
                uut->GetRightParenthesisToken(),
                L"Verify right parenthesis token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateEmptyStatement(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
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
                SyntaxFactory::CreateToken(SyntaxTokenType::If, L"if"),
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"value")),
                SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")"),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                SyntaxFactory::CreateElseClause(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Else, L"else"),
                    SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"))));

            Assert::AreEqual(
                SyntaxNodeType::IfStatement,
                uut->GetType(),
                L"Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::If, L"if"),
                uut->GetIfToken(),
                L"Verify if token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                uut->GetLeftParenthesisToken(),
                L"Verify left parenthesis token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"value")),
                uut->GetConditionExpression(),
                L"Verify condition expression matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")"),
                uut->GetRightParenthesisToken(),
                L"Verify right parenthesis token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateEmptyStatement(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                uut->GetStatement(),
                L"Verify statement matches.");
            Assert::IsTrue(
                uut->HasElseClause(),
                L"Verify has else clause.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateElseClause(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Else, L"else"),
                    SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"))),
                uut->GetElseClause(),
                L"Verify else clause matches.");
        }

        // [[Fact]]
        void GetChildrenNoElseClause()
        {
            auto uut = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateToken(SyntaxTokenType::If, L"if"),
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"value")),
                SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")"),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                nullptr);

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(SyntaxFactory::CreateToken(SyntaxTokenType::If, L"if")),
                    SyntaxNodeChild(SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"(")),
                    SyntaxNodeChild(SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"value"))),
                    SyntaxNodeChild(SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")")),
                    SyntaxNodeChild(SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"))),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void GetChildrenWithElseClause()
        {
            auto uut = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateToken(SyntaxTokenType::If, L"if"),
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"value")),
                SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")"),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                SyntaxFactory::CreateElseClause(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Else, L"else"),
                    SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"))));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(SyntaxFactory::CreateToken(SyntaxTokenType::If, L"if")),
                    SyntaxNodeChild(SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"(")),
                    SyntaxNodeChild(SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"value"))),
                    SyntaxNodeChild(SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")")),
                    SyntaxNodeChild(SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"))),
                    SyntaxNodeChild(SyntaxFactory::CreateElseClause(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Else, L"else"),
                        SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")))),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void OperatorEqualNoElseClause()
        {
            auto uut = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateToken(SyntaxTokenType::If, L"if"),
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"value")),
                SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")"),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                nullptr);

            TestUtils::AreEqual(
                SyntaxFactory::CreateIfStatement(
                    SyntaxFactory::CreateToken(SyntaxTokenType::If, L"if"),
                    SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"value")),
                    SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")"),
                    SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                    nullptr),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorEqualWithElseClause()
        {
            auto uut = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateToken(SyntaxTokenType::If, L"if"),
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"value")),
                SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")"),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                SyntaxFactory::CreateElseClause(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Else, L"else"),
                    SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"))));

            TestUtils::AreEqual(
                SyntaxFactory::CreateIfStatement(
                    SyntaxFactory::CreateToken(SyntaxTokenType::If, L"if"),
                    SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"value")),
                    SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")"),
                    SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                    SyntaxFactory::CreateElseClause(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Else, L"else"),
                        SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")))),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualIfToken()
        {
            auto uut = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateToken(SyntaxTokenType::If, L"if"),
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"value")),
                SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")"),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateIfStatement(
                    SyntaxFactory::CreateToken(
                        SyntaxTokenType::If,
                        L"if",
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 1)),
                        },
                        {
                        }),
                    SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"value")),
                    SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")"),
                    SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                    nullptr),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualLeftParenthesisToken()
        {
            auto uut = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateToken(SyntaxTokenType::If, L"if"),
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"value")),
                SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")"),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateIfStatement(
                    SyntaxFactory::CreateToken(SyntaxTokenType::If, L"if"),
                    SyntaxFactory::CreateToken(
                        SyntaxTokenType::LeftParenthesis,
                        L"(",
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 1)),
                        },
                        {
                        }),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"value")),
                    SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")"),
                    SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                    nullptr),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualConditionExpression()
        {
            auto uut = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateToken(SyntaxTokenType::If, L"if"),
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"value")),
                SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")"),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateIfStatement(
                    SyntaxFactory::CreateToken(SyntaxTokenType::If, L"if"),
                    SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"value2")),
                    SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")"),
                    SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                    nullptr),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualRightParenthesisToken()
        {
            auto uut = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateToken(SyntaxTokenType::If, L"if"),
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"value")),
                SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")"),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateIfStatement(
                    SyntaxFactory::CreateToken(SyntaxTokenType::If, L"if"),
                    SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"value")),
                    SyntaxFactory::CreateToken(
                        SyntaxTokenType::RightParenthesis,
                        L")",
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 1)),
                        },
                        {
                        }),
                    SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                    nullptr),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualStatement()
        {
            auto uut = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateToken(SyntaxTokenType::If, L"if"),
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"value")),
                SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")"),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateIfStatement(
                    SyntaxFactory::CreateToken(SyntaxTokenType::If, L"if"),
                    SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"value")),
                    SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")"),
                    SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateToken(
                                SyntaxTokenType::Semicolon,
                                L";",
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
                SyntaxFactory::CreateToken(SyntaxTokenType::If, L"if"),
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"value")),
                SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")"),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateIfStatement(
                    SyntaxFactory::CreateToken(SyntaxTokenType::If, L"if"),
                    SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"value")),
                    SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")"),
                    SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                    SyntaxFactory::CreateElseClause(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Else, L"else"),
                        SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")))),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualWithElseClause()
        {
            auto uut = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateToken(SyntaxTokenType::If, L"if"),
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"value")),
                SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")"),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                SyntaxFactory::CreateElseClause(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Else, L"else"),
                    SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"))));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateIfStatement(
                    SyntaxFactory::CreateToken(SyntaxTokenType::If, L"if"),
                    SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"value")),
                    SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")"),
                    SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
                    SyntaxFactory::CreateElseClause(
                        SyntaxFactory::CreateToken(
                            SyntaxTokenType::Else,
                            L"else",
                            {
                                SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 1)),
                            },
                            {
                            }),
                        SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")))),
                uut,
                L"Verify do not match.");
        }
    };
}
