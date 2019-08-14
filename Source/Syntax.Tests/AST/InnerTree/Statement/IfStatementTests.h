#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class InnerTreeIfStatementTests
    {
    public:
        [[Fact]]
        void InitializeNoElseClause()
        {
            // if(value);
            auto uut = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                nullptr);

            Assert::AreEqual(
                SyntaxNodeType::IfStatement,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                uut->GetIfToken(),
                "Verify if token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                uut->GetOpenParenthesisToken(),
                "Verify left parenthesis token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
                uut->GetConditionExpression(),
                "Verify condition expression matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
                uut->GetCloseParenthesisToken(),
                "Verify right parenthesis token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateEmptyStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                uut->GetStatement(),
                "Verify statement matches.");
            Assert::IsFalse(
                uut->HasElseClause(),
                "Verify has no else clause.");
        }

        [[Fact]]
        void InitializeWithElseClause()
        {
            // if(value);else;
            auto uut = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                SyntaxFactory::CreateElseClause(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Else),
                    SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))));

            Assert::AreEqual(
                SyntaxNodeType::IfStatement,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                uut->GetIfToken(),
                "Verify if token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                uut->GetOpenParenthesisToken(),
                "Verify left parenthesis token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
                uut->GetConditionExpression(),
                "Verify condition expression matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
                uut->GetCloseParenthesisToken(),
                "Verify right parenthesis token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateEmptyStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                uut->GetStatement(),
                "Verify statement matches.");
            Assert::IsTrue(
                uut->HasElseClause(),
                "Verify has else clause.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateElseClause(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Else),
                    SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
                uut->GetElseClause(),
                "Verify else clause matches.");
        }

        [[Fact]]
        void OperatorEqualNoElseClause()
        {
            // if(value);
            auto uut = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                nullptr);

            TestUtils::AreEqual(
                SyntaxFactory::CreateIfStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateIdentifierExpression(
                        SyntaxFactory::CreateSimpleIdentifier(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
                    SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    nullptr),
                uut,
                "Verify matches.");
        }

        [[Fact]]
        void OperatorEqualWithElseClause()
        {
            // if(value);else;
            auto uut = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                SyntaxFactory::CreateElseClause(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Else),
                    SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))));

            TestUtils::AreEqual(
                SyntaxFactory::CreateIfStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateIdentifierExpression(
                        SyntaxFactory::CreateSimpleIdentifier(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
                    SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    SyntaxFactory::CreateElseClause(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Else),
                        SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)))),
                uut,
                "Verify matches.");
        }

        [[Fact]]
        void OperatorNotEqualIfToken()
        {
            // if(value);
            auto uut = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateIfStatement(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::If,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {
                        }),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateIdentifierExpression(
                        SyntaxFactory::CreateSimpleIdentifier(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
                    SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    nullptr),
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void OperatorNotEqualOpenParenthesisToken()
        {
            // if(value);
            auto uut = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateIfStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::OpenParenthesis,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {
                        }),
                    SyntaxFactory::CreateIdentifierExpression(
                        SyntaxFactory::CreateSimpleIdentifier(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
                    SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    nullptr),
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void OperatorNotEqualConditionExpression()
        {
            // if(value);
            auto uut = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateIfStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateIdentifierExpression(
                        SyntaxFactory::CreateSimpleIdentifier(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value2"))),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
                    SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    nullptr),
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void OperatorNotEqualCloseParenthesisToken()
        {
            // if(value);
            auto uut = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateIfStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateIdentifierExpression(
                        SyntaxFactory::CreateSimpleIdentifier(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::CloseParenthesis,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {
                        }),
                    SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    nullptr),
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void OperatorNotEqualStatement()
        {
            // if(value);
            auto uut = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateIfStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateIdentifierExpression(
                        SyntaxFactory::CreateSimpleIdentifier(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
                    SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateKeywordToken(
                                SyntaxTokenType::Semicolon,
                                {
                                    SyntaxFactory::CreateTrivia(" "),
                                },
                                {
                                })),
                    nullptr),
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void OperatorNotEqualNoElseClause()
        {
            // if(value);
            auto uut = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateIfStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateIdentifierExpression(
                        SyntaxFactory::CreateSimpleIdentifier(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
                    SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    SyntaxFactory::CreateElseClause(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Else),
                        SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)))),
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void OperatorNotEqualWithElseClause()
        {
            // if(value);
            auto uut = SyntaxFactory::CreateIfStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
                SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                SyntaxFactory::CreateElseClause(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Else),
                    SyntaxFactory::CreateEmptyStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateIfStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateIdentifierExpression(
                        SyntaxFactory::CreateSimpleIdentifier(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
                    SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                    SyntaxFactory::CreateElseClause(
                        SyntaxFactory::CreateKeywordToken(
                            SyntaxTokenType::Else,
                            {
                                SyntaxFactory::CreateTrivia(" "),
                            },
                            {
                            }),
                        SyntaxFactory::CreateEmptyStatement(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)))),
                uut,
                "Verify do not match.");
        }
    };
}
