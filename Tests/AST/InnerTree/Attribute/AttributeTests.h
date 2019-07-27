#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class InnerTreeAttributeTests
    {
    public:
        [[Fact]]
        void InitializeSimple()
        {
            auto uut = SyntaxFactory::CreateAttribute(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                nullptr);

            Assert::AreEqual(
                SyntaxNodeType::Attribute,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                uut->GetIdentifierToken(),
                "Verify identifier matches.");
            Assert::IsFalse(
                uut->HasArgumentClause(),
                "Verify has no argument clause.");
        }

        [[Fact]]
        void InitializeComplex()
        {
            auto uut = SyntaxFactory::CreateAttribute(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                SyntaxFactory::CreateAttributeArgumentClause(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxList<SyntaxToken>({}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)));

            Assert::AreEqual(
                SyntaxNodeType::Attribute,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                uut->GetIdentifierToken(),
                "Verify identifier matches.");
            Assert::IsTrue(
                uut->HasArgumentClause(),
                "Verify has no argument clause.");
            Assert::AreEqual(
                *SyntaxFactory::CreateAttributeArgumentClause(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxList<SyntaxToken>({}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                uut->GetArgumentClause(),
                "Verify identifier matches.");
        }

        [[Fact]]
        void OperatorEqualSimple()
        {
            auto uut = SyntaxFactory::CreateAttribute(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                nullptr);

            TestUtils::AreEqual(
                SyntaxFactory::CreateAttribute(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                    nullptr),
                uut,
                "Verify matches.");
        }

        [[Fact]]
        void OperatorEqualComplex()
        {
            auto uut = SyntaxFactory::CreateAttribute(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                SyntaxFactory::CreateAttributeArgumentClause(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxList<SyntaxToken>({}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)));

            TestUtils::AreEqual(
                SyntaxFactory::CreateAttribute(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                    SyntaxFactory::CreateAttributeArgumentClause(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                        SyntaxFactory::CreateSyntaxList<SyntaxToken>({}),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))),
                uut,
                "Verify matches.");
        }

        [[Fact]]
        void OperatorNotEqualIdentifier()
        {
            auto uut = SyntaxFactory::CreateAttribute(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateAttribute(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name2"),
                    nullptr),
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void OperatorNotEqualArgumentClause()
        {
            auto uut = SyntaxFactory::CreateAttribute(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                SyntaxFactory::CreateAttributeArgumentClause(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxList<SyntaxToken>({}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateAttribute(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                    SyntaxFactory::CreateAttributeArgumentClause(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                        SyntaxFactory::CreateSyntaxList<SyntaxToken>({
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "arg")
                        }),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))),
                uut,
                "Verify matches.");
        }

        [[Fact]]
        void OperatorNotEqualNoArgumentClause()
        {
            auto uut = SyntaxFactory::CreateAttribute(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                SyntaxFactory::CreateAttributeArgumentClause(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxList<SyntaxToken>({}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateAttribute(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                    nullptr),
                uut,
                "Verify matches.");
        }
    };
}
