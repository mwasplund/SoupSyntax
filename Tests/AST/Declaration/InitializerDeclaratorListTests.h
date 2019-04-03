#pragma once
#include "TestUtils.h"
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class InitializerDeclaratorListTests
    {
    public:
        // [[Fact]]
        void InitializeSimple()
        {
            // a, b
            auto uut = SyntaxFactory::CreateInitializerDeclaratorList(
                std::make_shared<const SyntaxSeparatorList<InitializerDeclarator>>(
                    std::vector<std::shared_ptr<const InitializerDeclarator>>(
                    {
                        SyntaxFactory::CreateInitializerDeclarator(
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                            nullptr),
                        SyntaxFactory::CreateInitializerDeclarator(
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                            nullptr),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>()));

            Assert::AreEqual(
                SyntaxNodeType::InitializerDeclaratorList,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *std::make_shared<const SyntaxSeparatorList<InitializerDeclarator>>(
                    std::vector<std::shared_ptr<const InitializerDeclarator>>(
                    {
                        SyntaxFactory::CreateInitializerDeclarator(
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                            nullptr),
                        SyntaxFactory::CreateInitializerDeclarator(
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                            nullptr),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                uut->GetItems(),
                "Verify items match.");
        }

        // [[Fact]]
        void GetChildren()
        {
            // a, b
            auto uut = SyntaxFactory::CreateInitializerDeclaratorList(
                std::make_shared<const SyntaxSeparatorList<InitializerDeclarator>>(
                    std::vector<std::shared_ptr<const InitializerDeclarator>>(
                    {
                        SyntaxFactory::CreateInitializerDeclarator(
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                            nullptr),
                        SyntaxFactory::CreateInitializerDeclarator(
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                            nullptr),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    })));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(
                        SyntaxFactory::CreateInitializerDeclarator(
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                            nullptr)),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)),
                    SyntaxNodeChild(
                        SyntaxFactory::CreateInitializerDeclarator(
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                            nullptr)),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            // a, b
            auto uut = SyntaxFactory::CreateInitializerDeclaratorList(
                std::make_shared<const SyntaxSeparatorList<InitializerDeclarator>>(
                    std::vector<std::shared_ptr<const InitializerDeclarator>>(
                    {
                        SyntaxFactory::CreateInitializerDeclarator(
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                            nullptr),
                        SyntaxFactory::CreateInitializerDeclarator(
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                            nullptr),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>()));

            TestUtils::AreEqual(
                SyntaxFactory::CreateInitializerDeclaratorList(
                    std::make_shared<const SyntaxSeparatorList<InitializerDeclarator>>(
                        std::vector<std::shared_ptr<const InitializerDeclarator>>(
                        {
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                                nullptr),
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                                nullptr),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>())),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualLessItems()
        {
            // a, b
            auto uut = SyntaxFactory::CreateInitializerDeclaratorList(
                std::make_shared<const SyntaxSeparatorList<InitializerDeclarator>>(
                    std::vector<std::shared_ptr<const InitializerDeclarator>>(
                    {
                        SyntaxFactory::CreateInitializerDeclarator(
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                            nullptr),
                        SyntaxFactory::CreateInitializerDeclarator(
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                            nullptr),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>()));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateInitializerDeclaratorList(
                    std::make_shared<const SyntaxSeparatorList<InitializerDeclarator>>(
                        std::vector<std::shared_ptr<const InitializerDeclarator>>(
                        {
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c")),
                                nullptr),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>())),
                uut,
                "Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualWithItems()
        {
            // a, b
            auto uut = SyntaxFactory::CreateInitializerDeclaratorList(
                std::make_shared<const SyntaxSeparatorList<InitializerDeclarator>>(
                    std::vector<std::shared_ptr<const InitializerDeclarator>>(
                    {
                        SyntaxFactory::CreateInitializerDeclarator(
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                            nullptr),
                        SyntaxFactory::CreateInitializerDeclarator(
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                            nullptr),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>()));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateInitializerDeclaratorList(
                    std::make_shared<const SyntaxSeparatorList<InitializerDeclarator>>(
                        std::vector<std::shared_ptr<const InitializerDeclarator>>(
                        {
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c")),
                                nullptr),
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                                nullptr),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>())),
                uut,
                "Verify does not match.");
        }
    };
}
