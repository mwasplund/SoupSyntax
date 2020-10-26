#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
	class InnerTreeInvocationExpressionTests
	{
	public:
		// [[Fact]]
		void InitializeSimple()
		{
			// a()
			auto uut = SyntaxFactory::CreateInvocationExpression(
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
				SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>({}, {}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis));

			Assert::AreEqual(
				SyntaxNodeType::InvocationExpression,
				uut->GetType(),
				"Verify has correct type.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				uut->GetLeftExpression(),
				"Verify left expression matches.");
			Assert::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
				uut->GetOpenParenthesisToken(),
				"Verify open parenthesis token matches.");
			Assert::AreEqual(
				*SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>({}, {}),
				uut->GetParameters(),
				"Verify parameters match.");
			Assert::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
				uut->GetCloseParenthesisToken(),
				"Verify close parenthesis token matches.");
		}

		// [[Fact]]
		void InitializeComplex()
		{
			// a(b, c)
			auto uut = SyntaxFactory::CreateInvocationExpression(
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
				SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
					{
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c"))
					},
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
					}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis));

			Assert::AreEqual(
				SyntaxNodeType::InvocationExpression,
				uut->GetType(),
				"Verify has correct type.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				uut->GetLeftExpression(),
				"Verify left expression matches.");
			Assert::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
				uut->GetOpenParenthesisToken(),
				"Verify open parenthesis token matches.");
			Assert::AreEqual(
				*SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
					{
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c"))
					},
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
					}),
				uut->GetParameters(),
				"Verify parameters match.");
			Assert::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
				uut->GetCloseParenthesisToken(),
				"Verify close parenthesis token matches.");
		}

		// [[Fact]]
		void OperatorEqual()
		{
			// a(b, c)
			auto uut = SyntaxFactory::CreateInvocationExpression(
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
				SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
					{
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c"))
					},
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
					}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis));

			TestUtils::AreEqual(
				SyntaxFactory::CreateInvocationExpression(
					SyntaxFactory::CreateIdentifierExpression(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
					SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
						{
							SyntaxFactory::CreateSimpleIdentifier(
								SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
							SyntaxFactory::CreateSimpleIdentifier(
								SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c"))
						},
						{
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
						}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
				uut,
				"Verify matches.");
		}

		// [[Fact]]
		void OperatorNotEqualLeftExpression()
		{
			// a(b, c)
			auto uut = SyntaxFactory::CreateInvocationExpression(
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
				SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
					{
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c"))
					},
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
					}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateInvocationExpression(
					SyntaxFactory::CreateIdentifierExpression(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a2"))),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
					SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
						{
							SyntaxFactory::CreateSimpleIdentifier(
								SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
							SyntaxFactory::CreateSimpleIdentifier(
								SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c"))
						},
						{
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
						}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
				uut,
				"Verify does not match.");
		}

		// [[Fact]]
		void OperatorNotEqualOpenParenthesisToken()
		{
			// a(b, c)
			auto uut = SyntaxFactory::CreateInvocationExpression(
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
				SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
					{
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c"))
					},
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
					}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateInvocationExpression(
					SyntaxFactory::CreateIdentifierExpression(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
					SyntaxFactory::CreateKeywordToken(
						SyntaxTokenType::OpenParenthesis,
						{
							SyntaxFactory::CreateTrivia(" "),
						},
						{}),
					SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
						{
							SyntaxFactory::CreateSimpleIdentifier(
								SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
							SyntaxFactory::CreateSimpleIdentifier(
								SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c"))
						},
						{
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
						}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
				uut,
				"Verify does not match.");
		}

		// [[Fact]]
		void OperatorNotEqualParameters()
		{
			// a(b, c)
			auto uut = SyntaxFactory::CreateInvocationExpression(
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
				SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
					{
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c"))
					},
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
					}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateInvocationExpression(
					SyntaxFactory::CreateIdentifierExpression(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
					SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
						{
							SyntaxFactory::CreateSimpleIdentifier(
								SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b2")),
							SyntaxFactory::CreateSimpleIdentifier(
								SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c"))
						},
						{
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
						}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
				uut,
				"Verify does not match.");
		}

		// [[Fact]]
		void OperatorNotEqualCloseParenthesisToken()
		{
			// a(b, c)
			auto uut = SyntaxFactory::CreateInvocationExpression(
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
				SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
					{
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c"))
					},
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
					}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateInvocationExpression(
					SyntaxFactory::CreateIdentifierExpression(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"))),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
					SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
						{
							SyntaxFactory::CreateSimpleIdentifier(
								SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b")),
							SyntaxFactory::CreateSimpleIdentifier(
								SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "c"))
						},
						{
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
						}),
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
