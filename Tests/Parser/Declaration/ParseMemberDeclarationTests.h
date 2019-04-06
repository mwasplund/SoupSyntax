#pragma once
#include "../../TestUtils.h"
#include "../../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class ParseMemberDeclarationTests
    {
    public:
        // [Fact]
        void SingleIntVariable()
        {
            auto sourceCode = std::string("int i;");
            auto actual = ParseMemberDeclaration(sourceCode);

            auto expected = SyntaxFactory::CreateMemberDeclaration(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
              SyntaxFactory::CreateMemberDeclaratorList(
                    std::make_shared<const SyntaxSeparatorList<MemberDeclarator>>(
                        std::vector<std::shared_ptr<const MemberDeclarator>>(
                        {
                            SyntaxFactory::CreateMemberDeclarator(
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(
                                        SyntaxTokenType::Identifier,
                                        "i",
                                        {
                                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                                        },
                                        {})),
                                nullptr),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>())),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void SingleClassVariable()
        {
            auto sourceCode = std::string("MyClass i;");
            auto actual = ParseMemberDeclaration(sourceCode);

            auto expected = SyntaxFactory::CreateMemberDeclaration(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"))),
                SyntaxFactory::CreateMemberDeclaratorList(
                    std::make_shared<const SyntaxSeparatorList<MemberDeclarator>>(
                        std::vector<std::shared_ptr<const MemberDeclarator>>(
                        {
                            SyntaxFactory::CreateMemberDeclarator(
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(
                                        SyntaxTokenType::Identifier,
                                        "i",
                                        {
                                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                                        },
                                        {})),
                                nullptr),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>())),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void SingleTemplateClassVariable()
        {
            auto sourceCode = std::string("std::vector<ClassA> value1;");
            auto actual = ParseMemberDeclaration(sourceCode);

            auto expected = SyntaxFactory::CreateMemberDeclaration(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreateQualifiedIdentifierExpression(
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "std")),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                        SyntaxFactory::CreateSimpleTemplateIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "vector"),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
                            std::make_shared<const SyntaxSeparatorList<Expression>>(
                                std::vector<std::shared_ptr<const Expression>>({
                                    SyntaxFactory::CreateSimpleIdentifierExpression(
                                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "ClassA")),
                                }),
                                std::vector<std::shared_ptr<const SyntaxToken>>({})),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan)))),
                SyntaxFactory::CreateMemberDeclaratorList(
                    std::make_shared<const SyntaxSeparatorList<MemberDeclarator>>(
                        std::vector<std::shared_ptr<const MemberDeclarator>>(
                        {
                            SyntaxFactory::CreateMemberDeclarator(
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(
                                        SyntaxTokenType::Identifier,
                                        "value1",
                                        {
                                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                                        },
                                        {})),
                                nullptr),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>())),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void SingleIntVariableWithInitializer()
        {
            auto sourceCode = std::string("int i = 0;");
            auto actual = ParseMemberDeclaration(sourceCode);

            auto expected = SyntaxFactory::CreateMemberDeclaration(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                SyntaxFactory::CreateMemberDeclaratorList(
                    std::make_shared<const SyntaxSeparatorList<MemberDeclarator>>(
                        std::vector<std::shared_ptr<const MemberDeclarator>>(
                        {
                            SyntaxFactory::CreateMemberDeclarator(
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(
                                        SyntaxTokenType::Identifier,
                                        "i",
                                        {
                                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                                        },
                                        {})),
                                SyntaxFactory::CreateValueEqualInitializer(
                                    SyntaxFactory::CreateKeywordToken(
                                        SyntaxTokenType::Equal,
                                        {
                                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                                        },
                                        {}),
                                    SyntaxFactory::CreateLiteralExpression(
                                        LiteralType::Integer,
                                        SyntaxFactory::CreateUniqueToken(
                                            SyntaxTokenType::IntegerLiteral,
                                            "0",
                                            {
                                                SyntaxFactory::CreateTrivia(" ", TextSpan()),
                                            },
                                            {})))),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>())),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void DoubleIntVariable()
        {
            auto sourceCode = std::string("int i, j;");
            auto actual = ParseMemberDeclaration(sourceCode);

            auto expected = SyntaxFactory::CreateMemberDeclaration(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                SyntaxFactory::CreateMemberDeclaratorList(
                    std::make_shared<const SyntaxSeparatorList<MemberDeclarator>>(
                        std::vector<std::shared_ptr<const MemberDeclarator>>(
                        {
                            SyntaxFactory::CreateMemberDeclarator(
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(
                                        SyntaxTokenType::Identifier,
                                        "i",
                                        {
                                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                                        },
                                        {})),
                                nullptr),
                            SyntaxFactory::CreateMemberDeclarator(
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(
                                        SyntaxTokenType::Identifier,
                                        "j",
                                        {
                                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                                        },
                                        {})),
                                nullptr),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>({
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        }))),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void DoubleIntVariableSingleWithInitializer()
        {
            auto sourceCode = std::string("int i = 0, j;");
            auto actual = ParseMemberDeclaration(sourceCode);

            auto expected = SyntaxFactory::CreateMemberDeclaration(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                SyntaxFactory::CreateMemberDeclaratorList(
                    std::make_shared<const SyntaxSeparatorList<MemberDeclarator>>(
                        std::vector<std::shared_ptr<const MemberDeclarator>>(
                        {
                            SyntaxFactory::CreateMemberDeclarator(
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(
                                        SyntaxTokenType::Identifier,
                                        "i",
                                        {
                                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                                        },
                                        {})),
                                SyntaxFactory::CreateValueEqualInitializer(
                                    SyntaxFactory::CreateKeywordToken(
                                        SyntaxTokenType::Equal,
                                        {
                                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                                        },
                                        {}),
                                    SyntaxFactory::CreateLiteralExpression(
                                        LiteralType::Integer,
                                        SyntaxFactory::CreateUniqueToken(
                                            SyntaxTokenType::IntegerLiteral,
                                            "0",
                                            {
                                                SyntaxFactory::CreateTrivia(" ", TextSpan()),
                                            },
                                            {})))),
                            SyntaxFactory::CreateMemberDeclarator(
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(
                                        SyntaxTokenType::Identifier,
                                        "j",
                                        {
                                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                                        },
                                        {})),
                                nullptr),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>({
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        }))),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void DoubleIntVariableBothWithInitializer()
        {
            auto sourceCode = std::string("int i = 0, j = 1;");
            auto actual = ParseMemberDeclaration(sourceCode);

            auto expected = SyntaxFactory::CreateMemberDeclaration(
                SyntaxFactory::CreateDeclarationSpecifier(
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
                SyntaxFactory::CreateMemberDeclaratorList(
                    std::make_shared<const SyntaxSeparatorList<MemberDeclarator>>(
                        std::vector<std::shared_ptr<const MemberDeclarator>>(
                        {
                            SyntaxFactory::CreateMemberDeclarator(
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(
                                        SyntaxTokenType::Identifier,
                                        "i",
                                        {
                                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                                        },
                                        {})),
                                SyntaxFactory::CreateValueEqualInitializer(
                                    SyntaxFactory::CreateKeywordToken(
                                        SyntaxTokenType::Equal,
                                        {
                                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                                        },
                                        {}),
                                    SyntaxFactory::CreateLiteralExpression(
                                        LiteralType::Integer,
                                        SyntaxFactory::CreateUniqueToken(
                                            SyntaxTokenType::IntegerLiteral,
                                            "0",
                                            {
                                                SyntaxFactory::CreateTrivia(" ", TextSpan()),
                                            },
                                            {})))),
                            SyntaxFactory::CreateMemberDeclarator(
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(
                                        SyntaxTokenType::Identifier,
                                        "j",
                                        {
                                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                                        },
                                        {})),
                                SyntaxFactory::CreateValueEqualInitializer(
                                    SyntaxFactory::CreateKeywordToken(
                                        SyntaxTokenType::Equal,
                                        {
                                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                                        },
                                        {}),
                                    SyntaxFactory::CreateLiteralExpression(
                                        LiteralType::Integer,
                                        SyntaxFactory::CreateUniqueToken(
                                            SyntaxTokenType::IntegerLiteral,
                                            "1",
                                            {
                                                SyntaxFactory::CreateTrivia(" ", TextSpan()),
                                            },
                                            {})))),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>({
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        }))),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void SingleIntLeadingAndTrailingModifierVariable()
        {
            auto sourceCode = std::string("static int constexpr i;");
            auto actual = ParseMemberDeclaration(sourceCode);

            auto expected = SyntaxFactory::CreateMemberDeclaration(
                SyntaxFactory::CreateDeclarationSpecifier(
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
                    },
                    SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                        PrimitiveDataType::Int,
                        SyntaxFactory::CreateKeywordToken(
                            SyntaxTokenType::Int,
                            {
                                SyntaxFactory::CreateTrivia(" ", TextSpan()),
                            },
                            {})),
                    {
                        SyntaxFactory::CreateKeywordToken(
                            SyntaxTokenType::ConstExpr,
                            {
                                SyntaxFactory::CreateTrivia(" ", TextSpan()),
                            },
                            {}),
                    }),
                SyntaxFactory::CreateMemberDeclaratorList(
                    std::make_shared<const SyntaxSeparatorList<MemberDeclarator>>(
                        std::vector<std::shared_ptr<const MemberDeclarator>>(
                        {
                            SyntaxFactory::CreateMemberDeclarator(
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(
                                        SyntaxTokenType::Identifier,
                                        "i",
                                        {
                                            SyntaxFactory::CreateTrivia(" ", TextSpan()),
                                        },
                                        {})),
                                nullptr),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>())),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

    private:
        std::shared_ptr<const SyntaxNode> ParseMemberDeclaration(std::string& sourceCode)
        {
            auto uut = TestUtils::BuildParser(sourceCode);
            auto context = uut.Parser->memberDeclaration();

            // Convert the the abstract syntax tree
            auto node = uut.Visitor->visit(context)
                .as<std::shared_ptr<const SyntaxNode>>();

            return node;
        }
    };
}
