#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
	class ParseClassSpecifierTests
	{
	public:
		[[Fact]]
		void Simple()
		{
			auto sourceCode = std::string("class{}");
			auto expression = ParseClassSpecifier(sourceCode);

			auto expected = SyntaxFactory::CreateClassSpecifier(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
				nullptr,
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
				SyntaxFactory::CreateSyntaxList<Declaration>({}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace));

			TestUtils::AreEqual(
				expected,
				expression,
				"Verify identifier matches expected.");
		}

		[[Fact]]
		void SingleDeclaration()
		{
			auto sourceCode = std::string("class MyClass { ; }");
			auto expression = ParseClassSpecifier(sourceCode);

			auto expected = SyntaxFactory::CreateClassSpecifier(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
				SyntaxFactory::CreateUniqueToken(
					SyntaxTokenType::Identifier,
					"MyClass",
					{
						SyntaxFactory::CreateTrivia(" ")
					},
					{}),
				SyntaxFactory::CreateKeywordToken(
					SyntaxTokenType::OpenBrace,
					{
						SyntaxFactory::CreateTrivia(" ")
					},
					{}),
				SyntaxFactory::CreateSyntaxList<Declaration>(
					{
						SyntaxFactory::CreateEmptyDeclaration(
							SyntaxFactory::CreateKeywordToken(
								SyntaxTokenType::Semicolon,
								{
									SyntaxFactory::CreateTrivia(" ")
								},
								{})),
					}),
				SyntaxFactory::CreateKeywordToken(
					SyntaxTokenType::CloseBrace,
					{
						SyntaxFactory::CreateTrivia(" ")
					},
					{}));

			TestUtils::AreEqual(
				expected,
				expression,
				"Verify identifier matches expected.");
		}

		[[Fact]]
		void MultipleDeclarations()
		{
			auto sourceCode = std::string("class MyClass { public: ; }");
			auto expression = ParseClassSpecifier(sourceCode);

			auto expected = SyntaxFactory::CreateClassSpecifier(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
				SyntaxFactory::CreateUniqueToken(
					SyntaxTokenType::Identifier,
					"MyClass",
					{
						SyntaxFactory::CreateTrivia(" ")
					},
					{}),
				SyntaxFactory::CreateKeywordToken(
					SyntaxTokenType::OpenBrace,
					{
						SyntaxFactory::CreateTrivia(" ")
					},
					{}),
				SyntaxFactory::CreateSyntaxList<Declaration>(
					{
						SyntaxFactory::CreateAccessorSpecifier(
							SyntaxFactory::CreateKeywordToken(
								SyntaxTokenType::Public,
								{
									SyntaxFactory::CreateTrivia(" ")
								},
								{}),
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon)),
						SyntaxFactory::CreateEmptyDeclaration(
							SyntaxFactory::CreateKeywordToken(
								SyntaxTokenType::Semicolon,
								{
									SyntaxFactory::CreateTrivia(" ")
								},
								{})),
					}),
				SyntaxFactory::CreateKeywordToken(
					SyntaxTokenType::CloseBrace,
					{
						SyntaxFactory::CreateTrivia(" ")
					},
					{}));

			TestUtils::AreEqual(
				expected,
				expression,
				"Verify identifier matches expected.");
		}

	private:
		std::shared_ptr<const ClassSpecifier> ParseClassSpecifier(const std::string& sourceCode)
		{
			auto uut = TestUtils::BuildParser(sourceCode);
			auto context = uut.Parser->classSpecifier();

			// Convert the the abstract syntax tree
			auto node = uut.Visitor->visit(context)
				.as<std::shared_ptr<const SyntaxNode>>();

			return std::dynamic_pointer_cast<const ClassSpecifier>(node);
		}
	};
}
