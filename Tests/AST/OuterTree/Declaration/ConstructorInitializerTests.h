#pragma once
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class OuterTreeConstructorInitializerTests
    {
    public:
        // [[Fact]]
        void InitializeSimple()
        {
            // : a()
            auto uut = SyntaxFactory::CreateConstructorInitializer(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon),
                SyntaxFactory::CreateSyntaxSeparatorList<MemberInitializer>(
                    std::vector<std::shared_ptr<const MemberInitializer>>({
                        SyntaxFactory::CreateMemberInitializer(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"),
                            SyntaxFactory::CreateInitializerList(
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                                    std::vector<std::shared_ptr<const Expression>>(),
                                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))), 
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>()))->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::ConstructorInitializer,
                uut->GetType(),
                "Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon),
                uut->GetColonToken(),
                "Verify colon token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSyntaxSeparatorList<MemberInitializer>(
                    std::vector<std::shared_ptr<const MemberInitializer>>({
                        SyntaxFactory::CreateMemberInitializer(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"),
                            SyntaxFactory::CreateInitializerList(
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                                    std::vector<std::shared_ptr<const Expression>>(),
                                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))), 
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                uut->GetInitializers(),
                "Verify initializers list matches.");
        }

        // [[Fact]]
        void InitializeComplex()
        {
            // : a(), b()
            auto uut = SyntaxFactory::CreateConstructorInitializer(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon),
                SyntaxFactory::CreateSyntaxSeparatorList<MemberInitializer>(
                    std::vector<std::shared_ptr<const MemberInitializer>>({
                        SyntaxFactory::CreateMemberInitializer(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"),
                            SyntaxFactory::CreateInitializerList(
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                                    std::vector<std::shared_ptr<const Expression>>(),
                                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))),
                        SyntaxFactory::CreateMemberInitializer(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"),
                            SyntaxFactory::CreateInitializerList(
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                                    std::vector<std::shared_ptr<const Expression>>(),
                                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))), 
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                    })))->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::ConstructorInitializer,
                uut->GetType(),
                "Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon),
                uut->GetColonToken(),
                "Verify colon token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSyntaxSeparatorList<MemberInitializer>(
                    std::vector<std::shared_ptr<const MemberInitializer>>({
                        SyntaxFactory::CreateMemberInitializer(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"),
                            SyntaxFactory::CreateInitializerList(
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                                    std::vector<std::shared_ptr<const Expression>>(),
                                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))),
                        SyntaxFactory::CreateMemberInitializer(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"),
                            SyntaxFactory::CreateInitializerList(
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                                    std::vector<std::shared_ptr<const Expression>>(),
                                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))), 
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                    })),
                uut->GetInitializers(),
                "Verify initializers list matches.");
        }

        // [[Fact]]
        void GetChildrenSimple()
        {
            // : a(), b()
            auto uut = SyntaxFactory::CreateConstructorInitializer(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon),
                SyntaxFactory::CreateSyntaxSeparatorList<MemberInitializer>(
                    std::vector<std::shared_ptr<const MemberInitializer>>({
                        SyntaxFactory::CreateMemberInitializer(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"),
                            SyntaxFactory::CreateInitializerList(
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                                    std::vector<std::shared_ptr<const Expression>>(),
                                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>()))->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>({
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon)),
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateMemberInitializer(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"),
                            SyntaxFactory::CreateInitializerList(
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                                    std::vector<std::shared_ptr<const Expression>>(),
                                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)))),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void GetChildrenComplex()
        {
            // : a(), b()
            auto uut = SyntaxFactory::CreateConstructorInitializer(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon),
                SyntaxFactory::CreateSyntaxSeparatorList<MemberInitializer>(
                    std::vector<std::shared_ptr<const MemberInitializer>>({
                        SyntaxFactory::CreateMemberInitializer(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"),
                            SyntaxFactory::CreateInitializerList(
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                                    std::vector<std::shared_ptr<const Expression>>(),
                                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))),
                        SyntaxFactory::CreateMemberInitializer(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"),
                            SyntaxFactory::CreateInitializerList(
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                                    std::vector<std::shared_ptr<const Expression>>(),
                                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))), 
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    })))->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>({
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon)),
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateMemberInitializer(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"),
                            SyntaxFactory::CreateInitializerList(
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                                    std::vector<std::shared_ptr<const Expression>>(),
                                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)))),
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)),
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateMemberInitializer(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"),
                            SyntaxFactory::CreateInitializerList(
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                                    std::vector<std::shared_ptr<const Expression>>(),
                                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)))),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            // : a(), b()
            auto uut = SyntaxFactory::CreateConstructorInitializer(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon),
                SyntaxFactory::CreateSyntaxSeparatorList<MemberInitializer>(
                    std::vector<std::shared_ptr<const MemberInitializer>>({
                        SyntaxFactory::CreateMemberInitializer(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"),
                            SyntaxFactory::CreateInitializerList(
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                                    std::vector<std::shared_ptr<const Expression>>(),
                                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))),
                        SyntaxFactory::CreateMemberInitializer(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"),
                            SyntaxFactory::CreateInitializerList(
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                                    std::vector<std::shared_ptr<const Expression>>(),
                                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))), 
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    })))->CreateOuter(nullptr);

            TestUtils::AreEqual(
                SyntaxFactory::CreateConstructorInitializer(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon),
                    SyntaxFactory::CreateSyntaxSeparatorList<MemberInitializer>(
                        std::vector<std::shared_ptr<const MemberInitializer>>({
                            SyntaxFactory::CreateMemberInitializer(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"),
                                SyntaxFactory::CreateInitializerList(
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                                    SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                                        std::vector<std::shared_ptr<const Expression>>(),
                                        std::vector<std::shared_ptr<const SyntaxToken>>()),
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))),
                            SyntaxFactory::CreateMemberInitializer(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"),
                                SyntaxFactory::CreateInitializerList(
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                                    SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                                        std::vector<std::shared_ptr<const Expression>>(),
                                        std::vector<std::shared_ptr<const SyntaxToken>>()),
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))), 
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>({
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        }))),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualColonToken()
        {
            // : a(), b()
            auto uut = SyntaxFactory::CreateConstructorInitializer(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon),
                SyntaxFactory::CreateSyntaxSeparatorList<MemberInitializer>(
                    std::vector<std::shared_ptr<const MemberInitializer>>({
                        SyntaxFactory::CreateMemberInitializer(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"),
                            SyntaxFactory::CreateInitializerList(
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                                    std::vector<std::shared_ptr<const Expression>>(),
                                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))),
                        SyntaxFactory::CreateMemberInitializer(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"),
                            SyntaxFactory::CreateInitializerList(
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                                    std::vector<std::shared_ptr<const Expression>>(),
                                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))), 
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    })))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateConstructorInitializer(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Colon,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {}),
                    SyntaxFactory::CreateSyntaxSeparatorList<MemberInitializer>(
                        std::vector<std::shared_ptr<const MemberInitializer>>({
                            SyntaxFactory::CreateMemberInitializer(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"),
                                SyntaxFactory::CreateInitializerList(
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                                    SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                                        std::vector<std::shared_ptr<const Expression>>(),
                                        std::vector<std::shared_ptr<const SyntaxToken>>()),
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))),
                            SyntaxFactory::CreateMemberInitializer(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"),
                                SyntaxFactory::CreateInitializerList(
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                                    SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                                        std::vector<std::shared_ptr<const Expression>>(),
                                        std::vector<std::shared_ptr<const SyntaxToken>>()),
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))), 
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>({
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        }))),
                uut,
                "Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualInitializers()
        {
            // : a(), b()
            auto uut = SyntaxFactory::CreateConstructorInitializer(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon),
                SyntaxFactory::CreateSyntaxSeparatorList<MemberInitializer>(
                    std::vector<std::shared_ptr<const MemberInitializer>>({
                        SyntaxFactory::CreateMemberInitializer(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"),
                            SyntaxFactory::CreateInitializerList(
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                                    std::vector<std::shared_ptr<const Expression>>(),
                                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))),
                        SyntaxFactory::CreateMemberInitializer(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"),
                            SyntaxFactory::CreateInitializerList(
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                                    std::vector<std::shared_ptr<const Expression>>(),
                                    std::vector<std::shared_ptr<const SyntaxToken>>()),
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))), 
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                    })))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateConstructorInitializer(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon),
                    SyntaxFactory::CreateSyntaxSeparatorList<MemberInitializer>(
                        std::vector<std::shared_ptr<const MemberInitializer>>({
                            SyntaxFactory::CreateMemberInitializer(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c"),
                                SyntaxFactory::CreateInitializerList(
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                                    SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                                        std::vector<std::shared_ptr<const Expression>>(),
                                        std::vector<std::shared_ptr<const SyntaxToken>>()),
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))),
                            SyntaxFactory::CreateMemberInitializer(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"),
                                SyntaxFactory::CreateInitializerList(
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                                    SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                                        std::vector<std::shared_ptr<const Expression>>(),
                                        std::vector<std::shared_ptr<const SyntaxToken>>()),
                                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))), 
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>({
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
                        }))),
                uut,
                "Verify does not match.");
        }
    };
}
