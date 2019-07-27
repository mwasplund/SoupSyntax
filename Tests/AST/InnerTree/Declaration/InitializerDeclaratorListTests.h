#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class InnerTreeInitializerDeclaratorListTests
    {
    public:
        [[Fact]]
        void InitializeSimple()
        {
            // a, b
            auto uut = SyntaxFactory::CreateInitializerDeclaratorList(
                SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
                    {
                        SyntaxFactory::CreateInitializerDeclarator(
                            SyntaxFactory::CreateIdentifierExpression(
                                SyntaxFactory::CreateSimpleIdentifier(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
                            nullptr),
                        SyntaxFactory::CreateInitializerDeclarator(
                            SyntaxFactory::CreateIdentifierExpression(
                                SyntaxFactory::CreateSimpleIdentifier(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))),
                            nullptr),
                    },
                    {}));

            Assert::AreEqual(
                SyntaxNodeType::InitializerDeclaratorList,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
                    {
                        SyntaxFactory::CreateInitializerDeclarator(
                            SyntaxFactory::CreateIdentifierExpression(
                                SyntaxFactory::CreateSimpleIdentifier(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
                            nullptr),
                        SyntaxFactory::CreateInitializerDeclarator(
                            SyntaxFactory::CreateIdentifierExpression(
                                SyntaxFactory::CreateSimpleIdentifier(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))),
                            nullptr),
                    },
                    {}),
                uut->GetItems(),
                "Verify items match.");
        }

        [[Fact]]
        void OperatorEqual()
        {
            // a, b
            auto uut = SyntaxFactory::CreateInitializerDeclaratorList(
                SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
                    {
                        SyntaxFactory::CreateInitializerDeclarator(
                            SyntaxFactory::CreateIdentifierExpression(
                                SyntaxFactory::CreateSimpleIdentifier(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
                            nullptr),
                        SyntaxFactory::CreateInitializerDeclarator(
                            SyntaxFactory::CreateIdentifierExpression(
                                SyntaxFactory::CreateSimpleIdentifier(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))),
                            nullptr),
                    },
                    {}));

            TestUtils::AreEqual(
                SyntaxFactory::CreateInitializerDeclaratorList(
                    SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
                        {
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateIdentifierExpression(
                                    SyntaxFactory::CreateSimpleIdentifier(
                                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
                                nullptr),
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateIdentifierExpression(
                                    SyntaxFactory::CreateSimpleIdentifier(
                                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))),
                                nullptr),
                        },
                        {})),
                uut,
                "Verify matches.");
        }

        [[Fact]]
        void OperatorNotEqualLessItems()
        {
            // a, b
            auto uut = SyntaxFactory::CreateInitializerDeclaratorList(
                SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
                    {
                        SyntaxFactory::CreateInitializerDeclarator(
                            SyntaxFactory::CreateIdentifierExpression(
                                SyntaxFactory::CreateSimpleIdentifier(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
                            nullptr),
                        SyntaxFactory::CreateInitializerDeclarator(
                            SyntaxFactory::CreateIdentifierExpression(
                                SyntaxFactory::CreateSimpleIdentifier(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))),
                            nullptr),
                    },
                    {}));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateInitializerDeclaratorList(
                    SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
                        {
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateIdentifierExpression(
                                    SyntaxFactory::CreateSimpleIdentifier(
                                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c"))),
                                nullptr),
                        },
                        {})),
                uut,
                "Verify does not match.");
        }

        [[Fact]]
        void OperatorNotEqualWithItems()
        {
            // a, b
            auto uut = SyntaxFactory::CreateInitializerDeclaratorList(
                SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
                    {
                        SyntaxFactory::CreateInitializerDeclarator(
                            SyntaxFactory::CreateIdentifierExpression(
                                SyntaxFactory::CreateSimpleIdentifier(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
                            nullptr),
                        SyntaxFactory::CreateInitializerDeclarator(
                            SyntaxFactory::CreateIdentifierExpression(
                                SyntaxFactory::CreateSimpleIdentifier(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))),
                            nullptr),
                    },
                    {}));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateInitializerDeclaratorList(
                    SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
                        {
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateIdentifierExpression(
                                    SyntaxFactory::CreateSimpleIdentifier(
                                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c"))),
                                nullptr),
                            SyntaxFactory::CreateInitializerDeclarator(
                                SyntaxFactory::CreateIdentifierExpression(
                                    SyntaxFactory::CreateSimpleIdentifier(
                                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))),
                                nullptr),
                        },
                        {})),
                uut,
                "Verify does not match.");
        }
    };
}
