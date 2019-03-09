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
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                std::make_shared<const SyntaxList<Parameter>>(
                    std::vector<std::shared_ptr<const Parameter>>(
                    {
                        SyntaxFactory::CreateParameter(
                            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int"))),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")"));

            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                uut->GetLeftParenthesisToken(),
                L"Verify left parenthesis token matches.");
            Assert::AreEqual(
                *std::make_shared<const SyntaxList<Parameter>>(
                    std::vector<std::shared_ptr<const Parameter>>(
                    {
                        SyntaxFactory::CreateParameter(
                            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int"))),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                uut->GetParameters(),
                L"Verify parameters match.");
            Assert::AreEqual(
                *SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")"),
                uut->GetRightParenthesisToken(),
                L"Verify right parenthesis token matches.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            // (int parameter)
            auto uut = SyntaxFactory::CreateParameterList(
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                std::make_shared<const SyntaxList<Parameter>>(
                    std::vector<std::shared_ptr<const Parameter>>(
                    {
                        SyntaxFactory::CreateParameter(
                            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int"))),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")"));

            TestUtils::AreEqual(
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                    std::make_shared<const SyntaxList<Parameter>>(
                        std::vector<std::shared_ptr<const Parameter>>(
                        {
                            SyntaxFactory::CreateParameter(
                                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int"))),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>()),
                    SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")")),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualLeftParenthesisToken()
        {
            // (int parameter)
            auto uut = SyntaxFactory::CreateParameterList(
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                std::make_shared<const SyntaxList<Parameter>>(
                    std::vector<std::shared_ptr<const Parameter>>(
                    {
                        SyntaxFactory::CreateParameter(
                            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int"))),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")"));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateToken(
                        SyntaxTokenType::LeftParenthesis,
                        L"(",
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
                                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int"))),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>()),
                    SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")")),
                uut,
                L"Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualParameters()
        {
            // (int parameter)
            auto uut = SyntaxFactory::CreateParameterList(
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                std::make_shared<const SyntaxList<Parameter>>(
                    std::vector<std::shared_ptr<const Parameter>>(
                    {
                        SyntaxFactory::CreateParameter(
                            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int"))),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")"));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                    std::make_shared<const SyntaxList<Parameter>>(
                        std::vector<std::shared_ptr<const Parameter>>(
                        {
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>()),
                    SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")")),
                uut,
                L"Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualRightParenthesisToken()
        {
            // (int parameter)
            auto uut = SyntaxFactory::CreateParameterList(
                SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                std::make_shared<const SyntaxList<Parameter>>(
                    std::vector<std::shared_ptr<const Parameter>>(
                    {
                        SyntaxFactory::CreateParameter(
                            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int"))),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")"));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                    std::make_shared<const SyntaxList<Parameter>>(
                        std::vector<std::shared_ptr<const Parameter>>(
                        {
                            SyntaxFactory::CreateParameter(
                                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int"))),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>()),
                    SyntaxFactory::CreateToken(
                        SyntaxTokenType::RightParenthesis,
                        L")",
                        {
                            SyntaxFactory::CreateTrivia(L" ", TextSpan()),
                        },
                        {})),
                uut,
                L"Verify does not match.");
        }
    };
}
