#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
	class InnerTreePrimitiveDataTypeSpecifierTests
	{
	public:
		// [[Fact]]
		void InitializeSimple()
		{
			auto uut = SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
				PrimitiveDataType::Int,
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int));

			Assert::AreEqual(
				SyntaxNodeType::PrimitiveDataTypeSpecifier,
				uut->GetType(),
				"Verify has correct type.");
			Assert::AreEqual(
				PrimitiveDataType::Int,
				uut->GetPrimitiveType(),
				"Verify primitive type matches.");
			Assert::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int),
				uut->GetToken(),
				"Verify token matches.");
		}

		// [[Fact]]
		void OperatorEqual()
		{
			auto uut = SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
				PrimitiveDataType::Int,
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int));

			TestUtils::AreEqual(
				SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
					PrimitiveDataType::Int,
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
				uut,
				"Verify matches.");
		}

		// [[Fact]]
		void OperatorNotEqualPrimitiveType()
		{
			auto uut = SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
				PrimitiveDataType::Int,
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
					PrimitiveDataType::Double,
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
				uut,
				"Verify does not match.");
		}

		// [[Fact]]
		void OperatorNotEqualToken()
		{
			auto uut = SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
				PrimitiveDataType::Int,
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
					PrimitiveDataType::Int,
					SyntaxFactory::CreateKeywordToken(
						SyntaxTokenType::Int,
						{
							SyntaxFactory::CreateTrivia(" ")
						},
						{})),
				uut,
				"Verify does not match.");
		}
	};
}
