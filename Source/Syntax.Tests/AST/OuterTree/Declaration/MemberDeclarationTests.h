#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
	class OuterTreeMemberDeclarationTests
	{
	public:
		[[Fact]]
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
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))->CreateOuter(nullptr);

			Assert::AreEqual(
				SyntaxNodeType::MemberDeclaration,
				uut->GetType(),
				"Verify has correct type.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateDeclarationSpecifierSequence(
					SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
						PrimitiveDataType::Int,
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
				uut->GetDeclarationSpecifierSequence(),
				"Verify declaration specifier matches.");
			TestUtils::AreEqual(
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
			TestUtils::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon),
				uut->GetSemicolonToken(),
				"Verify semicolon token matches.");
		}

		[[Fact]]
		void GetChildren()
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
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))->CreateOuter(nullptr);

			Assert::AreEqual(
				std::vector<OuterTree::SyntaxNodeChild>(
				{
					TestUtils::CreateChild(
						SyntaxFactory::CreateDeclarationSpecifierSequence(
							SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
								PrimitiveDataType::Int,
								SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)))),
					TestUtils::CreateChild(
						SyntaxFactory::CreateMemberDeclaratorList(
							SyntaxFactory::CreateSyntaxSeparatorList<MemberDeclarator>(
								{
									SyntaxFactory::CreateMemberDeclarator(
										SyntaxFactory::CreateSimpleIdentifier(
											SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
										nullptr),
								},
								{}))),
					TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				}),
				uut->GetChildren(),
				"Verify children match.");
		}

		[[Fact]]
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
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))->CreateOuter(nullptr);

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

		[[Fact]]
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
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))->CreateOuter(nullptr);

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

		[[Fact]]
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
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))->CreateOuter(nullptr);

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

		[[Fact]]
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
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))->CreateOuter(nullptr);

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
