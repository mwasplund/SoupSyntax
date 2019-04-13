#pragma once
#include "TestUtils.h"
#include "../SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class MemberDeclaratorListTests
    {
    public:
        // [[Fact]]
        void InitializeSimple()
        {
            // a, b
            auto uut = SyntaxFactory::CreateMemberDeclaratorList(
                SyntaxFactory::CreateSyntaxSeparatorList<MemberDeclarator>(
                    std::vector<std::shared_ptr<const MemberDeclarator>>(
                    {
                        SyntaxFactory::CreateMemberDeclarator(
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                            nullptr),
                        SyntaxFactory::CreateMemberDeclarator(
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                            nullptr),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>()));

            Assert::AreEqual(
                SyntaxNodeType::MemberDeclaratorList,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateSyntaxSeparatorList<MemberDeclarator>(
                    std::vector<std::shared_ptr<const MemberDeclarator>>(
                    {
                        SyntaxFactory::CreateMemberDeclarator(
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                            nullptr),
                        SyntaxFactory::CreateMemberDeclarator(
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                            nullptr),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                uut->GetItems(),
                "Verify items match.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            // a, b
            auto uut = SyntaxFactory::CreateMemberDeclaratorList(
                SyntaxFactory::CreateSyntaxSeparatorList<MemberDeclarator>(
                    std::vector<std::shared_ptr<const MemberDeclarator>>(
                    {
                        SyntaxFactory::CreateMemberDeclarator(
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                            nullptr),
                        SyntaxFactory::CreateMemberDeclarator(
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                            nullptr),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>()));

            TestUtils::AreEqual(
                SyntaxFactory::CreateMemberDeclaratorList(
                    SyntaxFactory::CreateSyntaxSeparatorList<MemberDeclarator>(
                        std::vector<std::shared_ptr<const MemberDeclarator>>(
                        {
                            SyntaxFactory::CreateMemberDeclarator(
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                                nullptr),
                            SyntaxFactory::CreateMemberDeclarator(
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
            auto uut = SyntaxFactory::CreateMemberDeclaratorList(
                SyntaxFactory::CreateSyntaxSeparatorList<MemberDeclarator>(
                    std::vector<std::shared_ptr<const MemberDeclarator>>(
                    {
                        SyntaxFactory::CreateMemberDeclarator(
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                            nullptr),
                        SyntaxFactory::CreateMemberDeclarator(
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                            nullptr),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>()));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateMemberDeclaratorList(
                    SyntaxFactory::CreateSyntaxSeparatorList<MemberDeclarator>(
                        std::vector<std::shared_ptr<const MemberDeclarator>>(
                        {
                            SyntaxFactory::CreateMemberDeclarator(
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
            auto uut = SyntaxFactory::CreateMemberDeclaratorList(
                SyntaxFactory::CreateSyntaxSeparatorList<MemberDeclarator>(
                    std::vector<std::shared_ptr<const MemberDeclarator>>(
                    {
                        SyntaxFactory::CreateMemberDeclarator(
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                            nullptr),
                        SyntaxFactory::CreateMemberDeclarator(
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                            nullptr),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>()));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateMemberDeclaratorList(
                    SyntaxFactory::CreateSyntaxSeparatorList<MemberDeclarator>(
                        std::vector<std::shared_ptr<const MemberDeclarator>>(
                        {
                            SyntaxFactory::CreateMemberDeclarator(
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c")),
                                nullptr),
                            SyntaxFactory::CreateMemberDeclarator(
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
