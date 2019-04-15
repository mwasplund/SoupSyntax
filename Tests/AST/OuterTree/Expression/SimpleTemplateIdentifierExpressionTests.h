#pragma once
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class OuterTreeSimpleTemplateIdentifierExpressionTests
    {
    public:
        // [[Fact]]
        void InitializeNoArguments()
        {
            auto uut = SyntaxFactory::CreateSimpleTemplateIdentifierExpression(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                    std::vector<std::shared_ptr<const Expression>>({}),
                    std::vector<std::shared_ptr<const SyntaxToken>>({})),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan))->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::SimpleTemplateIdentifierExpression,
                uut->GetType(),
                "Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                uut->GetIdentifierToken(),
                "Verify identifier matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
                uut->GetLessThanToken(),
                "Verify less than matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                    std::vector<std::shared_ptr<const Expression>>({}),
                    std::vector<std::shared_ptr<const SyntaxToken>>({})),
                uut->GetTemplateArgumentList(),
                "Verify template arguments matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan),
                uut->GetGreaterThanToken(),
                "Verify greater than matches.");
        }

        // [[Fact]]
        void InitializeWithArguments()
        {
            auto uut = SyntaxFactory::CreateSimpleTemplateIdentifierExpression(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                    std::vector<std::shared_ptr<const Expression>>({
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value1")),
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value2")),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan))->CreateOuter(nullptr);

            Assert::AreEqual(
                SyntaxNodeType::SimpleTemplateIdentifierExpression,
                uut->GetType(),
                "Verify has correct type.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                uut->GetIdentifierToken(),
                "Verify identifier matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
                uut->GetLessThanToken(),
                "Verify less than matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                    std::vector<std::shared_ptr<const Expression>>({
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value1")),
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value2")),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                    })),
                uut->GetTemplateArgumentList(),
                "Verify template arguments matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan),
                uut->GetGreaterThanToken(),
                "Verify greater than matches.");
        }

        // [[Fact]]
        void GetChildrenNoArguments()
        {
            auto uut = SyntaxFactory::CreateSimpleTemplateIdentifierExpression(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                    std::vector<std::shared_ptr<const Expression>>({}),
                    std::vector<std::shared_ptr<const SyntaxToken>>({})),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan))->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>({
                    TestUtils::CreateChild(SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name")),
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan)),
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan)),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void GetChildrenWithArguments()
        {
            auto uut = SyntaxFactory::CreateSimpleTemplateIdentifierExpression(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                    std::vector<std::shared_ptr<const Expression>>({
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value1")),
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value2")),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan))->CreateOuter(nullptr);

            Assert::AreEqual(
                std::vector<OuterTree::SyntaxNodeChild>({
                    TestUtils::CreateChild(SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name")),
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan)),
                    TestUtils::CreateChild(SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value1"))),
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)),
                    TestUtils::CreateChild(SyntaxFactory::CreateSimpleIdentifierExpression(
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value2"))),
                    TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan)),
                }),
                uut->GetChildren(),
                "Verify children match.");
        }

        // [[Fact]]
        void OperatorEqualNoArguments()
        {
            auto uut = SyntaxFactory::CreateSimpleTemplateIdentifierExpression(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                    std::vector<std::shared_ptr<const Expression>>({}),
                    std::vector<std::shared_ptr<const SyntaxToken>>({})),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan))->CreateOuter(nullptr);

            TestUtils::AreEqual(
                SyntaxFactory::CreateSimpleTemplateIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
                    SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                        std::vector<std::shared_ptr<const Expression>>({}),
                        std::vector<std::shared_ptr<const SyntaxToken>>({})),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan)),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorEqualWithArguments()
        {
            auto uut = SyntaxFactory::CreateSimpleTemplateIdentifierExpression(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                    std::vector<std::shared_ptr<const Expression>>({
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value1")),
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value2")),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan))->CreateOuter(nullptr);

            TestUtils::AreEqual(
                SyntaxFactory::CreateSimpleTemplateIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
                    SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                        std::vector<std::shared_ptr<const Expression>>({
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value1")),
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value2")),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>({
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan)),
                uut,
                "Verify matches.");
        }

        // [[Fact]]
        void OperatorNotEqualIdentifier()
        {
            auto uut = SyntaxFactory::CreateSimpleTemplateIdentifierExpression(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                    std::vector<std::shared_ptr<const Expression>>({
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value1")),
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value2")),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateSimpleTemplateIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name2"),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
                    SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                        std::vector<std::shared_ptr<const Expression>>({
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value1")),
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value2")),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>({
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan)),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualLessThanToken()
        {
            auto uut = SyntaxFactory::CreateSimpleTemplateIdentifierExpression(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                    std::vector<std::shared_ptr<const Expression>>({
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value1")),
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value2")),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateSimpleTemplateIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::LessThan,
                        {
                            SyntaxFactory::CreateTrivia(" ")
                        },
                        {}),
                    SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                        std::vector<std::shared_ptr<const Expression>>({
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value1")),
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value2")),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>({
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan)),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualNoArguments()
        {
            auto uut = SyntaxFactory::CreateSimpleTemplateIdentifierExpression(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                    std::vector<std::shared_ptr<const Expression>>({
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value1")),
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value2")),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateSimpleTemplateIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
                    SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                        std::vector<std::shared_ptr<const Expression>>({}),
                        std::vector<std::shared_ptr<const SyntaxToken>>({})),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan)),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualWithArguments()
        {
            auto uut = SyntaxFactory::CreateSimpleTemplateIdentifierExpression(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                    std::vector<std::shared_ptr<const Expression>>({
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value1")),
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value2")),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateSimpleTemplateIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
                    SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                        std::vector<std::shared_ptr<const Expression>>({
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value3")),
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value2")),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>({
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                        })),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan)),
                uut,
                "Verify do not match.");
        }

        // [[Fact]]
        void OperatorNotEqualGreaterThanToken()
        {
            auto uut = SyntaxFactory::CreateSimpleTemplateIdentifierExpression(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
                SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                    std::vector<std::shared_ptr<const Expression>>({
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value1")),
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value2")),
                    }),
                    std::vector<std::shared_ptr<const SyntaxToken>>({
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                    })),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan))->CreateOuter(nullptr);

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateSimpleTemplateIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
                    SyntaxFactory::CreateSyntaxSeparatorList<Expression>(
                        std::vector<std::shared_ptr<const Expression>>({
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value1")),
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value2")),
                        }),
                        std::vector<std::shared_ptr<const SyntaxToken>>({
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                        })),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::GreaterThan,
                        {
                            SyntaxFactory::CreateTrivia(" ")
                        },
                        {})),
                uut,
                "Verify do not match.");
        }
    };
}
