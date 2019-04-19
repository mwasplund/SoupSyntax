#pragma once
#include "TestUtils.h"
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class InnerTreeMemberDeclaratorListTests
    {
    public:
        [[Fact]]
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
                    {}));

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
                    {}),
                uut->GetItems(),
                "Verify items match.");
        }

        [[Fact]]
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
                    {}));

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
                        {})),
                uut,
                "Verify matches.");
        }

        [[Fact]]
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
                    {}));

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
                        {})),
                uut,
                "Verify does not match.");
        }

        [[Fact]]
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
                    {}));

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
                        {})),
                uut,
                "Verify does not match.");
        }
    };
}
