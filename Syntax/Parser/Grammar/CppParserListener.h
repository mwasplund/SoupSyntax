
// Generated from Grammar\CppParser.g4 by ANTLR 4.7.1

#pragma once


//#include "antlr4-runtime.h"
#include "CppParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by CppParser.
 */
export class CppParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterDoubleGreaterThan(CppParser::DoubleGreaterThanContext *ctx) = 0;
  virtual void exitDoubleGreaterThan(CppParser::DoubleGreaterThanContext *ctx) = 0;

  virtual void enterNamespaceName(CppParser::NamespaceNameContext *ctx) = 0;
  virtual void exitNamespaceName(CppParser::NamespaceNameContext *ctx) = 0;

  virtual void enterClassName(CppParser::ClassNameContext *ctx) = 0;
  virtual void exitClassName(CppParser::ClassNameContext *ctx) = 0;

  virtual void enterTemplateName(CppParser::TemplateNameContext *ctx) = 0;
  virtual void exitTemplateName(CppParser::TemplateNameContext *ctx) = 0;

  virtual void enterTranslationUnit(CppParser::TranslationUnitContext *ctx) = 0;
  virtual void exitTranslationUnit(CppParser::TranslationUnitContext *ctx) = 0;

  virtual void enterPrimaryExpression(CppParser::PrimaryExpressionContext *ctx) = 0;
  virtual void exitPrimaryExpression(CppParser::PrimaryExpressionContext *ctx) = 0;

  virtual void enterIdentifierExpression(CppParser::IdentifierExpressionContext *ctx) = 0;
  virtual void exitIdentifierExpression(CppParser::IdentifierExpressionContext *ctx) = 0;

  virtual void enterUnqualifiedIdentifier(CppParser::UnqualifiedIdentifierContext *ctx) = 0;
  virtual void exitUnqualifiedIdentifier(CppParser::UnqualifiedIdentifierContext *ctx) = 0;

  virtual void enterQualifiedIdentifier(CppParser::QualifiedIdentifierContext *ctx) = 0;
  virtual void exitQualifiedIdentifier(CppParser::QualifiedIdentifierContext *ctx) = 0;

  virtual void enterNestedNameSpecifier(CppParser::NestedNameSpecifierContext *ctx) = 0;
  virtual void exitNestedNameSpecifier(CppParser::NestedNameSpecifierContext *ctx) = 0;

  virtual void enterNestedNameSpecifierSequence(CppParser::NestedNameSpecifierSequenceContext *ctx) = 0;
  virtual void exitNestedNameSpecifierSequence(CppParser::NestedNameSpecifierSequenceContext *ctx) = 0;

  virtual void enterLambdaExpression(CppParser::LambdaExpressionContext *ctx) = 0;
  virtual void exitLambdaExpression(CppParser::LambdaExpressionContext *ctx) = 0;

  virtual void enterLambdaIntroducer(CppParser::LambdaIntroducerContext *ctx) = 0;
  virtual void exitLambdaIntroducer(CppParser::LambdaIntroducerContext *ctx) = 0;

  virtual void enterLambdaDeclarator(CppParser::LambdaDeclaratorContext *ctx) = 0;
  virtual void exitLambdaDeclarator(CppParser::LambdaDeclaratorContext *ctx) = 0;

  virtual void enterLambdaCapture(CppParser::LambdaCaptureContext *ctx) = 0;
  virtual void exitLambdaCapture(CppParser::LambdaCaptureContext *ctx) = 0;

  virtual void enterCaptureDefault(CppParser::CaptureDefaultContext *ctx) = 0;
  virtual void exitCaptureDefault(CppParser::CaptureDefaultContext *ctx) = 0;

  virtual void enterCaptureList(CppParser::CaptureListContext *ctx) = 0;
  virtual void exitCaptureList(CppParser::CaptureListContext *ctx) = 0;

  virtual void enterCapture(CppParser::CaptureContext *ctx) = 0;
  virtual void exitCapture(CppParser::CaptureContext *ctx) = 0;

  virtual void enterSimpleCapture(CppParser::SimpleCaptureContext *ctx) = 0;
  virtual void exitSimpleCapture(CppParser::SimpleCaptureContext *ctx) = 0;

  virtual void enterInitializerCapture(CppParser::InitializerCaptureContext *ctx) = 0;
  virtual void exitInitializerCapture(CppParser::InitializerCaptureContext *ctx) = 0;

  virtual void enterFoldExpression(CppParser::FoldExpressionContext *ctx) = 0;
  virtual void exitFoldExpression(CppParser::FoldExpressionContext *ctx) = 0;

  virtual void enterFoldOperator(CppParser::FoldOperatorContext *ctx) = 0;
  virtual void exitFoldOperator(CppParser::FoldOperatorContext *ctx) = 0;

  virtual void enterExplicitTypeCoversionOperatorExpression(CppParser::ExplicitTypeCoversionOperatorExpressionContext *ctx) = 0;
  virtual void exitExplicitTypeCoversionOperatorExpression(CppParser::ExplicitTypeCoversionOperatorExpressionContext *ctx) = 0;

  virtual void enterPostfixOperator(CppParser::PostfixOperatorContext *ctx) = 0;
  virtual void exitPostfixOperator(CppParser::PostfixOperatorContext *ctx) = 0;

  virtual void enterNamedCastExpression(CppParser::NamedCastExpressionContext *ctx) = 0;
  virtual void exitNamedCastExpression(CppParser::NamedCastExpressionContext *ctx) = 0;

  virtual void enterMemberAccessOperator(CppParser::MemberAccessOperatorContext *ctx) = 0;
  virtual void exitMemberAccessOperator(CppParser::MemberAccessOperatorContext *ctx) = 0;

  virtual void enterNamedCastType(CppParser::NamedCastTypeContext *ctx) = 0;
  virtual void exitNamedCastType(CppParser::NamedCastTypeContext *ctx) = 0;

  virtual void enterTypeIdentificationExpression(CppParser::TypeIdentificationExpressionContext *ctx) = 0;
  virtual void exitTypeIdentificationExpression(CppParser::TypeIdentificationExpressionContext *ctx) = 0;

  virtual void enterPostfixExpression(CppParser::PostfixExpressionContext *ctx) = 0;
  virtual void exitPostfixExpression(CppParser::PostfixExpressionContext *ctx) = 0;

  virtual void enterExpressionList(CppParser::ExpressionListContext *ctx) = 0;
  virtual void exitExpressionList(CppParser::ExpressionListContext *ctx) = 0;

  virtual void enterPseudoDestructorName(CppParser::PseudoDestructorNameContext *ctx) = 0;
  virtual void exitPseudoDestructorName(CppParser::PseudoDestructorNameContext *ctx) = 0;

  virtual void enterUnaryExpression(CppParser::UnaryExpressionContext *ctx) = 0;
  virtual void exitUnaryExpression(CppParser::UnaryExpressionContext *ctx) = 0;

  virtual void enterUnaryOperator(CppParser::UnaryOperatorContext *ctx) = 0;
  virtual void exitUnaryOperator(CppParser::UnaryOperatorContext *ctx) = 0;

  virtual void enterNewExpression(CppParser::NewExpressionContext *ctx) = 0;
  virtual void exitNewExpression(CppParser::NewExpressionContext *ctx) = 0;

  virtual void enterNewPlacement(CppParser::NewPlacementContext *ctx) = 0;
  virtual void exitNewPlacement(CppParser::NewPlacementContext *ctx) = 0;

  virtual void enterNewTypeIdentifier(CppParser::NewTypeIdentifierContext *ctx) = 0;
  virtual void exitNewTypeIdentifier(CppParser::NewTypeIdentifierContext *ctx) = 0;

  virtual void enterNewDeclarator(CppParser::NewDeclaratorContext *ctx) = 0;
  virtual void exitNewDeclarator(CppParser::NewDeclaratorContext *ctx) = 0;

  virtual void enterNoPointerNewDeclarator(CppParser::NoPointerNewDeclaratorContext *ctx) = 0;
  virtual void exitNoPointerNewDeclarator(CppParser::NoPointerNewDeclaratorContext *ctx) = 0;

  virtual void enterNewInitializer(CppParser::NewInitializerContext *ctx) = 0;
  virtual void exitNewInitializer(CppParser::NewInitializerContext *ctx) = 0;

  virtual void enterDeleteExpression(CppParser::DeleteExpressionContext *ctx) = 0;
  virtual void exitDeleteExpression(CppParser::DeleteExpressionContext *ctx) = 0;

  virtual void enterNoExceptionExpression(CppParser::NoExceptionExpressionContext *ctx) = 0;
  virtual void exitNoExceptionExpression(CppParser::NoExceptionExpressionContext *ctx) = 0;

  virtual void enterCastExpression(CppParser::CastExpressionContext *ctx) = 0;
  virtual void exitCastExpression(CppParser::CastExpressionContext *ctx) = 0;

  virtual void enterBinaryExpression(CppParser::BinaryExpressionContext *ctx) = 0;
  virtual void exitBinaryExpression(CppParser::BinaryExpressionContext *ctx) = 0;

  virtual void enterBinaryOperator(CppParser::BinaryOperatorContext *ctx) = 0;
  virtual void exitBinaryOperator(CppParser::BinaryOperatorContext *ctx) = 0;

  virtual void enterConditionalExpression(CppParser::ConditionalExpressionContext *ctx) = 0;
  virtual void exitConditionalExpression(CppParser::ConditionalExpressionContext *ctx) = 0;

  virtual void enterThrowExpression(CppParser::ThrowExpressionContext *ctx) = 0;
  virtual void exitThrowExpression(CppParser::ThrowExpressionContext *ctx) = 0;

  virtual void enterAssignmentExpression(CppParser::AssignmentExpressionContext *ctx) = 0;
  virtual void exitAssignmentExpression(CppParser::AssignmentExpressionContext *ctx) = 0;

  virtual void enterAssignmentOperator(CppParser::AssignmentOperatorContext *ctx) = 0;
  virtual void exitAssignmentOperator(CppParser::AssignmentOperatorContext *ctx) = 0;

  virtual void enterExpression(CppParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(CppParser::ExpressionContext *ctx) = 0;

  virtual void enterConstantExpression(CppParser::ConstantExpressionContext *ctx) = 0;
  virtual void exitConstantExpression(CppParser::ConstantExpressionContext *ctx) = 0;

  virtual void enterStatement(CppParser::StatementContext *ctx) = 0;
  virtual void exitStatement(CppParser::StatementContext *ctx) = 0;

  virtual void enterInitializerStatement(CppParser::InitializerStatementContext *ctx) = 0;
  virtual void exitInitializerStatement(CppParser::InitializerStatementContext *ctx) = 0;

  virtual void enterCondition(CppParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(CppParser::ConditionContext *ctx) = 0;

  virtual void enterLabeledStatement(CppParser::LabeledStatementContext *ctx) = 0;
  virtual void exitLabeledStatement(CppParser::LabeledStatementContext *ctx) = 0;

  virtual void enterExpressionStatement(CppParser::ExpressionStatementContext *ctx) = 0;
  virtual void exitExpressionStatement(CppParser::ExpressionStatementContext *ctx) = 0;

  virtual void enterCompoundStatement(CppParser::CompoundStatementContext *ctx) = 0;
  virtual void exitCompoundStatement(CppParser::CompoundStatementContext *ctx) = 0;

  virtual void enterStatementSequence(CppParser::StatementSequenceContext *ctx) = 0;
  virtual void exitStatementSequence(CppParser::StatementSequenceContext *ctx) = 0;

  virtual void enterSelectionStatement(CppParser::SelectionStatementContext *ctx) = 0;
  virtual void exitSelectionStatement(CppParser::SelectionStatementContext *ctx) = 0;

  virtual void enterIterationStatement(CppParser::IterationStatementContext *ctx) = 0;
  virtual void exitIterationStatement(CppParser::IterationStatementContext *ctx) = 0;

  virtual void enterForInitializerStatement(CppParser::ForInitializerStatementContext *ctx) = 0;
  virtual void exitForInitializerStatement(CppParser::ForInitializerStatementContext *ctx) = 0;

  virtual void enterForRangeDeclaration(CppParser::ForRangeDeclarationContext *ctx) = 0;
  virtual void exitForRangeDeclaration(CppParser::ForRangeDeclarationContext *ctx) = 0;

  virtual void enterForRangeInitializer(CppParser::ForRangeInitializerContext *ctx) = 0;
  virtual void exitForRangeInitializer(CppParser::ForRangeInitializerContext *ctx) = 0;

  virtual void enterJumpStatement(CppParser::JumpStatementContext *ctx) = 0;
  virtual void exitJumpStatement(CppParser::JumpStatementContext *ctx) = 0;

  virtual void enterDeclarationStatement(CppParser::DeclarationStatementContext *ctx) = 0;
  virtual void exitDeclarationStatement(CppParser::DeclarationStatementContext *ctx) = 0;

  virtual void enterDeclarationSequence(CppParser::DeclarationSequenceContext *ctx) = 0;
  virtual void exitDeclarationSequence(CppParser::DeclarationSequenceContext *ctx) = 0;

  virtual void enterDeclaration(CppParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(CppParser::DeclarationContext *ctx) = 0;

  virtual void enterBlockDeclaration(CppParser::BlockDeclarationContext *ctx) = 0;
  virtual void exitBlockDeclaration(CppParser::BlockDeclarationContext *ctx) = 0;

  virtual void enterNoDeclarationSpecifierFunctionDeclaration(CppParser::NoDeclarationSpecifierFunctionDeclarationContext *ctx) = 0;
  virtual void exitNoDeclarationSpecifierFunctionDeclaration(CppParser::NoDeclarationSpecifierFunctionDeclarationContext *ctx) = 0;

  virtual void enterAliasDeclaration(CppParser::AliasDeclarationContext *ctx) = 0;
  virtual void exitAliasDeclaration(CppParser::AliasDeclarationContext *ctx) = 0;

  virtual void enterSimpleDeclaration(CppParser::SimpleDeclarationContext *ctx) = 0;
  virtual void exitSimpleDeclaration(CppParser::SimpleDeclarationContext *ctx) = 0;

  virtual void enterStaticAssertDeclaration(CppParser::StaticAssertDeclarationContext *ctx) = 0;
  virtual void exitStaticAssertDeclaration(CppParser::StaticAssertDeclarationContext *ctx) = 0;

  virtual void enterEmptyDeclaration(CppParser::EmptyDeclarationContext *ctx) = 0;
  virtual void exitEmptyDeclaration(CppParser::EmptyDeclarationContext *ctx) = 0;

  virtual void enterAttributeDeclaration(CppParser::AttributeDeclarationContext *ctx) = 0;
  virtual void exitAttributeDeclaration(CppParser::AttributeDeclarationContext *ctx) = 0;

  virtual void enterDeclarationModifier(CppParser::DeclarationModifierContext *ctx) = 0;
  virtual void exitDeclarationModifier(CppParser::DeclarationModifierContext *ctx) = 0;

  virtual void enterDeclarationSpecifierSequence(CppParser::DeclarationSpecifierSequenceContext *ctx) = 0;
  virtual void exitDeclarationSpecifierSequence(CppParser::DeclarationSpecifierSequenceContext *ctx) = 0;

  virtual void enterLeadingDeclarationModifierSequence(CppParser::LeadingDeclarationModifierSequenceContext *ctx) = 0;
  virtual void exitLeadingDeclarationModifierSequence(CppParser::LeadingDeclarationModifierSequenceContext *ctx) = 0;

  virtual void enterTrailingDeclarationModifierSequence(CppParser::TrailingDeclarationModifierSequenceContext *ctx) = 0;
  virtual void exitTrailingDeclarationModifierSequence(CppParser::TrailingDeclarationModifierSequenceContext *ctx) = 0;

  virtual void enterDeclarationModifierSequence(CppParser::DeclarationModifierSequenceContext *ctx) = 0;
  virtual void exitDeclarationModifierSequence(CppParser::DeclarationModifierSequenceContext *ctx) = 0;

  virtual void enterStorageClassSpecifier(CppParser::StorageClassSpecifierContext *ctx) = 0;
  virtual void exitStorageClassSpecifier(CppParser::StorageClassSpecifierContext *ctx) = 0;

  virtual void enterFunctionSpecifier(CppParser::FunctionSpecifierContext *ctx) = 0;
  virtual void exitFunctionSpecifier(CppParser::FunctionSpecifierContext *ctx) = 0;

  virtual void enterTypeSpecifier(CppParser::TypeSpecifierContext *ctx) = 0;
  virtual void exitTypeSpecifier(CppParser::TypeSpecifierContext *ctx) = 0;

  virtual void enterTypeSpecifierSequence(CppParser::TypeSpecifierSequenceContext *ctx) = 0;
  virtual void exitTypeSpecifierSequence(CppParser::TypeSpecifierSequenceContext *ctx) = 0;

  virtual void enterDefiningTypeSpecifier(CppParser::DefiningTypeSpecifierContext *ctx) = 0;
  virtual void exitDefiningTypeSpecifier(CppParser::DefiningTypeSpecifierContext *ctx) = 0;

  virtual void enterDefiningTypeSpecifierSequence(CppParser::DefiningTypeSpecifierSequenceContext *ctx) = 0;
  virtual void exitDefiningTypeSpecifierSequence(CppParser::DefiningTypeSpecifierSequenceContext *ctx) = 0;

  virtual void enterSimpleTypeSpecifier(CppParser::SimpleTypeSpecifierContext *ctx) = 0;
  virtual void exitSimpleTypeSpecifier(CppParser::SimpleTypeSpecifierContext *ctx) = 0;

  virtual void enterTypeName(CppParser::TypeNameContext *ctx) = 0;
  virtual void exitTypeName(CppParser::TypeNameContext *ctx) = 0;

  virtual void enterDeclarationTypeSpecifier(CppParser::DeclarationTypeSpecifierContext *ctx) = 0;
  virtual void exitDeclarationTypeSpecifier(CppParser::DeclarationTypeSpecifierContext *ctx) = 0;

  virtual void enterElaboratedTypeSpecifier(CppParser::ElaboratedTypeSpecifierContext *ctx) = 0;
  virtual void exitElaboratedTypeSpecifier(CppParser::ElaboratedTypeSpecifierContext *ctx) = 0;

  virtual void enterEnumSpecifier(CppParser::EnumSpecifierContext *ctx) = 0;
  virtual void exitEnumSpecifier(CppParser::EnumSpecifierContext *ctx) = 0;

  virtual void enterEnumHead(CppParser::EnumHeadContext *ctx) = 0;
  virtual void exitEnumHead(CppParser::EnumHeadContext *ctx) = 0;

  virtual void enterEnumHeadName(CppParser::EnumHeadNameContext *ctx) = 0;
  virtual void exitEnumHeadName(CppParser::EnumHeadNameContext *ctx) = 0;

  virtual void enterOpaqueEnumSpecifier(CppParser::OpaqueEnumSpecifierContext *ctx) = 0;
  virtual void exitOpaqueEnumSpecifier(CppParser::OpaqueEnumSpecifierContext *ctx) = 0;

  virtual void enterEnumKey(CppParser::EnumKeyContext *ctx) = 0;
  virtual void exitEnumKey(CppParser::EnumKeyContext *ctx) = 0;

  virtual void enterEnumBase(CppParser::EnumBaseContext *ctx) = 0;
  virtual void exitEnumBase(CppParser::EnumBaseContext *ctx) = 0;

  virtual void enterEnumeratorList(CppParser::EnumeratorListContext *ctx) = 0;
  virtual void exitEnumeratorList(CppParser::EnumeratorListContext *ctx) = 0;

  virtual void enterEnumeratorDefinition(CppParser::EnumeratorDefinitionContext *ctx) = 0;
  virtual void exitEnumeratorDefinition(CppParser::EnumeratorDefinitionContext *ctx) = 0;

  virtual void enterEnumerator(CppParser::EnumeratorContext *ctx) = 0;
  virtual void exitEnumerator(CppParser::EnumeratorContext *ctx) = 0;

  virtual void enterNamespaceDefinition(CppParser::NamespaceDefinitionContext *ctx) = 0;
  virtual void exitNamespaceDefinition(CppParser::NamespaceDefinitionContext *ctx) = 0;

  virtual void enterNamedNamespaceDefinition(CppParser::NamedNamespaceDefinitionContext *ctx) = 0;
  virtual void exitNamedNamespaceDefinition(CppParser::NamedNamespaceDefinitionContext *ctx) = 0;

  virtual void enterUnnamedNamespaceDefinition(CppParser::UnnamedNamespaceDefinitionContext *ctx) = 0;
  virtual void exitUnnamedNamespaceDefinition(CppParser::UnnamedNamespaceDefinitionContext *ctx) = 0;

  virtual void enterNestedNamespaceDefinition(CppParser::NestedNamespaceDefinitionContext *ctx) = 0;
  virtual void exitNestedNamespaceDefinition(CppParser::NestedNamespaceDefinitionContext *ctx) = 0;

  virtual void enterEnclosingNamespaceSpecifier(CppParser::EnclosingNamespaceSpecifierContext *ctx) = 0;
  virtual void exitEnclosingNamespaceSpecifier(CppParser::EnclosingNamespaceSpecifierContext *ctx) = 0;

  virtual void enterNamespaceBody(CppParser::NamespaceBodyContext *ctx) = 0;
  virtual void exitNamespaceBody(CppParser::NamespaceBodyContext *ctx) = 0;

  virtual void enterNamespaceAliasDefinition(CppParser::NamespaceAliasDefinitionContext *ctx) = 0;
  virtual void exitNamespaceAliasDefinition(CppParser::NamespaceAliasDefinitionContext *ctx) = 0;

  virtual void enterQualifiedNamespaceSpecifier(CppParser::QualifiedNamespaceSpecifierContext *ctx) = 0;
  virtual void exitQualifiedNamespaceSpecifier(CppParser::QualifiedNamespaceSpecifierContext *ctx) = 0;

  virtual void enterUsingDeclaration(CppParser::UsingDeclarationContext *ctx) = 0;
  virtual void exitUsingDeclaration(CppParser::UsingDeclarationContext *ctx) = 0;

  virtual void enterUsingDeclaratorList(CppParser::UsingDeclaratorListContext *ctx) = 0;
  virtual void exitUsingDeclaratorList(CppParser::UsingDeclaratorListContext *ctx) = 0;

  virtual void enterUsingDeclarator(CppParser::UsingDeclaratorContext *ctx) = 0;
  virtual void exitUsingDeclarator(CppParser::UsingDeclaratorContext *ctx) = 0;

  virtual void enterUsingDirective(CppParser::UsingDirectiveContext *ctx) = 0;
  virtual void exitUsingDirective(CppParser::UsingDirectiveContext *ctx) = 0;

  virtual void enterAsmDefinition(CppParser::AsmDefinitionContext *ctx) = 0;
  virtual void exitAsmDefinition(CppParser::AsmDefinitionContext *ctx) = 0;

  virtual void enterLinkageSpecification(CppParser::LinkageSpecificationContext *ctx) = 0;
  virtual void exitLinkageSpecification(CppParser::LinkageSpecificationContext *ctx) = 0;

  virtual void enterAttributeSpecifierSequence(CppParser::AttributeSpecifierSequenceContext *ctx) = 0;
  virtual void exitAttributeSpecifierSequence(CppParser::AttributeSpecifierSequenceContext *ctx) = 0;

  virtual void enterAttributeSpecifier(CppParser::AttributeSpecifierContext *ctx) = 0;
  virtual void exitAttributeSpecifier(CppParser::AttributeSpecifierContext *ctx) = 0;

  virtual void enterAlignmentSpecifier(CppParser::AlignmentSpecifierContext *ctx) = 0;
  virtual void exitAlignmentSpecifier(CppParser::AlignmentSpecifierContext *ctx) = 0;

  virtual void enterAttributeUsingPrefix(CppParser::AttributeUsingPrefixContext *ctx) = 0;
  virtual void exitAttributeUsingPrefix(CppParser::AttributeUsingPrefixContext *ctx) = 0;

  virtual void enterAttributeList(CppParser::AttributeListContext *ctx) = 0;
  virtual void exitAttributeList(CppParser::AttributeListContext *ctx) = 0;

  virtual void enterAttribute(CppParser::AttributeContext *ctx) = 0;
  virtual void exitAttribute(CppParser::AttributeContext *ctx) = 0;

  virtual void enterAttributeToken(CppParser::AttributeTokenContext *ctx) = 0;
  virtual void exitAttributeToken(CppParser::AttributeTokenContext *ctx) = 0;

  virtual void enterAttributeScopedToken(CppParser::AttributeScopedTokenContext *ctx) = 0;
  virtual void exitAttributeScopedToken(CppParser::AttributeScopedTokenContext *ctx) = 0;

  virtual void enterAttributeNamespace(CppParser::AttributeNamespaceContext *ctx) = 0;
  virtual void exitAttributeNamespace(CppParser::AttributeNamespaceContext *ctx) = 0;

  virtual void enterAttributeArgumentClause(CppParser::AttributeArgumentClauseContext *ctx) = 0;
  virtual void exitAttributeArgumentClause(CppParser::AttributeArgumentClauseContext *ctx) = 0;

  virtual void enterBalancedTokenSequence(CppParser::BalancedTokenSequenceContext *ctx) = 0;
  virtual void exitBalancedTokenSequence(CppParser::BalancedTokenSequenceContext *ctx) = 0;

  virtual void enterBalancedToken(CppParser::BalancedTokenContext *ctx) = 0;
  virtual void exitBalancedToken(CppParser::BalancedTokenContext *ctx) = 0;

  virtual void enterNonBalancedToken(CppParser::NonBalancedTokenContext *ctx) = 0;
  virtual void exitNonBalancedToken(CppParser::NonBalancedTokenContext *ctx) = 0;

  virtual void enterInitializerDeclaratorList(CppParser::InitializerDeclaratorListContext *ctx) = 0;
  virtual void exitInitializerDeclaratorList(CppParser::InitializerDeclaratorListContext *ctx) = 0;

  virtual void enterInitializerDeclarator(CppParser::InitializerDeclaratorContext *ctx) = 0;
  virtual void exitInitializerDeclarator(CppParser::InitializerDeclaratorContext *ctx) = 0;

  virtual void enterDeclarator(CppParser::DeclaratorContext *ctx) = 0;
  virtual void exitDeclarator(CppParser::DeclaratorContext *ctx) = 0;

  virtual void enterPointerDeclarator(CppParser::PointerDeclaratorContext *ctx) = 0;
  virtual void exitPointerDeclarator(CppParser::PointerDeclaratorContext *ctx) = 0;

  virtual void enterNoPointerDeclarator(CppParser::NoPointerDeclaratorContext *ctx) = 0;
  virtual void exitNoPointerDeclarator(CppParser::NoPointerDeclaratorContext *ctx) = 0;

  virtual void enterParametersAndQualifiers(CppParser::ParametersAndQualifiersContext *ctx) = 0;
  virtual void exitParametersAndQualifiers(CppParser::ParametersAndQualifiersContext *ctx) = 0;

  virtual void enterFunctionParameters(CppParser::FunctionParametersContext *ctx) = 0;
  virtual void exitFunctionParameters(CppParser::FunctionParametersContext *ctx) = 0;

  virtual void enterFunctionQualifiers(CppParser::FunctionQualifiersContext *ctx) = 0;
  virtual void exitFunctionQualifiers(CppParser::FunctionQualifiersContext *ctx) = 0;

  virtual void enterTrailingReturnType(CppParser::TrailingReturnTypeContext *ctx) = 0;
  virtual void exitTrailingReturnType(CppParser::TrailingReturnTypeContext *ctx) = 0;

  virtual void enterPointerOperator(CppParser::PointerOperatorContext *ctx) = 0;
  virtual void exitPointerOperator(CppParser::PointerOperatorContext *ctx) = 0;

  virtual void enterConstVolatileQualifierSequence(CppParser::ConstVolatileQualifierSequenceContext *ctx) = 0;
  virtual void exitConstVolatileQualifierSequence(CppParser::ConstVolatileQualifierSequenceContext *ctx) = 0;

  virtual void enterConstVolatileQualifier(CppParser::ConstVolatileQualifierContext *ctx) = 0;
  virtual void exitConstVolatileQualifier(CppParser::ConstVolatileQualifierContext *ctx) = 0;

  virtual void enterReferenceQualifier(CppParser::ReferenceQualifierContext *ctx) = 0;
  virtual void exitReferenceQualifier(CppParser::ReferenceQualifierContext *ctx) = 0;

  virtual void enterTypeIdentifier(CppParser::TypeIdentifierContext *ctx) = 0;
  virtual void exitTypeIdentifier(CppParser::TypeIdentifierContext *ctx) = 0;

  virtual void enterDefiningTypeIdentifier(CppParser::DefiningTypeIdentifierContext *ctx) = 0;
  virtual void exitDefiningTypeIdentifier(CppParser::DefiningTypeIdentifierContext *ctx) = 0;

  virtual void enterAbstractDeclarator(CppParser::AbstractDeclaratorContext *ctx) = 0;
  virtual void exitAbstractDeclarator(CppParser::AbstractDeclaratorContext *ctx) = 0;

  virtual void enterPointerAbstractDeclarator(CppParser::PointerAbstractDeclaratorContext *ctx) = 0;
  virtual void exitPointerAbstractDeclarator(CppParser::PointerAbstractDeclaratorContext *ctx) = 0;

  virtual void enterNoPointerAbstractDeclarator(CppParser::NoPointerAbstractDeclaratorContext *ctx) = 0;
  virtual void exitNoPointerAbstractDeclarator(CppParser::NoPointerAbstractDeclaratorContext *ctx) = 0;

  virtual void enterAbstractPackDeclarator(CppParser::AbstractPackDeclaratorContext *ctx) = 0;
  virtual void exitAbstractPackDeclarator(CppParser::AbstractPackDeclaratorContext *ctx) = 0;

  virtual void enterNoPointerAbstractPackDeclarator(CppParser::NoPointerAbstractPackDeclaratorContext *ctx) = 0;
  virtual void exitNoPointerAbstractPackDeclarator(CppParser::NoPointerAbstractPackDeclaratorContext *ctx) = 0;

  virtual void enterParameterDeclarationClause(CppParser::ParameterDeclarationClauseContext *ctx) = 0;
  virtual void exitParameterDeclarationClause(CppParser::ParameterDeclarationClauseContext *ctx) = 0;

  virtual void enterParameterDeclarationList(CppParser::ParameterDeclarationListContext *ctx) = 0;
  virtual void exitParameterDeclarationList(CppParser::ParameterDeclarationListContext *ctx) = 0;

  virtual void enterParameterDeclaration(CppParser::ParameterDeclarationContext *ctx) = 0;
  virtual void exitParameterDeclaration(CppParser::ParameterDeclarationContext *ctx) = 0;

  virtual void enterFunctionDefinition(CppParser::FunctionDefinitionContext *ctx) = 0;
  virtual void exitFunctionDefinition(CppParser::FunctionDefinitionContext *ctx) = 0;

  virtual void enterFunctionDeclarator(CppParser::FunctionDeclaratorContext *ctx) = 0;
  virtual void exitFunctionDeclarator(CppParser::FunctionDeclaratorContext *ctx) = 0;

  virtual void enterFunctionBody(CppParser::FunctionBodyContext *ctx) = 0;
  virtual void exitFunctionBody(CppParser::FunctionBodyContext *ctx) = 0;

  virtual void enterRegularFunctionBody(CppParser::RegularFunctionBodyContext *ctx) = 0;
  virtual void exitRegularFunctionBody(CppParser::RegularFunctionBodyContext *ctx) = 0;

  virtual void enterExplicitlyDefaultedFunction(CppParser::ExplicitlyDefaultedFunctionContext *ctx) = 0;
  virtual void exitExplicitlyDefaultedFunction(CppParser::ExplicitlyDefaultedFunctionContext *ctx) = 0;

  virtual void enterDeletedFunction(CppParser::DeletedFunctionContext *ctx) = 0;
  virtual void exitDeletedFunction(CppParser::DeletedFunctionContext *ctx) = 0;

  virtual void enterInitializer(CppParser::InitializerContext *ctx) = 0;
  virtual void exitInitializer(CppParser::InitializerContext *ctx) = 0;

  virtual void enterBraceOrEqualInitializer(CppParser::BraceOrEqualInitializerContext *ctx) = 0;
  virtual void exitBraceOrEqualInitializer(CppParser::BraceOrEqualInitializerContext *ctx) = 0;

  virtual void enterInitializerClause(CppParser::InitializerClauseContext *ctx) = 0;
  virtual void exitInitializerClause(CppParser::InitializerClauseContext *ctx) = 0;

  virtual void enterInitializerList(CppParser::InitializerListContext *ctx) = 0;
  virtual void exitInitializerList(CppParser::InitializerListContext *ctx) = 0;

  virtual void enterBracedInitializerList(CppParser::BracedInitializerListContext *ctx) = 0;
  virtual void exitBracedInitializerList(CppParser::BracedInitializerListContext *ctx) = 0;

  virtual void enterExpressionOrBracedInitializerList(CppParser::ExpressionOrBracedInitializerListContext *ctx) = 0;
  virtual void exitExpressionOrBracedInitializerList(CppParser::ExpressionOrBracedInitializerListContext *ctx) = 0;

  virtual void enterClassSpecifier(CppParser::ClassSpecifierContext *ctx) = 0;
  virtual void exitClassSpecifier(CppParser::ClassSpecifierContext *ctx) = 0;

  virtual void enterClassHead(CppParser::ClassHeadContext *ctx) = 0;
  virtual void exitClassHead(CppParser::ClassHeadContext *ctx) = 0;

  virtual void enterClassHeadName(CppParser::ClassHeadNameContext *ctx) = 0;
  virtual void exitClassHeadName(CppParser::ClassHeadNameContext *ctx) = 0;

  virtual void enterClassVirtualSpecifier(CppParser::ClassVirtualSpecifierContext *ctx) = 0;
  virtual void exitClassVirtualSpecifier(CppParser::ClassVirtualSpecifierContext *ctx) = 0;

  virtual void enterClassKey(CppParser::ClassKeyContext *ctx) = 0;
  virtual void exitClassKey(CppParser::ClassKeyContext *ctx) = 0;

  virtual void enterMemberSpecification(CppParser::MemberSpecificationContext *ctx) = 0;
  virtual void exitMemberSpecification(CppParser::MemberSpecificationContext *ctx) = 0;

  virtual void enterMemberDeclaration(CppParser::MemberDeclarationContext *ctx) = 0;
  virtual void exitMemberDeclaration(CppParser::MemberDeclarationContext *ctx) = 0;

  virtual void enterMemberDeclaratorList(CppParser::MemberDeclaratorListContext *ctx) = 0;
  virtual void exitMemberDeclaratorList(CppParser::MemberDeclaratorListContext *ctx) = 0;

  virtual void enterMemberDeclarator(CppParser::MemberDeclaratorContext *ctx) = 0;
  virtual void exitMemberDeclarator(CppParser::MemberDeclaratorContext *ctx) = 0;

  virtual void enterVirtualSpecifierSequence(CppParser::VirtualSpecifierSequenceContext *ctx) = 0;
  virtual void exitVirtualSpecifierSequence(CppParser::VirtualSpecifierSequenceContext *ctx) = 0;

  virtual void enterVirtualSpecifier(CppParser::VirtualSpecifierContext *ctx) = 0;
  virtual void exitVirtualSpecifier(CppParser::VirtualSpecifierContext *ctx) = 0;

  virtual void enterPureSpecifier(CppParser::PureSpecifierContext *ctx) = 0;
  virtual void exitPureSpecifier(CppParser::PureSpecifierContext *ctx) = 0;

  virtual void enterBaseClause(CppParser::BaseClauseContext *ctx) = 0;
  virtual void exitBaseClause(CppParser::BaseClauseContext *ctx) = 0;

  virtual void enterBaseSpecifierList(CppParser::BaseSpecifierListContext *ctx) = 0;
  virtual void exitBaseSpecifierList(CppParser::BaseSpecifierListContext *ctx) = 0;

  virtual void enterBaseSpecifier(CppParser::BaseSpecifierContext *ctx) = 0;
  virtual void exitBaseSpecifier(CppParser::BaseSpecifierContext *ctx) = 0;

  virtual void enterClassOrDecltype(CppParser::ClassOrDecltypeContext *ctx) = 0;
  virtual void exitClassOrDecltype(CppParser::ClassOrDecltypeContext *ctx) = 0;

  virtual void enterAccessSpecifier(CppParser::AccessSpecifierContext *ctx) = 0;
  virtual void exitAccessSpecifier(CppParser::AccessSpecifierContext *ctx) = 0;

  virtual void enterConversionFunctionIdentifier(CppParser::ConversionFunctionIdentifierContext *ctx) = 0;
  virtual void exitConversionFunctionIdentifier(CppParser::ConversionFunctionIdentifierContext *ctx) = 0;

  virtual void enterConversionTypeIdentifier(CppParser::ConversionTypeIdentifierContext *ctx) = 0;
  virtual void exitConversionTypeIdentifier(CppParser::ConversionTypeIdentifierContext *ctx) = 0;

  virtual void enterConversionDeclarator(CppParser::ConversionDeclaratorContext *ctx) = 0;
  virtual void exitConversionDeclarator(CppParser::ConversionDeclaratorContext *ctx) = 0;

  virtual void enterConstructorInitializer(CppParser::ConstructorInitializerContext *ctx) = 0;
  virtual void exitConstructorInitializer(CppParser::ConstructorInitializerContext *ctx) = 0;

  virtual void enterMemberInitializerList(CppParser::MemberInitializerListContext *ctx) = 0;
  virtual void exitMemberInitializerList(CppParser::MemberInitializerListContext *ctx) = 0;

  virtual void enterMemberInitializer(CppParser::MemberInitializerContext *ctx) = 0;
  virtual void exitMemberInitializer(CppParser::MemberInitializerContext *ctx) = 0;

  virtual void enterMemberInitializerIdentifier(CppParser::MemberInitializerIdentifierContext *ctx) = 0;
  virtual void exitMemberInitializerIdentifier(CppParser::MemberInitializerIdentifierContext *ctx) = 0;

  virtual void enterOperatorFunctionIdentifier(CppParser::OperatorFunctionIdentifierContext *ctx) = 0;
  virtual void exitOperatorFunctionIdentifier(CppParser::OperatorFunctionIdentifierContext *ctx) = 0;

  virtual void enterAnyOperator(CppParser::AnyOperatorContext *ctx) = 0;
  virtual void exitAnyOperator(CppParser::AnyOperatorContext *ctx) = 0;

  virtual void enterLiteralOperatorIdentifier(CppParser::LiteralOperatorIdentifierContext *ctx) = 0;
  virtual void exitLiteralOperatorIdentifier(CppParser::LiteralOperatorIdentifierContext *ctx) = 0;

  virtual void enterTemplateDeclaration(CppParser::TemplateDeclarationContext *ctx) = 0;
  virtual void exitTemplateDeclaration(CppParser::TemplateDeclarationContext *ctx) = 0;

  virtual void enterTemplateParameterList(CppParser::TemplateParameterListContext *ctx) = 0;
  virtual void exitTemplateParameterList(CppParser::TemplateParameterListContext *ctx) = 0;

  virtual void enterTemplateParameter(CppParser::TemplateParameterContext *ctx) = 0;
  virtual void exitTemplateParameter(CppParser::TemplateParameterContext *ctx) = 0;

  virtual void enterTypeParameter(CppParser::TypeParameterContext *ctx) = 0;
  virtual void exitTypeParameter(CppParser::TypeParameterContext *ctx) = 0;

  virtual void enterTypeParameterKey(CppParser::TypeParameterKeyContext *ctx) = 0;
  virtual void exitTypeParameterKey(CppParser::TypeParameterKeyContext *ctx) = 0;

  virtual void enterSimpleTemplateIdentifier(CppParser::SimpleTemplateIdentifierContext *ctx) = 0;
  virtual void exitSimpleTemplateIdentifier(CppParser::SimpleTemplateIdentifierContext *ctx) = 0;

  virtual void enterTemplateIdentifier(CppParser::TemplateIdentifierContext *ctx) = 0;
  virtual void exitTemplateIdentifier(CppParser::TemplateIdentifierContext *ctx) = 0;

  virtual void enterTemplateArgumentList(CppParser::TemplateArgumentListContext *ctx) = 0;
  virtual void exitTemplateArgumentList(CppParser::TemplateArgumentListContext *ctx) = 0;

  virtual void enterTemplateArgument(CppParser::TemplateArgumentContext *ctx) = 0;
  virtual void exitTemplateArgument(CppParser::TemplateArgumentContext *ctx) = 0;

  virtual void enterTypenameSpecifier(CppParser::TypenameSpecifierContext *ctx) = 0;
  virtual void exitTypenameSpecifier(CppParser::TypenameSpecifierContext *ctx) = 0;

  virtual void enterExplicitInstantiation(CppParser::ExplicitInstantiationContext *ctx) = 0;
  virtual void exitExplicitInstantiation(CppParser::ExplicitInstantiationContext *ctx) = 0;

  virtual void enterExplicitSpecialization(CppParser::ExplicitSpecializationContext *ctx) = 0;
  virtual void exitExplicitSpecialization(CppParser::ExplicitSpecializationContext *ctx) = 0;

  virtual void enterDeductionGuide(CppParser::DeductionGuideContext *ctx) = 0;
  virtual void exitDeductionGuide(CppParser::DeductionGuideContext *ctx) = 0;

  virtual void enterTryBlock(CppParser::TryBlockContext *ctx) = 0;
  virtual void exitTryBlock(CppParser::TryBlockContext *ctx) = 0;

  virtual void enterFunctionTryBlock(CppParser::FunctionTryBlockContext *ctx) = 0;
  virtual void exitFunctionTryBlock(CppParser::FunctionTryBlockContext *ctx) = 0;

  virtual void enterHandlerSequence(CppParser::HandlerSequenceContext *ctx) = 0;
  virtual void exitHandlerSequence(CppParser::HandlerSequenceContext *ctx) = 0;

  virtual void enterHandler(CppParser::HandlerContext *ctx) = 0;
  virtual void exitHandler(CppParser::HandlerContext *ctx) = 0;

  virtual void enterExceptionDeclaration(CppParser::ExceptionDeclarationContext *ctx) = 0;
  virtual void exitExceptionDeclaration(CppParser::ExceptionDeclarationContext *ctx) = 0;

  virtual void enterNoExceptionSpecifier(CppParser::NoExceptionSpecifierContext *ctx) = 0;
  virtual void exitNoExceptionSpecifier(CppParser::NoExceptionSpecifierContext *ctx) = 0;

  virtual void enterIdentifierList(CppParser::IdentifierListContext *ctx) = 0;
  virtual void exitIdentifierList(CppParser::IdentifierListContext *ctx) = 0;

  virtual void enterLiteral(CppParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(CppParser::LiteralContext *ctx) = 0;

  virtual void enterIntegerLiteral(CppParser::IntegerLiteralContext *ctx) = 0;
  virtual void exitIntegerLiteral(CppParser::IntegerLiteralContext *ctx) = 0;

  virtual void enterBooleanLiteral(CppParser::BooleanLiteralContext *ctx) = 0;
  virtual void exitBooleanLiteral(CppParser::BooleanLiteralContext *ctx) = 0;

  virtual void enterPointerLiteral(CppParser::PointerLiteralContext *ctx) = 0;
  virtual void exitPointerLiteral(CppParser::PointerLiteralContext *ctx) = 0;

  virtual void enterUserDefinedLiteral(CppParser::UserDefinedLiteralContext *ctx) = 0;
  virtual void exitUserDefinedLiteral(CppParser::UserDefinedLiteralContext *ctx) = 0;


};

