#pragma once

namespace Soup::Syntax::InnerTree::UnitTests
{
	class InnerTreeNestedNameSpecifierTests
	{
	public:
		// [[Fact]]
		void Initialize()
		{
			auto uut = SyntaxFactory::CreateNestedNameSpecifier(
				SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
					{
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left")),
					},
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
					}));

			Assert::AreEqual(
				SyntaxNodeType::NestedNameSpecifier,
				uut->GetType(),
				"Verify has correct type.");
			Assert::AreEqual(
				*SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
					{
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left")),
					},
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
					}),
				uut->GetSpecifierSequence(),
				"Verify specifier sequence matches.");
		}

		// [[Fact]]
		void OperatorEqual()
		{
			auto uut = SyntaxFactory::CreateNestedNameSpecifier(
				SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
					{
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left")),
					},
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
					}));

			TestUtils::AreEqual(
				SyntaxFactory::CreateNestedNameSpecifier(
					SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
						{
							SyntaxFactory::CreateSimpleIdentifier(
								SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left")),
						},
						{
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
						})),
				uut,
				"Verify matches.");
		}

		// [[Fact]]
		void OperatorNotEqualSpecifierSequence()
		{
			auto uut = SyntaxFactory::CreateNestedNameSpecifier(
				SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
					{
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left")),
					},
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
					}));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateNestedNameSpecifier(
					SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
						{
							SyntaxFactory::CreateSimpleIdentifier(
								SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left2")),
						},
						{
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
						})),
				uut,
				"Verify do not match.");
		}
	};
}
