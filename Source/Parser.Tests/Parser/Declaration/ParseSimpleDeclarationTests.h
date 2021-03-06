#pragma once
#include "TestUtils.h"

namespace Soup::Syntax::InnerTree::UnitTests
{
	class ParseSimpleDeclarationTests
	{
	public:
		// [[Fact]]
		void ClassSpecifierVariable()
		{
			auto sourceCode = std::string("class C1 {} c1;");
			auto actual = ParseSimpleDeclaration(sourceCode);

			auto expected = SyntaxFactory::CreateSimpleDeclaration(
				SyntaxFactory::CreateDeclarationSpecifierSequence(
					SyntaxFactory::CreateClassSpecifier(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Class),
						SyntaxFactory::CreateUniqueToken(
							SyntaxTokenType::Identifier,
							"C1",
							{
								SyntaxFactory::CreateTrivia(" "),
							},
							{}),
						SyntaxFactory::CreateKeywordToken(
							SyntaxTokenType::OpenBrace,
							{
								SyntaxFactory::CreateTrivia(" "),
							},
							{}),
						SyntaxFactory::CreateSyntaxList<Declaration>({}),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))),
				SyntaxFactory::CreateInitializerDeclaratorList(
					SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
						{
							SyntaxFactory::CreateInitializerDeclarator(
								SyntaxFactory::CreateIdentifierExpression(
									SyntaxFactory::CreateSimpleIdentifier(
										SyntaxFactory::CreateUniqueToken(
											SyntaxTokenType::Identifier,
											"c1",
											{
												SyntaxFactory::CreateTrivia(" "),
											},
											{}))),
								nullptr),
						},
						{})),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		// [[Fact]]
		void EnumSpecifierVariable()
		{
			auto sourceCode = std::string("enum class E1 {} e1;");
			auto actual = ParseSimpleDeclaration(sourceCode);

			auto expected = SyntaxFactory::CreateSimpleDeclaration(
				SyntaxFactory::CreateDeclarationSpecifierSequence(
					SyntaxFactory::CreateEnumSpecifier(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Enum),
						SyntaxFactory::CreateKeywordToken(
							SyntaxTokenType::Class,
							{
								SyntaxFactory::CreateTrivia(" "),
							},
							{}),
						SyntaxFactory::CreateUniqueToken(
							SyntaxTokenType::Identifier,
							"E1",
							{
								SyntaxFactory::CreateTrivia(" "),
							},
							{}),
						SyntaxFactory::CreateKeywordToken(
							SyntaxTokenType::OpenBrace,
							{
								SyntaxFactory::CreateTrivia(" "),
							},
							{}),
						SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>({}, {}),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))),
				SyntaxFactory::CreateInitializerDeclaratorList(
					SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
						{
							SyntaxFactory::CreateInitializerDeclarator(
								SyntaxFactory::CreateIdentifierExpression(
									SyntaxFactory::CreateSimpleIdentifier(
										SyntaxFactory::CreateUniqueToken(
											SyntaxTokenType::Identifier,
											"e1",
											{
												SyntaxFactory::CreateTrivia(" "),
											},
											{}))),
								nullptr),
						},
						{})),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		// TODO: Remove namespaces when inline data theories have correct scope
		// [[Theory]]
		// [[InlineData("char", Soup::Syntax::SyntaxTokenType::Char, Soup::Syntax::PrimitiveDataType::Char)]]
		// [[InlineData("char8_t", Soup::Syntax::SyntaxTokenType::Char8, Soup::Syntax::PrimitiveDataType::Char8)]]
		// [[InlineData("char16_t", Soup::Syntax::SyntaxTokenType::Char16, Soup::Syntax::PrimitiveDataType::Char16)]]
		// [[InlineData("char32_t", Soup::Syntax::SyntaxTokenType::Char32, Soup::Syntax::PrimitiveDataType::Char32)]]
		// [[InlineData("wchar_t", Soup::Syntax::SyntaxTokenType::WChar, Soup::Syntax::PrimitiveDataType::WChar)]]
		// [[InlineData("bool", Soup::Syntax::SyntaxTokenType::Bool, Soup::Syntax::PrimitiveDataType::Bool)]]
		// [[InlineData("short", Soup::Syntax::SyntaxTokenType::Short, Soup::Syntax::PrimitiveDataType::Short)]]
		// [[InlineData("int", Soup::Syntax::SyntaxTokenType::Int, Soup::Syntax::PrimitiveDataType::Int)]]
		// [[InlineData("long", Soup::Syntax::SyntaxTokenType::Long, Soup::Syntax::PrimitiveDataType::Long)]]
		// [[InlineData("signed", Soup::Syntax::SyntaxTokenType::Signed, Soup::Syntax::PrimitiveDataType::Signed)]]
		// [[InlineData("unsigned", Soup::Syntax::SyntaxTokenType::Unsigned, Soup::Syntax::PrimitiveDataType::Unsigned)]]
		// [[InlineData("float", Soup::Syntax::SyntaxTokenType::Float, Soup::Syntax::PrimitiveDataType::Float)]]
		// [[InlineData("double", Soup::Syntax::SyntaxTokenType::Double, Soup::Syntax::PrimitiveDataType::Double)]]
		// [[InlineData("void", Soup::Syntax::SyntaxTokenType::Void, Soup::Syntax::PrimitiveDataType::Void)]]
		// [[InlineData("auto", Soup::Syntax::SyntaxTokenType::Auto, Soup::Syntax::PrimitiveDataType::Auto)]]
		void SimplePrimitiveVariable(std::string typeSource, SyntaxTokenType expectedToken, PrimitiveDataType expectedType)
		{
			auto sourceCode = typeSource + " i;";
			auto actual = ParseSimpleDeclaration(sourceCode);

			auto expected = SyntaxFactory::CreateSimpleDeclaration(
				SyntaxFactory::CreateDeclarationSpecifierSequence(
					SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
						expectedType,
						SyntaxFactory::CreateKeywordToken(expectedToken))),
				SyntaxFactory::CreateInitializerDeclaratorList(
					SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
						{
							SyntaxFactory::CreateInitializerDeclarator(
								SyntaxFactory::CreateIdentifierExpression(
									SyntaxFactory::CreateSimpleIdentifier(
										SyntaxFactory::CreateUniqueToken(
											SyntaxTokenType::Identifier,
											"i",
											{
												SyntaxFactory::CreateTrivia(" "),
											},
											{}))),
								nullptr),
						},
						{})),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		// [[Fact]]
		void SimpleIdentifierVariable()
		{
			auto sourceCode = std::string("MyClass i;");
			auto actual = ParseSimpleDeclaration(sourceCode);

			auto expected = SyntaxFactory::CreateSimpleDeclaration(
				SyntaxFactory::CreateDeclarationSpecifierSequence(
					SyntaxFactory::CreateIdentifierType(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass")))),
				SyntaxFactory::CreateInitializerDeclaratorList(
					SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
						{
							SyntaxFactory::CreateInitializerDeclarator(
								SyntaxFactory::CreateIdentifierExpression(
									SyntaxFactory::CreateSimpleIdentifier(
										SyntaxFactory::CreateUniqueToken(
											SyntaxTokenType::Identifier,
											"i",
											{
												SyntaxFactory::CreateTrivia(" "),
											},
											{}))),
								nullptr),
						},
						{})),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		// [[Fact]]
		void TemplateClassVariable()
		{
			auto sourceCode = std::string("std::shared_ptr<const ClassA> value1;");
			auto actual = ParseSimpleDeclaration(sourceCode);

			auto expected = SyntaxFactory::CreateSimpleDeclaration(
				SyntaxFactory::CreateDeclarationSpecifierSequence(
					SyntaxFactory::CreateIdentifierType(
						SyntaxFactory::CreateNestedNameSpecifier(
							SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
								{
									SyntaxFactory::CreateSimpleIdentifier(
										SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "std")),
								},
								{
									SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
								})),
						SyntaxFactory::CreateSimpleTemplateIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "shared_ptr"),
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
							SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
								{
									SyntaxFactory::CreateTypeSpecifierSequence(
										SyntaxFactory::CreateSyntaxList<SyntaxToken>({
											SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Const),
										}),
										SyntaxFactory::CreateIdentifierType(
											SyntaxFactory::CreateSimpleIdentifier(
												SyntaxFactory::CreateUniqueToken(
													SyntaxTokenType::Identifier,
													"ClassA",
													{
														SyntaxFactory::CreateTrivia(" "),
													},
													{}))),
										SyntaxFactory::CreateSyntaxList<SyntaxToken>({})),
								},
								{}),
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan)))),
				SyntaxFactory::CreateInitializerDeclaratorList(
					SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
						{
							SyntaxFactory::CreateInitializerDeclarator(
								SyntaxFactory::CreateIdentifierExpression(
									SyntaxFactory::CreateSimpleIdentifier(
										SyntaxFactory::CreateUniqueToken(
											SyntaxTokenType::Identifier,
											"value1",
											{
												SyntaxFactory::CreateTrivia(" "),
											},
											{}))),
								nullptr),
						},
						{})),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		// [[Fact]]
		void TemplateOfTemplateVariable()
		{
			auto sourceCode = std::string("std::vector<std::shared_ptr<Attribute>> values;");
			auto actual = ParseSimpleDeclaration(sourceCode);

			auto expected = SyntaxFactory::CreateSimpleDeclaration(
				SyntaxFactory::CreateDeclarationSpecifierSequence(
					SyntaxFactory::CreateIdentifierType(
						SyntaxFactory::CreateNestedNameSpecifier(
							SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
								{
									SyntaxFactory::CreateSimpleIdentifier(
										SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "std")),
								},
								{
									SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
								})),
						SyntaxFactory::CreateSimpleTemplateIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "vector"),
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
							SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
								{
									SyntaxFactory::CreateTypeSpecifierSequence(
										SyntaxFactory::CreateIdentifierType(
											SyntaxFactory::CreateNestedNameSpecifier(
												SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
													{
														SyntaxFactory::CreateSimpleIdentifier(
															SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "std")),
													},
													{
														SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
													})),
											SyntaxFactory::CreateSimpleTemplateIdentifier(
												SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "shared_ptr"),
												SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
												SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
													{
														SyntaxFactory::CreateTypeSpecifierSequence(
															SyntaxFactory::CreateIdentifierType(
																SyntaxFactory::CreateSimpleIdentifier(
																	SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "Attribute")))),
													},
													{}),
												SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan)))),
								},
								{}),
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan)))),
				SyntaxFactory::CreateInitializerDeclaratorList(
					SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
						{
							SyntaxFactory::CreateInitializerDeclarator(
								SyntaxFactory::CreateIdentifierExpression(
									SyntaxFactory::CreateSimpleIdentifier(
										SyntaxFactory::CreateUniqueToken(
											SyntaxTokenType::Identifier,
											"values",
											{
												SyntaxFactory::CreateTrivia(" "),
											},
											{}))),
								nullptr),
						},
						{})),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		// [[Fact]]
		void VariableWithInitializer()
		{
			auto sourceCode = std::string("int i = 0;");
			auto actual = ParseSimpleDeclaration(sourceCode);

			auto expected = SyntaxFactory::CreateSimpleDeclaration(
				SyntaxFactory::CreateDeclarationSpecifierSequence(
					SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
						PrimitiveDataType::Int,
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
				SyntaxFactory::CreateInitializerDeclaratorList(
					SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
						{
							SyntaxFactory::CreateInitializerDeclarator(
								SyntaxFactory::CreateIdentifierExpression(
									SyntaxFactory::CreateSimpleIdentifier(
										SyntaxFactory::CreateUniqueToken(
											SyntaxTokenType::Identifier,
											"i",
											{
												SyntaxFactory::CreateTrivia(" "),
											},
											{}))),
								SyntaxFactory::CreateValueEqualInitializer(
									SyntaxFactory::CreateKeywordToken(
										SyntaxTokenType::Equal,
										{
											SyntaxFactory::CreateTrivia(" "),
										},
										{}),
									SyntaxFactory::CreateLiteralExpression(
										LiteralType::Integer,
										SyntaxFactory::CreateUniqueToken(
											SyntaxTokenType::IntegerLiteral,
											"0",
											{
												SyntaxFactory::CreateTrivia(" "),
											},
											{})))),
						},
						{})),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		// [[Fact]]
		void DoubleVariable()
		{
			auto sourceCode = std::string("int i, j;");
			auto actual = ParseSimpleDeclaration(sourceCode);

			auto expected = SyntaxFactory::CreateSimpleDeclaration(
				SyntaxFactory::CreateDeclarationSpecifierSequence(
					SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
						PrimitiveDataType::Int,
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
				SyntaxFactory::CreateInitializerDeclaratorList(
					SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
						{
							SyntaxFactory::CreateInitializerDeclarator(
								SyntaxFactory::CreateIdentifierExpression(
									SyntaxFactory::CreateSimpleIdentifier(
										SyntaxFactory::CreateUniqueToken(
											SyntaxTokenType::Identifier,
											"i",
											{
												SyntaxFactory::CreateTrivia(" "),
											},
											{}))),
								nullptr),
							SyntaxFactory::CreateInitializerDeclarator(
								SyntaxFactory::CreateIdentifierExpression(
									SyntaxFactory::CreateSimpleIdentifier(
										SyntaxFactory::CreateUniqueToken(
											SyntaxTokenType::Identifier,
											"j",
											{
												SyntaxFactory::CreateTrivia(" "),
											},
											{}))),
								nullptr),
						},
						{
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
						})),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		// [[Fact]]
		void DoubleVariableSingleWithInitializer()
		{
			auto sourceCode = std::string("int i = 0, j;");
			auto actual = ParseSimpleDeclaration(sourceCode);

			auto expected = SyntaxFactory::CreateSimpleDeclaration(
				SyntaxFactory::CreateDeclarationSpecifierSequence(
					SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
						PrimitiveDataType::Int,
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
				SyntaxFactory::CreateInitializerDeclaratorList(
					SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
						{
							SyntaxFactory::CreateInitializerDeclarator(
								SyntaxFactory::CreateIdentifierExpression(
									SyntaxFactory::CreateSimpleIdentifier(
										SyntaxFactory::CreateUniqueToken(
											SyntaxTokenType::Identifier,
											"i",
											{
												SyntaxFactory::CreateTrivia(" "),
											},
											{}))),
								SyntaxFactory::CreateValueEqualInitializer(
									SyntaxFactory::CreateKeywordToken(
										SyntaxTokenType::Equal,
										{
											SyntaxFactory::CreateTrivia(" "),
										},
										{}),
									SyntaxFactory::CreateLiteralExpression(
										LiteralType::Integer,
										SyntaxFactory::CreateUniqueToken(
											SyntaxTokenType::IntegerLiteral,
											"0",
											{
												SyntaxFactory::CreateTrivia(" "),
											},
											{})))),
							SyntaxFactory::CreateInitializerDeclarator(
								SyntaxFactory::CreateIdentifierExpression(
									SyntaxFactory::CreateSimpleIdentifier(
										SyntaxFactory::CreateUniqueToken(
											SyntaxTokenType::Identifier,
											"j",
											{
												SyntaxFactory::CreateTrivia(" "),
											},
											{}))),
								nullptr),
						},
						{
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
						})),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		// [[Fact]]
		void DoubleVariableBothWithInitializer()
		{
			auto sourceCode = std::string("int i = 0, j = 1;");
			auto actual = ParseSimpleDeclaration(sourceCode);

			auto expected = SyntaxFactory::CreateSimpleDeclaration(
				SyntaxFactory::CreateDeclarationSpecifierSequence(
					SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
						PrimitiveDataType::Int,
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
				SyntaxFactory::CreateInitializerDeclaratorList(
					SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
						{
							SyntaxFactory::CreateInitializerDeclarator(
								SyntaxFactory::CreateIdentifierExpression(
									SyntaxFactory::CreateSimpleIdentifier(
										SyntaxFactory::CreateUniqueToken(
											SyntaxTokenType::Identifier,
											"i",
											{
												SyntaxFactory::CreateTrivia(" "),
											},
											{}))),
								SyntaxFactory::CreateValueEqualInitializer(
									SyntaxFactory::CreateKeywordToken(
										SyntaxTokenType::Equal,
										{
											SyntaxFactory::CreateTrivia(" "),
										},
										{}),
									SyntaxFactory::CreateLiteralExpression(
										LiteralType::Integer,
										SyntaxFactory::CreateUniqueToken(
											SyntaxTokenType::IntegerLiteral,
											"0",
											{
												SyntaxFactory::CreateTrivia(" "),
											},
											{})))),
							SyntaxFactory::CreateInitializerDeclarator(
								SyntaxFactory::CreateIdentifierExpression(
									SyntaxFactory::CreateSimpleIdentifier(
										SyntaxFactory::CreateUniqueToken(
											SyntaxTokenType::Identifier,
											"j",
											{
												SyntaxFactory::CreateTrivia(" "),
											},
											{}))),
								SyntaxFactory::CreateValueEqualInitializer(
									SyntaxFactory::CreateKeywordToken(
										SyntaxTokenType::Equal,
										{
											SyntaxFactory::CreateTrivia(" "),
										},
										{}),
									SyntaxFactory::CreateLiteralExpression(
										LiteralType::Integer,
										SyntaxFactory::CreateUniqueToken(
											SyntaxTokenType::IntegerLiteral,
											"1",
											{
												SyntaxFactory::CreateTrivia(" "),
											},
											{})))),
						},
						{
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
						})),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		// [[Fact]]
		void SingleIntLeadingAndTrailingModifierVariable()
		{
			auto sourceCode = std::string("static int constexpr i;");
			auto actual = ParseSimpleDeclaration(sourceCode);

			auto expected = SyntaxFactory::CreateSimpleDeclaration(
				SyntaxFactory::CreateDeclarationSpecifierSequence(
					SyntaxFactory::CreateSyntaxList<SyntaxToken>(
					{
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Static),
					}),
					SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
						PrimitiveDataType::Int,
						SyntaxFactory::CreateKeywordToken(
							SyntaxTokenType::Int,
							{
								SyntaxFactory::CreateTrivia(" "),
							},
							{})),
					SyntaxFactory::CreateSyntaxList<SyntaxToken>(
					{
						SyntaxFactory::CreateKeywordToken(
							SyntaxTokenType::ConstExpr,
							{
								SyntaxFactory::CreateTrivia(" "),
							},
							{}),
					})),
				SyntaxFactory::CreateInitializerDeclaratorList(
					SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
						{
							SyntaxFactory::CreateInitializerDeclarator(
								SyntaxFactory::CreateIdentifierExpression(
									SyntaxFactory::CreateSimpleIdentifier(
										SyntaxFactory::CreateUniqueToken(
											SyntaxTokenType::Identifier,
											"i",
											{
												SyntaxFactory::CreateTrivia(" "),
											},
											{}))),
								nullptr),
						},
						{})),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

		// [[Fact]]
		void SingleTemplateWithInitializerList()
		{
			auto sourceCode = std::string("std::vector<int> values = {1,2,};");
			auto actual = ParseSimpleDeclaration(sourceCode);

			auto expected = SyntaxFactory::CreateSimpleDeclaration(
				SyntaxFactory::CreateDeclarationSpecifierSequence(
					SyntaxFactory::CreateIdentifierType(
						SyntaxFactory::CreateNestedNameSpecifier(
							SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
								{
									SyntaxFactory::CreateSimpleIdentifier(
										SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "std")),
								},
								{
									SyntaxFactory::CreateKeywordToken(SyntaxTokenType::DoubleColon),
								})),
						SyntaxFactory::CreateSimpleTemplateIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "vector"),
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::LessThan),
							SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
								{
									SyntaxFactory::CreateTypeSpecifierSequence(
										SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
											PrimitiveDataType::Int,
											SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
								},
								{}),
							SyntaxFactory::CreateKeywordToken(SyntaxTokenType::GreaterThan)))),
				SyntaxFactory::CreateInitializerDeclaratorList(
					SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
						{
							SyntaxFactory::CreateInitializerDeclarator(
								SyntaxFactory::CreateIdentifierExpression(
									SyntaxFactory::CreateSimpleIdentifier(
										SyntaxFactory::CreateUniqueToken(
											SyntaxTokenType::Identifier,
											"values",
											{
												SyntaxFactory::CreateTrivia(" "),
											},
											{}))),
								SyntaxFactory::CreateValueEqualInitializer(
									SyntaxFactory::CreateKeywordToken(
										SyntaxTokenType::Equal,
										{
											SyntaxFactory::CreateTrivia(" "),
										},
										{}),
									SyntaxFactory::CreateInitializerList(
										SyntaxFactory::CreateKeywordToken(
											SyntaxTokenType::OpenBrace,
											{
												SyntaxFactory::CreateTrivia(" "),
											},
											{}),
										SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
											{
												SyntaxFactory::CreateLiteralExpression(
													LiteralType::Integer,
													SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "1")),
												SyntaxFactory::CreateLiteralExpression(
													LiteralType::Integer,
													SyntaxFactory::CreateUniqueToken(SyntaxTokenType::IntegerLiteral, "2")),
											},
											{
												SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
												SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Comma),
											}),
										SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)))),
						},
						{})),
				SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon));

			TestUtils::AreEqual(expected, actual, "Verify matches expected.");
		}

	private:
		std::shared_ptr<const SimpleDeclaration> ParseSimpleDeclaration(const std::string& sourceCode)
		{
			auto uut = TestUtils::BuildParser(sourceCode);
			auto context = uut.Parser->simpleDeclaration();

			// Convert the the abstract syntax tree
			auto node = uut.Visitor->visit(context)
				.as<std::shared_ptr<const SyntaxNode>>();

			return std::dynamic_pointer_cast<const SimpleDeclaration>(node);
		}
	};
}
