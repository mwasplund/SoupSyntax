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
                        SyntaxFactory::CreateToken(SyntaxTokenType::Void, L"void"))),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Function")),
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
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Delete, L"delete"),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")));

            Assert::AreEqual(
                SyntaxNodeType::FunctionDefinition,
                uut->GetType(),
                L"Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Void,
                        SyntaxFactory::CreateToken(SyntaxTokenType::Void, L"void"))),
                uut->GetReturnType(),
                L"Verify return type matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Function")),
                uut->GetIdentifier(),
                L"Verify identifier matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateParameterList(
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
                uut->GetParameterList(),
                L"Verify parameter list matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Delete, L"delete"),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")),
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
                        SyntaxFactory::CreateToken(SyntaxTokenType::Void, L"void"))),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Function")),
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
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Delete, L"delete"),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(
                        SyntaxFactory::CreateDeclarationSpecifier(
                            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                PrimitiveDataType::Void,
                                SyntaxFactory::CreateToken(SyntaxTokenType::Void, L"void")))),
                    SyntaxNodeChild(
                        SyntaxFactory::CreateSimpleNameExpression(
                            SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Function"))),
                    SyntaxNodeChild(
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
                            SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")"))),
                    SyntaxNodeChild(
                        SyntaxFactory::CreateDeleteFunctionBody(
                            SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                            SyntaxFactory::CreateToken(SyntaxTokenType::Delete, L"delete"),
                            SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"))),
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
                        SyntaxFactory::CreateToken(SyntaxTokenType::Void, L"void"))),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Function")),
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
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Delete, L"delete"),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")));

            TestUtils::AreEqual(
                SyntaxFactory::CreateFunctionDefinition(
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                            PrimitiveDataType::Void,
                            SyntaxFactory::CreateToken(SyntaxTokenType::Void, L"void"))),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Function")),
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
                    SyntaxFactory::CreateDeleteFunctionBody(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                        SyntaxFactory::CreateToken(SyntaxTokenType::Delete, L"delete"),
                        SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"))),
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
                        SyntaxFactory::CreateToken(SyntaxTokenType::Void, L"void"))),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Function")),
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
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Delete, L"delete"),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateFunctionDefinition(
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                            PrimitiveDataType::Int,
                            SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int"))),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Function")),
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
                    SyntaxFactory::CreateDeleteFunctionBody(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                        SyntaxFactory::CreateToken(SyntaxTokenType::Delete, L"delete"),
                        SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"))),
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
                        SyntaxFactory::CreateToken(SyntaxTokenType::Void, L"void"))),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Function")),
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
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Delete, L"delete"),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateFunctionDefinition(
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                            PrimitiveDataType::Void,
                            SyntaxFactory::CreateToken(SyntaxTokenType::Void, L"void"))),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"OtherFunction")),
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
                    SyntaxFactory::CreateDeleteFunctionBody(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                        SyntaxFactory::CreateToken(SyntaxTokenType::Delete, L"delete"),
                        SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"))),
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
                        SyntaxFactory::CreateToken(SyntaxTokenType::Void, L"void"))),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Function")),
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
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Delete, L"delete"),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateFunctionDefinition(
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                            PrimitiveDataType::Void,
                            SyntaxFactory::CreateToken(SyntaxTokenType::Void, L"void"))),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Function")),
                    SyntaxFactory::CreateParameterList(
                        SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                        std::make_shared<const SyntaxList<Parameter>>(
                            std::vector<std::shared_ptr<const Parameter>>(),
                            std::vector<std::shared_ptr<const SyntaxToken>>()),
                        SyntaxFactory::CreateToken(SyntaxTokenType::RightParenthesis, L")")),
                    SyntaxFactory::CreateDeleteFunctionBody(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                        SyntaxFactory::CreateToken(SyntaxTokenType::Delete, L"delete"),
                        SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"))),
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
                        SyntaxFactory::CreateToken(SyntaxTokenType::Void, L"void"))),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Function")),
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
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Delete, L"delete"),
                    SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateFunctionDefinition(
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                            PrimitiveDataType::Void,
                            SyntaxFactory::CreateToken(SyntaxTokenType::Void, L"void"))),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Function")),
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
                    SyntaxFactory::CreateDefaultFunctionBody(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                        SyntaxFactory::CreateToken(SyntaxTokenType::Default, L"default"),
                        SyntaxFactory::CreateToken(SyntaxTokenType::Semicolon, L";"))),
                uut,
                L"Verify does not match.");
        }
    };
}
