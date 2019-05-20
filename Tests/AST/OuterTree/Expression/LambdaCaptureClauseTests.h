#pragma once

namespace Soup::Syntax::InnerTree::UnitTests
{
    class OuterTreeLambdaCaptureClauseTests
    {
    public:
        [[Fact]]
        void InitializeSimple()
        {
            // value
            auto uut = SyntaxFactory::CreateLambdaCaptureClause(
                nullptr,
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::LambdaCaptureClause,
                uut->GetType(),
                "Verify has correct type.");
            Assert::IsFalse(
                uut->HasAmpersandToken(),
                "Verify has no ampersand token.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"),
                uut->GetIdentifierToken(),
                "Verify identifier token matches.");
        }

        [[Fact]]
        void InitializeComplex()
        {
            // &value
            auto uut = SyntaxFactory::CreateLambdaCaptureClause(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::LambdaCaptureClause,
                uut->GetType(),
                "Verify has correct type.");
            Assert::IsTrue(
                uut->HasAmpersandToken(),
                "Verify has ampersand token.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand),
                uut->GetAmpersandToken(),
                "Verify ampersand token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"),
                uut->GetIdentifierToken(),
                "Verify identifier token matches.");
        }

        [[Fact]]
        void GetChildrenSimple()
        {
            // value
            auto uut = SyntaxFactory::CreateLambdaCaptureClause(
                nullptr,
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>({
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value")),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        [[Fact]]
        void GetChildrenComplex()
        {
            // &value
            auto uut = SyntaxFactory::CreateLambdaCaptureClause(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>({
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand)),
                    TestUtils::CreateChild(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value")),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        [[Fact]]
        void OperatorEqualSimple()
        {
            // value
            auto uut = SyntaxFactory::CreateLambdaCaptureClause(
                nullptr,
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))->CreateOuter(nullptr);

            TestUtils::AreEqual(
                SyntaxFactory::CreateLambdaCaptureClause(
                    nullptr,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value")),
                uut,
                "Verify matches.");
        }

        [[Fact]]
        void OperatorEqualComplex()
        {
            // &value
            auto uut = SyntaxFactory::CreateLambdaCaptureClause(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))->CreateOuter(nullptr);

            TestUtils::AreEqual(
                SyntaxFactory::CreateLambdaCaptureClause(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand),
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value")),
                uut,
                "Verify matches.");
        }

        [[Fact]]
        void OperatorNotEqualNoAmpersandToken()
        {
            // &value
            auto uut = SyntaxFactory::CreateLambdaCaptureClause(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateLambdaCaptureClause(
                    nullptr,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value")),
                uut,
                "Verify does not match.");
        }

        [[Fact]]
        void OperatorNotEqualAmpersandToken()
        {
            // &value
            auto uut = SyntaxFactory::CreateLambdaCaptureClause(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateLambdaCaptureClause(
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::Ampersand,
                        {
                            SyntaxFactory::CreateTrivia(" "),
                        },
                        {}),
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value")),
                uut,
                "Verify does not match.");
        }

        [[Fact]]
        void OperatorNotEqualIdentifierToken()
        {
            // &value
            auto uut = SyntaxFactory::CreateLambdaCaptureClause(
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand),
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateLambdaCaptureClause(
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand),
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value2")),
                uut,
                "Verify does not match.");
        }
    };
}
