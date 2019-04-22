#pragma once
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class SyntaxNamespaceTests
    {
    public:
        [[Fact]]
        void SimpleNamedNamespace()
        {
            auto source = std::string(
                "namespace MyNamespace{}");

            auto expected = TestUtils::CreateSingleDeclaration(
                SyntaxFactory::CreateFunctionDefinition(
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                            PrimitiveDataType::Void,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                    SyntaxFactory::CreateIdentifierExpression(
                        SyntaxFactory::CreateSimpleIdentifier(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Function"))),
                    nullptr,
                    SyntaxFactory::CreateRegularFunctionBody(
                        SyntaxFactory::CreateCompoundStatement(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                            SyntaxFactory::CreateSyntaxList<Statement>({}),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)))));

            auto actual = TestUtils::GenerateAST(source);

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        [[Fact]]
        void SimpleUnnamedNamespace()
        {
            auto source = std::string(
                "namespace{}");

            auto expected = TestUtils::CreateSingleDeclaration(
                SyntaxFactory::CreateFunctionDefinition(
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                            PrimitiveDataType::Void,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                    SyntaxFactory::CreateIdentifierExpression(
                        SyntaxFactory::CreateSimpleIdentifier(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Function"))),
                    nullptr,
                    SyntaxFactory::CreateRegularFunctionBody(
                        SyntaxFactory::CreateCompoundStatement(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                            SyntaxFactory::CreateSyntaxList<Statement>({}),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)))));

            auto actual = TestUtils::GenerateAST(source);

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        [[Fact]]
        void SimpleNestedNamespace()
        {
            auto source = std::string(
                "namespace MyNamespace::MySubNamespace{}");

            auto expected = TestUtils::CreateSingleDeclaration(
                SyntaxFactory::CreateFunctionDefinition(
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                            PrimitiveDataType::Void,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                    SyntaxFactory::CreateIdentifierExpression(
                        SyntaxFactory::CreateSimpleIdentifier(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Function"))),
                    nullptr,
                    SyntaxFactory::CreateRegularFunctionBody(
                        SyntaxFactory::CreateCompoundStatement(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                            SyntaxFactory::CreateSyntaxList<Statement>({}),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)))));

            auto actual = TestUtils::GenerateAST(source);

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }
    };
}
