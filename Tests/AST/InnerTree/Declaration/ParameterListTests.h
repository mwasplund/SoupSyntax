#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class InnerTreeParameterListTests
    {
    public:
        [[Fact]]
        void InitializeSimple()
        {
            // (int parameter)
            auto uut = SyntaxFactory::CreateParameterList(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
                    {
                        SyntaxFactory::CreateParameter(
                            SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                            SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                    },
                    {}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis));

            Assert::AreEqual(
                SyntaxNodeType::ParameterList,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                uut->GetOpenParenthesisToken(),
                "Verify left parenthesis token matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
                    {
                        SyntaxFactory::CreateParameter(
                            SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                            SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                    },
                    {}),
                uut->GetParameters(),
                "Verify parameters match.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
                uut->GetCloseParenthesisToken(),
                "Verify right parenthesis token matches.");
        }

        [[Fact]]
        void OperatorEqual()
        {
            // (int parameter)
            auto uut = SyntaxFactory::CreateParameterList(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
                    {
                        SyntaxFactory::CreateParameter(
                            SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                            SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                    },
                    {}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis));

            TestUtils::AreEqual(
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
                        {
                            SyntaxFactory::CreateParameter(
                                SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                                SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                uut,
                "Verify matches.");
        }

        [[Fact]]
        void OperatorNotEqualOpenParenthesisToken()
        {
            // (int parameter)
            auto uut = SyntaxFactory::CreateParameterList(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
                    {
                        SyntaxFactory::CreateParameter(
                            SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                            SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                    },
                    {}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::OpenParenthesis,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {}),
                    SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
                        {
                            SyntaxFactory::CreateParameter(
                                SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                                SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                uut,
                "Verify does not match.");
        }

        [[Fact]]
        void OperatorNotEqualParameters()
        {
            // (int parameter)
            auto uut = SyntaxFactory::CreateParameterList(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
                    {
                        SyntaxFactory::CreateParameter(
                            SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                            SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                    },
                    {}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<Parameter>({}, {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                uut,
                "Verify does not match.");
        }

        [[Fact]]
        void OperatorNotEqualCloseParenthesisToken()
        {
            // (int parameter)
            auto uut = SyntaxFactory::CreateParameterList(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
                    {
                        SyntaxFactory::CreateParameter(
                            SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                            SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                    },
                    {}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
                        {
                            SyntaxFactory::CreateParameter(
                                SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                                SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::CloseParenthesis,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {})),
                uut,
                "Verify does not match.");
        }
    };
}
