#pragma once
#include "TestUtils.h"
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class ParseEnumDeclarationTests
    {
    public:
        [[Fact]]
        void SingleSimpleEnumDeclaration()
        {
            auto sourceCode = std::string("enum{}");
            auto expression = ParseEnumDeclaration(sourceCode);

            auto expected = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                nullptr,
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
                SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>({}, {}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

            TestUtils::AreEqual(
                expected,
                expression,
                "Verify identifier matches expected.");
        }

        [[Fact]]
        void SingleEnumClassSpecifier()
        {
            auto sourceCode = std::string("enum class MyEnum { Value1, Value2 }");
            auto expression = ParseEnumDeclaration(sourceCode);

            auto expected = SyntaxFactory::CreateEnumDeclaration(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
                SyntaxFactory::CreateKeywordToken(
                    SyntaxTokenType::Class,
                    {
                        SyntaxFactory::CreateTrivia(" ")
                    },
                    {}),
                SyntaxFactory::CreateUniqueToken(
                    SyntaxTokenType::Identifier,
                    "MyEnum",
                    {
                        SyntaxFactory::CreateTrivia(" ")
                    },
                    {}),
                SyntaxFactory::CreateKeywordToken(
                    SyntaxTokenType::OpenBrace,
                    {
                        SyntaxFactory::CreateTrivia(" ")
                    },
                    {}),
                SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                    {
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(
                                SyntaxTokenType::Identifier,
                                "Value1",
                                {
                                    SyntaxFactory::CreateTrivia(" ")
                                },
                                {})),
                        SyntaxFactory::CreateEnumeratorDefinition(
                            SyntaxFactory::CreateUniqueToken(
                                SyntaxTokenType::Identifier,
                                "Value2",
                                {
                                    SyntaxFactory::CreateTrivia(" ")
                                },
                                {})),
                    },
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    }),
                SyntaxFactory::CreateKeywordToken(
                    SyntaxTokenType::CloseBrace,
                    {
                        SyntaxFactory::CreateTrivia(" ")
                    },
                    {}));

            TestUtils::AreEqual(
                expected,
                expression,
                "Verify identifier matches expected.");
        }

    private:
        std::shared_ptr<const EnumDeclaration> ParseEnumDeclaration(std::string& sourceCode)
        {
            auto uut = TestUtils::BuildParser(sourceCode);
            auto context = uut.Parser->enumSpecifier();

            // Convert the the abstract syntax tree
            auto node = uut.Visitor->visit(context)
                .as<std::shared_ptr<const SyntaxNode>>();

            return std::dynamic_pointer_cast<const EnumDeclaration>(node);
        }
    };
}
