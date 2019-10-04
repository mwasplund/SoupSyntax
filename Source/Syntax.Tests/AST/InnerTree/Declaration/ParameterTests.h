#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
	class InnerTreeParameterTests
	{
	public:
		[[Fact]]
		void InitializeSimple()
		{
			// int parameter
			auto uut = SyntaxFactory::CreateParameter(
				SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
					PrimitiveDataType::Int,
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
				SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
					PrimitiveDataType::Int,
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)));

			Assert::AreEqual(
				SyntaxNodeType::Parameter,
				uut->GetType(),
				"Verify has correct type.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
					PrimitiveDataType::Int,
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
				uut->GetDeclarationSpecifierSequence(),
				"Verify declaration specifier sequence matches.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
					PrimitiveDataType::Int,
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
				uut->GetDeclarator(),
				"Verify declarator matches.");
		}

		[[Fact]]
		void OperatorEqual()
		{
			// int parameter
			auto uut = SyntaxFactory::CreateParameter(
				SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
					PrimitiveDataType::Int,
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
				SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
					PrimitiveDataType::Int,
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)));

			TestUtils::AreEqual(
				SyntaxFactory::CreateParameter(
					SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
						PrimitiveDataType::Int,
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
					SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
						PrimitiveDataType::Int,
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
				uut,
				"Verify matches.");
		}

		[[Fact]]
		void OperatorNotEqualDeclarationSpecifierSequence()
		{
			// int parameter
			auto uut = SyntaxFactory::CreateParameter(
				SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
					PrimitiveDataType::Int,
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
				SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
					PrimitiveDataType::Int,
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateParameter(
					SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
						PrimitiveDataType::Double,
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Double)),
					SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
						PrimitiveDataType::Int,
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
				uut,
				"Verify does not match.");
		}

		[[Fact]]
		void OperatorNotEqualDeclarator()
		{
			// int parameter
			auto uut = SyntaxFactory::CreateParameter(
				SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
					PrimitiveDataType::Int,
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
				SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
					PrimitiveDataType::Int,
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateParameter(
					SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
						PrimitiveDataType::Int,
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
					SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
						PrimitiveDataType::Double,
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Double))),
				uut,
				"Verify does not match.");
		}
	};
}
