#pragma once

namespace Soup::Syntax::InnerTree::UnitTests
{
    class InnerTreeFunctionDefinitionTests
    {
    public:
        [[Fact]]
        void InitializeSimple()
        {
            // void Function(int parameter) = delete;
            auto uut = SyntaxFactory::CreateFunctionDefinition(
                SyntaxFactory::CreateDeclarationSpecifierSequence(
                    SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                        PrimitiveDataType::Void,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Function"))),
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
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)));

            Assert::AreEqual(
                SyntaxNodeType::FunctionDefinition,
                uut->GetType(),
                "Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateDeclarationSpecifierSequence(
                    SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                        PrimitiveDataType::Void,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                uut->GetReturnType(),
                "Verify return type matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Function"))),
                uut->GetIdentifier(),
                "Verify identifier matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
                        {
                            SyntaxFactory::CreateParameter(
                                SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                                SyntaxFactory::CreateSimpleIdentifier(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "parameter"))),
                        },
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

        [[Fact]]
        void OperatorEqual()
        {
            // void Function(int parameter) = delete;
            auto uut = SyntaxFactory::CreateFunctionDefinition(
                SyntaxFactory::CreateDeclarationSpecifierSequence(
                    SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                        PrimitiveDataType::Void,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Function"))),
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
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)));

            TestUtils::AreEqual(
                SyntaxFactory::CreateFunctionDefinition(
                    SyntaxFactory::CreateDeclarationSpecifierSequence(
                        SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                            PrimitiveDataType::Void,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                    SyntaxFactory::CreateIdentifierExpression(
                        SyntaxFactory::CreateSimpleIdentifier(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Function"))),
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
                            },
                            {}),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                    SyntaxFactory::CreateDeleteFunctionBody(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
                uut,
                "Verify matches.");
        }

        [[Fact]]
        void OperatorNotEqualAttributeSpecifier()
        {
            // void Function(int parameter) = delete;
            auto uut = SyntaxFactory::CreateFunctionDefinition(
                SyntaxFactory::CreateDeclarationSpecifierSequence(
                    SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                        PrimitiveDataType::Void,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Function"))),
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
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateFunctionDefinition(
                    SyntaxFactory::CreateSyntaxList<AttributeSpecifier>({
                        SyntaxFactory::CreateAttributeSpecifier(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
                            SyntaxFactory::CreateSyntaxSeparatorList<Attribute>({}, {}),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket)),
                    }),
                    SyntaxFactory::CreateDeclarationSpecifierSequence(
                        SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                            PrimitiveDataType::Void,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                    SyntaxFactory::CreateIdentifierExpression(
                        SyntaxFactory::CreateSimpleIdentifier(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Function"))),
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
                            },
                            {}),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                    SyntaxFactory::CreateDeleteFunctionBody(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
                uut,
                "Verify does not match.");
        }

        [[Fact]]
        void OperatorNotEqualReturnType()
        {
            // void Function(int parameter) = delete;
            auto uut = SyntaxFactory::CreateFunctionDefinition(
                SyntaxFactory::CreateDeclarationSpecifierSequence(
                    SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                        PrimitiveDataType::Void,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Function"))),
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
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateFunctionDefinition(
                    SyntaxFactory::CreateDeclarationSpecifierSequence(
                        SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                            PrimitiveDataType::Int,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                    SyntaxFactory::CreateIdentifierExpression(
                        SyntaxFactory::CreateSimpleIdentifier(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Function"))),
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
                            },
                            {}),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                    SyntaxFactory::CreateDeleteFunctionBody(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
                uut,
                "Verify does not match.");
        }

        [[Fact]]
        void OperatorNotEqualIdentifier()
        {
            // void Function(int parameter) = delete;
            auto uut = SyntaxFactory::CreateFunctionDefinition(
                SyntaxFactory::CreateDeclarationSpecifierSequence(
                    SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                        PrimitiveDataType::Void,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Function"))),
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
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateFunctionDefinition(
                    SyntaxFactory::CreateDeclarationSpecifierSequence(
                        SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                            PrimitiveDataType::Void,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                    SyntaxFactory::CreateIdentifierExpression(
                        SyntaxFactory::CreateSimpleIdentifier(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "OtherFunction"))),
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
                            },
                            {}),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                    SyntaxFactory::CreateDeleteFunctionBody(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
                uut,
                "Verify does not match.");
        }

        [[Fact]]
        void OperatorNotEqualParameterList()
        {
            // void Function(int parameter) = delete;
            auto uut = SyntaxFactory::CreateFunctionDefinition(
                SyntaxFactory::CreateDeclarationSpecifierSequence(
                    SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                        PrimitiveDataType::Void,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Function"))),
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
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateFunctionDefinition(
                    SyntaxFactory::CreateDeclarationSpecifierSequence(
                        SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                            PrimitiveDataType::Void,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                    SyntaxFactory::CreateIdentifierExpression(
                        SyntaxFactory::CreateSimpleIdentifier(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Function"))),
                    SyntaxFactory::CreateParameterList(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                        SyntaxFactory::CreateSyntaxSeparatorList<Parameter>({}, {}),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                    SyntaxFactory::CreateDeleteFunctionBody(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
                uut,
                "Verify does not match.");
        }

        [[Fact]]
        void OperatorNotEqualBody()
        {
            // void Function(int parameter) = delete;
            auto uut = SyntaxFactory::CreateFunctionDefinition(
                SyntaxFactory::CreateDeclarationSpecifierSequence(
                    SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                        PrimitiveDataType::Void,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Function"))),
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
                        },
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                SyntaxFactory::CreateDeleteFunctionBody(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateFunctionDefinition(
                    SyntaxFactory::CreateDeclarationSpecifierSequence(
                        SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                            PrimitiveDataType::Void,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                    SyntaxFactory::CreateIdentifierExpression(
                        SyntaxFactory::CreateSimpleIdentifier(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Function"))),
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
                            },
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
