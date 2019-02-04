#pragma once
#include "SoupAssert.h"
#include "TestUtils.h"

namespace Soup::Syntax::UnitTests
{
    class SyntaxVariableTests
    {
    public:
        // [[Fact]]
        void GlobalVariableDeclaration()
        {
            auto source = std::make_unique<antlr4::ANTLRInputStream>(
                "int GlobalVariable;");

            auto expected = TestUtils::CreateSingleDeclaration(
                std::make_shared<SimpleDefinition>(
                    std::make_shared<DeclarationSpecifierSequence>(
                        std::vector<std::shared_ptr<Node>>
                        {
                            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Int),
                        }),
                    std::make_shared<InitializerDeclaratorList>(
                        std::vector<std::shared_ptr<InitializerDeclarator>>
                        {
                            std::make_shared<InitializerDeclarator>(
                                std::make_shared<Identifier>("GlobalVariable"),
                                nullptr),
                        })));

            auto actual = TestUtils::GenerateAST(source.get());
            Assert::AreEqual(
                expected,
                actual,
                "Verify AST matches: \n" + expected->ToString() + "\n\n" + actual->ToString());
        }

        // [[Fact]]
        void GlobalVariableDeclarationInitializer()
        {
            auto source = std::make_unique<antlr4::ANTLRInputStream>(
                "int GlobalVariable = 1;");

            auto expected = TestUtils::CreateSingleDeclaration(
                std::make_shared<SimpleDefinition>(
                    std::make_shared<DeclarationSpecifierSequence>(
                        std::vector<std::shared_ptr<Node>>
                        {
                            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Int),
                        }),
                    std::make_shared<InitializerDeclaratorList>(
                        std::vector<std::shared_ptr<InitializerDeclarator>>
                        {
                            std::make_shared<InitializerDeclarator>(
                                std::make_shared<Identifier>("GlobalVariable"),
                                std::make_shared<IntegerLiteral>(1)),
                        })));

            auto actual = TestUtils::GenerateAST(source.get());
            Assert::AreEqual(
                expected,
                actual,
                "Verify AST matches: \n" + expected->ToString() + "\n\n" + actual->ToString());
        }

        // [[Theory]]
        // [[InlineData("char", PrimitiveDataType.Char)]]
        // [[InlineData("char16_t", PrimitiveDataType.Char16)]]
        // [[InlineData("char32_t", PrimitiveDataType.Char32)]]
        // [[InlineData("wchar_t", PrimitiveDataType.WChar)]]
        // [[InlineData("bool", PrimitiveDataType.Bool)]]
        // [[InlineData("short", PrimitiveDataType.Short)]]
        // [[InlineData("int", PrimitiveDataType.Int)]]
        // [[InlineData("long", PrimitiveDataType.Long)]]
        // [[InlineData("signed", PrimitiveDataType.Signed)]]
        // [[InlineData("unsigned", PrimitiveDataType.Unsigned)]
        // [[InlineData("float", PrimitiveDataType.Float)]]
        // [[InlineData("double", PrimitiveDataType.Double)]]
        // [[InlineData("void", PrimitiveDataType.Void)]]
        // [[InlineData("auto", PrimitiveDataType.Auto)]]
        void GlobalPrimitiveVariable(std::string typeString, PrimitiveDataType type)
        {
            auto globalType = typeString + " GlobalVariable = 1;";
            auto source = std::make_unique<antlr4::ANTLRInputStream>(globalType);

            auto expected = TestUtils::CreateSingleDeclaration(
                std::make_shared<SimpleDefinition>(
                    std::make_shared<DeclarationSpecifierSequence>(
                        std::vector<std::shared_ptr<Node>>
                        {
                            std::make_shared<PrimitiveDataTypeNode>(type),
                        }),
                    std::make_shared<InitializerDeclaratorList>(
                        std::vector<std::shared_ptr<InitializerDeclarator>>
                        {
                            std::make_shared<InitializerDeclarator>(
                                std::make_shared<Identifier>("GlobalVariable"),
                                std::make_shared<IntegerLiteral>(1)),
                        })));

            auto actual = TestUtils::GenerateAST(source.get());
            Assert::AreEqual(
                expected,
                actual,
                "Verify AST matches: \n" + expected->ToString() + "\n\n" + actual->ToString());
        }

        // [[Fact]]
        void GlobalTwoVariableDeclarationInitializer()
        {
            auto source = std::make_unique<antlr4::ANTLRInputStream>(
                "int GlobalVariable1 = 1, GlobalVariable2 = 2;");

            auto expected = TestUtils::CreateSingleDeclaration(
                std::make_shared<SimpleDefinition>(
                    std::make_shared<DeclarationSpecifierSequence>(
                        std::vector<std::shared_ptr<Node>>
                        {
                            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Int),
                        }),
                    std::make_shared<InitializerDeclaratorList>(
                        std::vector<std::shared_ptr<InitializerDeclarator>>
                        {
                            std::make_shared<InitializerDeclarator>(
                                std::make_shared<Identifier>("GlobalVariable1"),
                                std::make_shared<IntegerLiteral>(1)),
                            std::make_shared<InitializerDeclarator>(
                                std::make_shared<Identifier>("GlobalVariable2"),
                                std::make_shared<IntegerLiteral>(2)),
                        })));

            auto actual = TestUtils::GenerateAST(source.get());
            Assert::AreEqual(
                expected,
                actual,
                "Verify AST matches: \n" + expected->ToString() + "\n\n" + actual->ToString());
        }
    };
}