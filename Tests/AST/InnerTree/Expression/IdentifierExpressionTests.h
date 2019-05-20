#pragma once

namespace Soup::Syntax::InnerTree::UnitTests
{
    class InnerTreeIdentifierExpressionTests
    {
    public:
        [[Fact]]
        void InitializeUnqualified()
        {
            auto uut = SyntaxFactory::CreateIdentifierExpression(
                SyntaxFactory::CreateSimpleIdentifier(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name")));

            Assert::AreEqual(
                SyntaxNodeType::IdentifierExpression,
                uut->GetType(),
                "Verify has correct type.");
            Assert::IsFalse(
                uut->HasQualifier(),
                "Verify has no qualifier.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSimpleIdentifier(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name")),
                uut->GetUnqualifiedIdentifier(),
                "Verify unqualified identifier matches.");
        }

        [[Fact]]
        void InitializeGlobalQualified()
        {
            auto uut = SyntaxFactory::CreateIdentifierExpression(
                SyntaxFactory::CreateNestedNameSpecifier(
                    SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                        {},
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                        })),
                SyntaxFactory::CreateSimpleIdentifier(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right")));

            Assert::AreEqual(
                SyntaxNodeType::IdentifierExpression,
                uut->GetType(),
                "Verify has correct type.");
            Assert::IsTrue(uut->HasQualifier(), "Verify has qualifier.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateNestedNameSpecifier(
                    SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                        {},
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                        })),
                uut->GetQualifier(),
                "Verify qualifier matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSimpleIdentifier(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right")),
                uut->GetUnqualifiedIdentifier(),
                "Verify unqualified identifier matches.");
        }

        [[Fact]]
        void InitializeSingleQualifiedIdentifier()
        {
            auto uut = SyntaxFactory::CreateIdentifierExpression(
                SyntaxFactory::CreateNestedNameSpecifier(
                    SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                        {
                            SyntaxFactory::CreateSimpleIdentifier(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left")),
                        },
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                        })),
                SyntaxFactory::CreateSimpleIdentifier(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right")));

            Assert::AreEqual(
                SyntaxNodeType::IdentifierExpression,
                uut->GetType(),
                "Verify has correct type.");
            Assert::IsTrue(uut->HasQualifier(), "Verify has qualifier.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateNestedNameSpecifier(
                    SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                        {
                            SyntaxFactory::CreateSimpleIdentifier(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left")),
                        },
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                        })),
                uut->GetQualifier(),
                "Verify qualifier matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSimpleIdentifier(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right")),
                uut->GetUnqualifiedIdentifier(),
                "Verify unqualified identifier matches.");
        }

        [[Fact]]
        void OperatorEqualUnqualified()
        {
            auto uut = SyntaxFactory::CreateIdentifierExpression(
                SyntaxFactory::CreateSimpleIdentifier(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name")));

            TestUtils::AreEqual(
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"))),
                uut,
                "Verify matches.");
        }

        [[Fact]]
        void OperatorEqualQualified()
        {
            auto uut = SyntaxFactory::CreateIdentifierExpression(
                SyntaxFactory::CreateNestedNameSpecifier(
                    SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                        {
                            SyntaxFactory::CreateSimpleIdentifier(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left")),
                        },
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                        })),
                SyntaxFactory::CreateSimpleIdentifier(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right")));

            TestUtils::AreEqual(
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateNestedNameSpecifier(
                        SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                            {
                                SyntaxFactory::CreateSimpleIdentifier(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left")),
                            },
                            {
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                            })),
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right"))),
                uut,
                "Verify matches.");
        }

        [[Fact]]
        void OperatorNotEqualNoQualifier()
        {
            auto uut = SyntaxFactory::CreateIdentifierExpression(
                SyntaxFactory::CreateNestedNameSpecifier(
                    SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                        {
                            SyntaxFactory::CreateSimpleIdentifier(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left")),
                        },
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                        })),
                SyntaxFactory::CreateSimpleIdentifier(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right"))),
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void OperatorNotEqualQualifier()
        {
            auto uut = SyntaxFactory::CreateIdentifierExpression(
                SyntaxFactory::CreateNestedNameSpecifier(
                    SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                        {
                            SyntaxFactory::CreateSimpleIdentifier(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left")),
                        },
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                        })),
                SyntaxFactory::CreateSimpleIdentifier(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateNestedNameSpecifier(
                        SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                            {
                                SyntaxFactory::CreateSimpleIdentifier(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left2")),
                            },
                            {
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                            })),
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right"))),
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void OperatorNotEqualUnqualifiedIdentifier()
        {
            auto uut = SyntaxFactory::CreateIdentifierExpression(
                SyntaxFactory::CreateNestedNameSpecifier(
                    SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                        {
                            SyntaxFactory::CreateSimpleIdentifier(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left")),
                        },
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                        })),
                SyntaxFactory::CreateSimpleIdentifier(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateIdentifierExpression(
                    SyntaxFactory::CreateNestedNameSpecifier(
                        SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                            {
                                SyntaxFactory::CreateSimpleIdentifier(
                                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left")),
                            },
                            {
                                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
                            })),
                    SyntaxFactory::CreateSimpleIdentifier(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Right2"))),
                uut,
                "Verify do not match.");
        }
    };
}
