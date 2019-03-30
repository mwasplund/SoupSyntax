#pragma once
#include "TestUtils.h"
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class ParameterListTests
    {
    public:
        // [[Fact]]
        void InitializeSimple()
        {
            // (int parameter)
            auto uut = SyntaxFactory::CreateParameterList(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                std::make_shared<const SyntaxSeparatorList<Parameter>>(
                    std::vector<std::shared_ptr<const Parameter>>(
                    {
                        SyntaxFactory::CreateParameter(
                            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>()),
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
                *std::make_shared<const SyntaxSeparatorList<Parameter>>(
                    std::vector<std::shared_ptr<const Parameter>>(
                    {
                        SyntaxFactory::CreateParameter(
                            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                uut->GetParameters(),
                "Verify parameters match.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
                uut->GetCloseParenthesisToken(),
                "Verify right parenthesis token matches.");
        }

        // [[Fact]]
        void GetChildren()
        {
            // (int parameter)
            auto uut = SyntaxFactory::CreateParameterList(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                std::make_shared<const SyntaxSeparatorList<Parameter>>(
                    std::vector<std::shared_ptr<const Parameter>>(
                    {
                        SyntaxFactory::CreateParameter(
                            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis)),
                    SyntaxNodeChild(
                        SyntaxFactory::CreateParameter(
                            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)))),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            // (int parameter)
            auto uut = SyntaxFactory::CreateParameterList(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                std::make_shared<const SyntaxSeparatorList<Parameter>>(
                    std::vector<std::shared_ptr<const Parameter>>(
                    {
                        SyntaxFactory::CreateParameter(
                            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis));

            TestUtils::AreEqual(
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    std::make_shared<const SyntaxSeparatorList<Parameter>>(
                        std::vector<std::shared_ptr<const Parameter>>(
                        {
                            SyntaxFactory::CreateParameter(
                                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>()),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualOpenParenthesisToken()
        {
            // (int parameter)
            auto uut = SyntaxFactory::CreateParameterList(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                std::make_shared<const SyntaxSeparatorList<Parameter>>(
                    std::vector<std::shared_ptr<const Parameter>>(
                    {
                        SyntaxFactory::CreateParameter(
                            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::OpenParenthesis,
                        {
                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                        },
                        {}),
                    std::make_shared<const SyntaxSeparatorList<Parameter>>(
                        std::vector<std::shared_ptr<const Parameter>>(
                        {
                            SyntaxFactory::CreateParameter(
                                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>()),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                uut,
                "Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualParameters()
        {
            // (int parameter)
            auto uut = SyntaxFactory::CreateParameterList(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                std::make_shared<const SyntaxSeparatorList<Parameter>>(
                    std::vector<std::shared_ptr<const Parameter>>(
                    {
                        SyntaxFactory::CreateParameter(
                            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    std::make_shared<const SyntaxSeparatorList<Parameter>>(
                        std::vector<std::shared_ptr<const Parameter>>(
                        {
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>()),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                uut,
                "Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualCloseParenthesisToken()
        {
            // (int parameter)
            auto uut = SyntaxFactory::CreateParameterList(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                std::make_shared<const SyntaxSeparatorList<Parameter>>(
                    std::vector<std::shared_ptr<const Parameter>>(
                    {
                        SyntaxFactory::CreateParameter(
                            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    std::make_shared<const SyntaxSeparatorList<Parameter>>(
                        std::vector<std::shared_ptr<const Parameter>>(
                        {
                            SyntaxFactory::CreateParameter(
                                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>()),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::CloseParenthesis,
                        {
                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                        },
                        {})),
                uut,
                "Verify does not match.");
        }
    };
}
