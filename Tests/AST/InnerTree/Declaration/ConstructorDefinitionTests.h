#pragma once
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class InnerTreeConstructorDefinitionTests
    {
    public:
        // [[Fact]]
        void InitializeSimple()
        {
            // MyClass() {};
            auto uut = SyntaxFactory::CreateConstructorDefinition(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass")),
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
                        std::vector<std::shared_ptr<const Parameter>>(),
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                nullptr,
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxList<Statement>({}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)));

            Assert::AreEqual(
                SyntaxNodeType::ConstructorDefinition,
                uut->GetType(),
                "Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass")),
                uut->GetIdentifier(),
                "Verify identifier matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
                        std::vector<std::shared_ptr<const Parameter>>(),
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                uut->GetParameterList(),
                "Verify parameter list matches.");
            Assert::IsFalse(
                uut->HasConstructorInitializer(),
                "Verify has no constructor initializer matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxList<Statement>({}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut->GetBody(),
                "Verify body matches.");
        }

        // [[Fact]]
        void InitializeComplex()
        {
            // MyClass(int value) : m_value() {};
            auto uut = SyntaxFactory::CreateConstructorDefinition(
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass")),
                SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
                        std::vector<std::shared_ptr<const Parameter>>({
                            SyntaxFactory::CreateParameter(
                                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
                        }),
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                SyntaxFactory::CreateConstructorInitializer(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon),
                    SyntaxFactory::CreateSyntaxSeparatorList<MemberInitializer>(
                        std::vector<std::shared_ptr<const MemberInitializer>>({
                            SyntaxFactory::CreateMemberInitializer(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "m_value"),
                                SyntaxFactory::CreateInitializerList(
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                                    SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                                        std::vector<std::shared_ptr<const Expression>>(),
                                        {}),
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))),
                        }),
                        {})),
                SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxList<Statement>({}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)));

            Assert::AreEqual(
                SyntaxNodeType::ConstructorDefinition,
                uut->GetType(),
                "Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass")),
                uut->GetIdentifier(),
                "Verify identifier matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateParameterList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
                        std::vector<std::shared_ptr<const Parameter>>({
                            SyntaxFactory::CreateParameter(
                                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
                        }),
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                uut->GetParameterList(),
                "Verify parameter list matches.");
            Assert::IsTrue(
                uut->HasConstructorInitializer(),
                "Verify has no constructor initializer matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateConstructorInitializer(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon),
                    SyntaxFactory::CreateSyntaxSeparatorList<MemberInitializer>(
                        std::vector<std::shared_ptr<const MemberInitializer>>({
                            SyntaxFactory::CreateMemberInitializer(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "m_value"),
                                SyntaxFactory::CreateInitializerList(
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                                    SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                                        std::vector<std::shared_ptr<const Expression>>(),
                                        {}),
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))),
                        }),
                        {})),
                uut->GetConstructorInitializer(),
                "Verify constructor initializer matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateCompoundStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                    SyntaxFactory::CreateSyntaxList<Statement>({}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
                uut->GetBody(),
                "Verify body matches.");
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
                                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                        }),
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
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
                                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                        PrimitiveDataType::Int,
                                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
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
                                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                        }),
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
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
                                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                        PrimitiveDataType::Int,
                                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
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
                                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                        PrimitiveDataType::Int,
                                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                            }),
                            {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
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
                                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                        PrimitiveDataType::Int,
                                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
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
                                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                        }),
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
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
                                SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                    PrimitiveDataType::Int,
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                        }),
                        {}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
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
                                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                        PrimitiveDataType::Int,
                                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
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
