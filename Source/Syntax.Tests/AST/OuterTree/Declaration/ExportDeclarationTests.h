#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
	class OuterTreeExportDeclarationTests
	{
	public:
		// [[Fact]]
		void Initialize()
		{
			auto uut = SyntaxFactory::CreateExportDeclaration(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Export),
				SyntaxFactory::CreateNamespaceDefinition(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
					SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
						{
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyNamespace"),
						},
						{}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
					SyntaxFactory::CreateSyntaxList<Declaration>({}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)))->CreateOuter(nullptr);

			Assert::AreEqual(
				SyntaxNodeType::ExportDeclaration,
				uut->GetType(),
				"Verify has correct type.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Export),
				uut->GetExportToken(),
				"Verify export token matches.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateNamespaceDefinition(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
					SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
						{
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyNamespace"),
						},
						{}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
					SyntaxFactory::CreateSyntaxList<Declaration>({}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
				uut->GetDeclaration(),
				"Verify declaration matches.");
		}

		// [[Fact]]
		void GetChildren()
		{
			auto uut = SyntaxFactory::CreateExportDeclaration(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Export),
				SyntaxFactory::CreateNamespaceDefinition(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
					SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
						{
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyNamespace"),
						},
						{}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
					SyntaxFactory::CreateSyntaxList<Declaration>({}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)))->CreateOuter(nullptr);

			Assert::AreEqual(
				std::vector<OuterTree::SyntaxNodeChild>({
					TestUtils::CreateChild(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Export)),
					TestUtils::CreateChild(
						SyntaxFactory::CreateNamespaceDefinition(
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
							SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
								{
									SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyNamespace"),
								},
								{}),
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
							SyntaxFactory::CreateSyntaxList<Declaration>({}),
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))),
				}),
				uut->GetChildren(),
				"Verify children match.");
		}

		// [[Fact]]
		void OperatorEqual()
		{
			auto uut = SyntaxFactory::CreateExportDeclaration(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Export),
				SyntaxFactory::CreateNamespaceDefinition(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
					SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
						{
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyNamespace"),
						},
						{}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
					SyntaxFactory::CreateSyntaxList<Declaration>({}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)))->CreateOuter(nullptr);

			TestUtils::AreEqual(
				SyntaxFactory::CreateExportDeclaration(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Export),
					SyntaxFactory::CreateNamespaceDefinition(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
						SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
							{
								SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyNamespace"),
							},
							{}),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
						SyntaxFactory::CreateSyntaxList<Declaration>({}),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))),
				uut,
				"Verify matches.");
		}

		// [[Fact]]
		void OperatorNotEqualExport()
		{
			auto uut = SyntaxFactory::CreateExportDeclaration(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Export),
				SyntaxFactory::CreateNamespaceDefinition(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
					SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
						{
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyNamespace"),
						},
						{}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
					SyntaxFactory::CreateSyntaxList<Declaration>({}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)))->CreateOuter(nullptr);

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateExportDeclaration(
					SyntaxFactory::CreateKeywordToken(
						SyntaxTokenType::Export,
						{
							SyntaxFactory::CreateTrivia(" "),
						},
						{}),
					SyntaxFactory::CreateNamespaceDefinition(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
						SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
							{
								SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyNamespace"),
							},
							{}),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
						SyntaxFactory::CreateSyntaxList<Declaration>({}),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))),
				uut,
				"Verify do not match.");
		}

		// [[Fact]]
		void OperatorNotEqualDeclaration()
		{
			auto uut = SyntaxFactory::CreateExportDeclaration(
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Export),
				SyntaxFactory::CreateNamespaceDefinition(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
					SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
						{
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyNamespace"),
						},
						{}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
					SyntaxFactory::CreateSyntaxList<Declaration>({}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)))->CreateOuter(nullptr);

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateExportDeclaration(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Export),
					SyntaxFactory::CreateNamespaceDefinition(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Namespace),
						SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
							{
								SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyNamespace2"),
							},
							{}),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
						SyntaxFactory::CreateSyntaxList<Declaration>({}),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))),
				uut,
				"Verify do not match.");
		}
	};
}
