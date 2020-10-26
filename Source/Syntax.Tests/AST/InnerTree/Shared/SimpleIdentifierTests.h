#pragma once

namespace Soup::Syntax::InnerTree::UnitTests
{
	class InnerTreeSimpleIdentifierTests
	{
	public:
		// [[Fact]]
		void Initialize()
		{
			auto uut = SyntaxFactory::CreateSimpleIdentifier(
				SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"));

			Assert::AreEqual(
				SyntaxNodeType::SimpleIdentifier,
				uut->GetType(),
				"Verify has correct type.");
			Assert::AreEqual(
				*SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"),
				uut->GetIdentifierToken(),
				"Verify identifier matches.");
		}

		// [[Fact]]
		void OperatorEqual()
		{
			auto uut = SyntaxFactory::CreateSimpleIdentifier(
				SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"));

			TestUtils::AreEqual(
				SyntaxFactory::CreateSimpleIdentifier(
					SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name")),
				uut,
				"Verify matches.");
		}

		// [[Fact]]
		void OperatorNotEqualIdentifier()
		{
			auto uut = SyntaxFactory::CreateSimpleIdentifier(
				SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name"));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateSimpleIdentifier(
					SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "name2")),
				uut,
				"Verify do not match.");
		}
	};
}
