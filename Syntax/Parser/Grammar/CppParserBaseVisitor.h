
// Generated from Grammar\CppParser.g4 by ANTLR 4.7.1


// Generated from Grammar\CppParser.g4 by ANTLR 4.7.1

#pragma once


//#include "antlr4-runtime.h"
#include "CppParserVisitor.h"


/**
 * This class provides an empty implementation of CppParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
export class  CppParserBaseVisitor : public CppParserVisitor {
public:

  virtual antlrcpp::Any visitDoubleGreaterThan(CppParser::DoubleGreaterThanContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNamespaceName(CppParser::NamespaceNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNamespaceAlias(CppParser::NamespaceAliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassName(CppParser::ClassNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTemplateName(CppParser::TemplateNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTranslationUnit(CppParser::TranslationUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimaryExpression(CppParser::PrimaryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifierExpression(CppParser::IdentifierExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnqualifiedIdentifier(CppParser::UnqualifiedIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQualifiedIdentifier(CppParser::QualifiedIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNestedNameSpecifier(CppParser::NestedNameSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNestedNameSpecifierSequence(CppParser::NestedNameSpecifierSequenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLambdaExpression(CppParser::LambdaExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLambdaIntroducer(CppParser::LambdaIntroducerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLambdaDeclarator(CppParser::LambdaDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLambdaCapture(CppParser::LambdaCaptureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCaptureDefault(CppParser::CaptureDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCaptureList(CppParser::CaptureListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCapture(CppParser::CaptureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleCapture(CppParser::SimpleCaptureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitializerCapture(CppParser::InitializerCaptureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFoldExpression(CppParser::FoldExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFoldOperator(CppParser::FoldOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExplicitTypeCoversionOperatorExpression(CppParser::ExplicitTypeCoversionOperatorExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPostfixOperator(CppParser::PostfixOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNamedCastExpression(CppParser::NamedCastExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMemberAccessOperator(CppParser::MemberAccessOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNamedCastType(CppParser::NamedCastTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeIdentificationExpression(CppParser::TypeIdentificationExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPostfixExpression(CppParser::PostfixExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionList(CppParser::ExpressionListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPseudoDestructorName(CppParser::PseudoDestructorNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryExpression(CppParser::UnaryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryOperator(CppParser::UnaryOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNewExpression(CppParser::NewExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNewPlacement(CppParser::NewPlacementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNewTypeIdentifier(CppParser::NewTypeIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNewDeclarator(CppParser::NewDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNoPointerNewDeclarator(CppParser::NoPointerNewDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNewInitializer(CppParser::NewInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeleteExpression(CppParser::DeleteExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNoExceptionExpression(CppParser::NoExceptionExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCastExpression(CppParser::CastExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPointerManipulationExpression(CppParser::PointerManipulationExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiplicativeExpression(CppParser::MultiplicativeExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdditiveExpression(CppParser::AdditiveExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShiftExpression(CppParser::ShiftExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelationalExpression(CppParser::RelationalExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEqualityExpression(CppParser::EqualityExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAndExpression(CppParser::AndExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExclusiveOrExpression(CppParser::ExclusiveOrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInclusiveOrExpression(CppParser::InclusiveOrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalAndExpression(CppParser::LogicalAndExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalOrExpression(CppParser::LogicalOrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionalExpression(CppParser::ConditionalExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitThrowExpression(CppParser::ThrowExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignmentExpression(CppParser::AssignmentExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignmentOperator(CppParser::AssignmentOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(CppParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstantExpression(CppParser::ConstantExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(CppParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitializerStatement(CppParser::InitializerStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCondition(CppParser::ConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLabeledStatement(CppParser::LabeledStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionStatement(CppParser::ExpressionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompoundStatement(CppParser::CompoundStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatementSequence(CppParser::StatementSequenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectionStatement(CppParser::SelectionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIterationStatement(CppParser::IterationStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForInitializerStatement(CppParser::ForInitializerStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForRangeDeclaration(CppParser::ForRangeDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForRangeInitializer(CppParser::ForRangeInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJumpStatement(CppParser::JumpStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarationStatement(CppParser::DeclarationStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarationSequence(CppParser::DeclarationSequenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaration(CppParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlockDeclaration(CppParser::BlockDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNoDeclarationSpecifierFunctionDeclaration(CppParser::NoDeclarationSpecifierFunctionDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAliasDeclaration(CppParser::AliasDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleDeclaration(CppParser::SimpleDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStaticAssertDeclaration(CppParser::StaticAssertDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEmptyDeclaration(CppParser::EmptyDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttributeDeclaration(CppParser::AttributeDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarationModifier(CppParser::DeclarationModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarationSpecifierSequence(CppParser::DeclarationSpecifierSequenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLeadingDeclarationModifierSequence(CppParser::LeadingDeclarationModifierSequenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTrailingDeclarationModifierSequence(CppParser::TrailingDeclarationModifierSequenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarationModifierSequence(CppParser::DeclarationModifierSequenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStorageClassSpecifier(CppParser::StorageClassSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionSpecifier(CppParser::FunctionSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeSpecifier(CppParser::TypeSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeSpecifierSequence(CppParser::TypeSpecifierSequenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefiningTypeSpecifier(CppParser::DefiningTypeSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefiningTypeSpecifierSequence(CppParser::DefiningTypeSpecifierSequenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleTypeSpecifier(CppParser::SimpleTypeSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeName(CppParser::TypeNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarationTypeSpecifier(CppParser::DeclarationTypeSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElaboratedTypeSpecifier(CppParser::ElaboratedTypeSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumSpecifier(CppParser::EnumSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumHead(CppParser::EnumHeadContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumHeadName(CppParser::EnumHeadNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOpaqueEnumSpecifier(CppParser::OpaqueEnumSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumKey(CppParser::EnumKeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumBase(CppParser::EnumBaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumeratorList(CppParser::EnumeratorListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumeratorDefinition(CppParser::EnumeratorDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumerator(CppParser::EnumeratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNamespaceDefinition(CppParser::NamespaceDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNamedNamespaceDefinition(CppParser::NamedNamespaceDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnnamedNamespaceDefinition(CppParser::UnnamedNamespaceDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNestedNamespaceDefinition(CppParser::NestedNamespaceDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnclosingNamespaceSpecifier(CppParser::EnclosingNamespaceSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNamespaceBody(CppParser::NamespaceBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNamespaceAliasDefinition(CppParser::NamespaceAliasDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQualifiedNamespaceSpecifier(CppParser::QualifiedNamespaceSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUsingDeclaration(CppParser::UsingDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUsingDeclaratorList(CppParser::UsingDeclaratorListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUsingDeclarator(CppParser::UsingDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUsingDirective(CppParser::UsingDirectiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAsmDefinition(CppParser::AsmDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLinkageSpecification(CppParser::LinkageSpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttributeSpecifierSequence(CppParser::AttributeSpecifierSequenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttributeSpecifier(CppParser::AttributeSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlignmentSpecifier(CppParser::AlignmentSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttributeUsingPrefix(CppParser::AttributeUsingPrefixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttributeList(CppParser::AttributeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttribute(CppParser::AttributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttributeToken(CppParser::AttributeTokenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttributeScopedToken(CppParser::AttributeScopedTokenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttributeNamespace(CppParser::AttributeNamespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttributeArgumentClause(CppParser::AttributeArgumentClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBalancedTokenSequence(CppParser::BalancedTokenSequenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBalancedToken(CppParser::BalancedTokenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitializerDeclaratorList(CppParser::InitializerDeclaratorListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitializerDeclarator(CppParser::InitializerDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarator(CppParser::DeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPointerDeclarator(CppParser::PointerDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNoPointerDeclarator(CppParser::NoPointerDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParametersAndQualifiers(CppParser::ParametersAndQualifiersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionParameters(CppParser::FunctionParametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionQualifiers(CppParser::FunctionQualifiersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTrailingReturnType(CppParser::TrailingReturnTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPointerOperator(CppParser::PointerOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstVolatileQualifierSequence(CppParser::ConstVolatileQualifierSequenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstVolatileQualifier(CppParser::ConstVolatileQualifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReferenceQualifier(CppParser::ReferenceQualifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeIdentifier(CppParser::TypeIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefiningTypeIdentifier(CppParser::DefiningTypeIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAbstractDeclarator(CppParser::AbstractDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPointerAbstractDeclarator(CppParser::PointerAbstractDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNoPointerAbstractDeclarator(CppParser::NoPointerAbstractDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAbstractPackDeclarator(CppParser::AbstractPackDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNoPointerAbstractPackDeclarator(CppParser::NoPointerAbstractPackDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameterDeclarationClause(CppParser::ParameterDeclarationClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameterDeclarationList(CppParser::ParameterDeclarationListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameterDeclaration(CppParser::ParameterDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionDefinition(CppParser::FunctionDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionDeclarator(CppParser::FunctionDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionBody(CppParser::FunctionBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRegularFunctionBody(CppParser::RegularFunctionBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExplicitlyDefaultedFunction(CppParser::ExplicitlyDefaultedFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeletedFunction(CppParser::DeletedFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitializer(CppParser::InitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBraceOrEqualInitializer(CppParser::BraceOrEqualInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitializerClause(CppParser::InitializerClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitializerList(CppParser::InitializerListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBracedInitializerList(CppParser::BracedInitializerListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionOrBracedInitializerList(CppParser::ExpressionOrBracedInitializerListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassSpecifier(CppParser::ClassSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassHead(CppParser::ClassHeadContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassHeadName(CppParser::ClassHeadNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassVirtualSpecifier(CppParser::ClassVirtualSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassKey(CppParser::ClassKeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMemberSpecification(CppParser::MemberSpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMemberDeclaration(CppParser::MemberDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMemberDeclaratorList(CppParser::MemberDeclaratorListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMemberDeclarator(CppParser::MemberDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVirtualSpecifierSequence(CppParser::VirtualSpecifierSequenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVirtualSpecifier(CppParser::VirtualSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPureSpecifier(CppParser::PureSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBaseClause(CppParser::BaseClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBaseSpecifierList(CppParser::BaseSpecifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBaseSpecifier(CppParser::BaseSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassOrDecltype(CppParser::ClassOrDecltypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAccessSpecifier(CppParser::AccessSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConversionFunctionIdentifier(CppParser::ConversionFunctionIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConversionTypeIdentifier(CppParser::ConversionTypeIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConversionDeclarator(CppParser::ConversionDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstructorInitializer(CppParser::ConstructorInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMemberInitializerList(CppParser::MemberInitializerListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMemberInitializer(CppParser::MemberInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMemberInitializerIdentifier(CppParser::MemberInitializerIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperatorFunctionIdentifier(CppParser::OperatorFunctionIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnyOperator(CppParser::AnyOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteralOperatorIdentifier(CppParser::LiteralOperatorIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTemplateDeclaration(CppParser::TemplateDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTemplateParameterList(CppParser::TemplateParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTemplateParameter(CppParser::TemplateParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeParameter(CppParser::TypeParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeParameterKey(CppParser::TypeParameterKeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleTemplateIdentifier(CppParser::SimpleTemplateIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTemplateIdentifier(CppParser::TemplateIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTemplateArgumentList(CppParser::TemplateArgumentListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTemplateArgument(CppParser::TemplateArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypenameSpecifier(CppParser::TypenameSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExplicitInstantiation(CppParser::ExplicitInstantiationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExplicitSpecialization(CppParser::ExplicitSpecializationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeductionGuide(CppParser::DeductionGuideContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTryBlock(CppParser::TryBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionTryBlock(CppParser::FunctionTryBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHandlerSequence(CppParser::HandlerSequenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHandler(CppParser::HandlerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExceptionDeclaration(CppParser::ExceptionDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNoExceptionSpecifier(CppParser::NoExceptionSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifierList(CppParser::IdentifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteral(CppParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntegerLiteral(CppParser::IntegerLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBooleanLiteral(CppParser::BooleanLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPointerLiteral(CppParser::PointerLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUserDefinedLiteral(CppParser::UserDefinedLiteralContext *ctx) override {
    return visitChildren(ctx);
  }


};

