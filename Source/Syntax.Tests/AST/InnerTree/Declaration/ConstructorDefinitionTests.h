#pragma once

namespace Soup::Syntax::InnerTree::UnitTests
{
	class InnerTreeConstructorDefinitionTests
	{
	public:
		[[Fact]]
		void InitializeSimple()
		{
			// MyClass() {};
			auto uut = SyntaxFactory::CreateConstructorDefinition(
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"))),
				SyntaxFactory::CreateParameterList(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
					SyntaxFactory::CreateSyntaxSeparatorList<Parameter>({}, {}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
				nullptr,
				SyntaxFactory::CreateCompoundStatement(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
					SyntaxFactory::CreateSyntaxList<Statement>({}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)));

			Assert::AreEqual(
				SyntaxNodeType::ConstructorDefinition,
				uut->GetType(),
				"Verify has correct type.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"))),
				uut->GetIdentifier(),
				"Verify identifier matches.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateParameterList(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
					SyntaxFactory::CreateSyntaxSeparatorList<Parameter>({}, {}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
				uut->GetParameterList(),
				"Verify parameter list matches.");
			Assert::IsFalse(
				uut->HasConstructorInitializer(),
				"Verify has no constructor initializer matches.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateCompoundStatement(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
					SyntaxFactory::CreateSyntaxList<Statement>({}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
				uut->GetBody(),
				"Verify body matches.");
		}

		[[Fact]]
		void InitializeComplex()
		{
			// MyClass(int value) : m_value() {};
			auto uut = SyntaxFactory::CreateConstructorDefinition(
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"))),
				SyntaxFactory::CreateParameterList(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
					SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
						{
							SyntaxFactory::CreateParameter(
								SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
									PrimitiveDataType::Int,
									SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
								SyntaxFactory::CreateSimpleIdentifier(
									SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
						},
						{}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
				SyntaxFactory::CreateConstructorInitializer(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon),
					SyntaxFactory::CreateSyntaxSeparatorList<MemberInitializer>(
						{
							SyntaxFactory::CreateMemberInitializer(
								SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "m_value"),
								SyntaxFactory::CreateInitializerList(
									SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
									SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>({}, {}),
									SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))),
						},
						{})),
				SyntaxFactory::CreateCompoundStatement(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
					SyntaxFactory::CreateSyntaxList<Statement>({}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)));

			Assert::AreEqual(
				SyntaxNodeType::ConstructorDefinition,
				uut->GetType(),
				"Verify has correct type.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"))),
				uut->GetIdentifier(),
				"Verify identifier matches.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateParameterList(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
					SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
						{
							SyntaxFactory::CreateParameter(
								SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
									PrimitiveDataType::Int,
									SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
								SyntaxFactory::CreateSimpleIdentifier(
									SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
						},
						{}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
				uut->GetParameterList(),
				"Verify parameter list matches.");
			Assert::IsTrue(
				uut->HasConstructorInitializer(),
				"Verify has no constructor initializer matches.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateConstructorInitializer(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon),
					SyntaxFactory::CreateSyntaxSeparatorList<MemberInitializer>(
						{
							SyntaxFactory::CreateMemberInitializer(
								SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "m_value"),
								SyntaxFactory::CreateInitializerList(
									SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
									SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>({}, {}),
									SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))),
						},
						{})),
				uut->GetConstructorInitializer(),
				"Verify constructor initializer matches.");
			TestUtils::AreEqual(
				*SyntaxFactory::CreateCompoundStatement(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
					SyntaxFactory::CreateSyntaxList<Statement>({}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)),
				uut->GetBody(),
				"Verify body matches.");
		}

		[[Fact]]
		void OperatorEqualSimple()
		{
			// MyClass(int parameter) = delete;
			auto uut = SyntaxFactory::CreateConstructorDefinition(
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"))),
				SyntaxFactory::CreateParameterList(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
					SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
						{
							SyntaxFactory::CreateParameter(
								SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
									PrimitiveDataType::Int,
									SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
								SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
									PrimitiveDataType::Int,
									SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
						},
						{}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
				nullptr,
				SyntaxFactory::CreateDeleteFunctionBody(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)));

			TestUtils::AreEqual(
				SyntaxFactory::CreateConstructorDefinition(
					SyntaxFactory::CreateIdentifierExpression(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"))),
					SyntaxFactory::CreateParameterList(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
						SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
							{
								SyntaxFactory::CreateParameter(
									SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
										PrimitiveDataType::Int,
										SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
									SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
										PrimitiveDataType::Int,
										SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
							},
							{}),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
					nullptr,
					SyntaxFactory::CreateDeleteFunctionBody(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
				uut,
				"Verify matches.");
		}

		[[Fact]]
		void OperatorEqualComplex()
		{
			// MyClass(int value) : m_value() {};
			auto uut = SyntaxFactory::CreateConstructorDefinition(
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"))),
				SyntaxFactory::CreateParameterList(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
					SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
						{
							SyntaxFactory::CreateParameter(
								SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
									PrimitiveDataType::Int,
									SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
								SyntaxFactory::CreateSimpleIdentifier(
									SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
						},
						{}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
				SyntaxFactory::CreateConstructorInitializer(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon),
					SyntaxFactory::CreateSyntaxSeparatorList<MemberInitializer>(
						{
							SyntaxFactory::CreateMemberInitializer(
								SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "m_value"),
								SyntaxFactory::CreateInitializerList(
									SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
									SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>({}, {}),
									SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))),
						},
						{})),
				SyntaxFactory::CreateCompoundStatement(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
					SyntaxFactory::CreateSyntaxList<Statement>({}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)));

			TestUtils::AreEqual(
				SyntaxFactory::CreateConstructorDefinition(
					SyntaxFactory::CreateIdentifierExpression(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"))),
					SyntaxFactory::CreateParameterList(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
						SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
							{
								SyntaxFactory::CreateParameter(
									SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
										PrimitiveDataType::Int,
										SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
									SyntaxFactory::CreateSimpleIdentifier(
										SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "value"))),
							},
							{}),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
					SyntaxFactory::CreateConstructorInitializer(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon),
						SyntaxFactory::CreateSyntaxSeparatorList<MemberInitializer>(
							{
								SyntaxFactory::CreateMemberInitializer(
									SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "m_value"),
									SyntaxFactory::CreateInitializerList(
										SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
										SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>({}, {}),
										SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))),
							},
							{})),
					SyntaxFactory::CreateCompoundStatement(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
						SyntaxFactory::CreateSyntaxList<Statement>({}),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))),
				uut,
				"Verify matches.");
		}

		[[Fact]]
		void OperatorNotEqualIdentifier()
		{
			// MyClass(int parameter) = delete;
			auto uut = SyntaxFactory::CreateConstructorDefinition(
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"))),
				SyntaxFactory::CreateParameterList(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
					SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
						{
							SyntaxFactory::CreateParameter(
								SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
									PrimitiveDataType::Int,
									SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
								SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
									PrimitiveDataType::Int,
									SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
						},
						{}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
				nullptr,
				SyntaxFactory::CreateDeleteFunctionBody(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateConstructorDefinition(
					SyntaxFactory::CreateIdentifierExpression(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "OtherClass"))),
					SyntaxFactory::CreateParameterList(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
						SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
							{
								SyntaxFactory::CreateParameter(
									SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
										PrimitiveDataType::Int,
										SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
									SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
										PrimitiveDataType::Int,
										SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
							},
							{}),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
					nullptr,
					SyntaxFactory::CreateDeleteFunctionBody(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
				uut,
				"Verify does not match.");
		}

		[[Fact]]
		void OperatorNotEqualParameterList()
		{
			// MyClass(int parameter) = delete;
			auto uut = SyntaxFactory::CreateConstructorDefinition(
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"))),
				SyntaxFactory::CreateParameterList(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
					SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
						{
							SyntaxFactory::CreateParameter(
								SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
									PrimitiveDataType::Int,
									SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
								SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
									PrimitiveDataType::Int,
									SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
						},
						{}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
				nullptr,
				SyntaxFactory::CreateDeleteFunctionBody(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateConstructorDefinition(
					SyntaxFactory::CreateIdentifierExpression(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"))),
					SyntaxFactory::CreateParameterList(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
						SyntaxFactory::CreateSyntaxSeparatorList<Parameter>({}, {}),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
					nullptr,
					SyntaxFactory::CreateDeleteFunctionBody(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
				uut,
				"Verify does not match.");
		}

		[[Fact]]
		void OperatorNotEqualNoConstructorInitializer()
		{
			// MyClass() : m_value() {};
			auto uut = SyntaxFactory::CreateConstructorDefinition(
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"))),
				SyntaxFactory::CreateParameterList(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
					SyntaxFactory::CreateSyntaxSeparatorList<Parameter>({}, {}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
				SyntaxFactory::CreateConstructorInitializer(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon),
					SyntaxFactory::CreateSyntaxSeparatorList<MemberInitializer>(
						{
							SyntaxFactory::CreateMemberInitializer(
								SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "m_value"),
								SyntaxFactory::CreateInitializerList(
									SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
									SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>({}, {}),
									SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))),
						},
						{})),
				SyntaxFactory::CreateCompoundStatement(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
					SyntaxFactory::CreateSyntaxList<Statement>({}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateConstructorDefinition(
					SyntaxFactory::CreateIdentifierExpression(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"))),
					SyntaxFactory::CreateParameterList(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
						SyntaxFactory::CreateSyntaxSeparatorList<Parameter>({}, {}),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
					nullptr,
					SyntaxFactory::CreateCompoundStatement(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
						SyntaxFactory::CreateSyntaxList<Statement>({}),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))),
				uut,
				"Verify does not match.");
		}

		[[Fact]]
		void OperatorNotEqualConstructorInitializer()
		{
			// MyClass() : m_value() {};
			auto uut = SyntaxFactory::CreateConstructorDefinition(
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"))),
				SyntaxFactory::CreateParameterList(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
					SyntaxFactory::CreateSyntaxSeparatorList<Parameter>({}, {}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
				SyntaxFactory::CreateConstructorInitializer(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon),
					SyntaxFactory::CreateSyntaxSeparatorList<MemberInitializer>(
						{
							SyntaxFactory::CreateMemberInitializer(
								SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "m_value"),
								SyntaxFactory::CreateInitializerList(
									SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
									SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>({}, {}),
									SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))),
						},
						{})),
				SyntaxFactory::CreateCompoundStatement(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
					SyntaxFactory::CreateSyntaxList<Statement>({}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace)));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateConstructorDefinition(
					SyntaxFactory::CreateIdentifierExpression(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"))),
					SyntaxFactory::CreateParameterList(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
						SyntaxFactory::CreateSyntaxSeparatorList<Parameter>({}, {}),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
					SyntaxFactory::CreateConstructorInitializer(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Colon),
						SyntaxFactory::CreateSyntaxSeparatorList<MemberInitializer>(
							{
								SyntaxFactory::CreateMemberInitializer(
									SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "m_value2"),
									SyntaxFactory::CreateInitializerList(
										SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
										SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>({}, {}),
										SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis))),
							},
							{})),
					SyntaxFactory::CreateCompoundStatement(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenBrace),
						SyntaxFactory::CreateSyntaxList<Statement>({}),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseBrace))),
				uut,
				"Verify does not match.");
		}

		[[Fact]]
		void OperatorNotEqualBody()
		{
			// MyClass(int parameter) = delete;
			auto uut = SyntaxFactory::CreateConstructorDefinition(
				SyntaxFactory::CreateIdentifierExpression(
					SyntaxFactory::CreateSimpleIdentifier(
						SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"))),
				SyntaxFactory::CreateParameterList(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
					SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
						{
							SyntaxFactory::CreateParameter(
								SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
									PrimitiveDataType::Int,
									SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
								SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
									PrimitiveDataType::Int,
									SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
						},
						{}),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
				nullptr,
				SyntaxFactory::CreateDeleteFunctionBody(
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Delete),
					SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon)));

			TestUtils::AreNotEqual(
				SyntaxFactory::CreateConstructorDefinition(
					SyntaxFactory::CreateIdentifierExpression(
						SyntaxFactory::CreateSimpleIdentifier(
							SyntaxFactory::CreateUniqueToken(SyntaxTokenType::Identifier, "MyClass"))),
					SyntaxFactory::CreateParameterList(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::OpenParenthesis),
						SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
							{
								SyntaxFactory::CreateParameter(
									SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
										PrimitiveDataType::Int,
										SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int)),
									SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
										PrimitiveDataType::Int,
										SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Int))),
							},
							{}),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::CloseParenthesis)),
					nullptr,
					SyntaxFactory::CreateDefaultFunctionBody(
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Equal),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Default),
						SyntaxFactory::CreateKeywordToken(SyntaxTokenType::Semicolon))),
				uut,
				"Verify does not match.");
		}
	};
}
