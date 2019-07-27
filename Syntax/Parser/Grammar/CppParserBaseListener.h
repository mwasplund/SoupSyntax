
// Generated from Grammar\CppParser.g4 by ANTLR 4.7.1

#pragma once


//#include "antlr4-runtime.h"
#include "CppParserListener.h"


/**
 * This class provides an empty implementation of CppParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class CppParserBaseListener : public CppParserListener {
public:

  virtual void enterDoubleGreaterThan(CppParser::DoubleGreaterThanContext * /*ctx*/) override { }
  virtual void exitDoubleGreaterThan(CppParser::DoubleGreaterThanContext * /*ctx*/) override { }

  virtual void enterNamespaceName(CppParser::NamespaceNameContext * /*ctx*/) override { }
  virtual void exitNamespaceName(CppParser::NamespaceNameContext * /*ctx*/) override { }

  virtual void enterClassName(CppParser::ClassNameContext * /*ctx*/) override { }
  virtual void exitClassName(CppParser::ClassNameContext * /*ctx*/) override { }

  virtual void enterTemplateName(CppParser::TemplateNameContext * /*ctx*/) override { }
  virtual void exitTemplateName(CppParser::TemplateNameContext * /*ctx*/) override { }

  virtual void enterTranslationUnit(CppParser::TranslationUnitContext * /*ctx*/) override { }
  virtual void exitTranslationUnit(CppParser::TranslationUnitContext * /*ctx*/) override { }

  virtual void enterPrimaryExpression(CppParser::PrimaryExpressionContext * /*ctx*/) override { }
  virtual void exitPrimaryExpression(CppParser::PrimaryExpressionContext * /*ctx*/) override { }

  virtual void enterIdentifierExpression(CppParser::IdentifierExpressionContext * /*ctx*/) override { }
  virtual void exitIdentifierExpression(CppParser::IdentifierExpressionContext * /*ctx*/) override { }

  virtual void enterUnqualifiedIdentifier(CppParser::UnqualifiedIdentifierContext * /*ctx*/) override { }
  virtual void exitUnqualifiedIdentifier(CppParser::UnqualifiedIdentifierContext * /*ctx*/) override { }

  virtual void enterQualifiedIdentifier(CppParser::QualifiedIdentifierContext * /*ctx*/) override { }
  virtual void exitQualifiedIdentifier(CppParser::QualifiedIdentifierContext * /*ctx*/) override { }

  virtual void enterNestedNameSpecifier(CppParser::NestedNameSpecifierContext * /*ctx*/) override { }
  virtual void exitNestedNameSpecifier(CppParser::NestedNameSpecifierContext * /*ctx*/) override { }

  virtual void enterNestedNameSpecifierSequence(CppParser::NestedNameSpecifierSequenceContext * /*ctx*/) override { }
  virtual void exitNestedNameSpecifierSequence(CppParser::NestedNameSpecifierSequenceContext * /*ctx*/) override { }

  virtual void enterLambdaExpression(CppParser::LambdaExpressionContext * /*ctx*/) override { }
  virtual void exitLambdaExpression(CppParser::LambdaExpressionContext * /*ctx*/) override { }

  virtual void enterLambdaIntroducer(CppParser::LambdaIntroducerContext * /*ctx*/) override { }
  virtual void exitLambdaIntroducer(CppParser::LambdaIntroducerContext * /*ctx*/) override { }

  virtual void enterLambdaDeclarator(CppParser::LambdaDeclaratorContext * /*ctx*/) override { }
  virtual void exitLambdaDeclarator(CppParser::LambdaDeclaratorContext * /*ctx*/) override { }

  virtual void enterLambdaCapture(CppParser::LambdaCaptureContext * /*ctx*/) override { }
  virtual void exitLambdaCapture(CppParser::LambdaCaptureContext * /*ctx*/) override { }

  virtual void enterCaptureDefault(CppParser::CaptureDefaultContext * /*ctx*/) override { }
  virtual void exitCaptureDefault(CppParser::CaptureDefaultContext * /*ctx*/) override { }

  virtual void enterCaptureList(CppParser::CaptureListContext * /*ctx*/) override { }
  virtual void exitCaptureList(CppParser::CaptureListContext * /*ctx*/) override { }

  virtual void enterCapture(CppParser::CaptureContext * /*ctx*/) override { }
  virtual void exitCapture(CppParser::CaptureContext * /*ctx*/) override { }

  virtual void enterSimpleCapture(CppParser::SimpleCaptureContext * /*ctx*/) override { }
  virtual void exitSimpleCapture(CppParser::SimpleCaptureContext * /*ctx*/) override { }

  virtual void enterInitializerCapture(CppParser::InitializerCaptureContext * /*ctx*/) override { }
  virtual void exitInitializerCapture(CppParser::InitializerCaptureContext * /*ctx*/) override { }

  virtual void enterFoldExpression(CppParser::FoldExpressionContext * /*ctx*/) override { }
  virtual void exitFoldExpression(CppParser::FoldExpressionContext * /*ctx*/) override { }

  virtual void enterFoldOperator(CppParser::FoldOperatorContext * /*ctx*/) override { }
  virtual void exitFoldOperator(CppParser::FoldOperatorContext * /*ctx*/) override { }

  virtual void enterExplicitTypeCoversionOperatorExpression(CppParser::ExplicitTypeCoversionOperatorExpressionContext * /*ctx*/) override { }
  virtual void exitExplicitTypeCoversionOperatorExpression(CppParser::ExplicitTypeCoversionOperatorExpressionContext * /*ctx*/) override { }

  virtual void enterPostfixOperator(CppParser::PostfixOperatorContext * /*ctx*/) override { }
  virtual void exitPostfixOperator(CppParser::PostfixOperatorContext * /*ctx*/) override { }

  virtual void enterNamedCastExpression(CppParser::NamedCastExpressionContext * /*ctx*/) override { }
  virtual void exitNamedCastExpression(CppParser::NamedCastExpressionContext * /*ctx*/) override { }

  virtual void enterMemberAccessOperator(CppParser::MemberAccessOperatorContext * /*ctx*/) override { }
  virtual void exitMemberAccessOperator(CppParser::MemberAccessOperatorContext * /*ctx*/) override { }

  virtual void enterNamedCastType(CppParser::NamedCastTypeContext * /*ctx*/) override { }
  virtual void exitNamedCastType(CppParser::NamedCastTypeContext * /*ctx*/) override { }

  virtual void enterTypeIdentificationExpression(CppParser::TypeIdentificationExpressionContext * /*ctx*/) override { }
  virtual void exitTypeIdentificationExpression(CppParser::TypeIdentificationExpressionContext * /*ctx*/) override { }

  virtual void enterPostfixExpression(CppParser::PostfixExpressionContext * /*ctx*/) override { }
  virtual void exitPostfixExpression(CppParser::PostfixExpressionContext * /*ctx*/) override { }

  virtual void enterExpressionList(CppParser::ExpressionListContext * /*ctx*/) override { }
  virtual void exitExpressionList(CppParser::ExpressionListContext * /*ctx*/) override { }

  virtual void enterPseudoDestructorName(CppParser::PseudoDestructorNameContext * /*ctx*/) override { }
  virtual void exitPseudoDestructorName(CppParser::PseudoDestructorNameContext * /*ctx*/) override { }

  virtual void enterUnaryExpression(CppParser::UnaryExpressionContext * /*ctx*/) override { }
  virtual void exitUnaryExpression(CppParser::UnaryExpressionContext * /*ctx*/) override { }

  virtual void enterUnaryOperator(CppParser::UnaryOperatorContext * /*ctx*/) override { }
  virtual void exitUnaryOperator(CppParser::UnaryOperatorContext * /*ctx*/) override { }

  virtual void enterNewExpression(CppParser::NewExpressionContext * /*ctx*/) override { }
  virtual void exitNewExpression(CppParser::NewExpressionContext * /*ctx*/) override { }

  virtual void enterNewPlacement(CppParser::NewPlacementContext * /*ctx*/) override { }
  virtual void exitNewPlacement(CppParser::NewPlacementContext * /*ctx*/) override { }

  virtual void enterNewTypeIdentifier(CppParser::NewTypeIdentifierContext * /*ctx*/) override { }
  virtual void exitNewTypeIdentifier(CppParser::NewTypeIdentifierContext * /*ctx*/) override { }

  virtual void enterNewDeclarator(CppParser::NewDeclaratorContext * /*ctx*/) override { }
  virtual void exitNewDeclarator(CppParser::NewDeclaratorContext * /*ctx*/) override { }

  virtual void enterNoPointerNewDeclarator(CppParser::NoPointerNewDeclaratorContext * /*ctx*/) override { }
  virtual void exitNoPointerNewDeclarator(CppParser::NoPointerNewDeclaratorContext * /*ctx*/) override { }

  virtual void enterNewInitializer(CppParser::NewInitializerContext * /*ctx*/) override { }
  virtual void exitNewInitializer(CppParser::NewInitializerContext * /*ctx*/) override { }

  virtual void enterDeleteExpression(CppParser::DeleteExpressionContext * /*ctx*/) override { }
  virtual void exitDeleteExpression(CppParser::DeleteExpressionContext * /*ctx*/) override { }

  virtual void enterNoExceptionExpression(CppParser::NoExceptionExpressionContext * /*ctx*/) override { }
  virtual void exitNoExceptionExpression(CppParser::NoExceptionExpressionContext * /*ctx*/) override { }

  virtual void enterCastExpression(CppParser::CastExpressionContext * /*ctx*/) override { }
  virtual void exitCastExpression(CppParser::CastExpressionContext * /*ctx*/) override { }

  virtual void enterBinaryExpression(CppParser::BinaryExpressionContext * /*ctx*/) override { }
  virtual void exitBinaryExpression(CppParser::BinaryExpressionContext * /*ctx*/) override { }

  virtual void enterBinaryOperator(CppParser::BinaryOperatorContext * /*ctx*/) override { }
  virtual void exitBinaryOperator(CppParser::BinaryOperatorContext * /*ctx*/) override { }

  virtual void enterConditionalExpression(CppParser::ConditionalExpressionContext * /*ctx*/) override { }
  virtual void exitConditionalExpression(CppParser::ConditionalExpressionContext * /*ctx*/) override { }

  virtual void enterThrowExpression(CppParser::ThrowExpressionContext * /*ctx*/) override { }
  virtual void exitThrowExpression(CppParser::ThrowExpressionContext * /*ctx*/) override { }

  virtual void enterAssignmentExpression(CppParser::AssignmentExpressionContext * /*ctx*/) override { }
  virtual void exitAssignmentExpression(CppParser::AssignmentExpressionContext * /*ctx*/) override { }

  virtual void enterAssignmentOperator(CppParser::AssignmentOperatorContext * /*ctx*/) override { }
  virtual void exitAssignmentOperator(CppParser::AssignmentOperatorContext * /*ctx*/) override { }

  virtual void enterExpression(CppParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(CppParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterConstantExpression(CppParser::ConstantExpressionContext * /*ctx*/) override { }
  virtual void exitConstantExpression(CppParser::ConstantExpressionContext * /*ctx*/) override { }

  virtual void enterStatement(CppParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(CppParser::StatementContext * /*ctx*/) override { }

  virtual void enterInitializerStatement(CppParser::InitializerStatementContext * /*ctx*/) override { }
  virtual void exitInitializerStatement(CppParser::InitializerStatementContext * /*ctx*/) override { }

  virtual void enterCondition(CppParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(CppParser::ConditionContext * /*ctx*/) override { }

  virtual void enterLabeledStatement(CppParser::LabeledStatementContext * /*ctx*/) override { }
  virtual void exitLabeledStatement(CppParser::LabeledStatementContext * /*ctx*/) override { }

  virtual void enterExpressionStatement(CppParser::ExpressionStatementContext * /*ctx*/) override { }
  virtual void exitExpressionStatement(CppParser::ExpressionStatementContext * /*ctx*/) override { }

  virtual void enterCompoundStatement(CppParser::CompoundStatementContext * /*ctx*/) override { }
  virtual void exitCompoundStatement(CppParser::CompoundStatementContext * /*ctx*/) override { }

  virtual void enterStatementSequence(CppParser::StatementSequenceContext * /*ctx*/) override { }
  virtual void exitStatementSequence(CppParser::StatementSequenceContext * /*ctx*/) override { }

  virtual void enterSelectionStatement(CppParser::SelectionStatementContext * /*ctx*/) override { }
  virtual void exitSelectionStatement(CppParser::SelectionStatementContext * /*ctx*/) override { }

  virtual void enterIterationStatement(CppParser::IterationStatementContext * /*ctx*/) override { }
  virtual void exitIterationStatement(CppParser::IterationStatementContext * /*ctx*/) override { }

  virtual void enterForInitializerStatement(CppParser::ForInitializerStatementContext * /*ctx*/) override { }
  virtual void exitForInitializerStatement(CppParser::ForInitializerStatementContext * /*ctx*/) override { }

  virtual void enterForRangeDeclaration(CppParser::ForRangeDeclarationContext * /*ctx*/) override { }
  virtual void exitForRangeDeclaration(CppParser::ForRangeDeclarationContext * /*ctx*/) override { }

  virtual void enterForRangeInitializer(CppParser::ForRangeInitializerContext * /*ctx*/) override { }
  virtual void exitForRangeInitializer(CppParser::ForRangeInitializerContext * /*ctx*/) override { }

  virtual void enterJumpStatement(CppParser::JumpStatementContext * /*ctx*/) override { }
  virtual void exitJumpStatement(CppParser::JumpStatementContext * /*ctx*/) override { }

  virtual void enterDeclarationStatement(CppParser::DeclarationStatementContext * /*ctx*/) override { }
  virtual void exitDeclarationStatement(CppParser::DeclarationStatementContext * /*ctx*/) override { }

  virtual void enterDeclarationSequence(CppParser::DeclarationSequenceContext * /*ctx*/) override { }
  virtual void exitDeclarationSequence(CppParser::DeclarationSequenceContext * /*ctx*/) override { }

  virtual void enterDeclaration(CppParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(CppParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterBlockDeclaration(CppParser::BlockDeclarationContext * /*ctx*/) override { }
  virtual void exitBlockDeclaration(CppParser::BlockDeclarationContext * /*ctx*/) override { }

  virtual void enterNoDeclarationSpecifierFunctionDeclaration(CppParser::NoDeclarationSpecifierFunctionDeclarationContext * /*ctx*/) override { }
  virtual void exitNoDeclarationSpecifierFunctionDeclaration(CppParser::NoDeclarationSpecifierFunctionDeclarationContext * /*ctx*/) override { }

  virtual void enterAliasDeclaration(CppParser::AliasDeclarationContext * /*ctx*/) override { }
  virtual void exitAliasDeclaration(CppParser::AliasDeclarationContext * /*ctx*/) override { }

  virtual void enterSimpleDeclaration(CppParser::SimpleDeclarationContext * /*ctx*/) override { }
  virtual void exitSimpleDeclaration(CppParser::SimpleDeclarationContext * /*ctx*/) override { }

  virtual void enterStaticAssertDeclaration(CppParser::StaticAssertDeclarationContext * /*ctx*/) override { }
  virtual void exitStaticAssertDeclaration(CppParser::StaticAssertDeclarationContext * /*ctx*/) override { }

  virtual void enterEmptyDeclaration(CppParser::EmptyDeclarationContext * /*ctx*/) override { }
  virtual void exitEmptyDeclaration(CppParser::EmptyDeclarationContext * /*ctx*/) override { }

  virtual void enterAttributeDeclaration(CppParser::AttributeDeclarationContext * /*ctx*/) override { }
  virtual void exitAttributeDeclaration(CppParser::AttributeDeclarationContext * /*ctx*/) override { }

  virtual void enterDeclarationModifier(CppParser::DeclarationModifierContext * /*ctx*/) override { }
  virtual void exitDeclarationModifier(CppParser::DeclarationModifierContext * /*ctx*/) override { }

  virtual void enterDeclarationSpecifierSequence(CppParser::DeclarationSpecifierSequenceContext * /*ctx*/) override { }
  virtual void exitDeclarationSpecifierSequence(CppParser::DeclarationSpecifierSequenceContext * /*ctx*/) override { }

  virtual void enterLeadingDeclarationModifierSequence(CppParser::LeadingDeclarationModifierSequenceContext * /*ctx*/) override { }
  virtual void exitLeadingDeclarationModifierSequence(CppParser::LeadingDeclarationModifierSequenceContext * /*ctx*/) override { }

  virtual void enterTrailingDeclarationModifierSequence(CppParser::TrailingDeclarationModifierSequenceContext * /*ctx*/) override { }
  virtual void exitTrailingDeclarationModifierSequence(CppParser::TrailingDeclarationModifierSequenceContext * /*ctx*/) override { }

  virtual void enterDeclarationModifierSequence(CppParser::DeclarationModifierSequenceContext * /*ctx*/) override { }
  virtual void exitDeclarationModifierSequence(CppParser::DeclarationModifierSequenceContext * /*ctx*/) override { }

  virtual void enterStorageClassSpecifier(CppParser::StorageClassSpecifierContext * /*ctx*/) override { }
  virtual void exitStorageClassSpecifier(CppParser::StorageClassSpecifierContext * /*ctx*/) override { }

  virtual void enterFunctionSpecifier(CppParser::FunctionSpecifierContext * /*ctx*/) override { }
  virtual void exitFunctionSpecifier(CppParser::FunctionSpecifierContext * /*ctx*/) override { }

  virtual void enterTypeSpecifier(CppParser::TypeSpecifierContext * /*ctx*/) override { }
  virtual void exitTypeSpecifier(CppParser::TypeSpecifierContext * /*ctx*/) override { }

  virtual void enterTypeSpecifierSequence(CppParser::TypeSpecifierSequenceContext * /*ctx*/) override { }
  virtual void exitTypeSpecifierSequence(CppParser::TypeSpecifierSequenceContext * /*ctx*/) override { }

  virtual void enterDefiningTypeSpecifier(CppParser::DefiningTypeSpecifierContext * /*ctx*/) override { }
  virtual void exitDefiningTypeSpecifier(CppParser::DefiningTypeSpecifierContext * /*ctx*/) override { }

  virtual void enterDefiningTypeSpecifierSequence(CppParser::DefiningTypeSpecifierSequenceContext * /*ctx*/) override { }
  virtual void exitDefiningTypeSpecifierSequence(CppParser::DefiningTypeSpecifierSequenceContext * /*ctx*/) override { }

  virtual void enterSimpleTypeSpecifier(CppParser::SimpleTypeSpecifierContext * /*ctx*/) override { }
  virtual void exitSimpleTypeSpecifier(CppParser::SimpleTypeSpecifierContext * /*ctx*/) override { }

  virtual void enterTypeName(CppParser::TypeNameContext * /*ctx*/) override { }
  virtual void exitTypeName(CppParser::TypeNameContext * /*ctx*/) override { }

  virtual void enterDeclarationTypeSpecifier(CppParser::DeclarationTypeSpecifierContext * /*ctx*/) override { }
  virtual void exitDeclarationTypeSpecifier(CppParser::DeclarationTypeSpecifierContext * /*ctx*/) override { }

  virtual void enterElaboratedTypeSpecifier(CppParser::ElaboratedTypeSpecifierContext * /*ctx*/) override { }
  virtual void exitElaboratedTypeSpecifier(CppParser::ElaboratedTypeSpecifierContext * /*ctx*/) override { }

  virtual void enterEnumSpecifier(CppParser::EnumSpecifierContext * /*ctx*/) override { }
  virtual void exitEnumSpecifier(CppParser::EnumSpecifierContext * /*ctx*/) override { }

  virtual void enterEnumHead(CppParser::EnumHeadContext * /*ctx*/) override { }
  virtual void exitEnumHead(CppParser::EnumHeadContext * /*ctx*/) override { }

  virtual void enterEnumHeadName(CppParser::EnumHeadNameContext * /*ctx*/) override { }
  virtual void exitEnumHeadName(CppParser::EnumHeadNameContext * /*ctx*/) override { }

  virtual void enterOpaqueEnumSpecifier(CppParser::OpaqueEnumSpecifierContext * /*ctx*/) override { }
  virtual void exitOpaqueEnumSpecifier(CppParser::OpaqueEnumSpecifierContext * /*ctx*/) override { }

  virtual void enterEnumKey(CppParser::EnumKeyContext * /*ctx*/) override { }
  virtual void exitEnumKey(CppParser::EnumKeyContext * /*ctx*/) override { }

  virtual void enterEnumBase(CppParser::EnumBaseContext * /*ctx*/) override { }
  virtual void exitEnumBase(CppParser::EnumBaseContext * /*ctx*/) override { }

  virtual void enterEnumeratorList(CppParser::EnumeratorListContext * /*ctx*/) override { }
  virtual void exitEnumeratorList(CppParser::EnumeratorListContext * /*ctx*/) override { }

  virtual void enterEnumeratorDefinition(CppParser::EnumeratorDefinitionContext * /*ctx*/) override { }
  virtual void exitEnumeratorDefinition(CppParser::EnumeratorDefinitionContext * /*ctx*/) override { }

  virtual void enterEnumerator(CppParser::EnumeratorContext * /*ctx*/) override { }
  virtual void exitEnumerator(CppParser::EnumeratorContext * /*ctx*/) override { }

  virtual void enterNamespaceDefinition(CppParser::NamespaceDefinitionContext * /*ctx*/) override { }
  virtual void exitNamespaceDefinition(CppParser::NamespaceDefinitionContext * /*ctx*/) override { }

  virtual void enterNamedNamespaceDefinition(CppParser::NamedNamespaceDefinitionContext * /*ctx*/) override { }
  virtual void exitNamedNamespaceDefinition(CppParser::NamedNamespaceDefinitionContext * /*ctx*/) override { }

  virtual void enterUnnamedNamespaceDefinition(CppParser::UnnamedNamespaceDefinitionContext * /*ctx*/) override { }
  virtual void exitUnnamedNamespaceDefinition(CppParser::UnnamedNamespaceDefinitionContext * /*ctx*/) override { }

  virtual void enterNestedNamespaceDefinition(CppParser::NestedNamespaceDefinitionContext * /*ctx*/) override { }
  virtual void exitNestedNamespaceDefinition(CppParser::NestedNamespaceDefinitionContext * /*ctx*/) override { }

  virtual void enterEnclosingNamespaceSpecifier(CppParser::EnclosingNamespaceSpecifierContext * /*ctx*/) override { }
  virtual void exitEnclosingNamespaceSpecifier(CppParser::EnclosingNamespaceSpecifierContext * /*ctx*/) override { }

  virtual void enterNamespaceBody(CppParser::NamespaceBodyContext * /*ctx*/) override { }
  virtual void exitNamespaceBody(CppParser::NamespaceBodyContext * /*ctx*/) override { }

  virtual void enterNamespaceAliasDefinition(CppParser::NamespaceAliasDefinitionContext * /*ctx*/) override { }
  virtual void exitNamespaceAliasDefinition(CppParser::NamespaceAliasDefinitionContext * /*ctx*/) override { }

  virtual void enterQualifiedNamespaceSpecifier(CppParser::QualifiedNamespaceSpecifierContext * /*ctx*/) override { }
  virtual void exitQualifiedNamespaceSpecifier(CppParser::QualifiedNamespaceSpecifierContext * /*ctx*/) override { }

  virtual void enterUsingDeclaration(CppParser::UsingDeclarationContext * /*ctx*/) override { }
  virtual void exitUsingDeclaration(CppParser::UsingDeclarationContext * /*ctx*/) override { }

  virtual void enterUsingDeclaratorList(CppParser::UsingDeclaratorListContext * /*ctx*/) override { }
  virtual void exitUsingDeclaratorList(CppParser::UsingDeclaratorListContext * /*ctx*/) override { }

  virtual void enterUsingDeclarator(CppParser::UsingDeclaratorContext * /*ctx*/) override { }
  virtual void exitUsingDeclarator(CppParser::UsingDeclaratorContext * /*ctx*/) override { }

  virtual void enterUsingDirective(CppParser::UsingDirectiveContext * /*ctx*/) override { }
  virtual void exitUsingDirective(CppParser::UsingDirectiveContext * /*ctx*/) override { }

  virtual void enterAsmDefinition(CppParser::AsmDefinitionContext * /*ctx*/) override { }
  virtual void exitAsmDefinition(CppParser::AsmDefinitionContext * /*ctx*/) override { }

  virtual void enterLinkageSpecification(CppParser::LinkageSpecificationContext * /*ctx*/) override { }
  virtual void exitLinkageSpecification(CppParser::LinkageSpecificationContext * /*ctx*/) override { }

  virtual void enterAttributeSpecifierSequence(CppParser::AttributeSpecifierSequenceContext * /*ctx*/) override { }
  virtual void exitAttributeSpecifierSequence(CppParser::AttributeSpecifierSequenceContext * /*ctx*/) override { }

  virtual void enterAttributeSpecifier(CppParser::AttributeSpecifierContext * /*ctx*/) override { }
  virtual void exitAttributeSpecifier(CppParser::AttributeSpecifierContext * /*ctx*/) override { }

  virtual void enterAlignmentSpecifier(CppParser::AlignmentSpecifierContext * /*ctx*/) override { }
  virtual void exitAlignmentSpecifier(CppParser::AlignmentSpecifierContext * /*ctx*/) override { }

  virtual void enterAttributeUsingPrefix(CppParser::AttributeUsingPrefixContext * /*ctx*/) override { }
  virtual void exitAttributeUsingPrefix(CppParser::AttributeUsingPrefixContext * /*ctx*/) override { }

  virtual void enterAttributeList(CppParser::AttributeListContext * /*ctx*/) override { }
  virtual void exitAttributeList(CppParser::AttributeListContext * /*ctx*/) override { }

  virtual void enterAttribute(CppParser::AttributeContext * /*ctx*/) override { }
  virtual void exitAttribute(CppParser::AttributeContext * /*ctx*/) override { }

  virtual void enterAttributeToken(CppParser::AttributeTokenContext * /*ctx*/) override { }
  virtual void exitAttributeToken(CppParser::AttributeTokenContext * /*ctx*/) override { }

  virtual void enterAttributeScopedToken(CppParser::AttributeScopedTokenContext * /*ctx*/) override { }
  virtual void exitAttributeScopedToken(CppParser::AttributeScopedTokenContext * /*ctx*/) override { }

  virtual void enterAttributeNamespace(CppParser::AttributeNamespaceContext * /*ctx*/) override { }
  virtual void exitAttributeNamespace(CppParser::AttributeNamespaceContext * /*ctx*/) override { }

  virtual void enterAttributeArgumentClause(CppParser::AttributeArgumentClauseContext * /*ctx*/) override { }
  virtual void exitAttributeArgumentClause(CppParser::AttributeArgumentClauseContext * /*ctx*/) override { }

  virtual void enterBalancedTokenSequence(CppParser::BalancedTokenSequenceContext * /*ctx*/) override { }
  virtual void exitBalancedTokenSequence(CppParser::BalancedTokenSequenceContext * /*ctx*/) override { }

  virtual void enterBalancedToken(CppParser::BalancedTokenContext * /*ctx*/) override { }
  virtual void exitBalancedToken(CppParser::BalancedTokenContext * /*ctx*/) override { }

  virtual void enterNonBalancedToken(CppParser::NonBalancedTokenContext * /*ctx*/) override { }
  virtual void exitNonBalancedToken(CppParser::NonBalancedTokenContext * /*ctx*/) override { }

  virtual void enterInitializerDeclaratorList(CppParser::InitializerDeclaratorListContext * /*ctx*/) override { }
  virtual void exitInitializerDeclaratorList(CppParser::InitializerDeclaratorListContext * /*ctx*/) override { }

  virtual void enterInitializerDeclarator(CppParser::InitializerDeclaratorContext * /*ctx*/) override { }
  virtual void exitInitializerDeclarator(CppParser::InitializerDeclaratorContext * /*ctx*/) override { }

  virtual void enterDeclarator(CppParser::DeclaratorContext * /*ctx*/) override { }
  virtual void exitDeclarator(CppParser::DeclaratorContext * /*ctx*/) override { }

  virtual void enterPointerDeclarator(CppParser::PointerDeclaratorContext * /*ctx*/) override { }
  virtual void exitPointerDeclarator(CppParser::PointerDeclaratorContext * /*ctx*/) override { }

  virtual void enterNoPointerDeclarator(CppParser::NoPointerDeclaratorContext * /*ctx*/) override { }
  virtual void exitNoPointerDeclarator(CppParser::NoPointerDeclaratorContext * /*ctx*/) override { }

  virtual void enterParametersAndQualifiers(CppParser::ParametersAndQualifiersContext * /*ctx*/) override { }
  virtual void exitParametersAndQualifiers(CppParser::ParametersAndQualifiersContext * /*ctx*/) override { }

  virtual void enterFunctionParameters(CppParser::FunctionParametersContext * /*ctx*/) override { }
  virtual void exitFunctionParameters(CppParser::FunctionParametersContext * /*ctx*/) override { }

  virtual void enterFunctionQualifiers(CppParser::FunctionQualifiersContext * /*ctx*/) override { }
  virtual void exitFunctionQualifiers(CppParser::FunctionQualifiersContext * /*ctx*/) override { }

  virtual void enterTrailingReturnType(CppParser::TrailingReturnTypeContext * /*ctx*/) override { }
  virtual void exitTrailingReturnType(CppParser::TrailingReturnTypeContext * /*ctx*/) override { }

  virtual void enterPointerOperator(CppParser::PointerOperatorContext * /*ctx*/) override { }
  virtual void exitPointerOperator(CppParser::PointerOperatorContext * /*ctx*/) override { }

  virtual void enterConstVolatileQualifierSequence(CppParser::ConstVolatileQualifierSequenceContext * /*ctx*/) override { }
  virtual void exitConstVolatileQualifierSequence(CppParser::ConstVolatileQualifierSequenceContext * /*ctx*/) override { }

  virtual void enterConstVolatileQualifier(CppParser::ConstVolatileQualifierContext * /*ctx*/) override { }
  virtual void exitConstVolatileQualifier(CppParser::ConstVolatileQualifierContext * /*ctx*/) override { }

  virtual void enterReferenceQualifier(CppParser::ReferenceQualifierContext * /*ctx*/) override { }
  virtual void exitReferenceQualifier(CppParser::ReferenceQualifierContext * /*ctx*/) override { }

  virtual void enterTypeIdentifier(CppParser::TypeIdentifierContext * /*ctx*/) override { }
  virtual void exitTypeIdentifier(CppParser::TypeIdentifierContext * /*ctx*/) override { }

  virtual void enterDefiningTypeIdentifier(CppParser::DefiningTypeIdentifierContext * /*ctx*/) override { }
  virtual void exitDefiningTypeIdentifier(CppParser::DefiningTypeIdentifierContext * /*ctx*/) override { }

  virtual void enterAbstractDeclarator(CppParser::AbstractDeclaratorContext * /*ctx*/) override { }
  virtual void exitAbstractDeclarator(CppParser::AbstractDeclaratorContext * /*ctx*/) override { }

  virtual void enterPointerAbstractDeclarator(CppParser::PointerAbstractDeclaratorContext * /*ctx*/) override { }
  virtual void exitPointerAbstractDeclarator(CppParser::PointerAbstractDeclaratorContext * /*ctx*/) override { }

  virtual void enterNoPointerAbstractDeclarator(CppParser::NoPointerAbstractDeclaratorContext * /*ctx*/) override { }
  virtual void exitNoPointerAbstractDeclarator(CppParser::NoPointerAbstractDeclaratorContext * /*ctx*/) override { }

  virtual void enterAbstractPackDeclarator(CppParser::AbstractPackDeclaratorContext * /*ctx*/) override { }
  virtual void exitAbstractPackDeclarator(CppParser::AbstractPackDeclaratorContext * /*ctx*/) override { }

  virtual void enterNoPointerAbstractPackDeclarator(CppParser::NoPointerAbstractPackDeclaratorContext * /*ctx*/) override { }
  virtual void exitNoPointerAbstractPackDeclarator(CppParser::NoPointerAbstractPackDeclaratorContext * /*ctx*/) override { }

  virtual void enterParameterDeclarationClause(CppParser::ParameterDeclarationClauseContext * /*ctx*/) override { }
  virtual void exitParameterDeclarationClause(CppParser::ParameterDeclarationClauseContext * /*ctx*/) override { }

  virtual void enterParameterDeclarationList(CppParser::ParameterDeclarationListContext * /*ctx*/) override { }
  virtual void exitParameterDeclarationList(CppParser::ParameterDeclarationListContext * /*ctx*/) override { }

  virtual void enterParameterDeclaration(CppParser::ParameterDeclarationContext * /*ctx*/) override { }
  virtual void exitParameterDeclaration(CppParser::ParameterDeclarationContext * /*ctx*/) override { }

  virtual void enterFunctionDefinition(CppParser::FunctionDefinitionContext * /*ctx*/) override { }
  virtual void exitFunctionDefinition(CppParser::FunctionDefinitionContext * /*ctx*/) override { }

  virtual void enterFunctionDeclarator(CppParser::FunctionDeclaratorContext * /*ctx*/) override { }
  virtual void exitFunctionDeclarator(CppParser::FunctionDeclaratorContext * /*ctx*/) override { }

  virtual void enterFunctionBody(CppParser::FunctionBodyContext * /*ctx*/) override { }
  virtual void exitFunctionBody(CppParser::FunctionBodyContext * /*ctx*/) override { }

  virtual void enterRegularFunctionBody(CppParser::RegularFunctionBodyContext * /*ctx*/) override { }
  virtual void exitRegularFunctionBody(CppParser::RegularFunctionBodyContext * /*ctx*/) override { }

  virtual void enterExplicitlyDefaultedFunction(CppParser::ExplicitlyDefaultedFunctionContext * /*ctx*/) override { }
  virtual void exitExplicitlyDefaultedFunction(CppParser::ExplicitlyDefaultedFunctionContext * /*ctx*/) override { }

  virtual void enterDeletedFunction(CppParser::DeletedFunctionContext * /*ctx*/) override { }
  virtual void exitDeletedFunction(CppParser::DeletedFunctionContext * /*ctx*/) override { }

  virtual void enterInitializer(CppParser::InitializerContext * /*ctx*/) override { }
  virtual void exitInitializer(CppParser::InitializerContext * /*ctx*/) override { }

  virtual void enterBraceOrEqualInitializer(CppParser::BraceOrEqualInitializerContext * /*ctx*/) override { }
  virtual void exitBraceOrEqualInitializer(CppParser::BraceOrEqualInitializerContext * /*ctx*/) override { }

  virtual void enterInitializerClause(CppParser::InitializerClauseContext * /*ctx*/) override { }
  virtual void exitInitializerClause(CppParser::InitializerClauseContext * /*ctx*/) override { }

  virtual void enterInitializerList(CppParser::InitializerListContext * /*ctx*/) override { }
  virtual void exitInitializerList(CppParser::InitializerListContext * /*ctx*/) override { }

  virtual void enterBracedInitializerList(CppParser::BracedInitializerListContext * /*ctx*/) override { }
  virtual void exitBracedInitializerList(CppParser::BracedInitializerListContext * /*ctx*/) override { }

  virtual void enterExpressionOrBracedInitializerList(CppParser::ExpressionOrBracedInitializerListContext * /*ctx*/) override { }
  virtual void exitExpressionOrBracedInitializerList(CppParser::ExpressionOrBracedInitializerListContext * /*ctx*/) override { }

  virtual void enterClassSpecifier(CppParser::ClassSpecifierContext * /*ctx*/) override { }
  virtual void exitClassSpecifier(CppParser::ClassSpecifierContext * /*ctx*/) override { }

  virtual void enterClassHead(CppParser::ClassHeadContext * /*ctx*/) override { }
  virtual void exitClassHead(CppParser::ClassHeadContext * /*ctx*/) override { }

  virtual void enterClassHeadName(CppParser::ClassHeadNameContext * /*ctx*/) override { }
  virtual void exitClassHeadName(CppParser::ClassHeadNameContext * /*ctx*/) override { }

  virtual void enterClassVirtualSpecifier(CppParser::ClassVirtualSpecifierContext * /*ctx*/) override { }
  virtual void exitClassVirtualSpecifier(CppParser::ClassVirtualSpecifierContext * /*ctx*/) override { }

  virtual void enterClassKey(CppParser::ClassKeyContext * /*ctx*/) override { }
  virtual void exitClassKey(CppParser::ClassKeyContext * /*ctx*/) override { }

  virtual void enterMemberSpecification(CppParser::MemberSpecificationContext * /*ctx*/) override { }
  virtual void exitMemberSpecification(CppParser::MemberSpecificationContext * /*ctx*/) override { }

  virtual void enterMemberDeclaration(CppParser::MemberDeclarationContext * /*ctx*/) override { }
  virtual void exitMemberDeclaration(CppParser::MemberDeclarationContext * /*ctx*/) override { }

  virtual void enterMemberDeclaratorList(CppParser::MemberDeclaratorListContext * /*ctx*/) override { }
  virtual void exitMemberDeclaratorList(CppParser::MemberDeclaratorListContext * /*ctx*/) override { }

  virtual void enterMemberDeclarator(CppParser::MemberDeclaratorContext * /*ctx*/) override { }
  virtual void exitMemberDeclarator(CppParser::MemberDeclaratorContext * /*ctx*/) override { }

  virtual void enterVirtualSpecifierSequence(CppParser::VirtualSpecifierSequenceContext * /*ctx*/) override { }
  virtual void exitVirtualSpecifierSequence(CppParser::VirtualSpecifierSequenceContext * /*ctx*/) override { }

  virtual void enterVirtualSpecifier(CppParser::VirtualSpecifierContext * /*ctx*/) override { }
  virtual void exitVirtualSpecifier(CppParser::VirtualSpecifierContext * /*ctx*/) override { }

  virtual void enterPureSpecifier(CppParser::PureSpecifierContext * /*ctx*/) override { }
  virtual void exitPureSpecifier(CppParser::PureSpecifierContext * /*ctx*/) override { }

  virtual void enterBaseClause(CppParser::BaseClauseContext * /*ctx*/) override { }
  virtual void exitBaseClause(CppParser::BaseClauseContext * /*ctx*/) override { }

  virtual void enterBaseSpecifierList(CppParser::BaseSpecifierListContext * /*ctx*/) override { }
  virtual void exitBaseSpecifierList(CppParser::BaseSpecifierListContext * /*ctx*/) override { }

  virtual void enterBaseSpecifier(CppParser::BaseSpecifierContext * /*ctx*/) override { }
  virtual void exitBaseSpecifier(CppParser::BaseSpecifierContext * /*ctx*/) override { }

  virtual void enterClassOrDecltype(CppParser::ClassOrDecltypeContext * /*ctx*/) override { }
  virtual void exitClassOrDecltype(CppParser::ClassOrDecltypeContext * /*ctx*/) override { }

  virtual void enterAccessSpecifier(CppParser::AccessSpecifierContext * /*ctx*/) override { }
  virtual void exitAccessSpecifier(CppParser::AccessSpecifierContext * /*ctx*/) override { }

  virtual void enterConversionFunctionIdentifier(CppParser::ConversionFunctionIdentifierContext * /*ctx*/) override { }
  virtual void exitConversionFunctionIdentifier(CppParser::ConversionFunctionIdentifierContext * /*ctx*/) override { }

  virtual void enterConversionTypeIdentifier(CppParser::ConversionTypeIdentifierContext * /*ctx*/) override { }
  virtual void exitConversionTypeIdentifier(CppParser::ConversionTypeIdentifierContext * /*ctx*/) override { }

  virtual void enterConversionDeclarator(CppParser::ConversionDeclaratorContext * /*ctx*/) override { }
  virtual void exitConversionDeclarator(CppParser::ConversionDeclaratorContext * /*ctx*/) override { }

  virtual void enterConstructorInitializer(CppParser::ConstructorInitializerContext * /*ctx*/) override { }
  virtual void exitConstructorInitializer(CppParser::ConstructorInitializerContext * /*ctx*/) override { }

  virtual void enterMemberInitializerList(CppParser::MemberInitializerListContext * /*ctx*/) override { }
  virtual void exitMemberInitializerList(CppParser::MemberInitializerListContext * /*ctx*/) override { }

  virtual void enterMemberInitializer(CppParser::MemberInitializerContext * /*ctx*/) override { }
  virtual void exitMemberInitializer(CppParser::MemberInitializerContext * /*ctx*/) override { }

  virtual void enterMemberInitializerIdentifier(CppParser::MemberInitializerIdentifierContext * /*ctx*/) override { }
  virtual void exitMemberInitializerIdentifier(CppParser::MemberInitializerIdentifierContext * /*ctx*/) override { }

  virtual void enterOperatorFunctionIdentifier(CppParser::OperatorFunctionIdentifierContext * /*ctx*/) override { }
  virtual void exitOperatorFunctionIdentifier(CppParser::OperatorFunctionIdentifierContext * /*ctx*/) override { }

  virtual void enterAnyOperator(CppParser::AnyOperatorContext * /*ctx*/) override { }
  virtual void exitAnyOperator(CppParser::AnyOperatorContext * /*ctx*/) override { }

  virtual void enterLiteralOperatorIdentifier(CppParser::LiteralOperatorIdentifierContext * /*ctx*/) override { }
  virtual void exitLiteralOperatorIdentifier(CppParser::LiteralOperatorIdentifierContext * /*ctx*/) override { }

  virtual void enterTemplateDeclaration(CppParser::TemplateDeclarationContext * /*ctx*/) override { }
  virtual void exitTemplateDeclaration(CppParser::TemplateDeclarationContext * /*ctx*/) override { }

  virtual void enterTemplateParameterList(CppParser::TemplateParameterListContext * /*ctx*/) override { }
  virtual void exitTemplateParameterList(CppParser::TemplateParameterListContext * /*ctx*/) override { }

  virtual void enterTemplateParameter(CppParser::TemplateParameterContext * /*ctx*/) override { }
  virtual void exitTemplateParameter(CppParser::TemplateParameterContext * /*ctx*/) override { }

  virtual void enterTypeParameter(CppParser::TypeParameterContext * /*ctx*/) override { }
  virtual void exitTypeParameter(CppParser::TypeParameterContext * /*ctx*/) override { }

  virtual void enterTypeParameterKey(CppParser::TypeParameterKeyContext * /*ctx*/) override { }
  virtual void exitTypeParameterKey(CppParser::TypeParameterKeyContext * /*ctx*/) override { }

  virtual void enterSimpleTemplateIdentifier(CppParser::SimpleTemplateIdentifierContext * /*ctx*/) override { }
  virtual void exitSimpleTemplateIdentifier(CppParser::SimpleTemplateIdentifierContext * /*ctx*/) override { }

  virtual void enterTemplateIdentifier(CppParser::TemplateIdentifierContext * /*ctx*/) override { }
  virtual void exitTemplateIdentifier(CppParser::TemplateIdentifierContext * /*ctx*/) override { }

  virtual void enterTemplateArgumentList(CppParser::TemplateArgumentListContext * /*ctx*/) override { }
  virtual void exitTemplateArgumentList(CppParser::TemplateArgumentListContext * /*ctx*/) override { }

  virtual void enterTemplateArgument(CppParser::TemplateArgumentContext * /*ctx*/) override { }
  virtual void exitTemplateArgument(CppParser::TemplateArgumentContext * /*ctx*/) override { }

  virtual void enterTypenameSpecifier(CppParser::TypenameSpecifierContext * /*ctx*/) override { }
  virtual void exitTypenameSpecifier(CppParser::TypenameSpecifierContext * /*ctx*/) override { }

  virtual void enterExplicitInstantiation(CppParser::ExplicitInstantiationContext * /*ctx*/) override { }
  virtual void exitExplicitInstantiation(CppParser::ExplicitInstantiationContext * /*ctx*/) override { }

  virtual void enterExplicitSpecialization(CppParser::ExplicitSpecializationContext * /*ctx*/) override { }
  virtual void exitExplicitSpecialization(CppParser::ExplicitSpecializationContext * /*ctx*/) override { }

  virtual void enterDeductionGuide(CppParser::DeductionGuideContext * /*ctx*/) override { }
  virtual void exitDeductionGuide(CppParser::DeductionGuideContext * /*ctx*/) override { }

  virtual void enterTryBlock(CppParser::TryBlockContext * /*ctx*/) override { }
  virtual void exitTryBlock(CppParser::TryBlockContext * /*ctx*/) override { }

  virtual void enterFunctionTryBlock(CppParser::FunctionTryBlockContext * /*ctx*/) override { }
  virtual void exitFunctionTryBlock(CppParser::FunctionTryBlockContext * /*ctx*/) override { }

  virtual void enterHandlerSequence(CppParser::HandlerSequenceContext * /*ctx*/) override { }
  virtual void exitHandlerSequence(CppParser::HandlerSequenceContext * /*ctx*/) override { }

  virtual void enterHandler(CppParser::HandlerContext * /*ctx*/) override { }
  virtual void exitHandler(CppParser::HandlerContext * /*ctx*/) override { }

  virtual void enterExceptionDeclaration(CppParser::ExceptionDeclarationContext * /*ctx*/) override { }
  virtual void exitExceptionDeclaration(CppParser::ExceptionDeclarationContext * /*ctx*/) override { }

  virtual void enterNoExceptionSpecifier(CppParser::NoExceptionSpecifierContext * /*ctx*/) override { }
  virtual void exitNoExceptionSpecifier(CppParser::NoExceptionSpecifierContext * /*ctx*/) override { }

  virtual void enterIdentifierList(CppParser::IdentifierListContext * /*ctx*/) override { }
  virtual void exitIdentifierList(CppParser::IdentifierListContext * /*ctx*/) override { }

  virtual void enterLiteral(CppParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(CppParser::LiteralContext * /*ctx*/) override { }

  virtual void enterIntegerLiteral(CppParser::IntegerLiteralContext * /*ctx*/) override { }
  virtual void exitIntegerLiteral(CppParser::IntegerLiteralContext * /*ctx*/) override { }

  virtual void enterBooleanLiteral(CppParser::BooleanLiteralContext * /*ctx*/) override { }
  virtual void exitBooleanLiteral(CppParser::BooleanLiteralContext * /*ctx*/) override { }

  virtual void enterPointerLiteral(CppParser::PointerLiteralContext * /*ctx*/) override { }
  virtual void exitPointerLiteral(CppParser::PointerLiteralContext * /*ctx*/) override { }

  virtual void enterUserDefinedLiteral(CppParser::UserDefinedLiteralContext * /*ctx*/) override { }
  virtual void exitUserDefinedLiteral(CppParser::UserDefinedLiteralContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

