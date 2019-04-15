#pragma once
#include "TestUtils.h"
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class OuterTreeInitializerDeclaratorListTests
    {
    public:
        // [[Fact]]
        void InitializeSimple()
        {
            // a, b
            auto uut = SyntaxFactory::CreateInitializerDeclaratorList(
                SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
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
                    std::vector<std::shared_ptr<const SyntaxToken>>()))->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::InitializerDeclaratorList,
                uut->GetType(),
                "Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
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
                SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
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
                    })))->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>({
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateInitializerDeclarator(
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                            nullptr)),
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)),
                    TestUtils::CreateChild(
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
                SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
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
                    std::vector<std::shared_ptr<const SyntaxToken>>()))->CreateOuter(nullptr);

            TestUtils::AreEqual(
                SyntaxFactory::CreateInitializerDeclaratorList(
                    SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
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
                SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
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
                    std::vector<std::shared_ptr<const SyntaxToken>>()))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateInitializerDeclaratorList(
                    SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
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
                SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
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
                    std::vector<std::shared_ptr<const SyntaxToken>>()))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateInitializerDeclaratorList(
                    SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
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
