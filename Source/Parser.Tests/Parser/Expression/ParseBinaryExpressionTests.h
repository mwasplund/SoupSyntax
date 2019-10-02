#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
	class ParseBinaryExpressionTests
	{
	public:
		// Arithmetic

		[[Fact]]
		void IdentifierAddition()
		{
			auto sourceCode = std::string("a+b");
			auto actual = ParseBinaryExpression(sourceCode);

			auto expected = SyntaxFactory::CreateBinaryExpression(
				BinaryOperator::Addition,
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Plus),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		[[Fact]]
		void IdentifierSubtraction()
		{
			auto sourceCode = std::string("a-b");
			auto actual = ParseBinaryExpression(sourceCode);

			auto expected = SyntaxFactory::CreateBinaryExpression(
				BinaryOperator::Subtraction,
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Minus),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		[[Fact]]
		void IdentifierMultiplication()
		{
			auto sourceCode = std::string("a*b");
			auto actual = ParseBinaryExpression(sourceCode);

			auto expected = SyntaxFactory::CreateBinaryExpression(
				BinaryOperator::Multiplication,
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Asterisk),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		[[Fact]]
		void IdentifierDivision()
		{
			auto sourceCode = std::string("a/b");
			auto actual = ParseBinaryExpression(sourceCode);

			auto expected = SyntaxFactory::CreateBinaryExpression(
				BinaryOperator::Division,
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ForwardSlash),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		[[Fact]]
		void IdentifierModulo()
		{
			auto sourceCode = std::string("a%b");
			auto actual = ParseBinaryExpression(sourceCode);

			auto expected = SyntaxFactory::CreateBinaryExpression(
				BinaryOperator::Modulo,
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Percent),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		[[Fact]]
		void IdentifierBitwiseAnd()
		{
			auto sourceCode = std::string("a&b");
			auto actual = ParseBinaryExpression(sourceCode);

			auto expected = SyntaxFactory::CreateBinaryExpression(
				BinaryOperator::BitwiseAnd,
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Ampersand),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		[[Fact]]
		void IdentifierBitwiseOr()
		{
			auto sourceCode = std::string("a|b");
			auto actual = ParseBinaryExpression(sourceCode);

			auto expected = SyntaxFactory::CreateBinaryExpression(
				BinaryOperator::BitwiseOr,
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::VerticalBar),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		[[Fact]]
		void IdentifierBitwiseExclusiveOr()
		{
			auto sourceCode = std::string("a^b");
			auto actual = ParseBinaryExpression(sourceCode);

			auto expected = SyntaxFactory::CreateBinaryExpression(
				BinaryOperator::BitwiseExclusiveOr,
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Caret),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		[[Fact]]
		void IdentifierBitwiseLeftShift()
		{
			auto sourceCode = std::string("a<<b");
			auto actual = ParseBinaryExpression(sourceCode);

			auto expected = SyntaxFactory::CreateBinaryExpression(
				BinaryOperator::BitwiseLeftShift,
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleLessThan),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		[[Fact]]
		void IdentifierBitwiseRightShift()
		{
			auto sourceCode = std::string("a>>b");
			auto actual = ParseBinaryExpression(sourceCode);

			auto expected = SyntaxFactory::CreateBinaryExpression(
				BinaryOperator::BitwiseRightShift,
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleGreaterThan),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		// Assignment

		[[Fact]]
		void IdentifierSimpleAssignment()
		{
			auto sourceCode = std::string("a=b");
			auto actual = ParseBinaryExpression(sourceCode);

			auto expected = SyntaxFactory::CreateBinaryExpression(
				BinaryOperator::SimpleAssignment,
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		[[Fact]]
		void IdentifierAdditionAssignment()
		{
			auto sourceCode = std::string("a+=b");
			auto actual = ParseBinaryExpression(sourceCode);

			auto expected = SyntaxFactory::CreateBinaryExpression(
				BinaryOperator::AdditionAssignment,
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::PlusEqual),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		[[Fact]]
		void IdentifierSubtractionAssignment()
		{
			auto sourceCode = std::string("a-=b");
			auto actual = ParseBinaryExpression(sourceCode);

			auto expected = SyntaxFactory::CreateBinaryExpression(
				BinaryOperator::SubtractionAssignment,
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::MinusEqual),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		[[Fact]]
		void IdentifierMultiplicationAssignment()
		{
			auto sourceCode = std::string("a*=b");
			auto actual = ParseBinaryExpression(sourceCode);

			auto expected = SyntaxFactory::CreateBinaryExpression(
				BinaryOperator::MultiplicationAssignment,
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::AsteriskEqual),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		[[Fact]]
		void IdentifierDivisionAssignment()
		{
			auto sourceCode = std::string("a/=b");
			auto actual = ParseBinaryExpression(sourceCode);

			auto expected = SyntaxFactory::CreateBinaryExpression(
				BinaryOperator::DivisionAssignment,
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ForwardSlashEqual),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		[[Fact]]
		void IdentifierModuloAssignment()
		{
			auto sourceCode = std::string("a%=b");
			auto actual = ParseBinaryExpression(sourceCode);

			auto expected = SyntaxFactory::CreateBinaryExpression(
				BinaryOperator::ModuloAssignment,
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::PercentEqual),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		[[Fact]]
		void IdentifierBitwiseExclusiveOrAssignment()
		{
			auto sourceCode = std::string("a^=b");
			auto actual = ParseBinaryExpression(sourceCode);

			auto expected = SyntaxFactory::CreateBinaryExpression(
				BinaryOperator::BitwiseExclusiveOrAssignment,
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CaretEqual),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}
 
		[[Fact]]
		void IdentifierBitwiseAndAssignment()
		{
			auto sourceCode = std::string("a&=b");
			auto actual = ParseBinaryExpression(sourceCode);

			auto expected = SyntaxFactory::CreateBinaryExpression(
				BinaryOperator::BitwiseAndAssignment,
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::AmpersandEqual),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		[[Fact]]
		void IdentifierBitwiseOrAssignment()
		{
			auto sourceCode = std::string("a|=b");
			auto actual = ParseBinaryExpression(sourceCode);

			auto expected = SyntaxFactory::CreateBinaryExpression(
				BinaryOperator::BitwiseOrAssignment,
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::VerticalBarEqual),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		[[Fact]]
		void IdentifierBitwiseLeftShiftAssignment()
		{
			auto sourceCode = std::string("a<<=b");
			auto actual = ParseBinaryExpression(sourceCode);

			auto expected = SyntaxFactory::CreateBinaryExpression(
				BinaryOperator::BitwiseLeftShiftAssignment,
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleLessThanEqual),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		[[Fact]]
		void IdentifierBitwiseRightShiftAssignment()
		{
			auto sourceCode = std::string("a>>=b");
			auto actual = ParseBinaryExpression(sourceCode);

			auto expected = SyntaxFactory::CreateBinaryExpression(
				BinaryOperator::BitwiseRightShiftAssignment,
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleGreaterThanEqual),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		// Comparision

		[[Fact]]
		void IdentifierEquals()
		{
			auto sourceCode = std::string("a==b");
			auto actual = ParseBinaryExpression(sourceCode);

			auto expected = SyntaxFactory::CreateBinaryExpression(
				BinaryOperator::Equals,
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleEqual),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		[[Fact]]
		void IdentifierNotEquals()
		{
			auto sourceCode = std::string("a!=b");
			auto actual = ParseBinaryExpression(sourceCode);

			auto expected = SyntaxFactory::CreateBinaryExpression(
				BinaryOperator::NotEquals,
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ExclamationMarkEqual),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		[[Fact]]
		void IdentifierLessThan()
		{
			auto sourceCode = std::string("a<b");
			auto actual = ParseBinaryExpression(sourceCode);

			auto expected = SyntaxFactory::CreateBinaryExpression(
				BinaryOperator::LessThan,
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		[[Fact]]
		void IdentifierGreaterThan()
		{
			auto sourceCode = std::string("a>b");
			auto actual = ParseBinaryExpression(sourceCode);

			auto expected = SyntaxFactory::CreateBinaryExpression(
				BinaryOperator::GreaterThan,
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		[[Fact]]
		void IdentifierLessThanOrEqual()
		{
			auto sourceCode = std::string("a<=b");
			auto actual = ParseBinaryExpression(sourceCode);

			auto expected = SyntaxFactory::CreateBinaryExpression(
				BinaryOperator::LessThanOrEqual,
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThanEqual),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		[[Fact]]
		void IdentifierGreaterThanOrEqual()
		{
			auto sourceCode = std::string("a>=b");
			auto actual = ParseBinaryExpression(sourceCode);

			auto expected = SyntaxFactory::CreateBinaryExpression(
				BinaryOperator::GreaterThanOrEqual,
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThanEqual),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		// TODO: [[Fact]]
		void IdentifierThreeWayComparison()
		{
			auto sourceCode = std::string("a<=>b");
			auto actual = ParseBinaryExpression(sourceCode);

			auto expected = SyntaxFactory::CreateBinaryExpression(
				BinaryOperator::ThreeWayComparison,
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThanEqualGreaterThan),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		// Logical

		[[Fact]]
		void IdentifierLogicalAnd()
		{
			auto sourceCode = std::string("a&&b");
			auto actual = ParseBinaryExpression(sourceCode);

			auto expected = SyntaxFactory::CreateBinaryExpression(
				BinaryOperator::LogicalAnd,
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleAmpersand),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		[[Fact]]
		void IdentifierLogicalOr()
		{
			auto sourceCode = std::string("a||b");
			auto actual = ParseBinaryExpression(sourceCode);

			auto expected = SyntaxFactory::CreateBinaryExpression(
				BinaryOperator::LogicalOr,
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleVerticalBar),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		// Member Access
		// Subscript has unique tests

		[[Fact]]
		void IdentifierMemberOfObject()
		{
			auto sourceCode = std::string("a.b");
			auto actual = ParseBinaryExpression(sourceCode);

			auto expected = SyntaxFactory::CreateBinaryExpression(
				BinaryOperator::MemberOfObject,
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Period),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		[[Fact]]
		void IdentifierMemberOfPointer()
		{
			auto sourceCode = std::string("a->b");
			auto actual = ParseBinaryExpression(sourceCode);

			auto expected = SyntaxFactory::CreateBinaryExpression(
				BinaryOperator::MemberOfPointer,
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Arrow),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		[[Fact]]
		void IdentifierPointerToMemberOfObject()
		{
			auto sourceCode = std::string("a.*b");
			auto actual = ParseBinaryExpression(sourceCode);

			auto expected = SyntaxFactory::CreateBinaryExpression(
				BinaryOperator::PointerToMemberOfObject,
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::PeriodAsterisk),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		[[Fact]]
		void IdentifierPointerToMemberOfPointer()
		{
			auto sourceCode = std::string("a->*b");
			auto actual = ParseBinaryExpression(sourceCode);

			auto expected = SyntaxFactory::CreateBinaryExpression(
				BinaryOperator::PointerToMemberOfPointer,
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ArrowAsterisk),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"))));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

	private:
		std::shared_ptr<const BinaryExpression> ParseBinaryExpression(const std::string& sourceCode)
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
