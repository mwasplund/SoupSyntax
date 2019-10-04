#pragma once

namespace Soup::Syntax::InnerTree::UnitTests
{
	class OuterTreeNestedNameSpecifierTests
	{
	public:
		[[Fact]]
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
					}))->CreateOuter(nullptr);

			Assert::AreEqual(
				SyntaxNodeType::NestedNameSpecifier,
				uut->GetType(),
				"Verify has correct type.");
			TestUtils::AreEqual(
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

		[[Fact]]
		void GetChildren()
		{
			auto uut = SyntaxFactory::CreateNestedNameSpecifier(
				SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
					{
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left")),
					},
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
					}))->CreateOuter(nullptr);

			Assert::AreEqual(
				std::vector<OuterTree::SyntaxNodeChild>({
					TestUtils::CreateChild(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Left"))),
					TestUtils::CreateChild(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon)),
				}),
				uut->GetChildren(),
				"Verify children match.");
		}

		[[Fact]]
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
					}))->CreateOuter(nullptr);

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

		[[Fact]]
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
					}))->CreateOuter(nullptr);

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
