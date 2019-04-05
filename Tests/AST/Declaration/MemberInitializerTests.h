#pragma once
#include "TestUtils.h"
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class MemberInitializerTests
    {
    public:
        // [[Fact]]
        void InitializeSimple()
        {
            // a()
            auto uut = SyntaxFactory::CreateMemberInitializer(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"),
                SyntaxFactory::CreateBracedInitializerList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    std::make_shared<const SyntaxSeparatorList<Expression>>(
                        std::vector<std::shared_ptr<const Expression>>(),
                        std::vector<std::shared_ptr<const SyntaxToken>>()),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)));

            Assert::AreEqual(
                SyntaxNodeType::MemberInitializer,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"),
                uut->GetIdentifierToken(),
                "Verify identifier token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateBracedInitializerList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    std::make_shared<const SyntaxSeparatorList<Expression>>(
                        std::vector<std::shared_ptr<const Expression>>(),
                        std::vector<std::shared_ptr<const SyntaxToken>>()),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                uut->GetInitializer(),
                "Verify initializer matches.");
        }

        // [[Fact]]
        void GetChildren()
        {
            // a()
            auto uut = SyntaxFactory::CreateMemberInitializer(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"),
                SyntaxFactory::CreateBracedInitializerList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    std::make_shared<const SyntaxSeparatorList<Expression>>(
                        std::vector<std::shared_ptr<const Expression>>(),
                        std::vector<std::shared_ptr<const SyntaxToken>>()),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>({
                    SyntaxNodeChild(SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                    SyntaxNodeChild(
                        SyntaxFactory::CreateBracedInitializerList(
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                            std::make_shared<const SyntaxSeparatorList<Expression>>(
                                std::vector<std::shared_ptr<const Expression>>(),
                                std::vector<std::shared_ptr<const SyntaxToken>>()),
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void OperatorEqual()
        {
            // a()
            auto uut = SyntaxFactory::CreateMemberInitializer(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"),
                SyntaxFactory::CreateBracedInitializerList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    std::make_shared<const SyntaxSeparatorList<Expression>>(
                        std::vector<std::shared_ptr<const Expression>>(),
                        std::vector<std::shared_ptr<const SyntaxToken>>()),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)));

            TestUtils::AreEqual(
                SyntaxFactory::CreateMemberInitializer(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"),
                    SyntaxFactory::CreateBracedInitializerList(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                        std::make_shared<const SyntaxSeparatorList<Expression>>(
                            std::vector<std::shared_ptr<const Expression>>(),
                            std::vector<std::shared_ptr<const SyntaxToken>>()),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualIdentifierToken()
        {
            // a()
            auto uut = SyntaxFactory::CreateMemberInitializer(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"),
                SyntaxFactory::CreateBracedInitializerList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    std::make_shared<const SyntaxSeparatorList<Expression>>(
                        std::vector<std::shared_ptr<const Expression>>(),
                        std::vector<std::shared_ptr<const SyntaxToken>>()),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateMemberInitializer(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"),
                    SyntaxFactory::CreateBracedInitializerList(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                        std::make_shared<const SyntaxSeparatorList<Expression>>(
                            std::vector<std::shared_ptr<const Expression>>(),
                            std::vector<std::shared_ptr<const SyntaxToken>>()),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))),
                uut,
                "Verify does not match.");
        }

        // [[Fact]]
        void OperatorNotEqualInitializer()
        {
            // a()
            auto uut = SyntaxFactory::CreateMemberInitializer(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"),
                SyntaxFactory::CreateBracedInitializerList(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    std::make_shared<const SyntaxSeparatorList<Expression>>(
                        std::vector<std::shared_ptr<const Expression>>(),
                        std::vector<std::shared_ptr<const SyntaxToken>>()),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateMemberInitializer(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"),
                    SyntaxFactory::CreateBracedInitializerList(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                        std::make_shared<const SyntaxSeparatorList<Expression>>(
                            std::vector<std::shared_ptr<const Expression>>({
                                SyntaxFactory::CreateSimpleIdentifierExpression(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
                            }),
                            std::vector<std::shared_ptr<const SyntaxToken>>()),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))),
                uut,
                "Verify does not match.");
        }
    };
}
