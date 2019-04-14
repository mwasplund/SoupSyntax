#pragma once
#include "TestUtils.h"
#include "SoupAssert.h"

namespace Soup::Syntax::OuterTree::UnitTests
{
    class ReturnStatementTests
    {
    public:
        // [[Fact]]
        void InitializeNoExpression()
        {
            auto uut = SyntaxFactory::CreateReturnStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            Assert::AreEqual(
                SyntaxNodeType::ReturnStatement,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                uut->GetReturnToken(),
                "Verify return token matches.");
            Assert::IsFalse(
                uut->HasExpression(),
                "Verify has no expression.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon),
                uut->GetSemicolonToken(),
                "Verify semicolon token matches.");
        }

        // [[Fact]]
        void InitializeWithExpression()
        {
            auto uut = SyntaxFactory::CreateReturnStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            Assert::AreEqual(
                SyntaxNodeType::ReturnStatement,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                uut->GetReturnToken(),
                "Verify return token matches.");
            Assert::IsTrue(
                uut->HasExpression(),
                "Verify has expression.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value")),
                uut->GetExpression(),
                "Verify expression matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon),
                uut->GetSemicolonToken(),
                "Verify semicolon token matches.");
        }

        // [[Fact]]
        void GetChildrenNoExpression()
        {
            auto uut = SyntaxFactory::CreateReturnStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return)),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void GetChildrenWithExpression()
        {
            auto uut = SyntaxFactory::CreateReturnStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return)),
                    SyntaxNodeChild(SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void OperatorEqualNoExpression()
        {
            auto uut = SyntaxFactory::CreateReturnStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(
                SyntaxFactory::CreateReturnStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                    nullptr,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorEqualWithExpression()
        {
            auto uut = SyntaxFactory::CreateReturnStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(
                SyntaxFactory::CreateReturnStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualReturnToken()
        {
            auto uut = SyntaxFactory::CreateReturnStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateReturnStatement(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Return,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {}),
                    nullptr,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualNoExpression()
        {
            auto uut = SyntaxFactory::CreateReturnStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateReturnStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualWithExpression()
        {
            auto uut = SyntaxFactory::CreateReturnStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateReturnStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                    SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value2")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualSemicolonToken()
        {
            auto uut = SyntaxFactory::CreateReturnStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                nullptr,
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateReturnStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                    nullptr,
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Semicolon,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {})),
                uut,
                "Verify do not match.");
        }
    };
}