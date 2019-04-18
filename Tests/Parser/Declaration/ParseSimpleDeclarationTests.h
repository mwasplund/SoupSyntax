#pragma once
#include "TestUtils.h"
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class ParseSimpleDeclarationTests
    {
    public:
        // [Fact]
        void SingleIntVariable()
        {
            auto sourceCode = std::string("int i;");
            auto actual = ParseSimpleDeclaration(sourceCode);

            auto expected = SyntaxFactory::CreateSimpleDeclaration(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                SyntaxFactory::CreateInitializerDeclaratorList(
                    SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
                        {
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(
                                        SyntaxTokenType::Identifier,
                                        "i",
                                        {
                                            SyntaxFactory::CreateTrivia(" "),
                                        },
                                        {})),
                                nullptr),
                        },
                        {})),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void SingleClassVariable()
        {
            auto sourceCode = std::string("MyClass i;");
            auto actual = ParseSimpleDeclaration(sourceCode);

            auto expected = SyntaxFactory::CreateSimpleDeclaration(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"))),
                SyntaxFactory::CreateInitializerDeclaratorList(
                    SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
                        {
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(
                                        SyntaxTokenType::Identifier,
                                        "i",
                                        {
                                            SyntaxFactory::CreateTrivia(" "),
                                        },
                                        {})),
                                nullptr),
                        },
                        {})),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void SingleTemplateClassVariable()
        {
            auto sourceCode = std::string("std::vector<ClassA> value1;");
            auto actual = ParseSimpleDeclaration(sourceCode);

            auto expected = SyntaxFactory::CreateSimpleDeclaration(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreateQualifiedIdentifierExpression(
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "std")),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                        SyntaxFactory::CreateSimpleTemplateIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "vector"),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
                            SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                                {
                                    SyntaxFactory::CreateSimpleIdentifierExpression(
                                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "ClassA")),
                                },
                                {}),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan)))),
                SyntaxFactory::CreateInitializerDeclaratorList(
                    SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
                        {
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(
                                        SyntaxTokenType::Identifier,
                                        "value1",
                                        {
                                            SyntaxFactory::CreateTrivia(" "),
                                        },
                                        {})),
                                nullptr),
                        },
                        {})),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void SingleIntVariableWithInitializer()
        {
            auto sourceCode = std::string("int i = 0;");
            auto actual = ParseSimpleDeclaration(sourceCode);

            auto expected = SyntaxFactory::CreateSimpleDeclaration(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                SyntaxFactory::CreateInitializerDeclaratorList(
                    SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
                        {
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(
                                        SyntaxTokenType::Identifier,
                                        "i",
                                        {
                                            SyntaxFactory::CreateTrivia(" "),
                                        },
                                        {})),
                                SyntaxFactory::CreateValueEqualInitializer(
                                    SyntaxFactory::CreateKeywordToken(
                                        SyntaxTokenType::Equal,
                                        {
                                            SyntaxFactory::CreateTrivia(" "),
                                        },
                                        {}),
                                    SyntaxFactory::CreateLiteralExpression(
                                        LiteralType::Integer,
                                        SyntaxFactory::CreateUniqueToken(
                                            SyntaxTokenType::IntegerLiteral,
                                            "0",
                                            {
                                                SyntaxFactory::CreateTrivia(" "),
                                            },
                                            {})))),
                        },
                        {})),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void DoubleIntVariable()
        {
            auto sourceCode = std::string("int i, j;");
            auto actual = ParseSimpleDeclaration(sourceCode);

            auto expected = SyntaxFactory::CreateSimpleDeclaration(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                SyntaxFactory::CreateInitializerDeclaratorList(
                    SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
                        {
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(
                                        SyntaxTokenType::Identifier,
                                        "i",
                                        {
                                            SyntaxFactory::CreateTrivia(" "),
                                        },
                                        {})),
                                nullptr),
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(
                                        SyntaxTokenType::Identifier,
                                        "j",
                                        {
                                            SyntaxFactory::CreateTrivia(" "),
                                        },
                                        {})),
                                nullptr),
                        },
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void DoubleIntVariableSingleWithInitializer()
        {
            auto sourceCode = std::string("int i = 0, j;");
            auto actual = ParseSimpleDeclaration(sourceCode);

            auto expected = SyntaxFactory::CreateSimpleDeclaration(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                SyntaxFactory::CreateInitializerDeclaratorList(
                    SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
                        {
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(
                                        SyntaxTokenType::Identifier,
                                        "i",
                                        {
                                            SyntaxFactory::CreateTrivia(" "),
                                        },
                                        {})),
                                SyntaxFactory::CreateValueEqualInitializer(
                                    SyntaxFactory::CreateKeywordToken(
                                        SyntaxTokenType::Equal,
                                        {
                                            SyntaxFactory::CreateTrivia(" "),
                                        },
                                        {}),
                                    SyntaxFactory::CreateLiteralExpression(
                                        LiteralType::Integer,
                                        SyntaxFactory::CreateUniqueToken(
                                            SyntaxTokenType::IntegerLiteral,
                                            "0",
                                            {
                                                SyntaxFactory::CreateTrivia(" "),
                                            },
                                            {})))),
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(
                                        SyntaxTokenType::Identifier,
                                        "j",
                                        {
                                            SyntaxFactory::CreateTrivia(" "),
                                        },
                                        {})),
                                nullptr),
                        },
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void DoubleIntVariableBothWithInitializer()
        {
            auto sourceCode = std::string("int i = 0, j = 1;");
            auto actual = ParseSimpleDeclaration(sourceCode);

            auto expected = SyntaxFactory::CreateSimpleDeclaration(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                SyntaxFactory::CreateInitializerDeclaratorList(
                    SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
                        {
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(
                                        SyntaxTokenType::Identifier,
                                        "i",
                                        {
                                            SyntaxFactory::CreateTrivia(" "),
                                        },
                                        {})),
                                SyntaxFactory::CreateValueEqualInitializer(
                                    SyntaxFactory::CreateKeywordToken(
                                        SyntaxTokenType::Equal,
                                        {
                                            SyntaxFactory::CreateTrivia(" "),
                                        },
                                        {}),
                                    SyntaxFactory::CreateLiteralExpression(
                                        LiteralType::Integer,
                                        SyntaxFactory::CreateUniqueToken(
                                            SyntaxTokenType::IntegerLiteral,
                                            "0",
                                            {
                                                SyntaxFactory::CreateTrivia(" "),
                                            },
                                            {})))),
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(
                                        SyntaxTokenType::Identifier,
                                        "j",
                                        {
                                            SyntaxFactory::CreateTrivia(" "),
                                        },
                                        {})),
                                SyntaxFactory::CreateValueEqualInitializer(
                                    SyntaxFactory::CreateKeywordToken(
                                        SyntaxTokenType::Equal,
                                        {
                                            SyntaxFactory::CreateTrivia(" "),
                                        },
                                        {}),
                                    SyntaxFactory::CreateLiteralExpression(
                                        LiteralType::Integer,
                                        SyntaxFactory::CreateUniqueToken(
                                            SyntaxTokenType::IntegerLiteral,
                                            "1",
                                            {
                                                SyntaxFactory::CreateTrivia(" "),
                                            },
                                            {})))),
                        },
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void SingleIntLeadingAndTrailingModifierVariable()
        {
            auto sourceCode = std::string("static int constexpr i;");
            auto actual = ParseSimpleDeclaration(sourceCode);

            auto expected = SyntaxFactory::CreateSimpleDeclaration(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreateSyntaxList<SyntaxToken>(
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
                    }),
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(
                            SyntaxTokenType::Int,
                            {
                                SyntaxFactory::CreateTrivia(" "),
                            },
                            {})),
                    SyntaxFactory::CreateSyntaxList<SyntaxToken>(
                    {
                        SyntaxFactory::CreateKeywordToken(
                            SyntaxTokenType::ConstExpr,
                            {
                                SyntaxFactory::CreateTrivia(" "),
                            },
                            {}),
                    })),
                SyntaxFactory::CreateInitializerDeclaratorList(
                    SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
                        {
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(
                                        SyntaxTokenType::Identifier,
                                        "i",
                                        {
                                            SyntaxFactory::CreateTrivia(" "),
                                        },
                                        {})),
                                nullptr),
                        },
                        {})),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void SingleTemplateOfTemplateVariable()
        {
            auto sourceCode = std::string("std::vector<std::shared_ptr<Attribute>> values;");
            auto actual = ParseSimpleDeclaration(sourceCode);

            auto expected = SyntaxFactory::CreateSimpleDeclaration(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreateQualifiedIdentifierExpression(
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "std")),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                        SyntaxFactory::CreateSimpleTemplateIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "vector"),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
                            SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                                {
                                    SyntaxFactory::CreateQualifiedIdentifierExpression(
                                        SyntaxFactory::CreateSimpleIdentifierExpression(
                                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "std")),
                                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                                        SyntaxFactory::CreateSimpleTemplateIdentifierExpression(
                                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "shared_ptr"),
                                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
                                            SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                                                {
                                                    SyntaxFactory::CreateSimpleIdentifierExpression(
                                                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Attribute")),
                                                },
                                                {}),
                                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan))),
                                },
                                {}),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan)))),
                SyntaxFactory::CreateInitializerDeclaratorList(
                    SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
                        {
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(
                                        SyntaxTokenType::Identifier,
                                        "values",
                                        {
                                            SyntaxFactory::CreateTrivia(" "),
                                        },
                                        {})),
                                nullptr),
                        },
                        {})),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void SingleTemplateWithInitializerList()
        {
            auto sourceCode = std::string("std::vector<int> values = {1,2,};");
            auto actual = ParseSimpleDeclaration(sourceCode);

            auto expected = SyntaxFactory::CreateSimpleDeclaration(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreateQualifiedIdentifierExpression(
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "std")),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                        SyntaxFactory::CreateSimpleTemplateIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "vector"),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
                            SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                                {
                                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                                        PrimitiveDataType::Int,
                                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
                                },
                                {}),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan)))),
                SyntaxFactory::CreateInitializerDeclaratorList(
                    SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
                        {
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(
                                        SyntaxTokenType::Identifier,
                                        "values",
                                        {
                                            SyntaxFactory::CreateTrivia(" "),
                                        },
                                        {})),
                                SyntaxFactory::CreateValueEqualInitializer(
                                    SyntaxFactory::CreateKeywordToken(
                                        SyntaxTokenType::Equal,
                                        {
                                            SyntaxFactory::CreateTrivia(" "),
                                        },
                                        {}),
                                    SyntaxFactory::CreateInitializerList(
                                        SyntaxFactory::CreateKeywordToken(
                                            SyntaxTokenType::OpenBrace,
                                            {
                                                SyntaxFactory::CreateTrivia(" "),
                                            },
                                            {}),
                                        SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                                            {
                                                SyntaxFactory::CreateLiteralExpression(
                                                    LiteralType::Integer,
                                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")),
                                                SyntaxFactory::CreateLiteralExpression(
                                                    LiteralType::Integer,
                                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
                                            },
                                            {
                                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                                            }),
                                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)))),
                        },
                        {})),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

    private:
        std::shared_ptr<const SimpleDeclaration> ParseSimpleDeclaration(std::string& sourceCode)
        {
            auto uut = TestUtils::BuildParser(sourceCode);
            auto context = uut.Parser->simpleDeclaration();

            // Convert the the abstract syntax tree
            auto node = uut.Visitor->visit(context)
                .as<std::shared_ptr<const SyntaxNode>>();

            return std::dynamic_pointer_cast<const SimpleDeclaration>(node);
        }
    };
}
