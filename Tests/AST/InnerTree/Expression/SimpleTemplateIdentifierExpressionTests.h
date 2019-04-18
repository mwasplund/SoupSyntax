#pragma once
#include "SoupAssert.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
    class InnerTreeSimpleTemplateIdentifierExpressionTests
    {
    public:
        // [[Fact]]
        void InitializeNoArguments()
        {
            auto uut = SyntaxFactory::CreateSimpleTemplateIdentifierExpression(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>({}, {}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan));

            Assert::AreEqual(
                SyntaxNodeType::SimpleTemplateIdentifierExpression,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                uut->GetIdentifierToken(),
                "Verify identifier matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
                uut->GetLessThanToken(),
                "Verify less than matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>({}, {}),
                uut->GetTemplateArgumentList(),
                "Verify template arguments matches.");
            Assert::AreEqual(
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
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                    {
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value1")),
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value2")),
                    },
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan));

            Assert::AreEqual(
                SyntaxNodeType::SimpleTemplateIdentifierExpression,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(
                *SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                uut->GetIdentifierToken(),
                "Verify identifier matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
                uut->GetLessThanToken(),
                "Verify less than matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                    {
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value1")),
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value2")),
                    },
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                    }),
                uut->GetTemplateArgumentList(),
                "Verify template arguments matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan),
                uut->GetGreaterThanToken(),
                "Verify greater than matches.");
        }

        // [[Fact]]
        void OperatorEqualNoArguments()
        {
            auto uut = SyntaxFactory::CreateSimpleTemplateIdentifierExpression(
                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>({}, {}),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan));

            TestUtils::AreEqual(
                SyntaxFactory::CreateSimpleTemplateIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
                    SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>({}, {}),
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
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                    {
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value1")),
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value2")),
                    },
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan));

            TestUtils::AreEqual(
                SyntaxFactory::CreateSimpleTemplateIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
                    SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                        {
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value1")),
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value2")),
                        },
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                        }),
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
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                    {
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value1")),
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value2")),
                    },
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateSimpleTemplateIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name2"),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
                    SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                        {
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value1")),
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value2")),
                        },
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                        }),
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
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                    {
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value1")),
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value2")),
                    },
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateSimpleTemplateIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                    SyntaxFactory::CreateKeywordToken(
                        SyntaxTokenType::LessThan,
                        {
                            SyntaxFactory::CreateTrivia(" ")
                        },
                        {}),
                    SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                        {
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value1")),
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value2")),
                        },
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                        }),
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
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                    {
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value1")),
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value2")),
                    },
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateSimpleTemplateIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
                    SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>({}, {}),
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
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                    {
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value1")),
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value2")),
                    },
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateSimpleTemplateIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
                    SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                        {
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value3")),
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value2")),
                        },
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                        }),
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
                SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                    {
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value1")),
                        SyntaxFactory::CreateSimpleIdentifierExpression(
                            SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value2")),
                    },
                    {
                        SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                    }),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateSimpleTemplateIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
                    SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                        {
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value1")),
                            SyntaxFactory::CreateSimpleIdentifierExpression(
                                SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value2")),
                        },
                        {
                            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
                        }),
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
