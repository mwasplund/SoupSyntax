#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
	class InnerTreeMemberInitializerTests
	{
	public:
		// [[Fact]]
		void InitializeSimple()
		{
			// a()
			auto uut = SyntaxFactory::CreateMemberInitializer(
				SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"),
				SyntaxFactory::CreateInitializerList(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
					SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>({}, {}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)));

			Assert::AreEqual(
				SyntaxNodeType::MemberInitializer,
				uut->GetType(),
				"Verify has correct type.");
			Assert::AreEqual(
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

		// [[Fact]]
		void OperatorEqual()
		{
			// a()
			auto uut = SyntaxFactory::CreateMemberInitializer(
				SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"),
				SyntaxFactory::CreateInitializerList(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
					SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>({}, {}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)));

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

		// [[Fact]]
		void OperatorNotEqualIdentifierToken()
		{
			// a()
			auto uut = SyntaxFactory::CreateMemberInitializer(
				SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"),
				SyntaxFactory::CreateInitializerList(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
					SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>({}, {}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)));

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

		// [[Fact]]
		void OperatorNotEqualInitializer()
		{
			// a()
			auto uut = SyntaxFactory::CreateMemberInitializer(
				SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"),
				SyntaxFactory::CreateInitializerList(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
					SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>({}, {}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)));

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
