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
                std::make_shared<DeclarationSpecifierSequence>(
                    std::vector<std::shared_ptr<const SyntaxNode>>
                    {
                        std::make_shared<PrimitiveDataTypeNode>(
                            PrimitiveDataType::Void,
                            SyntaxFactory::CreateToken(SyntaxTokenType::Void, L"void")),
                    }),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Function")),
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                    std::make_shared<const SyntaxList<Parameter>>(
                        std::vector<std::shared_ptr<const Parameter>>(
                        {
                            SyntaxFactory::CreateParameter(
                                std::make_shared<const PrimitiveDataTypeNode>(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                                std::make_shared<const PrimitiveDataTypeNode>(
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
                *std::make_shared<DeclarationSpecifierSequence>(
                    std::vector<std::shared_ptr<const SyntaxNode>>
                    {
                        std::make_shared<PrimitiveDataTypeNode>(
                            PrimitiveDataType::Void,
                            SyntaxFactory::CreateToken(SyntaxTokenType::Void, L"void")),
                    }),
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
                                std::make_shared<const PrimitiveDataTypeNode>(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                                std::make_shared<const PrimitiveDataTypeNode>(
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
        void OperatorEqual()
        {
            // void Function(int parameter) = delete;
            auto uut = SyntaxFactory::CreateFunctionDefinition(
                std::make_shared<DeclarationSpecifierSequence>(
                    std::vector<std::shared_ptr<const SyntaxNode>>
                    {
                        std::make_shared<PrimitiveDataTypeNode>(
                            PrimitiveDataType::Void,
                            SyntaxFactory::CreateToken(SyntaxTokenType::Void, L"void")),
                    }),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Function")),
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                    std::make_shared<const SyntaxList<Parameter>>(
                        std::vector<std::shared_ptr<const Parameter>>(
                        {
                            SyntaxFactory::CreateParameter(
                                std::make_shared<const PrimitiveDataTypeNode>(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                                std::make_shared<const PrimitiveDataTypeNode>(
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
                    std::make_shared<DeclarationSpecifierSequence>(
                        std::vector<std::shared_ptr<const SyntaxNode>>
                        {
                            std::make_shared<PrimitiveDataTypeNode>(
                                PrimitiveDataType::Void,
                                SyntaxFactory::CreateToken(SyntaxTokenType::Void, L"void")),
                        }),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Function")),
                    SyntaxFactory::CreateParameterList(
                        SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                        std::make_shared<const SyntaxList<Parameter>>(
                            std::vector<std::shared_ptr<const Parameter>>(
                            {
                                SyntaxFactory::CreateParameter(
                                    std::make_shared<const PrimitiveDataTypeNode>(
                                        PrimitiveDataType::Int,
                                        SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                                    std::make_shared<const PrimitiveDataTypeNode>(
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
                std::make_shared<DeclarationSpecifierSequence>(
                    std::vector<std::shared_ptr<const SyntaxNode>>
                    {
                        std::make_shared<PrimitiveDataTypeNode>(
                            PrimitiveDataType::Void,
                            SyntaxFactory::CreateToken(SyntaxTokenType::Void, L"void")),
                    }),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Function")),
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                    std::make_shared<const SyntaxList<Parameter>>(
                        std::vector<std::shared_ptr<const Parameter>>(
                        {
                            SyntaxFactory::CreateParameter(
                                std::make_shared<const PrimitiveDataTypeNode>(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                                std::make_shared<const PrimitiveDataTypeNode>(
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
                    std::make_shared<DeclarationSpecifierSequence>(
                        std::vector<std::shared_ptr<const SyntaxNode>>
                        {
                            std::make_shared<PrimitiveDataTypeNode>(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                        }),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Function")),
                    SyntaxFactory::CreateParameterList(
                        SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                        std::make_shared<const SyntaxList<Parameter>>(
                            std::vector<std::shared_ptr<const Parameter>>(
                            {
                                SyntaxFactory::CreateParameter(
                                    std::make_shared<const PrimitiveDataTypeNode>(
                                        PrimitiveDataType::Int,
                                        SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                                    std::make_shared<const PrimitiveDataTypeNode>(
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
                std::make_shared<DeclarationSpecifierSequence>(
                    std::vector<std::shared_ptr<const SyntaxNode>>
                    {
                        std::make_shared<PrimitiveDataTypeNode>(
                            PrimitiveDataType::Void,
                            SyntaxFactory::CreateToken(SyntaxTokenType::Void, L"void")),
                    }),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Function")),
                    SyntaxFactory::CreateParameterList(
                        SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                        std::make_shared<const SyntaxList<Parameter>>(
                            std::vector<std::shared_ptr<const Parameter>>(
                            {
                                SyntaxFactory::CreateParameter(
                                    std::make_shared<const PrimitiveDataTypeNode>(
                                        PrimitiveDataType::Int,
                                        SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                                    std::make_shared<const PrimitiveDataTypeNode>(
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
                    std::make_shared<DeclarationSpecifierSequence>(
                        std::vector<std::shared_ptr<const SyntaxNode>>
                        {
                            std::make_shared<PrimitiveDataTypeNode>(
                                PrimitiveDataType::Void,
                                SyntaxFactory::CreateToken(SyntaxTokenType::Void, L"void")),
                        }),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"OtherFunction")),
                    SyntaxFactory::CreateParameterList(
                        SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                        std::make_shared<const SyntaxList<Parameter>>(
                            std::vector<std::shared_ptr<const Parameter>>(
                            {
                                SyntaxFactory::CreateParameter(
                                    std::make_shared<const PrimitiveDataTypeNode>(
                                        PrimitiveDataType::Int,
                                        SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                                    std::make_shared<const PrimitiveDataTypeNode>(
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
                std::make_shared<DeclarationSpecifierSequence>(
                    std::vector<std::shared_ptr<const SyntaxNode>>
                    {
                        std::make_shared<PrimitiveDataTypeNode>(
                            PrimitiveDataType::Void,
                            SyntaxFactory::CreateToken(SyntaxTokenType::Void, L"void")),
                    }),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Function")),
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                    std::make_shared<const SyntaxList<Parameter>>(
                        std::vector<std::shared_ptr<const Parameter>>(
                        {
                            SyntaxFactory::CreateParameter(
                                std::make_shared<const PrimitiveDataTypeNode>(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                                std::make_shared<const PrimitiveDataTypeNode>(
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
                    std::make_shared<DeclarationSpecifierSequence>(
                        std::vector<std::shared_ptr<const SyntaxNode>>
                        {
                            std::make_shared<PrimitiveDataTypeNode>(
                                PrimitiveDataType::Void,
                                SyntaxFactory::CreateToken(SyntaxTokenType::Void, L"void")),
                        }),
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
                std::make_shared<DeclarationSpecifierSequence>(
                    std::vector<std::shared_ptr<const SyntaxNode>>
                    {
                        std::make_shared<PrimitiveDataTypeNode>(
                            PrimitiveDataType::Void,
                            SyntaxFactory::CreateToken(SyntaxTokenType::Void, L"void")),
                    }),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Function")),
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                    std::make_shared<const SyntaxList<Parameter>>(
                        std::vector<std::shared_ptr<const Parameter>>(
                        {
                            SyntaxFactory::CreateParameter(
                                std::make_shared<const PrimitiveDataTypeNode>(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                                std::make_shared<const PrimitiveDataTypeNode>(
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
                    std::make_shared<DeclarationSpecifierSequence>(
                        std::vector<std::shared_ptr<const SyntaxNode>>
                        {
                            std::make_shared<PrimitiveDataTypeNode>(
                                PrimitiveDataType::Void,
                                SyntaxFactory::CreateToken(SyntaxTokenType::Void, L"void")),
                        }),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Function")),
                    SyntaxFactory::CreateParameterList(
                        SyntaxFactory::CreateToken(SyntaxTokenType::LeftParenthesis, L"("),
                        std::make_shared<const SyntaxList<Parameter>>(
                            std::vector<std::shared_ptr<const Parameter>>(
                            {
                                SyntaxFactory::CreateParameter(
                                    std::make_shared<const PrimitiveDataTypeNode>(
                                        PrimitiveDataType::Int,
                                        SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                                    std::make_shared<const PrimitiveDataTypeNode>(
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
