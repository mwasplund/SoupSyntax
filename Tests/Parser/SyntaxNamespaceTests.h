#pragma once
#include "SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class SyntaxNamespaceTests
    {
    public:
        // [Fact]
        void SimpleNamedNamespace()
        {
            auto source = std::string(
                "namespace MyNamespace{}");

            auto expected = TestUtils::CreateSingleDeclaration(
                SyntaxFactory::CreateFunctionDefinition(
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                            PrimitiveDataType::Void,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Function")),
                    nullptr,
                    std::make_shared<RegularFunctionBody>(
                        SyntaxFactory::CreateCompoundStatement(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                            {},
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)))));

            auto actual = TestUtils::GenerateAST(source);

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void SimpleUnnamedNamespace()
        {
            auto source = std::string(
                "namespace{}");

            auto expected = TestUtils::CreateSingleDeclaration(
                SyntaxFactory::CreateFunctionDefinition(
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                            PrimitiveDataType::Void,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Function")),
                    nullptr,
                    std::make_shared<RegularFunctionBody>(
                        SyntaxFactory::CreateCompoundStatement(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                            {},
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)))));

            auto actual = TestUtils::GenerateAST(source);

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void SimpleNestedNamespace()
        {
            auto source = std::string(
                "namespace MyNamespace::MySubNamespace{}");

            auto expected = TestUtils::CreateSingleDeclaration(
                SyntaxFactory::CreateFunctionDefinition(
                    SyntaxFactory::CreateDeclarationSpecifier(
                        SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                            PrimitiveDataType::Void,
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Void))),
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Function")),
                    nullptr,
                    std::make_shared<RegularFunctionBody>(
                        SyntaxFactory::CreateCompoundStatement(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                            {},
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)))));

            auto actual = TestUtils::GenerateAST(source);

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }
    };
}
