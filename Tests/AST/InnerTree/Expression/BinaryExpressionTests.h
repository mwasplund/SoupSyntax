#pragma once

namespace Soup::Syntax::InnerTree::UnitTests
{
    class InnerTreeBinaryExpressionTests
    {
    public:
        [[Fact]]
        void InitializeSimple()
        {
            auto uut = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Addition,
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Plus),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")));

            Assert::AreEqual(
                SyntaxNodeType::BinaryExpression,
                uut->GetType(),
                "Verify has correct type.");
            Assert::AreEqual(BinaryOperator::Addition, uut->GetOperator(), "Verify operator matches.");
            Assert::AreEqual(
                *SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Plus),
                uut->GetOperatorToken(),
                "Verify operator token matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")),
                uut->GetLeftOperand(),
                "Verify left expression matches.");
            TestUtils::AreEqual(
                *SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
                uut->GetRightOperand(),
                "Verify right expression matches.");
        }

        [[Fact]]
        void OperatorEqual()
        {
            auto uut = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Addition,
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Plus),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")));

            TestUtils::AreEqual(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::Addition,
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Plus),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2"))),
                uut,
                "Verify matches.");
        }

        [[Fact]]
        void OperatorNotEqualOperatorType()
        {
            auto uut = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Addition,
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Plus),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::Subtraction,
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Plus),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2"))),
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void OperatorNotEqualLeft()
        {
            auto uut = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Addition,
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Plus),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::Addition,
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "11")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Plus),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2"))),
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void OperatorNotEqualOperatorToken()
        {
            auto uut = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Addition,
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Minus),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::Addition,
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Plus),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2"))),
                uut,
                "Verify do not match.");
        }

        [[Fact]]
        void OperatorNotEqualRight()
        {
            auto uut = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Addition,
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Plus),
                SyntaxFactory::CreateLiteralExpression(
                    LiteralType::Integer,
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")));

            TestUtils::AreNotEqual(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::Addition,
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")),
                    SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Plus),
                    SyntaxFactory::CreateLiteralExpression(
                        LiteralType::Integer,
                        SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "22"))),
                uut,
                "Verify do not match.");
        }
    };
}
