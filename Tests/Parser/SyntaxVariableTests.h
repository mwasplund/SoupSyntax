#pragma once
#include "../SoupAssert.h"
#include "../TestUtils.h"

namespace Soup::Syntax::UnitTests
{
    class SyntaxVariableTests
    {
    public:
        // [[Fact]]
        void GlobalVariableDeclaration()
        {
            auto source = std::string(
                "int GlobalVariable;");

            auto expected = TestUtils::CreateSingleDeclaration(
                std::make_shared<SimpleDefinition>(
                    std::make_shared<DeclarationSpecifierSequence>(
                        std::vector<std::shared_ptr<SyntaxNode>>
                        {
                            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Int),
                        }),
                    std::make_shared<InitializerDeclaratorList>(
                        std::vector<std::shared_ptr<InitializerDeclarator>>
                        {
                            std::make_shared<InitializerDeclarator>(
                                std::make_shared<SimpleNameExpression>("GlobalVariable"),
                                nullptr),
                        })));

            auto actual = TestUtils::GenerateAST(source);
            Assert::AreEqual(
                expected,
                actual,
                "Verify AST matches: \n" + expected->ToString() + "\n\n" + actual->ToString());
        }

        // [[Fact]]
        void GlobalVariableDeclarationInitializer()
        {
            auto source = std::string(
                "int GlobalVariable = 1;");

            auto expected = TestUtils::CreateSingleDeclaration(
                std::make_shared<SimpleDefinition>(
                    std::make_shared<DeclarationSpecifierSequence>(
                        std::vector<std::shared_ptr<SyntaxNode>>
                        {
                            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Int),
                        }),
                    std::make_shared<InitializerDeclaratorList>(
                        std::vector<std::shared_ptr<InitializerDeclarator>>
                        {
                            std::make_shared<InitializerDeclarator>(
                                std::make_shared<SimpleNameExpression>("GlobalVariable"),
                                std::make_shared<LiteralExpression>(LiteralType::Integer, "1")),
                        })));

            auto actual = TestUtils::GenerateAST(source);
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

            auto expected = TestUtils::CreateSingleDeclaration(
                std::make_shared<SimpleDefinition>(
                    std::make_shared<DeclarationSpecifierSequence>(
                        std::vector<std::shared_ptr<SyntaxNode>>
                        {
                            std::make_shared<PrimitiveDataTypeNode>(type),
                        }),
                    std::make_shared<InitializerDeclaratorList>(
                        std::vector<std::shared_ptr<InitializerDeclarator>>
                        {
                            std::make_shared<InitializerDeclarator>(
                                std::make_shared<SimpleNameExpression>("GlobalVariable"),
                                std::make_shared<LiteralExpression>(LiteralType::Integer, "1")),
                        })));

            auto actual = TestUtils::GenerateAST(globalType);
            Assert::AreEqual(
                expected,
                actual,
                "Verify AST matches: \n" + expected->ToString() + "\n\n" + actual->ToString());
        }

        // [[Fact]]
        void GlobalTwoVariableDeclarationInitializer()
        {
            auto source = std::string(
                "int GlobalVariable1 = 1, GlobalVariable2 = 2;");

            auto expected = TestUtils::CreateSingleDeclaration(
                std::make_shared<SimpleDefinition>(
                    std::make_shared<DeclarationSpecifierSequence>(
                        std::vector<std::shared_ptr<SyntaxNode>>
                        {
                            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Int),
                        }),
                    std::make_shared<InitializerDeclaratorList>(
                        std::vector<std::shared_ptr<InitializerDeclarator>>
                        {
                            std::make_shared<InitializerDeclarator>(
                                std::make_shared<SimpleNameExpression>("GlobalVariable1"),
                                std::make_shared<LiteralExpression>(LiteralType::Integer, "1")),
                            std::make_shared<InitializerDeclarator>(
                                std::make_shared<SimpleNameExpression>("GlobalVariable2"),
                                std::make_shared<LiteralExpression>(LiteralType::Integer, "2")),
                        })));

            auto actual = TestUtils::GenerateAST(source);
            Assert::AreEqual(
                expected,
                actual,
                "Verify AST matches: \n" + expected->ToString() + "\n\n" + actual->ToString());
        }
    };
}
