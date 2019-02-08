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
                std::make_shared<FunctionDefinition>(
                    std::make_shared<DeclarationSpecifierSequence>(
                        std::vector<std::shared_ptr<SyntaxNode>>
                        {
                            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Void),
                        }),
                    std::make_shared<Identifier>("Function"),
                    nullptr,
                    std::make_shared<RegularFunctionBody>(
                        std::make_shared<CompoundStatement>())));

            auto actual = TestUtils::GenerateAST(source);
            Assert::AreEqual(expected, actual, "Verify AST matches expected.");
        }

        // [Fact]
        void SimpleUnnamedNamespace()
        {
            auto source = std::string(
                "namespace{}");

            auto expected = TestUtils::CreateSingleDeclaration(
                std::make_shared<FunctionDefinition>(
                    std::make_shared<DeclarationSpecifierSequence>(
                        std::vector<std::shared_ptr<SyntaxNode>>
                        {
                            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Void),
                        }),
                    std::make_shared<Identifier>("Function"),
                    nullptr,
                    std::make_shared<RegularFunctionBody>(
                        std::make_shared<CompoundStatement>())));

            auto actual = TestUtils::GenerateAST(source);
            Assert::AreEqual(expected, actual, "Verify AST matches expected.");
        }

        // [Fact]
        void SimpleNestedNamespace()
        {
            auto source = std::string(
                "namespace MyNamespace::MySubNamespace{}");

            auto expected = TestUtils::CreateSingleDeclaration(
                std::make_shared<FunctionDefinition>(
                    std::make_shared<DeclarationSpecifierSequence>(
                        std::vector<std::shared_ptr<SyntaxNode>>
                        {
                            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Void),
                        }),
                    std::make_shared<Identifier>("Function"),
                    nullptr,
                    std::make_shared<RegularFunctionBody>(
                        std::make_shared<CompoundStatement>())));

            auto actual = TestUtils::GenerateAST(source);
            Assert::AreEqual(expected, actual, "Verify AST matches expected.");
        }
    };
}
