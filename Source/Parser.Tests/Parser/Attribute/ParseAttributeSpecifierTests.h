#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
	class ParseAttributeSpecifierTests
	{
	public:
		// [[Fact]]
		void Empty()
		{
			auto sourceCode = std::string("[[]]");

			auto actual = ParseAttributeSpecifier(sourceCode);

			auto expected = SyntaxFactory::CreateAttributeSpecifier(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
				SyntaxFactory::CreateSyntaxSeparatorList<Attribute>({}, {}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		// [[Fact]]
		void EmptySpacing()
		{
			auto sourceCode = std::string("[ [  ]   ]");

			auto actual = ParseAttributeSpecifier(sourceCode);

			auto expected = SyntaxFactory::CreateAttributeSpecifier(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
				SyntaxFactory::CreateKeywordToken(
					SyntaxTokenType::OpenBracket,
					{
						SyntaxFactory::CreateTrivia(" "),
					},
					{}),
				SyntaxFactory::CreateSyntaxSeparatorList<Attribute>({}, {}),
				SyntaxFactory::CreateKeywordToken(
					SyntaxTokenType::CloseBracket,
					{
						SyntaxFactory::CreateTrivia("  "),
					},
					{}),
				SyntaxFactory::CreateKeywordToken(
					SyntaxTokenType::CloseBracket,
					{
						SyntaxFactory::CreateTrivia("   "),
					},
					{}));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		// [[Fact]]
		void Simple()
		{
			auto sourceCode = std::string("[[a]]");

			auto actual = ParseAttributeSpecifier(sourceCode);

			auto expected = SyntaxFactory::CreateAttributeSpecifier(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
				SyntaxFactory::CreateSyntaxSeparatorList<Attribute>(
					{
						SyntaxFactory::CreateAttribute(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a")),
					},
					{}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		// [[Fact]]
		void SingleEmptyArgumentClause()
		{
			auto sourceCode = std::string("[[a()]]");

			auto actual = ParseAttributeSpecifier(sourceCode);

			auto expected = SyntaxFactory::CreateAttributeSpecifier(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
				SyntaxFactory::CreateSyntaxSeparatorList<Attribute>(
					{
						SyntaxFactory::CreateAttribute(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"),
							SyntaxFactory::CreateAttributeArgumentClause(
								SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
								SyntaxFactory::CreateSyntaxList<SyntaxToken>({}),
								SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))),
					},
					{}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		// [[Fact]]
		void SingleArgumentClause()
		{
			auto sourceCode = std::string("[[a(b, c)]]");

			auto actual = ParseAttributeSpecifier(sourceCode);

			auto expected = SyntaxFactory::CreateAttributeSpecifier(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBracket),
				SyntaxFactory::CreateSyntaxSeparatorList<Attribute>(
					{
						SyntaxFactory::CreateAttribute(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "a"),
							SyntaxFactory::CreateAttributeArgumentClause(
								SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
								SyntaxFactory::CreateSyntaxList<SyntaxToken>(
								{
									SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "b"),
									SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
									SyntaxFactory::CreateUniqueToken(
										SyntaxTokenType::Identifier,
										"c",
										{
											SyntaxFactory::CreateTrivia(" "),
										},
										{}),
								}),
								SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))),
					},
					{}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBracket));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

	private:
		std::shared_ptr<const AttributeSpecifier> ParseAttributeSpecifier(const std::string& sourceCode)
		{
			auto uut = TestUtils::BuildParser(sourceCode);
			auto context = uut.Parser->attributeSpecifier();

			// Convert the the abstract syntax tree
			auto node = uut.Visitor->visit(context)
				.as<std::shared_ptr<const AttributeSpecifier>>();

			return node;
		}
	};
}
