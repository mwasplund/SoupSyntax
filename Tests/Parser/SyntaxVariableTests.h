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
                        std::vector<std::shared_ptr<const SyntaxNode>>
                        {
                            std::make_shared<PrimitiveDataTypeNode>(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                        }),
                    std::make_shared<InitializerDeclaratorList>(
                        std::vector<std::shared_ptr<const InitializerDeclarator>>
                        {
                            std::make_shared<InitializerDeclarator>(
                                SyntaxFactory::CreateSimpleNameExpression(
                                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"GlobalVariable")),
                                nullptr),
                        })));

            auto actual = TestUtils::GenerateAST(source);

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [[Fact]]
        void GlobalVariableDeclarationInitializer()
        {
            auto source = std::string(
                "int GlobalVariable = 1;");

            auto expected = TestUtils::CreateSingleDeclaration(
                std::make_shared<SimpleDefinition>(
                    std::make_shared<DeclarationSpecifierSequence>(
                        std::vector<std::shared_ptr<const SyntaxNode>>
                        {
                            std::make_shared<PrimitiveDataTypeNode>(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                        }),
                    std::make_shared<InitializerDeclaratorList>(
                        std::vector<std::shared_ptr<const InitializerDeclarator>>
                        {
                            std::make_shared<InitializerDeclarator>(
                                SyntaxFactory::CreateSimpleNameExpression(
                                    SyntaxFactory::CreateToken(
                                        SyntaxTokenType::Identifier,
                                        L"GlobalVariable",
                                        {
                                            SyntaxFactory::CreateTrivia(L" ", TextSpan())
                                        },
                                        {})),
                                SyntaxFactory::CreateLiteralExpression(
                                    LiteralType::Integer,
                                    SyntaxFactory::CreateToken(
                                        SyntaxTokenType::IntegerLiteral,
                                        L"1",
                                        {
                                            SyntaxFactory::CreateTrivia(L" ", TextSpan())
                                        },
                                        {}))),
                        })));

            auto actual = TestUtils::GenerateAST(source);

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
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
        void GlobalPrimitiveVariable(std::string typeString, PrimitiveDataType type, SyntaxTokenType tokenType)
        {
            auto globalType = typeString + " GlobalVariable = 1;";

            auto expected = TestUtils::CreateSingleDeclaration(
                std::make_shared<SimpleDefinition>(
                    std::make_shared<DeclarationSpecifierSequence>(
                        std::vector<std::shared_ptr<const SyntaxNode>>
                        {
                            std::make_shared<PrimitiveDataTypeNode>(
                                type,
                                SyntaxFactory::CreateToken(tokenType, Convert(typeString))),
                        }),
                    std::make_shared<InitializerDeclaratorList>(
                        std::vector<std::shared_ptr<const InitializerDeclarator>>
                        {
                            std::make_shared<InitializerDeclarator>(
                                SyntaxFactory::CreateSimpleNameExpression(
                                    SyntaxFactory::CreateToken(
                                        SyntaxTokenType::Identifier,
                                        L"GlobalVariable",
                                        {
                                            SyntaxFactory::CreateTrivia(L" ", TextSpan())
                                        },
                                        {})),
                                SyntaxFactory::CreateLiteralExpression(
                                    LiteralType::Integer,
                                    SyntaxFactory::CreateToken(
                                        SyntaxTokenType::IntegerLiteral,
                                        L"1",
                                        {
                                            SyntaxFactory::CreateTrivia(L" ", TextSpan())
                                        },
                                        {}))),
                        })));

            auto actual = TestUtils::GenerateAST(globalType);

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [[Fact]]
        void GlobalTwoVariableDeclarationInitializer()
        {
            auto source = std::string(
                "int GlobalVariable1 = 1, GlobalVariable2 = 2;");

            auto expected = TestUtils::CreateSingleDeclaration(
                std::make_shared<SimpleDefinition>(
                    std::make_shared<DeclarationSpecifierSequence>(
                        std::vector<std::shared_ptr<const SyntaxNode>>
                        {
                            std::make_shared<PrimitiveDataTypeNode>(
                                PrimitiveDataType::Int,
                                SyntaxFactory::CreateToken(SyntaxTokenType::Int, L"int")),
                        }),
                    std::make_shared<InitializerDeclaratorList>(
                        std::vector<std::shared_ptr<const InitializerDeclarator>>
                        {
                            std::make_shared<InitializerDeclarator>(
                                SyntaxFactory::CreateSimpleNameExpression(
                                    SyntaxFactory::CreateToken(
                                        SyntaxTokenType::Identifier,
                                        L"GlobalVariable1",
                                        {
                                            SyntaxFactory::CreateTrivia(L" ", TextSpan())
                                        },
                                        {})),
                                SyntaxFactory::CreateLiteralExpression(
                                    LiteralType::Integer,
                                    SyntaxFactory::CreateToken(
                                        SyntaxTokenType::IntegerLiteral,
                                        L"1",
                                        {
                                            SyntaxFactory::CreateTrivia(L" ", TextSpan())
                                        },
                                        {}))),
                            std::make_shared<InitializerDeclarator>(
                                SyntaxFactory::CreateSimpleNameExpression(
                                    SyntaxFactory::CreateToken(
                                        SyntaxTokenType::Identifier,
                                        L"GlobalVariable2",
                                        {
                                            SyntaxFactory::CreateTrivia(L" ", TextSpan())
                                        },
                                        {})),
                                SyntaxFactory::CreateLiteralExpression(
                                    LiteralType::Integer,
                                    SyntaxFactory::CreateToken(
                                        SyntaxTokenType::IntegerLiteral,
                                        L"2",
                                        {
                                            SyntaxFactory::CreateTrivia(L" ", TextSpan())
                                        },
                                        {}))),
                        })));

            auto actual = TestUtils::GenerateAST(source);

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

    private:
        std::wstring Convert(const std::string& value)
        {
            // Convert the token text to wide characters
            std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
            return converter.from_bytes(value);
        }

    };
}
