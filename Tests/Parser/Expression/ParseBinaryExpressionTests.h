#pragma once
#include "../../TestUtils.h"
#include "../../SoupAssert.h"

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
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Plus),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void IdentifierSubtraction()
        {
            auto sourceCode = std::string("a-b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Subtraction,
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Minus),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void IdentifierMultiplication()
        {
            auto sourceCode = std::string("a*b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Multiplication,
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Asterisk),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void IdentifierDivision()
        {
            auto sourceCode = std::string("a/b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Division,
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ForwardSlash),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void IdentifierModulo()
        {
            auto sourceCode = std::string("a%b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Modulo,
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Percent),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void IdentifierBitwiseAnd()
        {
            auto sourceCode = std::string("a&b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::BitwiseAnd,
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void IdentifierBitwiseOr()
        {
            auto sourceCode = std::string("a|b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::BitwiseOr,
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::VerticalBar),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void IdentifierBitwiseExclusiveOr()
        {
            auto sourceCode = std::string("a^b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::BitwiseExclusiveOr,
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Caret),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void IdentifierBitwiseLeftShift()
        {
            auto sourceCode = std::string("a<<b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::BitwiseLeftShift,
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleLessThan),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void IdentifierBitwiseRightShift()
        {
            auto sourceCode = std::string("a>>b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::BitwiseRightShift,
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleGreaterThan),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // Assignment

        // [Fact]
        void IdentifierSimpleAssignment()
        {
            auto sourceCode = std::string("a=b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::SimpleAssignment,
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void IdentifierAdditionAssignment()
        {
            auto sourceCode = std::string("a+=b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::AdditionAssignment,
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::PlusEqual),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void IdentifierSubtractionAssignment()
        {
            auto sourceCode = std::string("a-=b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::SubtractionAssignment,
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::MinusEqual),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void IdentifierMultiplicationAssignment()
        {
            auto sourceCode = std::string("a*=b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::MultiplicationAssignment,
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::AsteriskEqual),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void IdentifierDivisionAssignment()
        {
            auto sourceCode = std::string("a/=b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::DivisionAssignment,
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ForwardSlashEqual),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void IdentifierModuloAssignment()
        {
            auto sourceCode = std::string("a%=b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::ModuloAssignment,
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::PercentEqual),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void IdentifierBitwiseExclusiveOrAssignment()
        {
            auto sourceCode = std::string("a^=b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::BitwiseExclusiveOrAssignment,
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CaretEqual),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }
 
        // [Fact]
        void IdentifierBitwiseAndAssignment()
        {
            auto sourceCode = std::string("a&=b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::BitwiseAndAssignment,
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::AmpersandEqual),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void IdentifierBitwiseOrAssignment()
        {
            auto sourceCode = std::string("a|=b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::BitwiseOrAssignment,
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::VerticalBarEqual),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void IdentifierBitwiseLeftShiftAssignment()
        {
            auto sourceCode = std::string("a<<=b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::BitwiseLeftShiftAssignment,
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleLessThanEqual),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void IdentifierBitwiseRightShiftAssignment()
        {
            auto sourceCode = std::string("a>>=b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::BitwiseRightShiftAssignment,
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleGreaterThanEqual),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // Comparision

        // [Fact]
        void IdentifierEquals()
        {
            auto sourceCode = std::string("a==b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Equals,
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleEqual),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void IdentifierNotEquals()
        {
            auto sourceCode = std::string("a!=b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::NotEquals,
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ExclamationMarkEqual),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void IdentifierLessThan()
        {
            auto sourceCode = std::string("a<b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::LessThan,
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void IdentifierGreaterThan()
        {
            auto sourceCode = std::string("a>b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::GreaterThan,
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void IdentifierLessThanOrEqual()
        {
            auto sourceCode = std::string("a<=b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::LessThanOrEqual,
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThanEqual),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void IdentifierGreaterThanOrEqual()
        {
            auto sourceCode = std::string("a>=b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::GreaterThanOrEqual,
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThanEqual),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void IdentifierThreeWayComparison()
        {
            auto sourceCode = std::string("a<=>b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::ThreeWayComparison,
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThanEqualGreaterThan),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // Logical

        // [Fact]
        void IdentifierLogicalAnd()
        {
            auto sourceCode = std::string("a&&b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::LogicalAnd,
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleAmpersand),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void IdentifierLogicalOr()
        {
            auto sourceCode = std::string("a||b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::LogicalOr,
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleVerticalBar),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
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
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Period),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void IdentifierMemberOfPointer()
        {
            auto sourceCode = std::string("a->b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::MemberOfPointer,
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Arrow),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void IdentifierPointerToMemberOfObject()
        {
            auto sourceCode = std::string("a.*b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::PointerToMemberOfObject,
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::PeriodAsterisk),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
        }

        // [Fact]
        void IdentifierPointerToMemberOfPointer()
        {
            auto sourceCode = std::string("a->*b");
            auto actual = ParseBinaryExpression(sourceCode);

            auto expected = SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::PointerToMemberOfPointer,
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ArrowAsterisk),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, L"b")));

            TestUtils::AreEqual(expected, actual, L"Verify matches expected.");
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
