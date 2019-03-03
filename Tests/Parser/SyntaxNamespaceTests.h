#pragma once
#include "../SoupAssert.h"

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
                    std::make_shared<DeclarationSpecifierSequence>(
                        std::vector<std::shared_ptr<const SyntaxNode>>
                        {
                            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Void),
                        }),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Function")),
                    nullptr,
                    std::make_shared<RegularFunctionBody>(
                        std::make_shared<CompoundStatement>(
                            std::vector<std::shared_ptr<const Statement>>
                            {
                            }))));

            auto actual = TestUtils::GenerateAST(source);

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void SimpleUnnamedNamespace()
        {
            auto source = std::string(
                "namespace{}");

            auto expected = TestUtils::CreateSingleDeclaration(
                SyntaxFactory::CreateFunctionDefinition(
                    std::make_shared<DeclarationSpecifierSequence>(
                        std::vector<std::shared_ptr<const SyntaxNode>>
                        {
                            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Void),
                        }),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Function")),
                    nullptr,
                    std::make_shared<RegularFunctionBody>(
                        std::make_shared<CompoundStatement>(
                            std::vector<std::shared_ptr<const Statement>>
                            {
                            }))));

            auto actual = TestUtils::GenerateAST(source);

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void SimpleNestedNamespace()
        {
            auto source = std::string(
                "namespace MyNamespace::MySubNamespace{}");

            auto expected = TestUtils::CreateSingleDeclaration(
                SyntaxFactory::CreateFunctionDefinition(
                    std::make_shared<DeclarationSpecifierSequence>(
                        std::vector<std::shared_ptr<const SyntaxNode>>
                        {
                            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Void),
                        }),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"Function")),
                    nullptr,
                    std::make_shared<RegularFunctionBody>(
                        std::make_shared<CompoundStatement>(
                            std::vector<std::shared_ptr<const Statement>>
                            {
                            }))));

            auto actual = TestUtils::GenerateAST(source);

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }
    };
}
