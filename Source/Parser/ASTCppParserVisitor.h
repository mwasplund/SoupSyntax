﻿#pragma once
#include "Grammar\CppParserBaseVisitor.h"

namespace Soup::Syntax
{
	/// <summary>
	/// Abstract syntax tree parser visitor
	/// </summary>
	export class ASTCppParserVisitor : public CppParserVisitor
	{
	public:
		ASTCppParserVisitor(antlr4::BufferedTokenStream* tokenStream);

		virtual antlrcpp::Any visitDoubleGreaterThan(CppParser::DoubleGreaterThanContext *ctx) override final;
		virtual antlrcpp::Any visitNamespaceName(CppParser::NamespaceNameContext *context) override final;
		virtual antlrcpp::Any visitClassName(CppParser::ClassNameContext *context) override final;
		virtual antlrcpp::Any visitTemplateName(CppParser::TemplateNameContext *context) override final;
		virtual antlrcpp::Any visitTranslationUnit(CppParser::TranslationUnitContext *context) override final;
		virtual antlrcpp::Any visitPrimaryExpression(CppParser::PrimaryExpressionContext *context) override final;
		virtual antlrcpp::Any visitIdentifierExpression(CppParser::IdentifierExpressionContext *context) override final;
		virtual antlrcpp::Any visitUnqualifiedIdentifier(CppParser::UnqualifiedIdentifierContext *context) override final;
		virtual antlrcpp::Any visitQualifiedIdentifier(CppParser::QualifiedIdentifierContext *context) override final;
		virtual antlrcpp::Any visitNestedNameSpecifier(CppParser::NestedNameSpecifierContext *context) override final;
		virtual antlrcpp::Any visitNestedNameSpecifierSequence(CppParser::NestedNameSpecifierSequenceContext *context) override final;
		virtual antlrcpp::Any visitLambdaExpression(CppParser::LambdaExpressionContext *context) override final;
		virtual antlrcpp::Any visitLambdaIntroducer(CppParser::LambdaIntroducerContext *context) override final;
		virtual antlrcpp::Any visitLambdaDeclarator(CppParser::LambdaDeclaratorContext *context) override final;
		virtual antlrcpp::Any visitLambdaCapture(CppParser::LambdaCaptureContext *context) override final;
		virtual antlrcpp::Any visitCaptureDefault(CppParser::CaptureDefaultContext *context) override final;
		virtual antlrcpp::Any visitCaptureList(CppParser::CaptureListContext *context) override final;
		virtual antlrcpp::Any visitCapture(CppParser::CaptureContext *context) override final;
		virtual antlrcpp::Any visitSimpleCapture(CppParser::SimpleCaptureContext *context) override final;
		virtual antlrcpp::Any visitInitializerCapture(CppParser::InitializerCaptureContext *context) override final;
		virtual antlrcpp::Any visitFoldExpression(CppParser::FoldExpressionContext *context) override final;
		virtual antlrcpp::Any visitFoldOperator(CppParser::FoldOperatorContext *context) override final;
		virtual antlrcpp::Any visitExplicitTypeCoversionOperatorExpression(CppParser::ExplicitTypeCoversionOperatorExpressionContext *context) override final;
		virtual antlrcpp::Any visitPostfixOperator(CppParser::PostfixOperatorContext *context) override final;
		virtual antlrcpp::Any visitNamedCastExpression(CppParser::NamedCastExpressionContext *context) override final;
		virtual antlrcpp::Any visitMemberAccessOperator(CppParser::MemberAccessOperatorContext *context) override final;
		virtual antlrcpp::Any visitNamedCastType(CppParser::NamedCastTypeContext *context) override final;
		virtual antlrcpp::Any visitTypeIdentificationExpression(CppParser::TypeIdentificationExpressionContext *context) override final;
		virtual antlrcpp::Any visitPostfixExpression(CppParser::PostfixExpressionContext *context) override final;
		virtual antlrcpp::Any visitExpressionList(CppParser::ExpressionListContext *context) override final;
		virtual antlrcpp::Any visitPseudoDestructorName(CppParser::PseudoDestructorNameContext *context) override final;
		virtual antlrcpp::Any visitUnaryExpression(CppParser::UnaryExpressionContext *context) override final;
		virtual antlrcpp::Any visitUnaryOperator(CppParser::UnaryOperatorContext *context) override final;
		virtual antlrcpp::Any visitNewExpression(CppParser::NewExpressionContext *context) override final;
		virtual antlrcpp::Any visitNewPlacement(CppParser::NewPlacementContext *context) override final;
		virtual antlrcpp::Any visitNewTypeIdentifier(CppParser::NewTypeIdentifierContext *context) override final;
		virtual antlrcpp::Any visitNewDeclarator(CppParser::NewDeclaratorContext *context) override final;
		virtual antlrcpp::Any visitNoPointerNewDeclarator(CppParser::NoPointerNewDeclaratorContext *context) override final;
		virtual antlrcpp::Any visitNewInitializer(CppParser::NewInitializerContext *context) override final;
		virtual antlrcpp::Any visitDeleteExpression(CppParser::DeleteExpressionContext *context) override final;
		virtual antlrcpp::Any visitNoExceptionExpression(CppParser::NoExceptionExpressionContext *context) override final;
		virtual antlrcpp::Any visitCastExpression(CppParser::CastExpressionContext *context) override final;
		virtual antlrcpp::Any visitBinaryExpression(CppParser::BinaryExpressionContext *context) override final;
		virtual antlrcpp::Any visitBinaryOperator(CppParser::BinaryOperatorContext *context) override final;
		virtual antlrcpp::Any visitConditionalExpression(CppParser::ConditionalExpressionContext *context) override final;
		virtual antlrcpp::Any visitThrowExpression(CppParser::ThrowExpressionContext *context) override final;
		virtual antlrcpp::Any visitAssignmentExpression(CppParser::AssignmentExpressionContext *context) override final;
		virtual antlrcpp::Any visitAssignmentOperator(CppParser::AssignmentOperatorContext *context) override final;
		virtual antlrcpp::Any visitExpression(CppParser::ExpressionContext *context) override final;
		virtual antlrcpp::Any visitConstantExpression(CppParser::ConstantExpressionContext *context) override final;
		virtual antlrcpp::Any visitStatement(CppParser::StatementContext *context) override final;
		virtual antlrcpp::Any visitInitializerStatement(CppParser::InitializerStatementContext *context) override final;
		virtual antlrcpp::Any visitCondition(CppParser::ConditionContext *context) override final;
		virtual antlrcpp::Any visitLabeledStatement(CppParser::LabeledStatementContext *context) override final;
		virtual antlrcpp::Any visitExpressionStatement(CppParser::ExpressionStatementContext *context) override final;
		virtual antlrcpp::Any visitCompoundStatement(CppParser::CompoundStatementContext *context) override final;
		virtual antlrcpp::Any visitStatementSequence(CppParser::StatementSequenceContext *context) override final;
		virtual antlrcpp::Any visitSelectionStatement(CppParser::SelectionStatementContext *context) override final;
		virtual antlrcpp::Any visitIterationStatement(CppParser::IterationStatementContext *context) override final;
		virtual antlrcpp::Any visitForInitializerStatement(CppParser::ForInitializerStatementContext *context) override final;
		virtual antlrcpp::Any visitForRangeDeclaration(CppParser::ForRangeDeclarationContext *context) override final;
		virtual antlrcpp::Any visitForRangeInitializer(CppParser::ForRangeInitializerContext *context) override final;
		virtual antlrcpp::Any visitJumpStatement(CppParser::JumpStatementContext *context) override final;
		virtual antlrcpp::Any visitDeclarationStatement(CppParser::DeclarationStatementContext *context) override final;
		virtual antlrcpp::Any visitDeclarationSequence(CppParser::DeclarationSequenceContext *context) override final;
		virtual antlrcpp::Any visitDeclaration(CppParser::DeclarationContext *context) override final;
		virtual antlrcpp::Any visitBlockDeclaration(CppParser::BlockDeclarationContext *context) override final;
		virtual antlrcpp::Any visitNoDeclarationSpecifierFunctionDeclaration(CppParser::NoDeclarationSpecifierFunctionDeclarationContext *context) override final;
		virtual antlrcpp::Any visitAliasDeclaration(CppParser::AliasDeclarationContext *context) override final;
		virtual antlrcpp::Any visitSimpleDeclaration(CppParser::SimpleDeclarationContext *context) override final;
		virtual antlrcpp::Any visitStaticAssertDeclaration(CppParser::StaticAssertDeclarationContext *context) override final;
		virtual antlrcpp::Any visitEmptyDeclaration(CppParser::EmptyDeclarationContext *context) override final;
		virtual antlrcpp::Any visitAttributeDeclaration(CppParser::AttributeDeclarationContext *context) override final;
		virtual antlrcpp::Any visitDeclarationModifier(CppParser::DeclarationModifierContext *context) override final;
		virtual antlrcpp::Any visitDeclarationSpecifierSequence(CppParser::DeclarationSpecifierSequenceContext *context) override final;
		virtual antlrcpp::Any visitLeadingDeclarationModifierSequence(CppParser::LeadingDeclarationModifierSequenceContext *context) override final;
		virtual antlrcpp::Any visitTrailingDeclarationModifierSequence(CppParser::TrailingDeclarationModifierSequenceContext *context) override final;
		virtual antlrcpp::Any visitDeclarationModifierSequence(CppParser::DeclarationModifierSequenceContext *context) override final;
		virtual antlrcpp::Any visitStorageClassSpecifier(CppParser::StorageClassSpecifierContext *context) override final;
		virtual antlrcpp::Any visitFunctionSpecifier(CppParser::FunctionSpecifierContext *context) override final;
		virtual antlrcpp::Any visitTypeSpecifier(CppParser::TypeSpecifierContext *context) override final;
		virtual antlrcpp::Any visitTypeSpecifierSequence(CppParser::TypeSpecifierSequenceContext *context) override final;
		virtual antlrcpp::Any visitDefiningTypeSpecifier(CppParser::DefiningTypeSpecifierContext *context) override final;
		virtual antlrcpp::Any visitDefiningTypeSpecifierSequence(CppParser::DefiningTypeSpecifierSequenceContext *context) override final;
		virtual antlrcpp::Any visitSimpleTypeSpecifier(CppParser::SimpleTypeSpecifierContext *context) override final;
		virtual antlrcpp::Any visitTypeName(CppParser::TypeNameContext *context) override final;
		virtual antlrcpp::Any visitDeclarationTypeSpecifier(CppParser::DeclarationTypeSpecifierContext *context) override final;
		virtual antlrcpp::Any visitElaboratedTypeSpecifier(CppParser::ElaboratedTypeSpecifierContext *context) override final;
		virtual antlrcpp::Any visitEnumSpecifier(CppParser::EnumSpecifierContext *context) override final;
		virtual antlrcpp::Any visitEnumHead(CppParser::EnumHeadContext *context) override final;
		virtual antlrcpp::Any visitEnumHeadName(CppParser::EnumHeadNameContext *context) override final;
		virtual antlrcpp::Any visitOpaqueEnumSpecifier(CppParser::OpaqueEnumSpecifierContext *context) override final;
		virtual antlrcpp::Any visitEnumKey(CppParser::EnumKeyContext *context) override final;
		virtual antlrcpp::Any visitEnumBase(CppParser::EnumBaseContext *context) override final;
		virtual antlrcpp::Any visitEnumeratorList(CppParser::EnumeratorListContext *context) override final;
		virtual antlrcpp::Any visitEnumeratorDefinition(CppParser::EnumeratorDefinitionContext *context) override final;
		virtual antlrcpp::Any visitEnumerator(CppParser::EnumeratorContext *context) override final;
		virtual antlrcpp::Any visitNamespaceDefinition(CppParser::NamespaceDefinitionContext *context) override final;
		virtual antlrcpp::Any visitNamedNamespaceDefinition(CppParser::NamedNamespaceDefinitionContext *context) override final;
		virtual antlrcpp::Any visitUnnamedNamespaceDefinition(CppParser::UnnamedNamespaceDefinitionContext *context) override final;
		virtual antlrcpp::Any visitNestedNamespaceDefinition(CppParser::NestedNamespaceDefinitionContext *context) override final;
		virtual antlrcpp::Any visitEnclosingNamespaceSpecifier(CppParser::EnclosingNamespaceSpecifierContext *context) override final;
		virtual antlrcpp::Any visitNamespaceBody(CppParser::NamespaceBodyContext *context) override final;
		virtual antlrcpp::Any visitNamespaceAliasDefinition(CppParser::NamespaceAliasDefinitionContext *context) override final;
		virtual antlrcpp::Any visitQualifiedNamespaceSpecifier(CppParser::QualifiedNamespaceSpecifierContext *context) override final;
		virtual antlrcpp::Any visitUsingDeclaration(CppParser::UsingDeclarationContext *context) override final;
		virtual antlrcpp::Any visitUsingDeclaratorList(CppParser::UsingDeclaratorListContext *context) override final;
		virtual antlrcpp::Any visitUsingDeclarator(CppParser::UsingDeclaratorContext *context) override final;
		virtual antlrcpp::Any visitUsingDirective(CppParser::UsingDirectiveContext *context) override final;
		virtual antlrcpp::Any visitAsmDefinition(CppParser::AsmDefinitionContext *context) override final;
		virtual antlrcpp::Any visitLinkageSpecification(CppParser::LinkageSpecificationContext *context) override final;
		virtual antlrcpp::Any visitAttributeSpecifierSequence(CppParser::AttributeSpecifierSequenceContext *context) override final;
		virtual antlrcpp::Any visitAttributeSpecifier(CppParser::AttributeSpecifierContext *context) override final;
		virtual antlrcpp::Any visitAlignmentSpecifier(CppParser::AlignmentSpecifierContext *context) override final;
		virtual antlrcpp::Any visitAttributeUsingPrefix(CppParser::AttributeUsingPrefixContext *context) override final;
		virtual antlrcpp::Any visitAttributeList(CppParser::AttributeListContext *context) override final;
		virtual antlrcpp::Any visitAttribute(CppParser::AttributeContext *context) override final;
		virtual antlrcpp::Any visitAttributeToken(CppParser::AttributeTokenContext *context) override final;
		virtual antlrcpp::Any visitAttributeScopedToken(CppParser::AttributeScopedTokenContext *context) override final;
		virtual antlrcpp::Any visitAttributeNamespace(CppParser::AttributeNamespaceContext *context) override final;
		virtual antlrcpp::Any visitAttributeArgumentClause(CppParser::AttributeArgumentClauseContext *context) override final;
		virtual antlrcpp::Any visitBalancedTokenSequence(CppParser::BalancedTokenSequenceContext *context) override final;
		virtual antlrcpp::Any visitBalancedToken(CppParser::BalancedTokenContext *context) override final;
		virtual antlrcpp::Any visitNonBalancedToken(CppParser::NonBalancedTokenContext *context) override final;
		virtual antlrcpp::Any visitInitializerDeclaratorList(CppParser::InitializerDeclaratorListContext *context) override final;
		virtual antlrcpp::Any visitInitializerDeclarator(CppParser::InitializerDeclaratorContext *context) override final;
		virtual antlrcpp::Any visitDeclarator(CppParser::DeclaratorContext *context) override final;
		virtual antlrcpp::Any visitPointerDeclarator(CppParser::PointerDeclaratorContext *context) override final;
		virtual antlrcpp::Any visitNoPointerDeclarator(CppParser::NoPointerDeclaratorContext *context) override final;
		virtual antlrcpp::Any visitParametersAndQualifiers(CppParser::ParametersAndQualifiersContext *context) override final;
		virtual antlrcpp::Any visitFunctionParameters(CppParser::FunctionParametersContext *context) override final;
		virtual antlrcpp::Any visitFunctionQualifiers(CppParser::FunctionQualifiersContext *context) override final;
		virtual antlrcpp::Any visitTrailingReturnType(CppParser::TrailingReturnTypeContext *context) override final;
		virtual antlrcpp::Any visitPointerOperator(CppParser::PointerOperatorContext *context) override final;
		virtual antlrcpp::Any visitConstVolatileQualifierSequence(CppParser::ConstVolatileQualifierSequenceContext *context) override final;
		virtual antlrcpp::Any visitConstVolatileQualifier(CppParser::ConstVolatileQualifierContext *context) override final;
		virtual antlrcpp::Any visitReferenceQualifier(CppParser::ReferenceQualifierContext *context) override final;
		virtual antlrcpp::Any visitTypeIdentifier(CppParser::TypeIdentifierContext *context) override final;
		virtual antlrcpp::Any visitDefiningTypeIdentifier(CppParser::DefiningTypeIdentifierContext *context) override final;
		virtual antlrcpp::Any visitAbstractDeclarator(CppParser::AbstractDeclaratorContext *context) override final;
		virtual antlrcpp::Any visitPointerAbstractDeclarator(CppParser::PointerAbstractDeclaratorContext *context) override final;
		virtual antlrcpp::Any visitNoPointerAbstractDeclarator(CppParser::NoPointerAbstractDeclaratorContext *context) override final;
		virtual antlrcpp::Any visitAbstractPackDeclarator(CppParser::AbstractPackDeclaratorContext *context) override final;
		virtual antlrcpp::Any visitNoPointerAbstractPackDeclarator(CppParser::NoPointerAbstractPackDeclaratorContext *context) override final;
		virtual antlrcpp::Any visitParameterDeclarationClause(CppParser::ParameterDeclarationClauseContext *context) override final;
		virtual antlrcpp::Any visitParameterDeclarationList(CppParser::ParameterDeclarationListContext *context) override final;
		virtual antlrcpp::Any visitParameterDeclaration(CppParser::ParameterDeclarationContext *context) override final;
		virtual antlrcpp::Any visitFunctionDefinition(CppParser::FunctionDefinitionContext *context) override final;
		virtual antlrcpp::Any visitFunctionDeclarator(CppParser::FunctionDeclaratorContext *context) override final;
		virtual antlrcpp::Any visitFunctionBody(CppParser::FunctionBodyContext *context) override final;
		virtual antlrcpp::Any visitRegularFunctionBody(CppParser::RegularFunctionBodyContext *context) override final;
		virtual antlrcpp::Any visitExplicitlyDefaultedFunction(CppParser::ExplicitlyDefaultedFunctionContext *context) override final;
		virtual antlrcpp::Any visitDeletedFunction(CppParser::DeletedFunctionContext *context) override final;
		virtual antlrcpp::Any visitInitializer(CppParser::InitializerContext *context) override final;
		virtual antlrcpp::Any visitBraceOrEqualInitializer(CppParser::BraceOrEqualInitializerContext *context) override final;
		virtual antlrcpp::Any visitInitializerClause(CppParser::InitializerClauseContext *context) override final;
		virtual antlrcpp::Any visitInitializerList(CppParser::InitializerListContext *context) override final;
		virtual antlrcpp::Any visitBracedInitializerList(CppParser::BracedInitializerListContext *context) override final;
		virtual antlrcpp::Any visitExpressionOrBracedInitializerList(CppParser::ExpressionOrBracedInitializerListContext *context) override final;
		virtual antlrcpp::Any visitClassSpecifier(CppParser::ClassSpecifierContext *context) override final;
		virtual antlrcpp::Any visitClassHead(CppParser::ClassHeadContext *context) override final;
		virtual antlrcpp::Any visitClassHeadName(CppParser::ClassHeadNameContext *context) override final;
		virtual antlrcpp::Any visitClassVirtualSpecifier(CppParser::ClassVirtualSpecifierContext *context) override final;
		virtual antlrcpp::Any visitClassKey(CppParser::ClassKeyContext *context) override final;
		virtual antlrcpp::Any visitMemberSpecification(CppParser::MemberSpecificationContext *context) override final;
		virtual antlrcpp::Any visitMemberDeclaration(CppParser::MemberDeclarationContext *context) override final;
		virtual antlrcpp::Any visitMemberDeclaratorList(CppParser::MemberDeclaratorListContext *context) override final;
		virtual antlrcpp::Any visitMemberDeclarator(CppParser::MemberDeclaratorContext *context) override final;
		virtual antlrcpp::Any visitVirtualSpecifierSequence(CppParser::VirtualSpecifierSequenceContext *context) override final;
		virtual antlrcpp::Any visitVirtualSpecifier(CppParser::VirtualSpecifierContext *context) override final;
		virtual antlrcpp::Any visitPureSpecifier(CppParser::PureSpecifierContext *context) override final;
		virtual antlrcpp::Any visitBaseClause(CppParser::BaseClauseContext *context) override final;
		virtual antlrcpp::Any visitBaseSpecifierList(CppParser::BaseSpecifierListContext *context) override final;
		virtual antlrcpp::Any visitBaseSpecifier(CppParser::BaseSpecifierContext *context) override final;
		virtual antlrcpp::Any visitClassOrDecltype(CppParser::ClassOrDecltypeContext *context) override final;
		virtual antlrcpp::Any visitAccessSpecifier(CppParser::AccessSpecifierContext *context) override final;
		virtual antlrcpp::Any visitConversionFunctionIdentifier(CppParser::ConversionFunctionIdentifierContext *context) override final;
		virtual antlrcpp::Any visitConversionTypeIdentifier(CppParser::ConversionTypeIdentifierContext *context) override final;
		virtual antlrcpp::Any visitConversionDeclarator(CppParser::ConversionDeclaratorContext *context) override final;
		virtual antlrcpp::Any visitConstructorInitializer(CppParser::ConstructorInitializerContext *context) override final;
		virtual antlrcpp::Any visitMemberInitializerList(CppParser::MemberInitializerListContext *context) override final;
		virtual antlrcpp::Any visitMemberInitializer(CppParser::MemberInitializerContext *context) override final;
		virtual antlrcpp::Any visitMemberInitializerIdentifier(CppParser::MemberInitializerIdentifierContext *context) override final;
		virtual antlrcpp::Any visitOperatorFunctionIdentifier(CppParser::OperatorFunctionIdentifierContext *context) override final;
		virtual antlrcpp::Any visitAnyOperator(CppParser::AnyOperatorContext *context) override final;
		virtual antlrcpp::Any visitLiteralOperatorIdentifier(CppParser::LiteralOperatorIdentifierContext *context) override final;
		virtual antlrcpp::Any visitTemplateDeclaration(CppParser::TemplateDeclarationContext *context) override final;
		virtual antlrcpp::Any visitTemplateParameterList(CppParser::TemplateParameterListContext *context) override final;
		virtual antlrcpp::Any visitTemplateParameter(CppParser::TemplateParameterContext *context) override final;
		virtual antlrcpp::Any visitTypeParameter(CppParser::TypeParameterContext *context) override final;
		virtual antlrcpp::Any visitTypeParameterKey(CppParser::TypeParameterKeyContext *context) override final;
		virtual antlrcpp::Any visitSimpleTemplateIdentifier(CppParser::SimpleTemplateIdentifierContext *context) override final;
		virtual antlrcpp::Any visitTemplateIdentifier(CppParser::TemplateIdentifierContext *context) override final;
		virtual antlrcpp::Any visitTemplateArgumentList(CppParser::TemplateArgumentListContext *context) override final;
		virtual antlrcpp::Any visitTemplateArgument(CppParser::TemplateArgumentContext *context) override final;
		virtual antlrcpp::Any visitTypenameSpecifier(CppParser::TypenameSpecifierContext *context) override final;
		virtual antlrcpp::Any visitExplicitInstantiation(CppParser::ExplicitInstantiationContext *context) override final;
		virtual antlrcpp::Any visitExplicitSpecialization(CppParser::ExplicitSpecializationContext *context) override final;
		virtual antlrcpp::Any visitDeductionGuide(CppParser::DeductionGuideContext *context) override final;
		virtual antlrcpp::Any visitTryBlock(CppParser::TryBlockContext *context) override final;
		virtual antlrcpp::Any visitFunctionTryBlock(CppParser::FunctionTryBlockContext *context) override final;
		virtual antlrcpp::Any visitHandlerSequence(CppParser::HandlerSequenceContext *context) override final;
		virtual antlrcpp::Any visitHandler(CppParser::HandlerContext *context) override final;
		virtual antlrcpp::Any visitExceptionDeclaration(CppParser::ExceptionDeclarationContext *context) override final;
		virtual antlrcpp::Any visitNoExceptionSpecifier(CppParser::NoExceptionSpecifierContext *context) override final;
		virtual antlrcpp::Any visitIdentifierList(CppParser::IdentifierListContext *context) override final;
		virtual antlrcpp::Any visitLiteral(CppParser::LiteralContext *context) override final;
		virtual antlrcpp::Any visitIntegerLiteral(CppParser::IntegerLiteralContext *context) override final;
		virtual antlrcpp::Any visitBooleanLiteral(CppParser::BooleanLiteralContext *context) override final;
		virtual antlrcpp::Any visitPointerLiteral(CppParser::PointerLiteralContext *context) override final;
		virtual antlrcpp::Any visitUserDefinedLiteral(CppParser::UserDefinedLiteralContext *context) override final;

		virtual antlrcpp::Any visitTerminal(antlr4::tree::TerminalNode* node) override final;

	private:
		SyntaxTokenType GetTokenType(antlr4::Token& token);
		size_t GetFirstNewlinePosition(const std::vector<antlr4::Token*>& tokens);
		std::vector<SyntaxTrivia> GetLeadingTrivia(size_t index);
		std::vector<SyntaxTrivia> GetTrailingTrivia(size_t index);
		std::shared_ptr<const InnerTree::SyntaxToken> CreateToken(
			SyntaxTokenType type,
			antlr4::tree::TerminalNode* terminalNode);

	private:
		antlr4::BufferedTokenStream* m_tokenStream;
	};
}
