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
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::Plus, L"+"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"b")));

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
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::Minus, L"-"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"b")));

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
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::Asterisk, L"*"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"b")));

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
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::ForwardSlash, L"/"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"b")));

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
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::Percent, L"%"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"b")));

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
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::Ampersand, L"&"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"b")));

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
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::VerticalBar, L"|"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"b")));

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
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::Caret, L"^"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"b")));

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
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::DoubleLessThan, L"<<"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"b")));

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
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::DoubleGreaterThan, L">>"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"b")));

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
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::Equal, L"="),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"b")));

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
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::PlusEqual, L"+="),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"b")));

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
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::MinusEqual, L"-="),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"b")));

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
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::AsteriskEqual, L"*="),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"b")));

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
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::ForwardSlashEqual, L"/="),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"b")));

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
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::PercentEqual, L"%="),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"b")));

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
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::CaretEqual, L"^="),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"b")));

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
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::AmpersandEqual, L"&="),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"b")));

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
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::VerticalBarEqual, L"|="),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"b")));

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
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::DoubleLessThanEqual, L"<<="),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"b")));

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
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::DoubleGreaterThanEqual, L">>="),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"b")));

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
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::DoubleEqual, L"=="),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"b")));

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
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::ExclamationMarkEqual, L"!="),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"b")));

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
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::LessThan, L"<"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"b")));

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
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::GreaterThan, L">"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"b")));

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
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::LessThanEqual, L"<="),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"b")));

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
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::GreaterThanEqual, L">="),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"b")));

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
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::LessThanEqualGreaterThan, L"<=>"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"b")));

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
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::DoubleAmpersand, L"&&"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"b")));

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
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::DoubleVerticalBar, L"||"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"b")));

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
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::Period, L"."),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"b")));

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
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::Arrow, L"->"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"b")));

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
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::PeriodAsterisk, L".*"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"b")));

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
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"a")),
                SyntaxFactory::CreateToken(SyntaxTokenType::ArrowAsterisk, L"->*"),
                SyntaxFactory::CreateSimpleNameExpression(
                    SyntaxFactory::CreateToken(SyntaxTokenType::Identifier, L"b")));

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
