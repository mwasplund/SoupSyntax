#pragma once
#include "SoupAssert.h"
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class OuterTreeAttributeTests
    {
    public:
        [[Fact]]
        void InitializeSimple()
        {
            auto uut = SyntaxFactory::CreateAttribute(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                nullptr)->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::Attribute,
                uut->GetType(),
                "Verify has correct type.");
            TestUtils::AreEqual(
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
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)))->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::Attribute,
                uut->GetType(),
                "Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                uut->GetIdentifierToken(),
                "Verify identifier matches.");
            Assert::IsTrue(
                uut->HasArgumentClause(),
                "Verify has no argument clause.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateAttributeArgumentClause(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxList<SyntaxToken>({}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
                uut->GetArgumentClause(),
                "Verify identifier matches.");
        }

        [[Fact]]
        void GetChildrenSimple()
        {
            auto uut = SyntaxFactory::CreateAttribute(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                nullptr)->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>({
                    TestUtils::CreateChild(SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name")),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        [[Fact]]
        void GetChildrenComplex()
        {
            auto uut = SyntaxFactory::CreateAttribute(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                SyntaxFactory::CreateAttributeArgumentClause(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                    SyntaxFactory::CreateSyntaxList<SyntaxToken>({}),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)))->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>({
                    TestUtils::CreateChild(SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name")),
                    TestUtils::CreateChild(SyntaxFactory::CreateAttributeArgumentClause(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
                        SyntaxFactory::CreateSyntaxList<SyntaxToken>({}),
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        [[Fact]]
        void OperatorEqualSimple()
        {
            auto uut = SyntaxFactory::CreateAttribute(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                nullptr)->CreateOuter(nullptr);

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
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)))->CreateOuter(nullptr);

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
                nullptr)->CreateOuter(nullptr);

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
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)))->CreateOuter(nullptr);

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
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateAttribute(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                    nullptr),
                uut,
                "Verify matches.");
        }
    };
}
