#pragma once
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class OuterTreeFunctionDefinitionTests
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
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Function")),
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
                        std::vector<std::shared_ptr<const Parameter>>(
                        {
                            SyntaxFactory::CreateParameter(
                                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "parameter"))),
                        }),
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)))->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::FunctionDefinition,
                uut->GetType(),
                "Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Void,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                uut->GetReturnType(),
                "Verify return type matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Function")),
                uut->GetIdentifier(),
                "Verify identifier matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
                        std::vector<std::shared_ptr<const Parameter>>(
                        {
                            SyntaxFactory::CreateParameter(
                                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "parameter"))),
                        }),
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                uut->GetParameterList(),
                "Verify parameter list matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                uut->GetBody(),
                "Verify body matches.");
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
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Function")),
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
                        std::vector<std::shared_ptr<const Parameter>>(
                        {
                            SyntaxFactory::CreateParameter(
                                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "parameter"))),
                        }),
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)))->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>({
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateDeclarationSpecifier(
                            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                PrimitiveDataType::Void,
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void)))),
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Function"))),
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateParameterList(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                            SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
                                std::vector<std::shared_ptr<const Parameter>>(
                                {
                                    SyntaxFactory::CreateParameter(
                                        SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                            PrimitiveDataType::Int,
                                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                                        SyntaxFactory::CreateSimpleIdentifierExpression(
                                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "parameter"))),
                                }),
                                {}),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))),
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateDeleteFunctionBody(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
                }),
                uut->GetChildren(),
                "Verify children match.");
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
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Function")),
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
                        std::vector<std::shared_ptr<const Parameter>>(
                        {
                            SyntaxFactory::CreateParameter(
                                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "parameter"))),
                        }),
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)))->CreateOuter(nullptr);

            TestUtils::AreEqual(
                SyntaxFactory::CreateFunctionDefinition(
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                            PrimitiveDataType::Void,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Function")),
                    SyntaxFactory::CreateParameterList(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                        SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
                            std::vector<std::shared_ptr<const Parameter>>(
                            {
                                SyntaxFactory::CreateParameter(
                                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                        PrimitiveDataType::Int,
                                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                                    SyntaxFactory::CreateSimpleIdentifierExpression(
                                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "parameter"))),
                            }),
                            {}),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                    SyntaxFactory::CreateDeleteFunctionBody(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualAttributeSpecifier()
        {
            // void Function(int parameter) = delete;
            auto uut = SyntaxFactory::CreateFunctionDefinition(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Void,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Function")),
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
                        std::vector<std::shared_ptr<const Parameter>>(
                        {
                            SyntaxFactory::CreateParameter(
                                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "parameter"))),
                        }),
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateFunctionDefinition(
                    SyntaxFactory::CreateSyntaxList<AttributeSpecifier>({
                        SyntaxFactory::CreateAttributeSpecifier(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                            SyntaxFactory::CreateSyntaxSeparatorList<Attribute>(
                                std::vector<std::shared_ptr<const Attribute>>(),
                                {}),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket)),
                    }),
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                            PrimitiveDataType::Void,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Function")),
                    SyntaxFactory::CreateParameterList(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                        SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
                            std::vector<std::shared_ptr<const Parameter>>(
                            {
                                SyntaxFactory::CreateParameter(
                                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                        PrimitiveDataType::Int,
                                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                                    SyntaxFactory::CreateSimpleIdentifierExpression(
                                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "parameter"))),
                            }),
                            {}),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                    SyntaxFactory::CreateDeleteFunctionBody(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
                uut,
                "Verify does not match.");
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
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Function")),
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
                        std::vector<std::shared_ptr<const Parameter>>(
                        {
                            SyntaxFactory::CreateParameter(
                                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "parameter"))),
                        }),
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateFunctionDefinition(
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                            PrimitiveDataType::Int,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Function")),
                    SyntaxFactory::CreateParameterList(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                        SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
                            std::vector<std::shared_ptr<const Parameter>>(
                            {
                                SyntaxFactory::CreateParameter(
                                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                        PrimitiveDataType::Int,
                                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                                    SyntaxFactory::CreateSimpleIdentifierExpression(
                                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "parameter"))),
                            }),
                            {}),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                    SyntaxFactory::CreateDeleteFunctionBody(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
                uut,
                "Verify does not match.");
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
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Function")),
                    SyntaxFactory::CreateParameterList(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                        SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
                            std::vector<std::shared_ptr<const Parameter>>(
                            {
                                SyntaxFactory::CreateParameter(
                                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                        PrimitiveDataType::Int,
                                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                                    SyntaxFactory::CreateSimpleIdentifierExpression(
                                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "parameter"))),
                            }),
                            {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateFunctionDefinition(
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                            PrimitiveDataType::Void,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "OtherFunction")),
                    SyntaxFactory::CreateParameterList(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                        SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
                            std::vector<std::shared_ptr<const Parameter>>(
                            {
                                SyntaxFactory::CreateParameter(
                                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                        PrimitiveDataType::Int,
                                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                                    SyntaxFactory::CreateSimpleIdentifierExpression(
                                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "parameter"))),
                            }),
                            {}),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                    SyntaxFactory::CreateDeleteFunctionBody(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
                uut,
                "Verify does not match.");
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
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Function")),
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
                        std::vector<std::shared_ptr<const Parameter>>(
                        {
                            SyntaxFactory::CreateParameter(
                                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "parameter"))),
                        }),
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateFunctionDefinition(
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                            PrimitiveDataType::Void,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Function")),
                    SyntaxFactory::CreateParameterList(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                        SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
                            std::vector<std::shared_ptr<const Parameter>>(),
                            {}),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                    SyntaxFactory::CreateDeleteFunctionBody(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
                uut,
                "Verify does not match.");
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
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Function")),
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
                        std::vector<std::shared_ptr<const Parameter>>(
                        {
                            SyntaxFactory::CreateParameter(
                                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "parameter"))),
                        }),
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateFunctionDefinition(
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                            PrimitiveDataType::Void,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Function")),
                    SyntaxFactory::CreateParameterList(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                        SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
                            std::vector<std::shared_ptr<const Parameter>>(
                            {
                                SyntaxFactory::CreateParameter(
                                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                        PrimitiveDataType::Int,
                                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                                    SyntaxFactory::CreateSimpleIdentifierExpression(
                                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "parameter"))),
                            }),
                            {}),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                    SyntaxFactory::CreateDefaultFunctionBody(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Default),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
                uut,
                "Verify does not match.");
        }
    };
}
