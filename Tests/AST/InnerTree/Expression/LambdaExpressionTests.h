#pragma once
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class InnerTreeLambdaExpressionTests
    {
    public:
        [[Fact]]
        void InitializeSimple()
        {
            // []{}
            auto uut = SyntaxFactory::CreateLambdaExpression(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                nullptr,
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxList<Statement>({}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)));

            Assert::AreEqual(
                SyntaxNodeType::LambdaExpression,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                uut->GetOpenBracketToken(),
                "Verify open bracket token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateSyntaxSeparatorList<LambdaCaptureClause>({}, {}),
                uut->GetCaptureList(),
                "Verify capture list matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                uut->GetCloseBracketToken(),
                "Verify close bracket token matches.");
            Assert::IsFalse(
                uut->HasParameterList(),
                "Verify has no parameter list.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxList<Statement>({}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut->GetBody(),
                "Verify body matches.");
        }

        [[Fact]]
        void InitializeComplex()
        {
            // [&value](){}
            auto uut = SyntaxFactory::CreateLambdaExpression(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateSyntaxSeparatorList<LambdaCaptureClause>(
                    {
                        SyntaxFactory::CreateLambdaCaptureClause(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand),
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))
                    },
                    {}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<Parameter>({}, {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxList<Statement>({}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)));

            Assert::AreEqual(
                SyntaxNodeType::LambdaExpression,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                uut->GetOpenBracketToken(),
                "Verify open bracket token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateSyntaxSeparatorList<LambdaCaptureClause>(
                    {
                        SyntaxFactory::CreateLambdaCaptureClause(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand),
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))
                    },
                    {}),
                uut->GetCaptureList(),
                "Verify capture list matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                uut->GetCloseBracketToken(),
                "Verify close bracket token matches.");
            Assert::IsTrue(
                uut->HasParameterList(),
                "Verify has no parameter list.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<Parameter>({}, {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                uut->GetParameterList(),
                "Verify parameter list matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxList<Statement>({}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut->GetBody(),
                "Verify body matches.");
        }

        [[Fact]]
        void OperatorEqualSimple()
        {
            // []{}
            auto uut = SyntaxFactory::CreateLambdaExpression(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                nullptr,
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxList<Statement>({}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)));

            TestUtils::AreEqual(
                SyntaxFactory::CreateLambdaExpression(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                    nullptr,
                    SyntaxFactory::CreateCompoundStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                        SyntaxFactory::CreateSyntaxList<Statement>({}),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))),
                uut,
                "Verify matches.");
        }

        [[Fact]]
        void OperatorEqualComplex()
        {
            // [&value](){}
            auto uut = SyntaxFactory::CreateLambdaExpression(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateSyntaxSeparatorList<LambdaCaptureClause>(
                    {
                        SyntaxFactory::CreateLambdaCaptureClause(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand),
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))
                    },
                    {}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<Parameter>({}, {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxList<Statement>({}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)));

            TestUtils::AreEqual(
                SyntaxFactory::CreateLambdaExpression(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                    SyntaxFactory::CreateSyntaxSeparatorList<LambdaCaptureClause>(
                        {
                            SyntaxFactory::CreateLambdaCaptureClause(
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand),
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                    SyntaxFactory::CreateParameterList(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                        SyntaxFactory::CreateSyntaxSeparatorList<Parameter>({}, {}),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                    SyntaxFactory::CreateCompoundStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                        SyntaxFactory::CreateSyntaxList<Statement>({}),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))),
                uut,
                "Verify matches.");
        }

        [[Fact]]
        void OperatorNotEqualOpenBracketToken()
        {
            // [](){}
            auto uut = SyntaxFactory::CreateLambdaExpression(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<Parameter>({}, {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxList<Statement>({}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateLambdaExpression(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::OpenBracket,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                    SyntaxFactory::CreateParameterList(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                        SyntaxFactory::CreateSyntaxSeparatorList<Parameter>({}, {}),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                    SyntaxFactory::CreateCompoundStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                        SyntaxFactory::CreateSyntaxList<Statement>({}),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))),
                uut,
                "Verify does not match.");
        }

        [[Fact]]
        void OperatorNotEqualCaptureList()
        {
            // [&value](){}
            auto uut = SyntaxFactory::CreateLambdaExpression(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateSyntaxSeparatorList<LambdaCaptureClause>(
                    {
                        SyntaxFactory::CreateLambdaCaptureClause(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand),
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))
                    },
                    {}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<Parameter>({}, {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxList<Statement>({}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateLambdaExpression(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::OpenBracket,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                    SyntaxFactory::CreateParameterList(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                        SyntaxFactory::CreateSyntaxSeparatorList<Parameter>({}, {}),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                    SyntaxFactory::CreateCompoundStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                        SyntaxFactory::CreateSyntaxList<Statement>({}),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))),
                uut,
                "Verify does not match.");
        }

        [[Fact]]
        void OperatorNotEqualCloseBracketToken()
        {
            // [](){}
            auto uut = SyntaxFactory::CreateLambdaExpression(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<Parameter>({}, {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxList<Statement>({}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateLambdaExpression(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::CloseBracket,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {}),
                    SyntaxFactory::CreateParameterList(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                        SyntaxFactory::CreateSyntaxSeparatorList<Parameter>({}, {}),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                    SyntaxFactory::CreateCompoundStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                        SyntaxFactory::CreateSyntaxList<Statement>({}),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))),
                uut,
                "Verify does not match.");
        }

        [[Fact]]
        void OperatorNotEqualNoParameterList()
        {
            // [](){}
            auto uut = SyntaxFactory::CreateLambdaExpression(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<Parameter>({}, {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxList<Statement>({}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateLambdaExpression(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                    nullptr,
                    SyntaxFactory::CreateCompoundStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                        SyntaxFactory::CreateSyntaxList<Statement>({}),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))),
                uut,
                "Verify does not match.");
        }

        [[Fact]]
        void OperatorNotEqualParameterList()
        {
            // [](){}
            auto uut = SyntaxFactory::CreateLambdaExpression(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<Parameter>({}, {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxList<Statement>({}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateLambdaExpression(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                    SyntaxFactory::CreateParameterList(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                        SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
                            {
                                SyntaxFactory::CreateParameter(
                                    SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                                        PrimitiveDataType::Int,
                                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                                    SyntaxFactory::CreateSimpleIdentifier(
                                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "parameter"))),
                            }, {}),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                    SyntaxFactory::CreateCompoundStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                        SyntaxFactory::CreateSyntaxList<Statement>({}),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))),
                uut,
                "Verify does not match.");
        }

        [[Fact]]
        void OperatorNotEqualBody()
        {
            // [](){}
            auto uut = SyntaxFactory::CreateLambdaExpression(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<Parameter>({}, {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxList<Statement>({}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateLambdaExpression(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                    SyntaxFactory::CreateParameterList(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                        SyntaxFactory::CreateSyntaxSeparatorList<Parameter>({}, {}),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                    SyntaxFactory::CreateCompoundStatement(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                        SyntaxFactory::CreateSyntaxList<Statement>(
                            {
                                SyntaxFactory::CreateEmptyStatement(
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                            }),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))),
                uut,
                "Verify does not match.");
        }
    };
}
