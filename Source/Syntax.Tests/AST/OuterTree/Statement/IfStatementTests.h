#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
	class OuterTreeIfStatementTests
	{
	public:
		// [[Fact]]
		void InitializeNoElseClause()
		{
			// if(value);
			auto uut = SyntaxFactory::CreateIfStatement(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
				SyntaxFactory::CreateEmptyStatement(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				nullptr)->CreateOuter(nullptr);

			Assert::AreEqual(
				SyntaxNodeType::IfStatement,
				uut->GetType(),
				"Verify has correct type.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
				uut->GetIfToken(),
				"Verify if token matches.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
				uut->GetOpenParenthesisToken(),
				"Verify left parenthesis token matches.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
				uut->GetConditionExpression(),
				"Verify condition expression matches.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
				uut->GetCloseParenthesisToken(),
				"Verify right parenthesis token matches.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateEmptyStatement(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				uut->GetStatement(),
				"Verify statement matches.");
			Assert::IsFalse(
				uut->HasElseClause(),
				"Verify has no else clause.");
		}

		// [[Fact]]
		void InitializeWithElseClause()
		{
			// if(value);else;
			auto uut = SyntaxFactory::CreateIfStatement(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
				SyntaxFactory::CreateEmptyStatement(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				SyntaxFactory::CreateElseClause(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Else),
					SyntaxFactory::CreateEmptyStatement(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))))->CreateOuter(nullptr);

			Assert::AreEqual(
				SyntaxNodeType::IfStatement,
				uut->GetType(),
				"Verify has correct type.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
				uut->GetIfToken(),
				"Verify if token matches.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
				uut->GetOpenParenthesisToken(),
				"Verify left parenthesis token matches.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
				uut->GetConditionExpression(),
				"Verify condition expression matches.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
				uut->GetCloseParenthesisToken(),
				"Verify right parenthesis token matches.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateEmptyStatement(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				uut->GetStatement(),
				"Verify statement matches.");
			Assert::IsTrue(
				uut->HasElseClause(),
				"Verify has else clause.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateElseClause(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Else),
					SyntaxFactory::CreateEmptyStatement(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
				uut->GetElseClause(),
				"Verify else clause matches.");
		}

		// [[Fact]]
		void GetChildrenNoElseClause()
		{
			auto uut = SyntaxFactory::CreateIfStatement(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
				SyntaxFactory::CreateEmptyStatement(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				nullptr)->CreateOuter(nullptr);

			Assert::AreEqual(
				std::vector<OuterTree::SyntaxNodeChild>(
				{
					TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If)),
					TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis)),
					TestUtils::CreateChild(SyntaxFactory::CreateIdentifierExpression(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value")))),
					TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
					TestUtils::CreateChild(SyntaxFactory::CreateEmptyStatement(
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
				}),
				uut->GetChildren(),
				"Verify children match.");
		}

		// [[Fact]]
		void GetChildrenWithElseClause()
		{
			auto uut = SyntaxFactory::CreateIfStatement(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
				SyntaxFactory::CreateEmptyStatement(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				SyntaxFactory::CreateElseClause(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Else),
					SyntaxFactory::CreateEmptyStatement(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))))->CreateOuter(nullptr);

			Assert::AreEqual(
				std::vector<OuterTree::SyntaxNodeChild>(
				{
					TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If)),
					TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis)),
					TestUtils::CreateChild(SyntaxFactory::CreateIdentifierExpression(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value")))),
					TestUtils::CreateChild(SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
					TestUtils::CreateChild(SyntaxFactory::CreateEmptyStatement(
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
					TestUtils::CreateChild(SyntaxFactory::CreateElseClause(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Else),
						SyntaxFactory::CreateEmptyStatement(
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)))),
				}),
				uut->GetChildren(),
				"Verify children match.");
		}

		// [[Fact]]
		void OperatorEqualNoElseClause()
		{
			auto uut = SyntaxFactory::CreateIfStatement(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
				SyntaxFactory::CreateEmptyStatement(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				nullptr)->CreateOuter(nullptr);

			TestUtils::AreEqual(
				SyntaxFactory::CreateIfStatement(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
					SyntaxFactory::CreateIdentifierExpression(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
					SyntaxFactory::CreateEmptyStatement(
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
					nullptr),
				uut,
				"Verify matches.");
		}

		// [[Fact]]
		void OperatorEqualWithElseClause()
		{
			auto uut = SyntaxFactory::CreateIfStatement(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
				SyntaxFactory::CreateEmptyStatement(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				SyntaxFactory::CreateElseClause(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Else),
					SyntaxFactory::CreateEmptyStatement(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))))->CreateOuter(nullptr);

			TestUtils::AreEqual(
				SyntaxFactory::CreateIfStatement(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
					SyntaxFactory::CreateIdentifierExpression(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
					SyntaxFactory::CreateEmptyStatement(
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
					SyntaxFactory::CreateElseClause(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Else),
						SyntaxFactory::CreateEmptyStatement(
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)))),
				uut,
				"Verify matches.");
		}

		// [[Fact]]
		void OperatorNotEqualIfToken()
		{
			auto uut = SyntaxFactory::CreateIfStatement(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
				SyntaxFactory::CreateEmptyStatement(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				nullptr)->CreateOuter(nullptr);

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateIfStatement(
					SyntaxFactory::CreateKeywordToken(
						SyntaxTokenType::If,
						{
							SyntaxFactory::CreateTrivia(" "),
						},
						{
						}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
					SyntaxFactory::CreateIdentifierExpression(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
					SyntaxFactory::CreateEmptyStatement(
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
					nullptr),
				uut,
				"Verify do not match.");
		}

		// [[Fact]]
		void OperatorNotEqualOpenParenthesisToken()
		{
			auto uut = SyntaxFactory::CreateIfStatement(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
				SyntaxFactory::CreateEmptyStatement(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				nullptr)->CreateOuter(nullptr);

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateIfStatement(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
					SyntaxFactory::CreateKeywordToken(
						SyntaxTokenType::OpenParenthesis,
						{
							SyntaxFactory::CreateTrivia(" "),
						},
						{
						}),
					SyntaxFactory::CreateIdentifierExpression(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
					SyntaxFactory::CreateEmptyStatement(
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
					nullptr),
				uut,
				"Verify do not match.");
		}

		// [[Fact]]
		void OperatorNotEqualConditionExpression()
		{
			auto uut = SyntaxFactory::CreateIfStatement(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
				SyntaxFactory::CreateEmptyStatement(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				nullptr)->CreateOuter(nullptr);

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateIfStatement(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
					SyntaxFactory::CreateIdentifierExpression(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value2"))),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
					SyntaxFactory::CreateEmptyStatement(
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
					nullptr),
				uut,
				"Verify do not match.");
		}

		// [[Fact]]
		void OperatorNotEqualCloseParenthesisToken()
		{
			auto uut = SyntaxFactory::CreateIfStatement(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
				SyntaxFactory::CreateEmptyStatement(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				nullptr)->CreateOuter(nullptr);

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateIfStatement(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
					SyntaxFactory::CreateIdentifierExpression(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
					SyntaxFactory::CreateKeywordToken(
						SyntaxTokenType::CloseParenthesis,
						{
							SyntaxFactory::CreateTrivia(" "),
						},
						{
						}),
					SyntaxFactory::CreateEmptyStatement(
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
					nullptr),
				uut,
				"Verify do not match.");
		}

		// [[Fact]]
		void OperatorNotEqualStatement()
		{
			auto uut = SyntaxFactory::CreateIfStatement(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
				SyntaxFactory::CreateEmptyStatement(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				nullptr)->CreateOuter(nullptr);

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateIfStatement(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
					SyntaxFactory::CreateIdentifierExpression(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
					SyntaxFactory::CreateEmptyStatement(
							SyntaxFactory::CreateKeywordToken(
								SyntaxTokenType::Semicolon,
								{
									SyntaxFactory::CreateTrivia(" "),
								},
								{
								})),
					nullptr),
				uut,
				"Verify do not match.");
		}

		// [[Fact]]
		void OperatorNotEqualNoElseClause()
		{
			auto uut = SyntaxFactory::CreateIfStatement(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
				SyntaxFactory::CreateEmptyStatement(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				nullptr)->CreateOuter(nullptr);

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateIfStatement(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
					SyntaxFactory::CreateIdentifierExpression(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
					SyntaxFactory::CreateEmptyStatement(
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
					SyntaxFactory::CreateElseClause(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Else),
						SyntaxFactory::CreateEmptyStatement(
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)))),
				uut,
				"Verify do not match.");
		}

		// [[Fact]]
		void OperatorNotEqualWithElseClause()
		{
			auto uut = SyntaxFactory::CreateIfStatement(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
				SyntaxFactory::CreateEmptyStatement(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				SyntaxFactory::CreateElseClause(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Else),
					SyntaxFactory::CreateEmptyStatement(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))))->CreateOuter(nullptr);

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateIfStatement(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::If),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
					SyntaxFactory::CreateIdentifierExpression(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis),
					SyntaxFactory::CreateEmptyStatement(
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
					SyntaxFactory::CreateElseClause(
						SyntaxFactory::CreateKeywordToken(
							SyntaxTokenType::Else,
							{
								SyntaxFactory::CreateTrivia(" "),
							},
							{
							}),
						SyntaxFactory::CreateEmptyStatement(
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)))),
				uut,
				"Verify do not match.");
		}
	};
}
