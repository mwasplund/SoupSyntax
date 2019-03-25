#pragma once
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class FunctionDefinitionTests
    {
    public:
        // [[Fact]]
        void InitializeSimple()
        {
            // void Function(int parameter) = delete;
            auto uut = SyntaxFactory::CreateFunctionDefinition(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Void,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Function")),
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
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)));

            Assert::AreEqual(
                SyntaxNodeType::FunctionDefinition,
                uut->GetType(),
                L"Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Void,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                uut->GetReturnType(),
                L"Verify return type matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Function")),
                uut->GetIdentifier(),
                L"Verify identifier matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateParameterList(
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
                uut->GetParameterList(),
                L"Verify parameter list matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                uut->GetBody(),
                L"Verify body matches.");
        }

        // [[Fact]]
        void GetChildren()
        {
            // void Function(int parameter) = delete;
            auto uut = SyntaxFactory::CreateFunctionDefinition(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Void,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Function")),
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
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(
                        SyntaxFactory::CreateDeclarationSpecifier(
                            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                PrimitiveDataType::Void,
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void)))),
                    SyntaxNodeChild(
                        SyntaxFactory::CreateSimpleNameExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Function"))),
                    SyntaxNodeChild(
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
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis))),
                    SyntaxNodeChild(
                        SyntaxFactory::CreateDeleteFunctionBody(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            // void Function(int parameter) = delete;
            auto uut = SyntaxFactory::CreateFunctionDefinition(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Void,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Function")),
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
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)));

            TestUtils::AreEqual(
                SyntaxFactory::CreateFunctionDefinition(
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                            PrimitiveDataType::Void,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Function")),
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
                    SyntaxFactory::CreateDeleteFunctionBody(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualReturnType()
        {
            // void Function(int parameter) = delete;
            auto uut = SyntaxFactory::CreateFunctionDefinition(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Void,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Function")),
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
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateFunctionDefinition(
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                            PrimitiveDataType::Int,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Function")),
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
                    SyntaxFactory::CreateDeleteFunctionBody(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
                uut,
                L"Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualIdentifier()
        {
            // void Function(int parameter) = delete;
            auto uut = SyntaxFactory::CreateFunctionDefinition(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Void,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Function")),
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
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateFunctionDefinition(
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                            PrimitiveDataType::Void,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"OtherFunction")),
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
                    SyntaxFactory::CreateDeleteFunctionBody(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
                uut,
                L"Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualParameterList()
        {
            // void Function(int parameter) = delete;
            auto uut = SyntaxFactory::CreateFunctionDefinition(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Void,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Function")),
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
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateFunctionDefinition(
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                            PrimitiveDataType::Void,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Function")),
                    SyntaxFactory::CreateParameterList(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LeftParenthesis),
                        std::make_shared<const SyntaxList<Parameter>>(
                            std::vector<std::shared_ptr<const Parameter>>(),
                            std::vector<std::shared_ptr<const SyntaxToken>>()),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::RightParenthesis)),
                    SyntaxFactory::CreateDeleteFunctionBody(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
                uut,
                L"Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualBody()
        {
            // void Function(int parameter) = delete;
            auto uut = SyntaxFactory::CreateFunctionDefinition(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Void,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Function")),
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
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateFunctionDefinition(
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                            PrimitiveDataType::Void,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"Function")),
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
                    SyntaxFactory::CreateDefaultFunctionBody(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Default),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
                uut,
                L"Verify does not match.");
        }
    };
}
