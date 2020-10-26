#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
	class OuterTreeModuleDeclarationTests
	{
	public:
		// [[Fact]]
		void InitializeNoExport()
		{
			auto uut = SyntaxFactory::CreateModuleDeclaration(
				nullptr,
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Module),
				SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
					{
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule"),
					},
					{}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))->CreateOuter(nullptr);

			Assert::AreEqual(
				SyntaxNodeType::ModuleDeclaration,
				uut->GetType(),
				"Verify has correct type.");
			Assert::IsFalse(
				uut->HasExportToken(),
				"Verify has no export token.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Module),
				uut->GetModuleToken(),
				"Verify module token matches.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
					{
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule"),
					},
					{}),
				uut->GetNameIdentifierList(),
				"Verify name identifier list matches.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon),
				uut->GetSemicolonToken(),
				"Verify semicolon token matches.");
		}

		// [[Fact]]
		void InitializeWithExport()
		{
			auto uut = SyntaxFactory::CreateModuleDeclaration(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Export),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Module),
				SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
					{
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Base"),
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule"),
					},
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Period),
					}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))->CreateOuter(nullptr);

			Assert::AreEqual(
				SyntaxNodeType::ModuleDeclaration,
				uut->GetType(),
				"Verify has correct type.");
			Assert::IsTrue(
				uut->HasExportToken(),
				"Verify has export token.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Export),
				uut->GetExportToken(),
				"Verify export token matches.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Module),
				uut->GetModuleToken(),
				"Verify module token matches.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
					{
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Base"),
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule"),
					},
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Period),
					}),
				uut->GetNameIdentifierList(),
				"Verify name identifier list matches.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon),
				uut->GetSemicolonToken(),
				"Verify semicolon token matches.");
		}

		// [[Fact]]
		void GetChildrenNoExport()
		{
			auto uut = SyntaxFactory::CreateModuleDeclaration(
				nullptr,
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Module),
				SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
					{
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule"),
					},
					{}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))->CreateOuter(nullptr);

			Assert::AreEqual(
				std::vector<OuterTree::SyntaxNodeChild>({
					TestUtils::CreateChild(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Module)),
					TestUtils::CreateChild(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule")),
					TestUtils::CreateChild(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				}),
				uut->GetChildren(),
				"Verify children match.");
		}

		// [[Fact]]
		void GetChildrenWithExport()
		{
			auto uut = SyntaxFactory::CreateModuleDeclaration(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Export),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Module),
				SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
					{
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Base"),
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule"),
					},
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Period),
					}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))->CreateOuter(nullptr);

			Assert::AreEqual(
				std::vector<OuterTree::SyntaxNodeChild>({
					TestUtils::CreateChild(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Export)),
					TestUtils::CreateChild(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Module)),
					TestUtils::CreateChild(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Base")),
					TestUtils::CreateChild(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Period)),
					TestUtils::CreateChild(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule")),
					TestUtils::CreateChild(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				}),
				uut->GetChildren(),
				"Verify children match.");
		}

		// [[Fact]]
		void OperatorEqualNoExport()
		{
			auto uut = SyntaxFactory::CreateModuleDeclaration(
				nullptr,
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Module),
				SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
					{
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule"),
					},
					{}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))->CreateOuter(nullptr);

			TestUtils::AreEqual(
				SyntaxFactory::CreateModuleDeclaration(
					nullptr,
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Module),
					SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
						{
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule"),
						},
						{}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				uut,
				"Verify matches.");
		}

		// [[Fact]]
		void OperatorEqualWithExport()
		{
			auto uut = SyntaxFactory::CreateModuleDeclaration(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Export),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Module),
				SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
					{
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Base"),
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule"),
					},
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Period),
					}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))->CreateOuter(nullptr);

			TestUtils::AreEqual(
				SyntaxFactory::CreateModuleDeclaration(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Export),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Module),
					SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
						{
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Base"),
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule"),
						},
						{
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Period),
						}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				uut,
				"Verify matches.");
		}

		// [[Fact]]
		void OperatorNotEqualNoExport()
		{
			auto uut = SyntaxFactory::CreateModuleDeclaration(
				nullptr,
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Module),
				SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
					{
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Base"),
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule"),
					},
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Period),
					}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))->CreateOuter(nullptr);

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateModuleDeclaration(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Export),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Module),
					SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
						{
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Base"),
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule"),
						},
						{
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Period),
						}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				uut,
				"Verify do not match.");
		}

		// [[Fact]]
		void OperatorNotEqualWithExport()
		{
			auto uut = SyntaxFactory::CreateModuleDeclaration(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Export),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Module),
				SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
					{
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Base"),
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule"),
					},
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Period),
					}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))->CreateOuter(nullptr);

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateModuleDeclaration(
					SyntaxFactory::CreateKeywordToken(
						SyntaxTokenType::Export,
						{
							SyntaxFactory::CreateTrivia(" "),
						},
						{}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Module),
					SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
						{
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Base"),
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule"),
						},
						{
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Period),
						}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				uut,
				"Verify do not match.");
		}

		// [[Fact]]
		void OperatorNotEqualModule()
		{
			auto uut = SyntaxFactory::CreateModuleDeclaration(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Export),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Module),
				SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
					{
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Base"),
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule"),
					},
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Period),
					}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))->CreateOuter(nullptr);

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateModuleDeclaration(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Export),
					SyntaxFactory::CreateKeywordToken(
						SyntaxTokenType::Module,
						{
							SyntaxFactory::CreateTrivia(" "),
						},
						{}),
					SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
						{
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Base"),
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule"),
						},
						{
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Period),
						}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				uut,
				"Verify do not match.");
		}

		// [[Fact]]
		void OperatorNotEqualName()
		{
			auto uut = SyntaxFactory::CreateModuleDeclaration(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Export),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Module),
				SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
					{
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Base"),
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule"),
					},
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Period),
					}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))->CreateOuter(nullptr);

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateModuleDeclaration(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Export),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Module),
					SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
						{
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule"),
						},
						{}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)),
				uut,
				"Verify do not match.");
		}

		// [[Fact]]
		void OperatorNotEqualSemicolon()
		{
			auto uut = SyntaxFactory::CreateModuleDeclaration(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Export),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Module),
				SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
					{
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Base"),
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule"),
					},
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Period),
					}),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))->CreateOuter(nullptr);

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateModuleDeclaration(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Export),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Module),
					SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
						{
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Base"),
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyModule"),
						},
						{
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Period),
						}),
					SyntaxFactory::CreateKeywordToken(
						SyntaxTokenType::Semicolon,
						{
							SyntaxFactory::CreateTrivia(" "),
						},
						{})),
				uut,
				"Verify do not match.");
		}
	};
}
