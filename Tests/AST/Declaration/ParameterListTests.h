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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                std::make_shared<const SyntaxList<Parameter>>(
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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis));

            Assert::AreEqual(
                SyntaxNodeType::ParameterList,
                uut->GetType(),
                L"Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                uut->GetLeftParenthesisToken(),
                L"Verify left parenthesis token matches.");
            Assert::AreEqual(
                *std::make_shared<const SyntaxList<Parameter>>(
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
                L"Verify parameters match.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis),
                uut->GetRightParenthesisToken(),
                L"Verify right parenthesis token matches.");
        }

        // [[Fact]]
        void GetChildren()
        {
            // (int parameter)
            auto uut = SyntaxFactory::CreateParameterList(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                std::make_shared<const SyntaxList<Parameter>>(
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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis)),
                    SyntaxNodeChild(
                        SyntaxFactory::CreateParameter(
                            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)))),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis)),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            // (int parameter)
            auto uut = SyntaxFactory::CreateParameterList(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                std::make_shared<const SyntaxList<Parameter>>(
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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis));

            TestUtils::AreEqual(
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                    std::make_shared<const SyntaxList<Parameter>>(
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
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis)),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualLeftParenthesisToken()
        {
            // (int parameter)
            auto uut = SyntaxFactory::CreateParameterList(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                std::make_shared<const SyntaxList<Parameter>>(
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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::LeftParenthesis,
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan()),
                        },
                        {}),
                    std::make_shared<const SyntaxList<Parameter>>(
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
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis)),
                uut,
                L"Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualParameters()
        {
            // (int parameter)
            auto uut = SyntaxFactory::CreateParameterList(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                std::make_shared<const SyntaxList<Parameter>>(
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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                    std::make_shared<const SyntaxList<Parameter>>(
                        std::vector<std::shared_ptr<const Parameter>>(
                        {
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>()),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis)),
                uut,
                L"Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualRightParenthesisToken()
        {
            // (int parameter)
            auto uut = SyntaxFactory::CreateParameterList(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                std::make_shared<const SyntaxList<Parameter>>(
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
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                    std::make_shared<const SyntaxList<Parameter>>(
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
                        SyntaxTokenType::RightParenthesis,
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan()),
                        },
                        {})),
                uut,
                L"Verify does not match.");
        }
    };
}
