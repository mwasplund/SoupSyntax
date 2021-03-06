#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
	class OuterTreeMemberDeclaratorListTests
	{
	public:
		// [[Fact]]
		void InitializeSimple()
		{
			// a, b
			auto uut = SyntaxFactory::CreateMemberDeclaratorList(
				SyntaxFactory::CreateSyntaxSeparatorList<MemberDeclarator>(
					{
						SyntaxFactory::CreateMemberDeclarator(
							SyntaxFactory::CreateSimpleIdentifier(
								SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
							nullptr),
						SyntaxFactory::CreateMemberDeclarator(
							SyntaxFactory::CreateSimpleIdentifier(
								SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
							nullptr),
					},
					{}))->CreateOuter(nullptr);

			Assert::AreEqual(
				SyntaxNodeType::MemberDeclaratorList,
				uut->GetType(),
				"Verify has correct type.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateSyntaxSeparatorList<MemberDeclarator>(
					{
						SyntaxFactory::CreateMemberDeclarator(
							SyntaxFactory::CreateSimpleIdentifier(
								SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
							nullptr),
						SyntaxFactory::CreateMemberDeclarator(
							SyntaxFactory::CreateSimpleIdentifier(
								SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
							nullptr),
					},
					{}),
				uut->GetItems(),
				"Verify items match.");
		}

		// [[Fact]]
		void GetChildren()
		{
			// a, b
			auto uut = SyntaxFactory::CreateMemberDeclaratorList(
				SyntaxFactory::CreateSyntaxSeparatorList<MemberDeclarator>(
					{
						SyntaxFactory::CreateMemberDeclarator(
							SyntaxFactory::CreateSimpleIdentifier(
								SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
							nullptr),
						SyntaxFactory::CreateMemberDeclarator(
							SyntaxFactory::CreateSimpleIdentifier(
								SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
							nullptr),
					},
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
					}))->CreateOuter(nullptr);

			Assert::AreEqual(
				std::vector<OuterTree::SyntaxNodeChild>({
					TestUtils::CreateChild(
						SyntaxFactory::CreateMemberDeclarator(
							SyntaxFactory::CreateSimpleIdentifier(
								SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
							nullptr)),
					TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)),
					TestUtils::CreateChild(
						SyntaxFactory::CreateMemberDeclarator(
							SyntaxFactory::CreateSimpleIdentifier(
								SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
							nullptr)),
				}),
				uut->GetChildren(),
				"Verify children match.");
		}

		// [[Fact]]
		void OperatorEqual()
		{
			// a, b
			auto uut = SyntaxFactory::CreateMemberDeclaratorList(
				SyntaxFactory::CreateSyntaxSeparatorList<MemberDeclarator>(
					{
						SyntaxFactory::CreateMemberDeclarator(
							SyntaxFactory::CreateSimpleIdentifier(
								SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
							nullptr),
						SyntaxFactory::CreateMemberDeclarator(
							SyntaxFactory::CreateSimpleIdentifier(
								SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
							nullptr),
					},
					{}))->CreateOuter(nullptr);

			TestUtils::AreEqual(
				SyntaxFactory::CreateMemberDeclaratorList(
					SyntaxFactory::CreateSyntaxSeparatorList<MemberDeclarator>(
						{
							SyntaxFactory::CreateMemberDeclarator(
								SyntaxFactory::CreateSimpleIdentifier(
									SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
								nullptr),
							SyntaxFactory::CreateMemberDeclarator(
								SyntaxFactory::CreateSimpleIdentifier(
									SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
								nullptr),
						},
						{})),
				uut,
				"Verify matches.");
		}

		// [[Fact]]
		void OperatorNotEqualLessItems()
		{
			// a, b
			auto uut = SyntaxFactory::CreateMemberDeclaratorList(
				SyntaxFactory::CreateSyntaxSeparatorList<MemberDeclarator>(
					{
						SyntaxFactory::CreateMemberDeclarator(
							SyntaxFactory::CreateSimpleIdentifier(
								SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
							nullptr),
						SyntaxFactory::CreateMemberDeclarator(
							SyntaxFactory::CreateSimpleIdentifier(
								SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
							nullptr),
					},
					{}))->CreateOuter(nullptr);

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateMemberDeclaratorList(
					SyntaxFactory::CreateSyntaxSeparatorList<MemberDeclarator>(
						{
							SyntaxFactory::CreateMemberDeclarator(
								SyntaxFactory::CreateSimpleIdentifier(
									SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c")),
								nullptr),
						},
						{})),
				uut,
				"Verify does not match.");
		}

		// [[Fact]]
		void OperatorNotEqualWithItems()
		{
			// a, b
			auto uut = SyntaxFactory::CreateMemberDeclaratorList(
				SyntaxFactory::CreateSyntaxSeparatorList<MemberDeclarator>(
					{
						SyntaxFactory::CreateMemberDeclarator(
							SyntaxFactory::CreateSimpleIdentifier(
								SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
							nullptr),
						SyntaxFactory::CreateMemberDeclarator(
							SyntaxFactory::CreateSimpleIdentifier(
								SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
							nullptr),
					},
					{}))->CreateOuter(nullptr);

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateMemberDeclaratorList(
					SyntaxFactory::CreateSyntaxSeparatorList<MemberDeclarator>(
						{
							SyntaxFactory::CreateMemberDeclarator(
								SyntaxFactory::CreateSimpleIdentifier(
									SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c")),
								nullptr),
							SyntaxFactory::CreateMemberDeclarator(
								SyntaxFactory::CreateSimpleIdentifier(
									SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
								nullptr),
						},
						{})),
				uut,
				"Verify does not match.");
		}
	};
}
