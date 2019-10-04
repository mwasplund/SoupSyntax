#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
	class InnerTreeDeclarationStatementTests
	{
	public:
		[[Fact]]
		void InitializeSimple()
		{
			auto uut = SyntaxFactory::CreateDeclarationStatement(
				SyntaxFactory::CreateSimpleDeclaration(
					SyntaxFactory::CreateDeclarationSpecifierSequence(
						SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
							PrimitiveDataType::Int,
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
					SyntaxFactory::CreateInitializerDeclaratorList(
						SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
							{
								SyntaxFactory::CreateInitializerDeclarator(
									SyntaxFactory::CreateSimpleIdentifier(
										SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
									nullptr),
							},
							{})),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)));

			Assert::AreEqual(
				SyntaxNodeType::DeclarationStatement,
				uut->GetType(),
				"Verify has correct type.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateSimpleDeclaration(
					SyntaxFactory::CreateDeclarationSpecifierSequence(
						SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
							PrimitiveDataType::Int,
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
					SyntaxFactory::CreateInitializerDeclaratorList(
						SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
							{
								SyntaxFactory::CreateInitializerDeclarator(
									SyntaxFactory::CreateSimpleIdentifier(
										SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
									nullptr),
							},
							{})),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				uut->GetDeclaration(),
				"Verify declaration matches.");
		}

		[[Fact]]
		void OperatorEqual()
		{
			auto uut = SyntaxFactory::CreateDeclarationStatement(
				SyntaxFactory::CreateSimpleDeclaration(
					SyntaxFactory::CreateDeclarationSpecifierSequence(
						SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
							PrimitiveDataType::Int,
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
					SyntaxFactory::CreateInitializerDeclaratorList(
						SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
							{
								SyntaxFactory::CreateInitializerDeclarator(
									SyntaxFactory::CreateSimpleIdentifier(
										SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
									nullptr),
							},
							{})),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)));

			TestUtils::AreEqual(
				SyntaxFactory::CreateDeclarationStatement(
					SyntaxFactory::CreateSimpleDeclaration(
						SyntaxFactory::CreateDeclarationSpecifierSequence(
							SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
								PrimitiveDataType::Int,
								SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
						SyntaxFactory::CreateInitializerDeclaratorList(
							SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
								{
									SyntaxFactory::CreateInitializerDeclarator(
										SyntaxFactory::CreateSimpleIdentifier(
											SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
										nullptr),
								},
								{})),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
				uut,
				"Verify matches.");
		}

		[[Fact]]
		void OperatorNotEqualDeclaration()
		{
			auto uut = SyntaxFactory::CreateDeclarationStatement(
				SyntaxFactory::CreateSimpleDeclaration(
					SyntaxFactory::CreateDeclarationSpecifierSequence(
						SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
							PrimitiveDataType::Int,
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
					SyntaxFactory::CreateInitializerDeclaratorList(
						SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
							{
								SyntaxFactory::CreateInitializerDeclarator(
									SyntaxFactory::CreateSimpleIdentifier(
										SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i")),
									nullptr),
							},
							{})),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateDeclarationStatement(
					SyntaxFactory::CreateSimpleDeclaration(
						SyntaxFactory::CreateDeclarationSpecifierSequence(
							SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
								PrimitiveDataType::Int,
								SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
						SyntaxFactory::CreateInitializerDeclaratorList(
							SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
								{
									SyntaxFactory::CreateInitializerDeclarator(
										SyntaxFactory::CreateSimpleIdentifier(
											SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "i2")),
										nullptr),
								},
								{})),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
				uut,
				"Verify do not match.");
		}
	};
}
