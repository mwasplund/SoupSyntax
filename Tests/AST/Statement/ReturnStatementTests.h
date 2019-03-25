#pragma once
#include "TestUtils.h"
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
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
                L"Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                uut->GetReturnToken(),
                L"Verify return token matches.");
            Assert::IsFalse(
                uut->HasExpression(),
                L"Verify has no expression.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon),
                uut->GetSemicolonToken(),
                L"Verify semicolon token matches.");
        }

        // [[Fact]]
        void InitializeWithExpression()
        {
            auto uut = SyntaxFactory::CreateReturnStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"value")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            Assert::AreEqual(
                SyntaxNodeType::ReturnStatement,
                uut->GetType(),
                L"Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                uut->GetReturnToken(),
                L"Verify return token matches.");
            Assert::IsTrue(
                uut->HasExpression(),
                L"Verify has expression.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"value")),
                uut->GetExpression(),
                L"Verify expression matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon),
                uut->GetSemicolonToken(),
                L"Verify semicolon token matches.");
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
                L"Verify children match.");
        }

        // [[Fact]]
        void GetChildrenWithExpression()
        {
            auto uut = SyntaxFactory::CreateReturnStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"value")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            Assert::AreEqual(
                std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return)),
                    SyntaxNodeChild(SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"value"))),
                    SyntaxNodeChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                }),
                uut->GetChildren(),
                L"Verify children match.");
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
                L"Verify matches.");
        }

        // [[Fact]]
        void OperatorEqualWithExpression()
        {
            auto uut = SyntaxFactory::CreateReturnStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"value")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreEqual(
                SyntaxFactory::CreateReturnStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"value")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                uut,
                L"Verify matches.");
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
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 1)),
                        },
                        {}),
                    nullptr,
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                uut,
                L"Verify do not match.");
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
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"value")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                uut,
                L"Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualWithExpression()
        {
            auto uut = SyntaxFactory::CreateReturnStatement(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"value")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateReturnStatement(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Return),
                    SyntaxFactory::CreateSimpleNameExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"value2")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
                uut,
                L"Verify do not match.");
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
                            SyntaxFactory::CreateTrivia(L" ", TextSpan(0, 1)),
                        },
                        {})),
                uut,
                L"Verify do not match.");
        }
    };
}
