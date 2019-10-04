#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
	class OuterTreeMemberInitializerTests
	{
	public:
		[[Fact]]
		void InitializeSimple()
		{
			// a()
			auto uut = SyntaxFactory::CreateMemberInitializer(
				SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"),
				SyntaxFactory::CreateInitializerList(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
					SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>({}, {}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)))->CreateOuter(nullptr);

			Assert::AreEqual(
				SyntaxNodeType::MemberInitializer,
				uut->GetType(),
				"Verify has correct type.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"),
				uut->GetIdentifierToken(),
				"Verify identifier token matches.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateInitializerList(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
					SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>({}, {}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
				uut->GetInitializerList(),
				"Verify initializer list matches.");
		}

		[[Fact]]
		void GetChildren()
		{
			// a()
			auto uut = SyntaxFactory::CreateMemberInitializer(
				SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"),
				SyntaxFactory::CreateInitializerList(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
					SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>({}, {}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)))->CreateOuter(nullptr);

			Assert::AreEqual(
				std::vector<OuterTree::SyntaxNodeChild>({
					TestUtils::CreateChild(SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
					TestUtils::CreateChild(
						SyntaxFactory::CreateInitializerList(
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
							SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>({}, {}),
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))),
				}),
				uut->GetChildren(),
				"Verify children match.");
		}

		[[Fact]]
		void OperatorEqual()
		{
			// a()
			auto uut = SyntaxFactory::CreateMemberInitializer(
				SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"),
				SyntaxFactory::CreateInitializerList(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
					SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>({}, {}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)))->CreateOuter(nullptr);

			TestUtils::AreEqual(
				SyntaxFactory::CreateMemberInitializer(
					SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"),
					SyntaxFactory::CreateInitializerList(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
						SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>({}, {}),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))),
				uut,
				"Verify matches.");
		}

		[[Fact]]
		void OperatorNotEqualIdentifierToken()
		{
			// a()
			auto uut = SyntaxFactory::CreateMemberInitializer(
				SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"),
				SyntaxFactory::CreateInitializerList(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
					SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>({}, {}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)))->CreateOuter(nullptr);

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateMemberInitializer(
					SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"),
					SyntaxFactory::CreateInitializerList(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
						SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>({}, {}),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))),
				uut,
				"Verify does not match.");
		}

		[[Fact]]
		void OperatorNotEqualInitializer()
		{
			// a()
			auto uut = SyntaxFactory::CreateMemberInitializer(
				SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"),
				SyntaxFactory::CreateInitializerList(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
					SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>({}, {}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)))->CreateOuter(nullptr);

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateMemberInitializer(
					SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"),
					SyntaxFactory::CreateInitializerList(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
						SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
							{
								SyntaxFactory::CreateSimpleIdentifier(
									SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
							},
							{}),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))),
				uut,
				"Verify does not match.");
		}
	};
}
