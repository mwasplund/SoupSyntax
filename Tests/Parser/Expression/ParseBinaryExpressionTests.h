#pragma once
#include "TestUtils.h"
#include "SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class ParseBinaryExpressionTests
    {
    public:
        // Arithmetic

        // [Fact]
        void IdentifierAddition()
        {
            auto sourceCode = std::string("a+b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Addition,
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Plus),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void IdentifierSubtraction()
        {
            auto sourceCode = std::string("a-b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Subtraction,
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Minus),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void IdentifierMultiplication()
        {
            auto sourceCode = std::string("a*b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Multiplication,
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Asterisk),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void IdentifierDivision()
        {
            auto sourceCode = std::string("a/b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Division,
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ForwardSlash),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void IdentifierModulo()
        {
            auto sourceCode = std::string("a%b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Modulo,
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Percent),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void IdentifierBitwiseAnd()
        {
            auto sourceCode = std::string("a&b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::BitwiseAnd,
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void IdentifierBitwiseOr()
        {
            auto sourceCode = std::string("a|b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::BitwiseOr,
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::VerticalBar),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void IdentifierBitwiseExclusiveOr()
        {
            auto sourceCode = std::string("a^b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::BitwiseExclusiveOr,
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Caret),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void IdentifierBitwiseLeftShift()
        {
            auto sourceCode = std::string("a<<b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::BitwiseLeftShift,
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleLessThan),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void IdentifierBitwiseRightShift()
        {
            auto sourceCode = std::string("a>>b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::BitwiseRightShift,
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleGreaterThan),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // Assignment

        // [Fact]
        void IdentifierSimpleAssignment()
        {
            auto sourceCode = std::string("a=b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::SimpleAssignment,
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void IdentifierAdditionAssignment()
        {
            auto sourceCode = std::string("a+=b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::AdditionAssignment,
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::PlusEqual),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void IdentifierSubtractionAssignment()
        {
            auto sourceCode = std::string("a-=b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::SubtractionAssignment,
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::MinusEqual),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void IdentifierMultiplicationAssignment()
        {
            auto sourceCode = std::string("a*=b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::MultiplicationAssignment,
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::AsteriskEqual),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void IdentifierDivisionAssignment()
        {
            auto sourceCode = std::string("a/=b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::DivisionAssignment,
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ForwardSlashEqual),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void IdentifierModuloAssignment()
        {
            auto sourceCode = std::string("a%=b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::ModuloAssignment,
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::PercentEqual),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void IdentifierBitwiseExclusiveOrAssignment()
        {
            auto sourceCode = std::string("a^=b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::BitwiseExclusiveOrAssignment,
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CaretEqual),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }
 
        // [Fact]
        void IdentifierBitwiseAndAssignment()
        {
            auto sourceCode = std::string("a&=b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::BitwiseAndAssignment,
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::AmpersandEqual),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void IdentifierBitwiseOrAssignment()
        {
            auto sourceCode = std::string("a|=b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::BitwiseOrAssignment,
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::VerticalBarEqual),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void IdentifierBitwiseLeftShiftAssignment()
        {
            auto sourceCode = std::string("a<<=b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::BitwiseLeftShiftAssignment,
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleLessThanEqual),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void IdentifierBitwiseRightShiftAssignment()
        {
            auto sourceCode = std::string("a>>=b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::BitwiseRightShiftAssignment,
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleGreaterThanEqual),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // Comparision

        // [Fact]
        void IdentifierEquals()
        {
            auto sourceCode = std::string("a==b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Equals,
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleEqual),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void IdentifierNotEquals()
        {
            auto sourceCode = std::string("a!=b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::NotEquals,
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ExclamationMarkEqual),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void IdentifierLessThan()
        {
            auto sourceCode = std::string("a<b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::LessThan,
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void IdentifierGreaterThan()
        {
            auto sourceCode = std::string("a>b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::GreaterThan,
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void IdentifierLessThanOrEqual()
        {
            auto sourceCode = std::string("a<=b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::LessThanOrEqual,
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThanEqual),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void IdentifierGreaterThanOrEqual()
        {
            auto sourceCode = std::string("a>=b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::GreaterThanOrEqual,
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThanEqual),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void IdentifierThreeWayComparison()
        {
            auto sourceCode = std::string("a<=>b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::ThreeWayComparison,
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThanEqualGreaterThan),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // Logical

        // [Fact]
        void IdentifierLogicalAnd()
        {
            auto sourceCode = std::string("a&&b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::LogicalAnd,
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleAmpersand),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void IdentifierLogicalOr()
        {
            auto sourceCode = std::string("a||b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::LogicalOr,
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleVerticalBar),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // Member Access
        // Subscript has unique tests

        // [Fact]
        void IdentifierMemberOfObject()
        {
            auto sourceCode = std::string("a.b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::MemberOfObject,
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Period),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void IdentifierMemberOfPointer()
        {
            auto sourceCode = std::string("a->b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::MemberOfPointer,
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Arrow),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void IdentifierPointerToMemberOfObject()
        {
            auto sourceCode = std::string("a.*b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::PointerToMemberOfObject,
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::PeriodAsterisk),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

        // [Fact]
        void IdentifierPointerToMemberOfPointer()
        {
            auto sourceCode = std::string("a->*b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::PointerToMemberOfPointer,
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ArrowAsterisk),
                SyntaxFactory::CreateSimpleIdentifierExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")));

            TestUtils::AreEqual(expected, actual, "Verify matches expected.");
        }

    private:
        std::shared_ptr<const BinaryExpression> ParseBinaryExpression(std::string& sourceCode)
        {
            auto uut = TestUtils::BuildParser(sourceCode);
            auto context = uut.Parser->assignmentExpression();

            // Convert the the abstract syntax tree
            auto node = uut.Visitor->visit(context)
                .as<std::shared_ptr<const SyntaxNode>>();

            return std::dynamic_pointer_cast<const BinaryExpression>(node);
        }
    };
}
