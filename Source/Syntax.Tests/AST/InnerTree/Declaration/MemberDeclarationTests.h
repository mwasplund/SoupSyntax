#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
	class InnerTreeMemberDeclarationTests
	{
	public:
		// [[Fact]]
		void InitializeSimple()
		{
			// int i;
			auto uut = SyntaxFactory::CreateMemberDeclaration(
				SyntaxFactory::CreateDeclarationSpecifierSequence(
					SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
						PrimitiveDataType::Int,
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
				SyntaxFactory::CreateMemberDeclaratorList(
					SyntaxFactory::CreateSyntaxSeparatorList<MemberDeclarator>(
						{
							SyntaxFactory::CreateMemberDeclarator(
								SyntaxFactory::CreateSimpleIdentifier(
									SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
								nullptr),
						},
						{})),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			Assert::AreEqual(
				SyntaxNodeType::MemberDeclaration,
				uut->GetType(),
				"Verify has correct type.");
			Assert::AreEqual(
				*SyntaxFactory::CreateDeclarationSpecifierSequence(
					SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
						PrimitiveDataType::Int,
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
				uut->GetDeclarationSpecifierSequence(),
				"Verify declaration specifier matches.");
			Assert::AreEqual(
				*SyntaxFactory::CreateMemberDeclaratorList(
					SyntaxFactory::CreateSyntaxSeparatorList<MemberDeclarator>(
						{
							SyntaxFactory::CreateMemberDeclarator(
								SyntaxFactory::CreateSimpleIdentifier(
									SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
								nullptr),
						},
						{})),
				uut->GetMemberDeclaratorList(),
				"Verify initializer declarator list matches.");
			Assert::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon),
				uut->GetSemicolonToken(),
				"Verify semicolon token matches.");
		}

		// [[Fact]]
		void OperatorEqual()
		{
			// int i;
			auto uut = SyntaxFactory::CreateMemberDeclaration(
				SyntaxFactory::CreateDeclarationSpecifierSequence(
					SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
						PrimitiveDataType::Int,
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
				SyntaxFactory::CreateMemberDeclaratorList(
					SyntaxFactory::CreateSyntaxSeparatorList<MemberDeclarator>(
						{
							SyntaxFactory::CreateMemberDeclarator(
								SyntaxFactory::CreateSimpleIdentifier(
									SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
								nullptr),
						},
						{})),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			TestUtils::AreEqual(
				SyntaxFactory::CreateMemberDeclaration(
					SyntaxFactory::CreateDeclarationSpecifierSequence(
						SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
							PrimitiveDataType::Int,
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
					SyntaxFactory::CreateMemberDeclaratorList(
						SyntaxFactory::CreateSyntaxSeparatorList<MemberDeclarator>(
							{
								SyntaxFactory::CreateMemberDeclarator(
									SyntaxFactory::CreateSimpleIdentifier(
										SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
									nullptr),
							},
							{})),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				uut,
				"Verify matches.");
		}

		// [[Fact]]
		void OperatorNotEqualDeclarationSpecifierSequence()
		{
			// int i;
			auto uut = SyntaxFactory::CreateMemberDeclaration(
				SyntaxFactory::CreateDeclarationSpecifierSequence(
					SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
						PrimitiveDataType::Int,
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
				SyntaxFactory::CreateMemberDeclaratorList(
					SyntaxFactory::CreateSyntaxSeparatorList<MemberDeclarator>(
						{
							SyntaxFactory::CreateMemberDeclarator(
								SyntaxFactory::CreateSimpleIdentifier(
									SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
								nullptr),
						},
						{})),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateMemberDeclaration(
					SyntaxFactory::CreateDeclarationSpecifierSequence(
						SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
							PrimitiveDataType::Long,
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Long))),
					SyntaxFactory::CreateMemberDeclaratorList(
						SyntaxFactory::CreateSyntaxSeparatorList<MemberDeclarator>(
							{
								SyntaxFactory::CreateMemberDeclarator(
									SyntaxFactory::CreateSimpleIdentifier(
										SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
									nullptr),
							},
							{})),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				uut,
				"Verify do not match.");
		}

		// [[Fact]]
		void OperatorNotEqualMemberDeclaratorList()
		{
			// int i;
			auto uut = SyntaxFactory::CreateMemberDeclaration(
				SyntaxFactory::CreateDeclarationSpecifierSequence(
					SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
						PrimitiveDataType::Int,
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
				SyntaxFactory::CreateMemberDeclaratorList(
					SyntaxFactory::CreateSyntaxSeparatorList<MemberDeclarator>(
						{
							SyntaxFactory::CreateMemberDeclarator(
								SyntaxFactory::CreateSimpleIdentifier(
									SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
								nullptr),
						},
						{})),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateMemberDeclaration(
					SyntaxFactory::CreateDeclarationSpecifierSequence(
						SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
							PrimitiveDataType::Int,
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
					SyntaxFactory::CreateMemberDeclaratorList(
						SyntaxFactory::CreateSyntaxSeparatorList<MemberDeclarator>(
							{
								SyntaxFactory::CreateMemberDeclarator(
									SyntaxFactory::CreateSimpleIdentifier(
										SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i2")),
									nullptr),
							},
							{})),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				uut,
				"Verify do not match.");
		}

		// [[Fact]]
		void OperatorNotEqualSemicolonToken()
		{
			// int i;
			auto uut = SyntaxFactory::CreateMemberDeclaration(
				SyntaxFactory::CreateDeclarationSpecifierSequence(
					SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
						PrimitiveDataType::Int,
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
				SyntaxFactory::CreateMemberDeclaratorList(
					SyntaxFactory::CreateSyntaxSeparatorList<MemberDeclarator>(
						{
							SyntaxFactory::CreateMemberDeclarator(
								SyntaxFactory::CreateSimpleIdentifier(
									SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
								nullptr),
						},
						{})),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateMemberDeclaration(
					SyntaxFactory::CreateDeclarationSpecifierSequence(
						SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
							PrimitiveDataType::Int,
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
					SyntaxFactory::CreateMemberDeclaratorList(
						SyntaxFactory::CreateSyntaxSeparatorList<MemberDeclarator>(
							{
								SyntaxFactory::CreateMemberDeclarator(
									SyntaxFactory::CreateSimpleIdentifier(
										SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
									nullptr),
							},
							{})),
					SyntaxFactory::CreateKeywordToken(
						SyntaxTokenType::Semicolon,
						{
							SyntaxFactory::CreateTrivia(" "),
						},
						{})),
				uut,
				"Verify do not match.");
		}
	};
}
