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
                std::make_shared<const SyntaxList<InitializerDeclarator>>(
                    std::vector<std::shared_ptr<const InitializerDeclarator>>(
                    {
                        SyntaxFactory::CreateInitializerDeclarator(
                            SyntaxFactory::CreateSimpleNameExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                            nullptr),
                        SyntaxFactory::CreateInitializerDeclarator(
                            SyntaxFactory::CreateSimpleNameExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")),
                            nullptr),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>()));

            Assert::AreEqual(
                SyntaxNodeType::InitializerDeclaratorList,
                uut->GetType(),
                L"Verify has correct type.");
            Assert::AreEqual(
                *std::make_shared<const SyntaxList<InitializerDeclarator>>(
                    std::vector<std::shared_ptr<const InitializerDeclarator>>(
                    {
                        SyntaxFactory::CreateInitializerDeclarator(
                            SyntaxFactory::CreateSimpleNameExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                            nullptr),
                        SyntaxFactory::CreateInitializerDeclarator(
                            SyntaxFactory::CreateSimpleNameExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")),
                            nullptr),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                uut->GetItems(),
                L"Verify items match.");
        }

        // [[Fact]]
        void GetChildren()
        {
            // a, b
            auto uut = SyntaxFactory::CreateInitializerDeclaratorList(
                std::make_shared<const SyntaxList<InitializerDeclarator>>(
                    std::vector<std::shared_ptr<const InitializerDeclarator>>(
                    {
                        SyntaxFactory::CreateInitializerDeclarator(
                            SyntaxFactory::CreateSimpleNameExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                            nullptr),
                        SyntaxFactory::CreateInitializerDeclarator(
                            SyntaxFactory::CreateSimpleNameExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")),
                            nullptr),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    })));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(
                        SyntaxFactory::CreateInitializerDeclarator(
                            SyntaxFactory::CreateSimpleNameExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                            nullptr)),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)),
                    SyntaxNodeChild(
                        SyntaxFactory::CreateInitializerDeclarator(
                            SyntaxFactory::CreateSimpleNameExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")),
                            nullptr)),
                }),
                uut->GetChildren(),
                L"Verify children match.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            // a, b
            auto uut = SyntaxFactory::CreateInitializerDeclaratorList(
                std::make_shared<const SyntaxList<InitializerDeclarator>>(
                    std::vector<std::shared_ptr<const InitializerDeclarator>>(
                    {
                        SyntaxFactory::CreateInitializerDeclarator(
                            SyntaxFactory::CreateSimpleNameExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                            nullptr),
                        SyntaxFactory::CreateInitializerDeclarator(
                            SyntaxFactory::CreateSimpleNameExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")),
                            nullptr),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>()));

            TestUtils::AreEqual(
                SyntaxFactory::CreateInitializerDeclaratorList(
                    std::make_shared<const SyntaxList<InitializerDeclarator>>(
                        std::vector<std::shared_ptr<const InitializerDeclarator>>(
                        {
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleNameExpression(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                                nullptr),
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleNameExpression(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")),
                                nullptr),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>())),
                uut,
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualLessItems()
        {
            // a, b
            auto uut = SyntaxFactory::CreateInitializerDeclaratorList(
                std::make_shared<const SyntaxList<InitializerDeclarator>>(
                    std::vector<std::shared_ptr<const InitializerDeclarator>>(
                    {
                        SyntaxFactory::CreateInitializerDeclarator(
                            SyntaxFactory::CreateSimpleNameExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                            nullptr),
                        SyntaxFactory::CreateInitializerDeclarator(
                            SyntaxFactory::CreateSimpleNameExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")),
                            nullptr),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>()));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateInitializerDeclaratorList(
                    std::make_shared<const SyntaxList<InitializerDeclarator>>(
                        std::vector<std::shared_ptr<const InitializerDeclarator>>(
                        {
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleNameExpression(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"c")),
                                nullptr),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>())),
                uut,
                L"Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualWithItems()
        {
            // a, b
            auto uut = SyntaxFactory::CreateInitializerDeclaratorList(
                std::make_shared<const SyntaxList<InitializerDeclarator>>(
                    std::vector<std::shared_ptr<const InitializerDeclarator>>(
                    {
                        SyntaxFactory::CreateInitializerDeclarator(
                            SyntaxFactory::CreateSimpleNameExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                            nullptr),
                        SyntaxFactory::CreateInitializerDeclarator(
                            SyntaxFactory::CreateSimpleNameExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")),
                            nullptr),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>()));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateInitializerDeclaratorList(
                    std::make_shared<const SyntaxList<InitializerDeclarator>>(
                        std::vector<std::shared_ptr<const InitializerDeclarator>>(
                        {
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleNameExpression(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"c")),
                                nullptr),
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateSimpleNameExpression(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")),
                                nullptr),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>())),
                uut,
                L"Verify does not match.");
        }
    };
}
