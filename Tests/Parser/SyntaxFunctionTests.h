#pragma once
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class SyntaxFunctionTests
    {
    public:
        // [Fact]
        void SimpleFunctionRegular()
        {
            auto source = std::string(
                "void Function(){}");

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
        void SimpleFunctionDefault()
        {
            auto source = std::string(
                "void Function() = default;");

            auto expected = TestUtils::CreateSingleDeclaration(
                std::make_shared<FunctionDefinition>(
                    std::make_shared<DeclarationSpecifierSequence>(
                        std::vector<std::shared_ptr<SyntaxNode>>
                        {
                            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Void),
                        }),
                    std::make_shared<Identifier>("Function"),
                    nullptr,
                    std::make_shared<DefaultFunctionBody>()));

            auto actual = TestUtils::GenerateAST(source);
            Assert::AreEqual(expected, actual, "Verify AST matches expected.");
        }

        // [Fact]
        void SimpleFunctionDelete()
        {
            auto source = std::string(
                "void Function() = delete;");

            auto expected = TestUtils::CreateSingleDeclaration(
                std::make_shared<FunctionDefinition>(
                    std::make_shared<DeclarationSpecifierSequence>(
                        std::vector<std::shared_ptr<SyntaxNode>>
                        {
                            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Void),
                        }),
                    std::make_shared<Identifier>("Function"),
                    nullptr,
                    std::make_shared<DeleteFunctionBody>()));

            auto actual = TestUtils::GenerateAST(source);
            Assert::AreEqual(expected, actual, "Verify AST matches expected.");
        }
    };
}
