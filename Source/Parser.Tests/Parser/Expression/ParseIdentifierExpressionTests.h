#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
	class ParseIdentifierExpressionTests
	{
	public:
		// [[Fact]]
		void SingleSimpleIdentifier()
		{
			auto sourceCode = std::string("Name");
			auto expression = ParseIdentifierExpression(sourceCode);

			TestUtils::AreEqual(
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, sourceCode))),
				expression,
				"Verify matches expected.");
		}

		// [[Fact]]
		void SingleQualifiedIdentifier()
		{
			auto sourceCode = std::string("NameLeft::NameRight");
			auto expression = ParseIdentifierExpression(sourceCode);

			TestUtils::AreEqual(
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateNestedNameSpecifier(
						SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
							{
								SyntaxFactory::CreateSimpleIdentifier(
									SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "NameLeft")),
							},
							{
								SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
							})),
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "NameRight"))),
				expression,
				"Verify matches expected.");
		}

		// [[Fact]]
		void DoubleQualifiedIdentifier()
		{
			auto sourceCode = std::string("std::filesystem::path");
			auto expression = ParseIdentifierExpression(sourceCode);

			TestUtils::AreEqual(
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateNestedNameSpecifier(
						SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
							{
								SyntaxFactory::CreateSimpleIdentifier(
									SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "std")),
								SyntaxFactory::CreateSimpleIdentifier(
									SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "filesystem")),
							},
							{
								SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
								SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
							})),
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "path"))),
				expression,
				"Verify matches expected.");
		}

		// [[Fact]]
		void SingleTemplateIdentifier()
		{
			auto sourceCode = std::string("Name<Value1, Value2>");
			auto expression = ParseIdentifierExpression(sourceCode);

			TestUtils::AreEqual(
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleTemplateIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Name"),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
						SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
							{
								SyntaxFactory::CreateTypeSpecifierSequence(
									SyntaxFactory::CreateIdentifierType(
										SyntaxFactory::CreateSimpleIdentifier(
											SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Value1")))),
								SyntaxFactory::CreateTypeSpecifierSequence(
									SyntaxFactory::CreateIdentifierType(
										SyntaxFactory::CreateSimpleIdentifier(
											SyntaxFactory::CreateUniqueToken(
												SyntaxTokenType::Identifier,
												"Value2",
												{
													SyntaxFactory::CreateTrivia(" "),
												},
												{})))),
							},
							{
								SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma)
							}),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan))),
				expression,
				"Verify matches expected.");
		}

		// [[Fact]]
		void SingleDestructorIdentifier()
		{
			auto sourceCode = std::string("~MyClass");
			auto expression = ParseIdentifierExpression(sourceCode);

			TestUtils::AreEqual(
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateDestructorIdentifier(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Tilde),
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"))),
				expression,
				"Verify matches expected.");
		}

	private:
		std::shared_ptr<const IdentifierExpression> ParseIdentifierExpression(const std::string& sourceCode)
		{
			auto uut = TestUtils::BuildParser(sourceCode);
			auto context = uut.Parser->primaryExpression();

			// Convert the the abstract syntax tree
			auto node = uut.Visitor->visit(context)
				.as<std::shared_ptr<const SyntaxNode>>();

			return std::dynamic_pointer_cast<const IdentifierExpression>(node);
		}
	};
}
