#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
	class OuterTreeParameterListTests
	{
	public:
		[[Fact]]
		void InitializeSimple()
		{
			// (int parameter)
			auto uut = SyntaxFactory::CreateParameterList(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
				SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
					{
						SyntaxFactory::CreateParameter(
							SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
								PrimitiveDataType::Int,
								SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
							SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
								PrimitiveDataType::Int,
								SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
					},
					{}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))->CreateOuter(nullptr);

			Assert::AreEqual(
				SyntaxNodeType::ParameterList,
				uut->GetType(),
				"Verify has correct type.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
				uut->GetOpenParenthesisToken(),
				"Verify left parenthesis token matches.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
					{
						SyntaxFactory::CreateParameter(
							SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
								PrimitiveDataType::Int,
								SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
							SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
								PrimitiveDataType::Int,
								SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
					},
					{}),
				uut->GetParameters(),
				"Verify parameters match.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
				uut->GetCloseParenthesisToken(),
				"Verify right parenthesis token matches.");
		}

		[[Fact]]
		void GetChildren()
		{
			// (int parameter)
			auto uut = SyntaxFactory::CreateParameterList(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
				SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
					{
						SyntaxFactory::CreateParameter(
							SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
								PrimitiveDataType::Int,
								SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
							SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
								PrimitiveDataType::Int,
								SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
					},
					{}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))->CreateOuter(nullptr);

			Assert::AreEqual(
				std::vector<OuterTree::SyntaxNodeChild>({
					TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis)),
					TestUtils::CreateChild(
						SyntaxFactory::CreateParameter(
							SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
								PrimitiveDataType::Int,
								SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
							SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
								PrimitiveDataType::Int,
								SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)))),
					TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
				}),
				uut->GetChildren(),
				"Verify children match.");
		}

		[[Fact]]
		void OperatorEqual()
		{
			// (int parameter)
			auto uut = SyntaxFactory::CreateParameterList(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
				SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
					{
						SyntaxFactory::CreateParameter(
							SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
								PrimitiveDataType::Int,
								SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
							SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
								PrimitiveDataType::Int,
								SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
					},
					{}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))->CreateOuter(nullptr);

			TestUtils::AreEqual(
				SyntaxFactory::CreateParameterList(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
					SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
						{
							SyntaxFactory::CreateParameter(
								SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
									PrimitiveDataType::Int,
									SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
								SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
									PrimitiveDataType::Int,
									SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
						},
						{}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
				uut,
				"Verify matches.");
		}

		[[Fact]]
		void OperatorNotEqualOpenParenthesisToken()
		{
			// (int parameter)
			auto uut = SyntaxFactory::CreateParameterList(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
				SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
					{
						SyntaxFactory::CreateParameter(
							SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
								PrimitiveDataType::Int,
								SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
							SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
								PrimitiveDataType::Int,
								SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
					},
					{}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))->CreateOuter(nullptr);

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateParameterList(
					SyntaxFactory::CreateKeywordToken(
						SyntaxTokenType::OpenParenthesis,
						{
							SyntaxFactory::CreateTrivia(" "),
						},
						{}),
					SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
						{
							SyntaxFactory::CreateParameter(
								SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
									PrimitiveDataType::Int,
									SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
								SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
									PrimitiveDataType::Int,
									SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
						},
						{}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
				uut,
				"Verify does not match.");
		}

		[[Fact]]
		void OperatorNotEqualParameters()
		{
			// (int parameter)
			auto uut = SyntaxFactory::CreateParameterList(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
				SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
					{
						SyntaxFactory::CreateParameter(
							SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
								PrimitiveDataType::Int,
								SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
							SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
								PrimitiveDataType::Int,
								SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
					},
					{}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))->CreateOuter(nullptr);

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateParameterList(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
					SyntaxFactory::CreateSyntaxSeparatorList<Parameter>({}, {}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
				uut,
				"Verify does not match.");
		}

		[[Fact]]
		void OperatorNotEqualCloseParenthesisToken()
		{
			// (int parameter)
			auto uut = SyntaxFactory::CreateParameterList(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
				SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
					{
						SyntaxFactory::CreateParameter(
							SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
								PrimitiveDataType::Int,
								SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
							SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
								PrimitiveDataType::Int,
								SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
					},
					{}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))->CreateOuter(nullptr);

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateParameterList(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
					SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
						{
							SyntaxFactory::CreateParameter(
								SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
									PrimitiveDataType::Int,
									SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
								SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
									PrimitiveDataType::Int,
									SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
						},
						{}),
					SyntaxFactory::CreateKeywordToken(
						SyntaxTokenType::CloseParenthesis,
						{
							SyntaxFactory::CreateTrivia(" "),
						},
						{})),
				uut,
				"Verify does not match.");
		}
	};
}
