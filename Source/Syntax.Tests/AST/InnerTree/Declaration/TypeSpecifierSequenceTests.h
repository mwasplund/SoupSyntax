#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
	class InnerTreeTypeSpecifierSequenceTests
	{
	public:
		[[Fact]]
		void InitializeSimpleNoModifiers()
		{
			// int
			auto uut = SyntaxFactory::CreateTypeSpecifierSequence(
				SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
					PrimitiveDataType::Int,
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)));

			Assert::AreEqual(
				SyntaxNodeType::TypeSpecifierSequence,
				uut->GetType(),
				"Verify has correct type.");
			Assert::AreEqual(
				*SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>({}),
				uut->GetLeadingModifiers(),
				"Verify leading modifier tokens match.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
					PrimitiveDataType::Int,
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
				uut->GetTypeSpecifier(),
				"Verify type specifier matches.");
			Assert::AreEqual(
				*SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>({}),
				uut->GetTrailingModifiers(),
				"Verify trailing modifier tokens match.");
		}

		[[Fact]]
		void InitializeSimpleWithModifiers()
		{
			// static thread_local int friend mutable
			auto uut = SyntaxFactory::CreateTypeSpecifierSequence(
				SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
				{
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal),
				}),
				SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
					PrimitiveDataType::Int,
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
				SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
				{
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Friend),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
				}));

			Assert::AreEqual(
				SyntaxNodeType::TypeSpecifierSequence,
				uut->GetType(),
				"Verify has correct type.");
			Assert::AreEqual(
				*SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
				{
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal),
				}),
				uut->GetLeadingModifiers(),
				"Verify leading modifier tokens match.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
					PrimitiveDataType::Int,
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
				uut->GetTypeSpecifier(),
				"Verify type specifier matches.");
			Assert::AreEqual(
				*SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
				{
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Friend),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
				}),
				uut->GetTrailingModifiers(),
				"Verify trailing modifier tokens match.");
		}

		[[Fact]]
		void OperatorEqualNoModifiers()
		{
			// int
			auto uut = SyntaxFactory::CreateTypeSpecifierSequence(
				SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
					PrimitiveDataType::Int,
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)));

			TestUtils::AreEqual(
				SyntaxFactory::CreateTypeSpecifierSequence(
					SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
						PrimitiveDataType::Int,
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
				uut,
				"Verify matches.");
		}

		[[Fact]]
		void OperatorEqualWithModifiers()
		{
			// static thread_local int friend mutable
			auto uut = SyntaxFactory::CreateTypeSpecifierSequence(
				SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
				{
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal),
				}),
				SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
					PrimitiveDataType::Int,
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
				SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
				{
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Friend),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
				}));

			TestUtils::AreEqual(
				SyntaxFactory::CreateTypeSpecifierSequence(
					SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal),
					}),
					SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
						PrimitiveDataType::Int,
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
					SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Friend),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
					})),
				uut,
				"Verify matches.");
		}

		[[Fact]]
		void OperatorNotEqualNoLeadingModifiers()
		{
			// static thread_local int friend mutable
			auto uut = SyntaxFactory::CreateTypeSpecifierSequence(
				SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
				{
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal),
				}),
				SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
					PrimitiveDataType::Int,
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
				SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
				{
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Friend),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
				}));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateTypeSpecifierSequence(
					SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>({}),
					SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
						PrimitiveDataType::Int,
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
					SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Friend),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
					})),
				uut,
				"Verify does not match.");
		}

		[[Fact]]
		void OperatorNotEqualLeadingModifiers()
		{
			// static thread_local int friend mutable
			auto uut = SyntaxFactory::CreateTypeSpecifierSequence(
				SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
				{
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal),
				}),
				SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
					PrimitiveDataType::Int,
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
				SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
				{
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Friend),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
				}));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateTypeSpecifierSequence(
					SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Inline),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal),
					}),
					SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
						PrimitiveDataType::Int,
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
					SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Friend),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
					})),
				uut,
				"Verify does not match.");
		}

		[[Fact]]
		void OperatorNotEqualTypeSpecifier()
		{
			// static thread_local int friend mutable
			auto uut = SyntaxFactory::CreateTypeSpecifierSequence(
				SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
				{
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal),
				}),
				SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
					PrimitiveDataType::Int,
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
				SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
				{
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Friend),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
				}));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateTypeSpecifierSequence(
					SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal),
					}),
					SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
						PrimitiveDataType::Long,
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Long)),
					SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Friend),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
					})),
				uut,
				"Verify does not match.");
		}

		[[Fact]]
		void OperatorNotEqualNoTrailingModifiers()
		{
			// static thread_local int friend mutable
			auto uut = SyntaxFactory::CreateTypeSpecifierSequence(
				SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
				{
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal),
				}),
				SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
					PrimitiveDataType::Int,
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
				SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
				{
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Friend),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
				}));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateTypeSpecifierSequence(
					SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal),
					}),
					SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
						PrimitiveDataType::Int,
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
					SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>({})),
				uut,
				"Verify does not match.");
		}

		[[Fact]]
		void OperatorNotEqualTrailingModifiers()
		{
			// static thread_local int friend mutable
			auto uut = SyntaxFactory::CreateTypeSpecifierSequence(
				SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
				{
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal),
				}),
				SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
					PrimitiveDataType::Int,
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
				SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
				{
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Friend),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
				}));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateTypeSpecifierSequence(
					SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::ThreadLocal),
					}),
					SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
						PrimitiveDataType::Int,
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
					SyntaxFactory::CreateSyntaxList<InnerTree::SyntaxToken>(
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Inline),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Mutable),
					})),
				uut,
				"Verify does not match.");
		}
	};
}
